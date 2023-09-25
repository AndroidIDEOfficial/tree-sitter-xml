#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 144
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 9

enum {
  anon_sym_LT_QMARK = 1,
  anon_sym_QMARK_GT = 2,
  anon_sym_LT = 3,
  anon_sym_SLASH = 4,
  anon_sym_GT = 5,
  anon_sym_xmlns = 6,
  anon_sym_COLON = 7,
  aux_sym_attr_value_token1 = 8,
  anon_sym_xml = 9,
  anon_sym_version = 10,
  anon_sym_encoding = 11,
  sym_name = 12,
  anon_sym_LT_BANG_DASH_DASH = 13,
  anon_sym_DASH_DASH_GT = 14,
  sym_char_data = 15,
  sym_char_ref = 16,
  sym_cdata_start = 17,
  sym_cdata_end = 18,
  anon_sym_AMP = 19,
  anon_sym_SEMI = 20,
  sym_eq = 21,
  sym__char = 22,
  sym__ws = 23,
  anon_sym_DQUOTE = 24,
  anon_sym_SQUOTE = 25,
  sym__dec_num = 26,
  sym__encoding = 27,
  sym_xml_file = 28,
  sym_pi = 29,
  sym_element = 30,
  sym_end_tag_element = 31,
  sym_empty_element = 32,
  sym_tag_start = 33,
  sym_tag_end = 34,
  aux_sym__content = 35,
  sym_attribute = 36,
  sym_ns_decl = 37,
  sym_xml_attr = 38,
  sym_attr_value = 39,
  sym_xml_decl = 40,
  sym_xml_version = 41,
  sym_xml_version_value = 42,
  sym_xml_encoding = 43,
  sym_xml_encoding_value = 44,
  sym_comment = 45,
  sym_cdata_sect = 46,
  sym_cdata = 47,
  sym__ref = 48,
  sym_entity_ref = 49,
  sym__misc = 50,
  sym__quote = 51,
  aux_sym_xml_file_repeat1 = 52,
  aux_sym_pi_repeat1 = 53,
  aux_sym_empty_element_repeat1 = 54,
  aux_sym_attr_value_repeat1 = 55,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_QMARK] = "<\?",
  [anon_sym_QMARK_GT] = "\?>",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH] = "/",
  [anon_sym_GT] = ">",
  [anon_sym_xmlns] = "xmlns",
  [anon_sym_COLON] = ":",
  [aux_sym_attr_value_token1] = "attr_value_token1",
  [anon_sym_xml] = "xml",
  [anon_sym_version] = "version",
  [anon_sym_encoding] = "encoding",
  [sym_name] = "name",
  [anon_sym_LT_BANG_DASH_DASH] = "<!--",
  [anon_sym_DASH_DASH_GT] = "-->",
  [sym_char_data] = "char_data",
  [sym_char_ref] = "char_ref",
  [sym_cdata_start] = "cdata_start",
  [sym_cdata_end] = "cdata_end",
  [anon_sym_AMP] = "&",
  [anon_sym_SEMI] = ";",
  [sym_eq] = "eq",
  [sym__char] = "_char",
  [sym__ws] = "_ws",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [sym__dec_num] = "_dec_num",
  [sym__encoding] = "_encoding",
  [sym_xml_file] = "xml_file",
  [sym_pi] = "pi",
  [sym_element] = "element",
  [sym_end_tag_element] = "end_tag_element",
  [sym_empty_element] = "empty_element",
  [sym_tag_start] = "tag_start",
  [sym_tag_end] = "tag_end",
  [aux_sym__content] = "_content",
  [sym_attribute] = "attribute",
  [sym_ns_decl] = "ns_decl",
  [sym_xml_attr] = "xml_attr",
  [sym_attr_value] = "attr_value",
  [sym_xml_decl] = "xml_decl",
  [sym_xml_version] = "xml_version",
  [sym_xml_version_value] = "xml_version_value",
  [sym_xml_encoding] = "xml_encoding",
  [sym_xml_encoding_value] = "xml_encoding_value",
  [sym_comment] = "comment",
  [sym_cdata_sect] = "cdata_sect",
  [sym_cdata] = "cdata",
  [sym__ref] = "_ref",
  [sym_entity_ref] = "entity_ref",
  [sym__misc] = "_misc",
  [sym__quote] = "_quote",
  [aux_sym_xml_file_repeat1] = "xml_file_repeat1",
  [aux_sym_pi_repeat1] = "pi_repeat1",
  [aux_sym_empty_element_repeat1] = "empty_element_repeat1",
  [aux_sym_attr_value_repeat1] = "attr_value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_QMARK] = anon_sym_LT_QMARK,
  [anon_sym_QMARK_GT] = anon_sym_QMARK_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_xmlns] = anon_sym_xmlns,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_attr_value_token1] = aux_sym_attr_value_token1,
  [anon_sym_xml] = anon_sym_xml,
  [anon_sym_version] = anon_sym_version,
  [anon_sym_encoding] = anon_sym_encoding,
  [sym_name] = sym_name,
  [anon_sym_LT_BANG_DASH_DASH] = anon_sym_LT_BANG_DASH_DASH,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [sym_char_data] = sym_char_data,
  [sym_char_ref] = sym_char_ref,
  [sym_cdata_start] = sym_cdata_start,
  [sym_cdata_end] = sym_cdata_end,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_eq] = sym_eq,
  [sym__char] = sym__char,
  [sym__ws] = sym__ws,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym__dec_num] = sym__dec_num,
  [sym__encoding] = sym__encoding,
  [sym_xml_file] = sym_xml_file,
  [sym_pi] = sym_pi,
  [sym_element] = sym_element,
  [sym_end_tag_element] = sym_end_tag_element,
  [sym_empty_element] = sym_empty_element,
  [sym_tag_start] = sym_tag_start,
  [sym_tag_end] = sym_tag_end,
  [aux_sym__content] = aux_sym__content,
  [sym_attribute] = sym_attribute,
  [sym_ns_decl] = sym_ns_decl,
  [sym_xml_attr] = sym_xml_attr,
  [sym_attr_value] = sym_attr_value,
  [sym_xml_decl] = sym_xml_decl,
  [sym_xml_version] = sym_xml_version,
  [sym_xml_version_value] = sym_xml_version_value,
  [sym_xml_encoding] = sym_xml_encoding,
  [sym_xml_encoding_value] = sym_xml_encoding_value,
  [sym_comment] = sym_comment,
  [sym_cdata_sect] = sym_cdata_sect,
  [sym_cdata] = sym_cdata,
  [sym__ref] = sym__ref,
  [sym_entity_ref] = sym_entity_ref,
  [sym__misc] = sym__misc,
  [sym__quote] = sym__quote,
  [aux_sym_xml_file_repeat1] = aux_sym_xml_file_repeat1,
  [aux_sym_pi_repeat1] = aux_sym_pi_repeat1,
  [aux_sym_empty_element_repeat1] = aux_sym_empty_element_repeat1,
  [aux_sym_attr_value_repeat1] = aux_sym_attr_value_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xmlns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_attr_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_xml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_encoding] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_BANG_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_char_data] = {
    .visible = true,
    .named = true,
  },
  [sym_char_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_cdata_start] = {
    .visible = true,
    .named = true,
  },
  [sym_cdata_end] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_eq] = {
    .visible = true,
    .named = true,
  },
  [sym__char] = {
    .visible = false,
    .named = true,
  },
  [sym__ws] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__dec_num] = {
    .visible = false,
    .named = true,
  },
  [sym__encoding] = {
    .visible = false,
    .named = true,
  },
  [sym_xml_file] = {
    .visible = true,
    .named = true,
  },
  [sym_pi] = {
    .visible = true,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag_element] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_element] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_start] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_end] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__content] = {
    .visible = false,
    .named = false,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_ns_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_value] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_version] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_version_value] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_encoding] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_encoding_value] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_cdata_sect] = {
    .visible = true,
    .named = true,
  },
  [sym_cdata] = {
    .visible = true,
    .named = true,
  },
  [sym__ref] = {
    .visible = false,
    .named = true,
  },
  [sym_entity_ref] = {
    .visible = true,
    .named = true,
  },
  [sym__misc] = {
    .visible = false,
    .named = true,
  },
  [sym__quote] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_xml_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pi_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_empty_element_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attr_value_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_attr_name = 1,
  field_decl = 2,
  field_encoding_attr = 3,
  field_ns_prefix = 4,
  field_tag_name = 5,
  field_version_attr = 6,
  field_xmlns_prefix = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_attr_name] = "attr_name",
  [field_decl] = "decl",
  [field_encoding_attr] = "encoding_attr",
  [field_ns_prefix] = "ns_prefix",
  [field_tag_name] = "tag_name",
  [field_version_attr] = "version_attr",
  [field_xmlns_prefix] = "xmlns_prefix",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_tag_name, 1},
  [1] =
    {field_decl, 1},
  [2] =
    {field_tag_name, 2},
  [3] =
    {field_version_attr, 1},
  [4] =
    {field_attr_name, 0},
  [5] =
    {field_encoding_attr, 1},
  [6] =
    {field_xmlns_prefix, 2},
  [7] =
    {field_attr_name, 2},
    {field_ns_prefix, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 4,
  [8] = 6,
  [9] = 5,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 26,
  [42] = 31,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 43,
  [48] = 34,
  [49] = 27,
  [50] = 36,
  [51] = 24,
  [52] = 52,
  [53] = 30,
  [54] = 40,
  [55] = 55,
  [56] = 56,
  [57] = 23,
  [58] = 29,
  [59] = 22,
  [60] = 19,
  [61] = 33,
  [62] = 21,
  [63] = 63,
  [64] = 28,
  [65] = 20,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 69,
  [73] = 73,
  [74] = 71,
  [75] = 70,
  [76] = 76,
  [77] = 77,
  [78] = 71,
  [79] = 79,
  [80] = 76,
  [81] = 81,
  [82] = 73,
  [83] = 83,
  [84] = 77,
  [85] = 85,
  [86] = 68,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 89,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 109,
  [125] = 107,
  [126] = 126,
  [127] = 127,
  [128] = 108,
  [129] = 129,
  [130] = 130,
  [131] = 121,
  [132] = 112,
  [133] = 129,
  [134] = 106,
  [135] = 135,
  [136] = 118,
  [137] = 114,
  [138] = 138,
  [139] = 139,
  [140] = 104,
  [141] = 141,
  [142] = 141,
  [143] = 143,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '&') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == ']') ADVANCE(56);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'v') ADVANCE(57);
      if (lookahead == 'x') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '?') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == ']') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '&') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(52);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '?') ADVANCE(13);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == 'x') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '[') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(84);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 11:
      if (lookahead == ';') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ';') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(85);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(90);
      END_STATE();
    case 16:
      if (lookahead == '?') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'v') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 'C') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'D') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'T') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == '[') ADVANCE(89);
      END_STATE();
    case 23:
      if (lookahead == ']') ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 39:
      if (lookahead == 'x') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 43:
      if (eof) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '<') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '?') ADVANCE(45);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_xmlns);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_attr_value_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_attr_value_token1);
      if (lookahead == '-') ADVANCE(14);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_attr_value_token1);
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_attr_value_token1);
      if (lookahead == '>') ADVANCE(46);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_attr_value_token1);
      if (lookahead == ']') ADVANCE(15);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_attr_value_token1);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_attr_value_token1);
      if (lookahead == 'm') ADVANCE(72);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_attr_value_token1);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_attr_value_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_xml);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_version);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_encoding);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_encoding);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(70);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(50);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_char_data);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_char_data);
      if (eof) ADVANCE(44);
      if (lookahead == '&') ADVANCE(91);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_char_ref);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_cdata_start);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_cdata_end);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '#') ADVANCE(39);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__char);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '?') ADVANCE(45);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == '-') ADVANCE(14);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == '>') ADVANCE(46);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == ']') ADVANCE(15);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__ws);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__dec_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__encoding);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 87},
  [2] = {.lex_state = 87},
  [3] = {.lex_state = 87},
  [4] = {.lex_state = 87},
  [5] = {.lex_state = 87},
  [6] = {.lex_state = 87},
  [7] = {.lex_state = 87},
  [8] = {.lex_state = 87},
  [9] = {.lex_state = 87},
  [10] = {.lex_state = 87},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 43},
  [14] = {.lex_state = 43},
  [15] = {.lex_state = 43},
  [16] = {.lex_state = 43},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 43},
  [19] = {.lex_state = 87},
  [20] = {.lex_state = 87},
  [21] = {.lex_state = 87},
  [22] = {.lex_state = 87},
  [23] = {.lex_state = 87},
  [24] = {.lex_state = 87},
  [25] = {.lex_state = 87},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 87},
  [28] = {.lex_state = 87},
  [29] = {.lex_state = 87},
  [30] = {.lex_state = 87},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 87},
  [33] = {.lex_state = 87},
  [34] = {.lex_state = 87},
  [35] = {.lex_state = 87},
  [36] = {.lex_state = 87},
  [37] = {.lex_state = 87},
  [38] = {.lex_state = 87},
  [39] = {.lex_state = 87},
  [40] = {.lex_state = 87},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 87},
  [44] = {.lex_state = 87},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 87},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 43},
  [49] = {.lex_state = 43},
  [50] = {.lex_state = 43},
  [51] = {.lex_state = 43},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 43},
  [54] = {.lex_state = 43},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 43},
  [58] = {.lex_state = 43},
  [59] = {.lex_state = 43},
  [60] = {.lex_state = 43},
  [61] = {.lex_state = 43},
  [62] = {.lex_state = 43},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 43},
  [65] = {.lex_state = 43},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 16},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 87},
  [101] = {.lex_state = 87},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 16},
  [111] = {.lex_state = 16},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 87},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 87},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 87},
  [139] = {.lex_state = 40},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 10},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_QMARK] = ACTIONS(1),
    [anon_sym_QMARK_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_xmlns] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_attr_value_token1] = ACTIONS(1),
    [anon_sym_xml] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_encoding] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [sym_char_ref] = ACTIONS(1),
    [sym_cdata_start] = ACTIONS(1),
    [sym_cdata_end] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_eq] = ACTIONS(1),
    [sym__char] = ACTIONS(1),
    [sym__ws] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym__dec_num] = ACTIONS(1),
    [sym__encoding] = ACTIONS(1),
  },
  [1] = {
    [sym_xml_file] = STATE(138),
    [sym_element] = STATE(15),
    [sym_end_tag_element] = STATE(53),
    [sym_empty_element] = STATE(53),
    [sym_tag_start] = STATE(2),
    [sym_xml_decl] = STATE(46),
    [anon_sym_LT_QMARK] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [sym__ws] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(11), 1,
      anon_sym_LT_QMARK,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(17), 1,
      sym_char_data,
    ACTIONS(19), 1,
      sym_char_ref,
    ACTIONS(21), 1,
      sym_cdata_start,
    ACTIONS(23), 1,
      anon_sym_AMP,
    STATE(3), 1,
      sym_tag_start,
    STATE(9), 1,
      aux_sym__content,
    STATE(58), 1,
      sym_tag_end,
    STATE(30), 2,
      sym_end_tag_element,
      sym_empty_element,
    STATE(32), 6,
      sym_pi,
      sym_element,
      sym_comment,
      sym_cdata_sect,
      sym__ref,
      sym_entity_ref,
  [46] = 13,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(11), 1,
      anon_sym_LT_QMARK,
    ACTIONS(15), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(19), 1,
      sym_char_ref,
    ACTIONS(21), 1,
      sym_cdata_start,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_char_data,
    STATE(3), 1,
      sym_tag_start,
    STATE(5), 1,
      aux_sym__content,
    STATE(29), 1,
      sym_tag_end,
    STATE(30), 2,
      sym_end_tag_element,
      sym_empty_element,
    STATE(32), 6,
      sym_pi,
      sym_element,
      sym_comment,
      sym_cdata_sect,
      sym__ref,
      sym_entity_ref,
  [92] = 12,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(11), 1,
      anon_sym_LT_QMARK,
    ACTIONS(15), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(19), 1,
      sym_char_ref,
    ACTIONS(21), 1,
      sym_cdata_start,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_LT,
    STATE(3), 1,
      sym_tag_start,
    STATE(10), 1,
      aux_sym__content,
    STATE(21), 1,
      sym_tag_end,
    STATE(30), 2,
      sym_end_tag_element,
      sym_empty_element,
    STATE(32), 6,
      sym_pi,
      sym_element,
      sym_comment,
      sym_cdata_sect,
      sym__ref,
      sym_entity_ref,
  [135] = 12,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(11), 1,
      anon_sym_LT_QMARK,
    ACTIONS(15), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(19), 1,
      sym_char_ref,
    ACTIONS(21), 1,
      sym_cdata_start,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_LT,
    STATE(3), 1,
      sym_tag_start,
    STATE(10), 1,
      aux_sym__content,
    STATE(27), 1,
      sym_tag_end,
    STATE(30), 2,
      sym_end_tag_element,
      sym_empty_element,
    STATE(32), 6,
      sym_pi,
      sym_element,
      sym_comment,
      sym_cdata_sect,
      sym__ref,
      sym_entity_ref,
  [178] = 12,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(11), 1,
      anon_sym_LT_QMARK,
    ACTIONS(15), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(19), 1,
      sym_char_ref,
    ACTIONS(21), 1,
      sym_cdata_start,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_LT,
    STATE(3), 1,
      sym_tag_start,
    STATE(4), 1,
      aux_sym__content,
    STATE(27), 1,
      sym_tag_end,
    STATE(30), 2,
      sym_end_tag_element,
      sym_empty_element,
    STATE(32), 6,
      sym_pi,
      sym_element,
      sym_comment,
      sym_cdata_sect,
      sym__ref,
      sym_entity_ref,
  [221] = 12,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(11), 1,
      anon_sym_LT_QMARK,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(19), 1,
      sym_char_ref,
    ACTIONS(21), 1,
      sym_cdata_start,
    ACTIONS(23), 1,
      anon_sym_AMP,
    STATE(3), 1,
      sym_tag_start,
    STATE(10), 1,
      aux_sym__content,
    STATE(62), 1,
      sym_tag_end,
    STATE(30), 2,
      sym_end_tag_element,
      sym_empty_element,
    STATE(32), 6,
      sym_pi,
      sym_element,
      sym_comment,
      sym_cdata_sect,
      sym__ref,
      sym_entity_ref,
  [264] = 12,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(11), 1,
      anon_sym_LT_QMARK,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(19), 1,
      sym_char_ref,
    ACTIONS(21), 1,
      sym_cdata_start,
    ACTIONS(23), 1,
      anon_sym_AMP,
    STATE(3), 1,
      sym_tag_start,
    STATE(7), 1,
      aux_sym__content,
    STATE(49), 1,
      sym_tag_end,
    STATE(30), 2,
      sym_end_tag_element,
      sym_empty_element,
    STATE(32), 6,
      sym_pi,
      sym_element,
      sym_comment,
      sym_cdata_sect,
      sym__ref,
      sym_entity_ref,
  [307] = 12,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(11), 1,
      anon_sym_LT_QMARK,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(19), 1,
      sym_char_ref,
    ACTIONS(21), 1,
      sym_cdata_start,
    ACTIONS(23), 1,
      anon_sym_AMP,
    STATE(3), 1,
      sym_tag_start,
    STATE(10), 1,
      aux_sym__content,
    STATE(49), 1,
      sym_tag_end,
    STATE(30), 2,
      sym_end_tag_element,
      sym_empty_element,
    STATE(32), 6,
      sym_pi,
      sym_element,
      sym_comment,
      sym_cdata_sect,
      sym__ref,
      sym_entity_ref,
  [350] = 11,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(29), 1,
      anon_sym_LT_QMARK,
    ACTIONS(32), 1,
      anon_sym_LT,
    ACTIONS(35), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(38), 1,
      sym_char_ref,
    ACTIONS(41), 1,
      sym_cdata_start,
    ACTIONS(44), 1,
      anon_sym_AMP,
    STATE(3), 1,
      sym_tag_start,
    STATE(10), 1,
      aux_sym__content,
    STATE(30), 2,
      sym_end_tag_element,
      sym_empty_element,
    STATE(32), 6,
      sym_pi,
      sym_element,
      sym_comment,
      sym_cdata_sect,
      sym__ref,
      sym_entity_ref,
  [390] = 7,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(47), 1,
      aux_sym_attr_value_token1,
    ACTIONS(49), 1,
      sym_char_ref,
    ACTIONS(51), 1,
      anon_sym_AMP,
    STATE(87), 1,
      sym__quote,
    ACTIONS(53), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(12), 3,
      sym__ref,
      sym_entity_ref,
      aux_sym_attr_value_repeat1,
  [415] = 7,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(51), 1,
      anon_sym_AMP,
    ACTIONS(55), 1,
      aux_sym_attr_value_token1,
    ACTIONS(57), 1,
      sym_char_ref,
    STATE(96), 1,
      sym__quote,
    ACTIONS(59), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(17), 3,
      sym__ref,
      sym_entity_ref,
      aux_sym_attr_value_repeat1,
  [440] = 6,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_LT_QMARK,
    ACTIONS(65), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(67), 1,
      sym__char,
    STATE(14), 4,
      sym_pi,
      sym_comment,
      sym__misc,
      aux_sym_xml_file_repeat1,
  [462] = 6,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(63), 1,
      anon_sym_LT_QMARK,
    ACTIONS(65), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      sym__char,
    STATE(18), 4,
      sym_pi,
      sym_comment,
      sym__misc,
      aux_sym_xml_file_repeat1,
  [484] = 6,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(63), 1,
      anon_sym_LT_QMARK,
    ACTIONS(65), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      sym__char,
    STATE(16), 4,
      sym_pi,
      sym_comment,
      sym__misc,
      aux_sym_xml_file_repeat1,
  [506] = 6,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_LT_QMARK,
    ACTIONS(65), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(71), 1,
      sym__char,
    STATE(18), 4,
      sym_pi,
      sym_comment,
      sym__misc,
      aux_sym_xml_file_repeat1,
  [528] = 6,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(77), 1,
      aux_sym_attr_value_token1,
    ACTIONS(80), 1,
      sym_char_ref,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(86), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(17), 3,
      sym__ref,
      sym_entity_ref,
      aux_sym_attr_value_repeat1,
  [550] = 6,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      anon_sym_LT_QMARK,
    ACTIONS(93), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(96), 1,
      sym__char,
    STATE(18), 4,
      sym_pi,
      sym_comment,
      sym__misc,
      aux_sym_xml_file_repeat1,
  [572] = 3,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(101), 3,
      anon_sym_LT,
      sym_char_data,
      anon_sym_AMP,
    ACTIONS(99), 4,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
      sym_char_ref,
      sym_cdata_start,
  [587] = 3,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(105), 3,
      anon_sym_LT,
      sym_char_data,
      anon_sym_AMP,
    ACTIONS(103), 4,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
      sym_char_ref,
      sym_cdata_start,
  [602] = 3,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(109), 3,
      anon_sym_LT,
      sym_char_data,
      anon_sym_AMP,
    ACTIONS(107), 4,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
      sym_char_ref,
      sym_cdata_start,
  [617] = 3,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(113), 3,
      anon_sym_LT,
      sym_char_data,
      anon_sym_AMP,
    ACTIONS(111), 4,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
      sym_char_ref,
      sym_cdata_start,
  [632] = 3,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(117), 3,
      anon_sym_LT,
      sym_char_data,
      anon_sym_AMP,
    ACTIONS(115), 4,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
      sym_char_ref,
      sym_cdata_start,
  [647] = 3,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(121), 3,
      anon_sym_LT,
      sym_char_data,
      anon_sym_AMP,
    ACTIONS(119), 4,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
      sym_char_ref,
      sym_cdata_start,
  [662] = 3,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(125), 3,
      anon_sym_LT,
      sym_char_data,
      anon_sym_AMP,
    ACTIONS(123), 4,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
      sym_char_ref,
      sym_cdata_start,
  [677] = 7,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(127), 1,
      anon_sym_SLASH,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(131), 1,
      anon_sym_xmlns,
    ACTIONS(133), 1,
      sym_name,
    STATE(93), 1,
      sym_attribute,
    STATE(94), 2,
      sym_ns_decl,
      sym_xml_attr,
  [700] = 3,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(137), 3,
      anon_sym_LT,
      sym_char_data,
      anon_sym_AMP,
    ACTIONS(135), 4,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
      sym_char_ref,
      sym_cdata_start,
  [715] = 3,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(141), 3,
      anon_sym_LT,
      sym_char_data,
      anon_sym_AMP,
    ACTIONS(139), 4,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
      sym_char_ref,
      sym_cdata_start,
  [730] = 3,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(145), 3,
      anon_sym_LT,
      sym_char_data,
      anon_sym_AMP,
    ACTIONS(143), 4,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
      sym_char_ref,
      sym_cdata_start,
  [745] = 3,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(149), 3,
      anon_sym_LT,
      sym_char_data,
      anon_sym_AMP,
    ACTIONS(147), 4,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
      sym_char_ref,
      sym_cdata_start,
  [760] = 7,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(131), 1,
      anon_sym_xmlns,
    ACTIONS(133), 1,
      sym_name,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    ACTIONS(153), 1,
      anon_sym_GT,
    STATE(93), 1,
      sym_attribute,
    STATE(94), 2,
      sym_ns_decl,
      sym_xml_attr,
  [783] = 4,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(159), 1,
      sym_char_data,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_AMP,
    ACTIONS(155), 4,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
      sym_char_ref,
      sym_cdata_start,
  [800] = 3,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(163), 3,
      anon_sym_LT,
      sym_char_data,
      anon_sym_AMP,
    ACTIONS(161), 4,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
      sym_char_ref,
      sym_cdata_start,
  [815] = 3,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(167), 3,
      anon_sym_LT,
      sym_char_data,
      anon_sym_AMP,
    ACTIONS(165), 4,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
      sym_char_ref,
      sym_cdata_start,
  [830] = 3,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(171), 3,
      anon_sym_LT,
      sym_char_data,
      anon_sym_AMP,
    ACTIONS(169), 4,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
      sym_char_ref,
      sym_cdata_start,
  [845] = 3,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(175), 3,
      anon_sym_LT,
      sym_char_data,
      anon_sym_AMP,
    ACTIONS(173), 4,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
      sym_char_ref,
      sym_cdata_start,
  [860] = 3,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(179), 3,
      anon_sym_LT,
      sym_char_data,
      anon_sym_AMP,
    ACTIONS(177), 4,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
      sym_char_ref,
      sym_cdata_start,
  [875] = 3,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(183), 3,
      anon_sym_LT,
      sym_char_data,
      anon_sym_AMP,
    ACTIONS(181), 4,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
      sym_char_ref,
      sym_cdata_start,
  [890] = 3,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(187), 3,
      anon_sym_LT,
      sym_char_data,
      anon_sym_AMP,
    ACTIONS(185), 4,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
      sym_char_ref,
      sym_cdata_start,
  [905] = 3,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(191), 3,
      anon_sym_LT,
      sym_char_data,
      anon_sym_AMP,
    ACTIONS(189), 4,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
      sym_char_ref,
      sym_cdata_start,
  [920] = 7,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(131), 1,
      anon_sym_xmlns,
    ACTIONS(133), 1,
      sym_name,
    ACTIONS(193), 1,
      anon_sym_SLASH,
    STATE(93), 1,
      sym_attribute,
    STATE(94), 2,
      sym_ns_decl,
      sym_xml_attr,
  [943] = 7,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(131), 1,
      anon_sym_xmlns,
    ACTIONS(133), 1,
      sym_name,
    ACTIONS(153), 1,
      anon_sym_GT,
    ACTIONS(195), 1,
      anon_sym_SLASH,
    STATE(93), 1,
      sym_attribute,
    STATE(94), 2,
      sym_ns_decl,
      sym_xml_attr,
  [966] = 3,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(199), 3,
      anon_sym_LT,
      sym_char_data,
      anon_sym_AMP,
    ACTIONS(197), 4,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
      sym_char_ref,
      sym_cdata_start,
  [981] = 3,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(203), 2,
      anon_sym_LT,
      anon_sym_AMP,
    ACTIONS(201), 4,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
      sym_char_ref,
      sym_cdata_start,
  [995] = 5,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(131), 1,
      anon_sym_xmlns,
    ACTIONS(133), 1,
      sym_name,
    STATE(93), 1,
      sym_attribute,
    STATE(94), 2,
      sym_ns_decl,
      sym_xml_attr,
  [1012] = 5,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(205), 1,
      anon_sym_LT,
    STATE(2), 1,
      sym_tag_start,
    STATE(13), 1,
      sym_element,
    STATE(53), 2,
      sym_end_tag_element,
      sym_empty_element,
  [1029] = 3,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(199), 2,
      aux_sym_attr_value_token1,
      anon_sym_AMP,
    ACTIONS(197), 3,
      sym_char_ref,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1042] = 3,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(167), 1,
      sym__char,
    ACTIONS(165), 3,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
  [1054] = 3,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(137), 1,
      sym__char,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
  [1066] = 3,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(175), 1,
      sym__char,
    ACTIONS(173), 3,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
  [1078] = 3,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(121), 1,
      sym__char,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
  [1090] = 4,
    ACTIONS(9), 1,
      sym__ws,
    STATE(11), 1,
      sym__quote,
    STATE(98), 1,
      sym_attr_value,
    ACTIONS(207), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1104] = 3,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(149), 1,
      sym__char,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
  [1116] = 3,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(191), 1,
      sym__char,
    ACTIONS(189), 3,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
  [1128] = 5,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(209), 1,
      sym_cdata_end,
    ACTIONS(211), 1,
      sym__char,
    STATE(85), 1,
      aux_sym_pi_repeat1,
    STATE(123), 1,
      sym_cdata,
  [1144] = 4,
    ACTIONS(9), 1,
      sym__ws,
    STATE(139), 1,
      sym__quote,
    STATE(143), 1,
      sym_xml_encoding_value,
    ACTIONS(213), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1158] = 3,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(117), 1,
      sym__char,
    ACTIONS(115), 3,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
  [1170] = 3,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(145), 1,
      sym__char,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
  [1182] = 3,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(113), 1,
      sym__char,
    ACTIONS(111), 3,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
  [1194] = 3,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(101), 1,
      sym__char,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
  [1206] = 3,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(163), 1,
      sym__char,
    ACTIONS(161), 3,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
  [1218] = 3,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(109), 1,
      sym__char,
    ACTIONS(107), 3,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
  [1230] = 4,
    ACTIONS(9), 1,
      sym__ws,
    STATE(102), 1,
      sym__quote,
    STATE(105), 1,
      sym_xml_version_value,
    ACTIONS(215), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1244] = 3,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(141), 1,
      sym__char,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
  [1256] = 3,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(105), 1,
      sym__char,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_DASH_DASH,
  [1268] = 4,
    ACTIONS(9), 1,
      sym__ws,
    STATE(11), 1,
      sym__quote,
    STATE(88), 1,
      sym_attr_value,
    ACTIONS(207), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1282] = 4,
    ACTIONS(9), 1,
      sym__ws,
    STATE(11), 1,
      sym__quote,
    STATE(90), 1,
      sym_attr_value,
    ACTIONS(207), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1296] = 4,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(217), 1,
      anon_sym_QMARK_GT,
    ACTIONS(219), 1,
      sym__char,
    STATE(75), 1,
      aux_sym_pi_repeat1,
  [1309] = 4,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_SLASH,
    ACTIONS(221), 1,
      sym__ws,
    STATE(81), 1,
      aux_sym_empty_element_repeat1,
  [1322] = 4,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(223), 1,
      anon_sym_QMARK_GT,
    ACTIONS(225), 1,
      sym__char,
    STATE(74), 1,
      aux_sym_pi_repeat1,
  [1335] = 4,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(227), 1,
      sym_cdata_end,
    ACTIONS(229), 1,
      sym__char,
    STATE(71), 1,
      aux_sym_pi_repeat1,
  [1348] = 4,
    ACTIONS(127), 1,
      anon_sym_SLASH,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(232), 1,
      sym__ws,
    STATE(81), 1,
      aux_sym_empty_element_repeat1,
  [1361] = 4,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(234), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(236), 1,
      sym__char,
    STATE(77), 1,
      aux_sym_pi_repeat1,
  [1374] = 4,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(227), 1,
      anon_sym_QMARK_GT,
    ACTIONS(238), 1,
      sym__char,
    STATE(74), 1,
      aux_sym_pi_repeat1,
  [1387] = 4,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(225), 1,
      sym__char,
    ACTIONS(241), 1,
      anon_sym_QMARK_GT,
    STATE(74), 1,
      aux_sym_pi_repeat1,
  [1400] = 4,
    ACTIONS(243), 1,
      anon_sym_SLASH,
    ACTIONS(245), 1,
      anon_sym_GT,
    ACTIONS(247), 1,
      sym__ws,
    STATE(72), 1,
      aux_sym_empty_element_repeat1,
  [1413] = 4,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(249), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(251), 1,
      sym__char,
    STATE(78), 1,
      aux_sym_pi_repeat1,
  [1426] = 4,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(227), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(253), 1,
      sym__char,
    STATE(78), 1,
      aux_sym_pi_repeat1,
  [1439] = 3,
    ACTIONS(9), 1,
      sym__ws,
    STATE(103), 1,
      sym__quote,
    ACTIONS(256), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1450] = 4,
    ACTIONS(245), 1,
      anon_sym_GT,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(260), 1,
      sym__ws,
    STATE(69), 1,
      aux_sym_empty_element_repeat1,
  [1463] = 3,
    ACTIONS(264), 1,
      sym__ws,
    STATE(81), 1,
      aux_sym_empty_element_repeat1,
    ACTIONS(262), 2,
      anon_sym_SLASH,
      anon_sym_GT,
  [1474] = 4,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(267), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(269), 1,
      sym__char,
    STATE(84), 1,
      aux_sym_pi_repeat1,
  [1487] = 3,
    ACTIONS(9), 1,
      sym__ws,
    STATE(122), 1,
      sym__quote,
    ACTIONS(271), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1498] = 4,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(251), 1,
      sym__char,
    ACTIONS(273), 1,
      anon_sym_DASH_DASH_GT,
    STATE(78), 1,
      aux_sym_pi_repeat1,
  [1511] = 4,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(275), 1,
      sym_cdata_end,
    ACTIONS(277), 1,
      sym__char,
    STATE(71), 1,
      aux_sym_pi_repeat1,
  [1524] = 4,
    ACTIONS(3), 1,
      sym__ws,
    ACTIONS(279), 1,
      anon_sym_QMARK_GT,
    ACTIONS(281), 1,
      sym__char,
    STATE(70), 1,
      aux_sym_pi_repeat1,
  [1537] = 1,
    ACTIONS(283), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      sym__ws,
  [1543] = 1,
    ACTIONS(285), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      sym__ws,
  [1549] = 3,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      sym_name,
  [1559] = 1,
    ACTIONS(291), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      sym__ws,
  [1565] = 3,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(293), 1,
      anon_sym_QMARK_GT,
    ACTIONS(295), 1,
      anon_sym_encoding,
  [1575] = 3,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(297), 1,
      anon_sym_COLON,
    ACTIONS(299), 1,
      sym_eq,
  [1585] = 1,
    ACTIONS(262), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      sym__ws,
  [1591] = 1,
    ACTIONS(301), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      sym__ws,
  [1597] = 3,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(289), 1,
      sym_name,
    ACTIONS(303), 1,
      anon_sym_SLASH,
  [1607] = 1,
    ACTIONS(305), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      sym__ws,
  [1613] = 3,
    ACTIONS(307), 1,
      anon_sym_QMARK_GT,
    ACTIONS(309), 1,
      sym__ws,
    STATE(135), 1,
      sym_xml_encoding,
  [1623] = 1,
    ACTIONS(311), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      sym__ws,
  [1629] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(313), 1,
      sym_name,
  [1636] = 2,
    ACTIONS(315), 1,
      sym__ws,
    STATE(97), 1,
      sym_xml_version,
  [1643] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(317), 1,
      anon_sym_LT,
  [1650] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(319), 1,
      sym__dec_num,
  [1657] = 1,
    ACTIONS(321), 2,
      anon_sym_QMARK_GT,
      sym__ws,
  [1662] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(323), 1,
      sym_name,
  [1669] = 1,
    ACTIONS(325), 2,
      anon_sym_QMARK_GT,
      sym__ws,
  [1674] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(327), 1,
      anon_sym_GT,
  [1681] = 2,
    ACTIONS(329), 1,
      anon_sym_QMARK_GT,
    ACTIONS(331), 1,
      sym__ws,
  [1688] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(333), 1,
      anon_sym_SEMI,
  [1695] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(335), 1,
      anon_sym_GT,
  [1702] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(337), 1,
      anon_sym_xml,
  [1709] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(339), 1,
      anon_sym_version,
  [1716] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(341), 1,
      anon_sym_GT,
  [1723] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(343), 1,
      sym_name,
  [1730] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(345), 1,
      sym_name,
  [1737] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(347), 1,
      sym_eq,
  [1744] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(349), 1,
      sym_eq,
  [1751] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(351), 1,
      anon_sym_QMARK_GT,
  [1758] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(353), 1,
      sym_name,
  [1765] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(355), 1,
      sym_eq,
  [1772] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(357), 1,
      anon_sym_LT,
  [1779] = 2,
    ACTIONS(359), 1,
      anon_sym_GT,
    ACTIONS(361), 1,
      sym__ws,
  [1786] = 1,
    ACTIONS(363), 2,
      anon_sym_QMARK_GT,
      sym__ws,
  [1791] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(365), 1,
      sym_cdata_end,
  [1798] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(367), 1,
      anon_sym_GT,
  [1805] = 2,
    ACTIONS(369), 1,
      anon_sym_QMARK_GT,
    ACTIONS(371), 1,
      sym__ws,
  [1812] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(373), 1,
      sym_eq,
  [1819] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(375), 1,
      anon_sym_LT,
  [1826] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(377), 1,
      anon_sym_SEMI,
  [1833] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(379), 1,
      anon_sym_GT,
  [1840] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(381), 1,
      anon_sym_COLON,
  [1847] = 2,
    ACTIONS(383), 1,
      anon_sym_GT,
    ACTIONS(385), 1,
      sym__ws,
  [1854] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(387), 1,
      anon_sym_GT,
  [1861] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(389), 1,
      anon_sym_GT,
  [1868] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(391), 1,
      anon_sym_GT,
  [1875] = 2,
    ACTIONS(293), 1,
      anon_sym_QMARK_GT,
    ACTIONS(393), 1,
      sym__ws,
  [1882] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(395), 1,
      sym_name,
  [1889] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(397), 1,
      sym_name,
  [1896] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
  [1903] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(401), 1,
      sym__encoding,
  [1910] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(403), 1,
      sym_name,
  [1917] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(405), 1,
      sym_name,
  [1924] = 2,
    ACTIONS(9), 1,
      sym__ws,
    ACTIONS(289), 1,
      sym_name,
  [1931] = 1,
    ACTIONS(407), 2,
      anon_sym_QMARK_GT,
      sym__ws,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 178,
  [SMALL_STATE(7)] = 221,
  [SMALL_STATE(8)] = 264,
  [SMALL_STATE(9)] = 307,
  [SMALL_STATE(10)] = 350,
  [SMALL_STATE(11)] = 390,
  [SMALL_STATE(12)] = 415,
  [SMALL_STATE(13)] = 440,
  [SMALL_STATE(14)] = 462,
  [SMALL_STATE(15)] = 484,
  [SMALL_STATE(16)] = 506,
  [SMALL_STATE(17)] = 528,
  [SMALL_STATE(18)] = 550,
  [SMALL_STATE(19)] = 572,
  [SMALL_STATE(20)] = 587,
  [SMALL_STATE(21)] = 602,
  [SMALL_STATE(22)] = 617,
  [SMALL_STATE(23)] = 632,
  [SMALL_STATE(24)] = 647,
  [SMALL_STATE(25)] = 662,
  [SMALL_STATE(26)] = 677,
  [SMALL_STATE(27)] = 700,
  [SMALL_STATE(28)] = 715,
  [SMALL_STATE(29)] = 730,
  [SMALL_STATE(30)] = 745,
  [SMALL_STATE(31)] = 760,
  [SMALL_STATE(32)] = 783,
  [SMALL_STATE(33)] = 800,
  [SMALL_STATE(34)] = 815,
  [SMALL_STATE(35)] = 830,
  [SMALL_STATE(36)] = 845,
  [SMALL_STATE(37)] = 860,
  [SMALL_STATE(38)] = 875,
  [SMALL_STATE(39)] = 890,
  [SMALL_STATE(40)] = 905,
  [SMALL_STATE(41)] = 920,
  [SMALL_STATE(42)] = 943,
  [SMALL_STATE(43)] = 966,
  [SMALL_STATE(44)] = 981,
  [SMALL_STATE(45)] = 995,
  [SMALL_STATE(46)] = 1012,
  [SMALL_STATE(47)] = 1029,
  [SMALL_STATE(48)] = 1042,
  [SMALL_STATE(49)] = 1054,
  [SMALL_STATE(50)] = 1066,
  [SMALL_STATE(51)] = 1078,
  [SMALL_STATE(52)] = 1090,
  [SMALL_STATE(53)] = 1104,
  [SMALL_STATE(54)] = 1116,
  [SMALL_STATE(55)] = 1128,
  [SMALL_STATE(56)] = 1144,
  [SMALL_STATE(57)] = 1158,
  [SMALL_STATE(58)] = 1170,
  [SMALL_STATE(59)] = 1182,
  [SMALL_STATE(60)] = 1194,
  [SMALL_STATE(61)] = 1206,
  [SMALL_STATE(62)] = 1218,
  [SMALL_STATE(63)] = 1230,
  [SMALL_STATE(64)] = 1244,
  [SMALL_STATE(65)] = 1256,
  [SMALL_STATE(66)] = 1268,
  [SMALL_STATE(67)] = 1282,
  [SMALL_STATE(68)] = 1296,
  [SMALL_STATE(69)] = 1309,
  [SMALL_STATE(70)] = 1322,
  [SMALL_STATE(71)] = 1335,
  [SMALL_STATE(72)] = 1348,
  [SMALL_STATE(73)] = 1361,
  [SMALL_STATE(74)] = 1374,
  [SMALL_STATE(75)] = 1387,
  [SMALL_STATE(76)] = 1400,
  [SMALL_STATE(77)] = 1413,
  [SMALL_STATE(78)] = 1426,
  [SMALL_STATE(79)] = 1439,
  [SMALL_STATE(80)] = 1450,
  [SMALL_STATE(81)] = 1463,
  [SMALL_STATE(82)] = 1474,
  [SMALL_STATE(83)] = 1487,
  [SMALL_STATE(84)] = 1498,
  [SMALL_STATE(85)] = 1511,
  [SMALL_STATE(86)] = 1524,
  [SMALL_STATE(87)] = 1537,
  [SMALL_STATE(88)] = 1543,
  [SMALL_STATE(89)] = 1549,
  [SMALL_STATE(90)] = 1559,
  [SMALL_STATE(91)] = 1565,
  [SMALL_STATE(92)] = 1575,
  [SMALL_STATE(93)] = 1585,
  [SMALL_STATE(94)] = 1591,
  [SMALL_STATE(95)] = 1597,
  [SMALL_STATE(96)] = 1607,
  [SMALL_STATE(97)] = 1613,
  [SMALL_STATE(98)] = 1623,
  [SMALL_STATE(99)] = 1629,
  [SMALL_STATE(100)] = 1636,
  [SMALL_STATE(101)] = 1643,
  [SMALL_STATE(102)] = 1650,
  [SMALL_STATE(103)] = 1657,
  [SMALL_STATE(104)] = 1662,
  [SMALL_STATE(105)] = 1669,
  [SMALL_STATE(106)] = 1674,
  [SMALL_STATE(107)] = 1681,
  [SMALL_STATE(108)] = 1688,
  [SMALL_STATE(109)] = 1695,
  [SMALL_STATE(110)] = 1702,
  [SMALL_STATE(111)] = 1709,
  [SMALL_STATE(112)] = 1716,
  [SMALL_STATE(113)] = 1723,
  [SMALL_STATE(114)] = 1730,
  [SMALL_STATE(115)] = 1737,
  [SMALL_STATE(116)] = 1744,
  [SMALL_STATE(117)] = 1751,
  [SMALL_STATE(118)] = 1758,
  [SMALL_STATE(119)] = 1765,
  [SMALL_STATE(120)] = 1772,
  [SMALL_STATE(121)] = 1779,
  [SMALL_STATE(122)] = 1786,
  [SMALL_STATE(123)] = 1791,
  [SMALL_STATE(124)] = 1798,
  [SMALL_STATE(125)] = 1805,
  [SMALL_STATE(126)] = 1812,
  [SMALL_STATE(127)] = 1819,
  [SMALL_STATE(128)] = 1826,
  [SMALL_STATE(129)] = 1833,
  [SMALL_STATE(130)] = 1840,
  [SMALL_STATE(131)] = 1847,
  [SMALL_STATE(132)] = 1854,
  [SMALL_STATE(133)] = 1861,
  [SMALL_STATE(134)] = 1868,
  [SMALL_STATE(135)] = 1875,
  [SMALL_STATE(136)] = 1882,
  [SMALL_STATE(137)] = 1889,
  [SMALL_STATE(138)] = 1896,
  [SMALL_STATE(139)] = 1903,
  [SMALL_STATE(140)] = 1910,
  [SMALL_STATE(141)] = 1917,
  [SMALL_STATE(142)] = 1924,
  [SMALL_STATE(143)] = 1931,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content, 2), SHIFT_REPEAT(136),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content, 2), SHIFT_REPEAT(142),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content, 2), SHIFT_REPEAT(82),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content, 2), SHIFT_REPEAT(32),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content, 2), SHIFT_REPEAT(55),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content, 2), SHIFT_REPEAT(114),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_file, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_file, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_file, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT_REPEAT(17),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT_REPEAT(17),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT_REPEAT(137),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_xml_file_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_file_repeat1, 2), SHIFT_REPEAT(118),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_file_repeat1, 2), SHIFT_REPEAT(73),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_file_repeat1, 2), SHIFT_REPEAT(18),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pi, 5),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pi, 5),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_element, 5, .production_id = 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_element, 5, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag_element, 4),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag_element, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pi, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pi, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_element, 4, .production_id = 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_element, 4, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_start, 3, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_start, 3, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag_element, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag_element, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag_element, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag_element, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pi, 4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pi, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_end, 4, .production_id = 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_end, 4, .production_id = 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cdata_sect, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cdata_sect, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_element, 6, .production_id = 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_element, 6, .production_id = 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cdata_sect, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cdata_sect, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_start, 5, .production_id = 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_start, 5, .production_id = 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_start, 4, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_start, 4, .production_id = 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_end, 5, .production_id = 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_end, 5, .production_id = 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_ref, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_ref, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pi_repeat1, 2),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pi_repeat1, 2), SHIFT_REPEAT(71),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pi_repeat1, 2), SHIFT_REPEAT(74),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pi_repeat1, 2), SHIFT_REPEAT(78),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_empty_element_repeat1, 2),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_empty_element_repeat1, 2), SHIFT_REPEAT(45),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cdata, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_attr, 5, .production_id = 8),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_attr, 3, .production_id = 5),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ns_decl, 5, .production_id = 7),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_decl, 6, .production_id = 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_encoding_value, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_version, 4, .production_id = 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_decl, 5, .production_id = 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_version_value, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_decl, 4, .production_id = 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [399] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_encoding, 4, .production_id = 6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_xml(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
