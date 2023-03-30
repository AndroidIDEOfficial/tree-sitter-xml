(empty_element
    "<" @tag.open
    tag_name: (_) @element.name
    "/" @tag.slash
    ">" @tag.close) @element.empty

(end_tag_element
    (tag_start
        "<" @tag.start.open
        tag_name: (_) @tag.start.name
        ">" @tag.start.close)
    (tag_end
        "<" @tag.end.open
        "/" @tag.end.slash
        tag_name: (_) @tag.end.name
        ">" @tag.end.close)
) @element.with_end