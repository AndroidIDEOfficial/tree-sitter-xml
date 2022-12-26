module.exports = grammar({
    name: 'xml',

    rules: {
        xml_file: $ => seq(
            optional($.xml_decl),
            $.element,
            repeat($._misc)
        ),

        pi: $ => seq(
            '<?',
            $.name,
            optional(
                seq(
                    $._ws,
                    repeat($._char)
                )
            ),
            '?>'
        ),

        element: $ => choice(
            $.empty_element,
            seq(
                $.tag_start,
                optional($.char_data),
                optional($._content),
                $.tag_end
            )
        ),

        empty_element: $ => seq(
            '<',
            $.name,
            repeat(seq($._ws, $.attribute)),
            optional($._ws),
            '/>'
        ),

        tag_start: $ => seq(
            '<',
            $.name,
            repeat(
                seq(
                    $._ws,
                    $.attribute
                )
            ),
            optional($._ws),
            '>'
        ),

        tag_end: $ => seq(
            '</',
            $.name,
            optional($._ws),
            '>'
        ),

        _content: $ => repeat1(
            seq(
                choice(
                    $.element,
                    $._ref,
                    $._cdata_sect,
                    $.pi,
                    $.comment
                ),
                optional($.char_data)
            )
        ),


        attribute: $ => choice(
            $.ns_decl,
            $.xml_attr
        ),

        ns_decl: $ => seq(
            'xmlns',
            ':',
            field("prefix", $.name),
            $._eq,
            $.attr_value,
        ),

        xml_attr: $ => seq(
            optional(seq(field("ns_prefix", $.name), ':')),
            field("attr_name", $.name),
            $._eq,
            $.attr_value,
        ),

        attr_value: $ => seq(
            $._quote,
            repeat(
                choice(
                    /[^<&]/,
                    $._ref
                )
            ),
            $._quote
        ),

        xml_decl: $ => seq(
            '<?xml',
            $.xml_version,
            optional($.xml_encoding),
            optional($._ws),
            '?>'
        ),

        xml_version: $ => seq(
            $._ws,
            'version',
            $._eq,
            $._quote,
            $._dec_num,
            $._quote
        ),

        xml_encoding: $ => seq(
            $._ws,
            'encoding',
            $._eq,
            $._quote,
            $._encoding,
            $._quote
        ),

        name: $ => token(/[A-Za-z_]([A-Za-z_\-.])*/),

        comment: $ => seq('<!--', repeat($._char), '-->'),

        char_data: $ => /[^<&]*/,
        char_ref: $ => token(/(&#[0-9]+;)|(&#x[0-9a-fA-F]+;)/),

        _cdata_sect: $ => seq(
            $.cdata_start,
            optional($.cdata),
            $.cdata_end
        ),

        cdata_start: $ => '<![CDATA',

        cdata: $ => repeat1($._char),

        cdata_end: $ => ']]>',

        _ref: $ => choice(
            $.entity_ref,
            $.char_ref
        ),

        entity_ref: $ => seq(
            '&',
            $.name
        ),

        _misc: $ => choice($.pi, $.comment, $._char),
        _char: $ => /./,
        _ws: $ => /\s/,
        _eq: $ => '=',
        _quote: $ => choice('"', '\''),
        _dec_num: $ => /[0-9]+\.[0-9]+/,
        _encoding: $ => token(/[A-Za-z]([A-Za-z0-9._\-])*/)
    }
});
