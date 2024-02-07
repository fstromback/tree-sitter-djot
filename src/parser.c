#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 9
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_ = 1,
  anon_sym_LF_LF = 2,
  anon_sym_LF = 3,
  sym_soft_line_break = 4,
  anon_sym_BSLASH = 5,
  aux_sym_inline_token1 = 6,
  sym__text = 7,
  sym_document = 8,
  sym__block = 9,
  sym_paragraph = 10,
  sym__eof_or_blankline = 11,
  sym_inline = 12,
  aux_sym_document_repeat1 = 13,
  aux_sym_inline_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = " ",
  [anon_sym_LF_LF] = "\n\n",
  [anon_sym_LF] = "\n ",
  [sym_soft_line_break] = "soft_line_break",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_inline_token1] = "inline_token1",
  [sym__text] = "_text",
  [sym_document] = "document",
  [sym__block] = "_block",
  [sym_paragraph] = "paragraph",
  [sym__eof_or_blankline] = "_eof_or_blankline",
  [sym_inline] = "inline",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_inline_repeat1] = "inline_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
  [anon_sym_LF_LF] = anon_sym_LF_LF,
  [anon_sym_LF] = anon_sym_LF,
  [sym_soft_line_break] = sym_soft_line_break,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_inline_token1] = aux_sym_inline_token1,
  [sym__text] = sym__text,
  [sym_document] = sym_document,
  [sym__block] = sym__block,
  [sym_paragraph] = sym_paragraph,
  [sym__eof_or_blankline] = sym__eof_or_blankline,
  [sym_inline] = sym_inline,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_inline_repeat1] = aux_sym_inline_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_soft_line_break] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_inline_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym__eof_or_blankline] = {
    .visible = false,
    .named = true,
  },
  [sym_inline] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == 0) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(5);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(16);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LF_LF);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_soft_line_break);
      if (lookahead == 0) ADVANCE(8);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(16);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_inline_token1);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_inline_token1);
      if (lookahead == 0) ADVANCE(8);
      if (lookahead == '\n') ADVANCE(7);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_inline_token1);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_inline_token1);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_inline_token1);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__text);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(16);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_soft_line_break] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_inline_token1] = ACTIONS(3),
    [sym__text] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(8),
    [sym__block] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym_inline] = STATE(6),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_inline_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_inline_token1] = ACTIONS(7),
    [sym__text] = ACTIONS(9),
  },
  [2] = {
    [sym__block] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym_inline] = STATE(6),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_inline_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(11),
    [aux_sym_inline_token1] = ACTIONS(7),
    [sym__text] = ACTIONS(9),
  },
  [3] = {
    [sym__block] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym_inline] = STATE(6),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_inline_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(13),
    [aux_sym_inline_token1] = ACTIONS(15),
    [sym__text] = ACTIONS(18),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    STATE(5), 1,
      aux_sym_inline_repeat1,
    ACTIONS(23), 2,
      aux_sym_inline_token1,
      sym__text,
    ACTIONS(21), 3,
      anon_sym_,
      anon_sym_LF_LF,
      anon_sym_LF,
  [13] = 3,
    STATE(5), 1,
      aux_sym_inline_repeat1,
    ACTIONS(27), 2,
      aux_sym_inline_token1,
      sym__text,
    ACTIONS(25), 3,
      anon_sym_,
      anon_sym_LF_LF,
      anon_sym_LF,
  [26] = 3,
    ACTIONS(3), 1,
      aux_sym_inline_token1,
    STATE(7), 1,
      sym__eof_or_blankline,
    ACTIONS(30), 3,
      anon_sym_,
      anon_sym_LF_LF,
      anon_sym_LF,
  [38] = 2,
    ACTIONS(34), 1,
      sym__text,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      aux_sym_inline_token1,
  [46] = 2,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      aux_sym_inline_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 13,
  [SMALL_STATE(6)] = 26,
  [SMALL_STATE(7)] = 38,
  [SMALL_STATE(8)] = 46,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2), SHIFT_REPEAT(5),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [36] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Djot(void) {
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
