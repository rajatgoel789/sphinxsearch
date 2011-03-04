/* A Bison parser, made by GNU Bison 1.875.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOK_IDENT = 258,
     TOK_ATIDENT = 259,
     TOK_CONST_INT = 260,
     TOK_CONST_FLOAT = 261,
     TOK_QUOTED_STRING = 262,
     TOK_AS = 263,
     TOK_ASC = 264,
     TOK_AVG = 265,
     TOK_BEGIN = 266,
     TOK_BETWEEN = 267,
     TOK_BY = 268,
     TOK_CALL = 269,
     TOK_COLLATION = 270,
     TOK_COMMIT = 271,
     TOK_COUNT = 272,
     TOK_CREATE = 273,
     TOK_DELETE = 274,
     TOK_DESC = 275,
     TOK_DESCRIBE = 276,
     TOK_DISTINCT = 277,
     TOK_DIV = 278,
     TOK_DROP = 279,
     TOK_FALSE = 280,
     TOK_FLOAT = 281,
     TOK_FROM = 282,
     TOK_FUNCTION = 283,
     TOK_GLOBAL = 284,
     TOK_GROUP = 285,
     TOK_ID = 286,
     TOK_IN = 287,
     TOK_INSERT = 288,
     TOK_INT = 289,
     TOK_INTO = 290,
     TOK_LIMIT = 291,
     TOK_MATCH = 292,
     TOK_MATCH_WEIGHT = 293,
     TOK_MAX = 294,
     TOK_META = 295,
     TOK_MIN = 296,
     TOK_MOD = 297,
     TOK_NULL = 298,
     TOK_OPTION = 299,
     TOK_ORDER = 300,
     TOK_REPLACE = 301,
     TOK_RETURNS = 302,
     TOK_ROLLBACK = 303,
     TOK_SELECT = 304,
     TOK_SET = 305,
     TOK_SHOW = 306,
     TOK_SONAME = 307,
     TOK_START = 308,
     TOK_STATUS = 309,
     TOK_SUM = 310,
     TOK_TABLES = 311,
     TOK_TRANSACTION = 312,
     TOK_TRUE = 313,
     TOK_UPDATE = 314,
     TOK_USERVAR = 315,
     TOK_VALUES = 316,
     TOK_VARIABLES = 317,
     TOK_WARNINGS = 318,
     TOK_WEIGHT = 319,
     TOK_WHERE = 320,
     TOK_WITHIN = 321,
     TOK_OR = 322,
     TOK_AND = 323,
     TOK_NE = 324,
     TOK_GTE = 325,
     TOK_LTE = 326,
     TOK_NOT = 327,
     TOK_NEG = 328
   };
#endif
#define TOK_IDENT 258
#define TOK_ATIDENT 259
#define TOK_CONST_INT 260
#define TOK_CONST_FLOAT 261
#define TOK_QUOTED_STRING 262
#define TOK_AS 263
#define TOK_ASC 264
#define TOK_AVG 265
#define TOK_BEGIN 266
#define TOK_BETWEEN 267
#define TOK_BY 268
#define TOK_CALL 269
#define TOK_COLLATION 270
#define TOK_COMMIT 271
#define TOK_COUNT 272
#define TOK_CREATE 273
#define TOK_DELETE 274
#define TOK_DESC 275
#define TOK_DESCRIBE 276
#define TOK_DISTINCT 277
#define TOK_DIV 278
#define TOK_DROP 279
#define TOK_FALSE 280
#define TOK_FLOAT 281
#define TOK_FROM 282
#define TOK_FUNCTION 283
#define TOK_GLOBAL 284
#define TOK_GROUP 285
#define TOK_ID 286
#define TOK_IN 287
#define TOK_INSERT 288
#define TOK_INT 289
#define TOK_INTO 290
#define TOK_LIMIT 291
#define TOK_MATCH 292
#define TOK_MATCH_WEIGHT 293
#define TOK_MAX 294
#define TOK_META 295
#define TOK_MIN 296
#define TOK_MOD 297
#define TOK_NULL 298
#define TOK_OPTION 299
#define TOK_ORDER 300
#define TOK_REPLACE 301
#define TOK_RETURNS 302
#define TOK_ROLLBACK 303
#define TOK_SELECT 304
#define TOK_SET 305
#define TOK_SHOW 306
#define TOK_SONAME 307
#define TOK_START 308
#define TOK_STATUS 309
#define TOK_SUM 310
#define TOK_TABLES 311
#define TOK_TRANSACTION 312
#define TOK_TRUE 313
#define TOK_UPDATE 314
#define TOK_USERVAR 315
#define TOK_VALUES 316
#define TOK_VARIABLES 317
#define TOK_WARNINGS 318
#define TOK_WEIGHT 319
#define TOK_WHERE 320
#define TOK_WITHIN 321
#define TOK_OR 322
#define TOK_AND 323
#define TOK_NE 324
#define TOK_GTE 325
#define TOK_LTE 326
#define TOK_NOT 327
#define TOK_NEG 328




/* Copy the first part of user declarations.  */


#if USE_WINDOWS
#pragma warning(push,1)
#pragma warning(disable:4702) // unreachable code
#endif


// some helpers
#include <float.h> // for FLT_MAX



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */


#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  76
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   692

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  70
/* YYNRULES -- Number of rules. */
#define YYNRULES  197
/* YYNRULES -- Number of states. */
#define YYNSTATES  393

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   328

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    81,    70,     2,
      86,    87,    79,    77,    85,    78,     2,    80,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    84,
      73,    71,    74,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    69,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    72,    75,    76,    82,    83
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      42,    44,    46,    57,    59,    63,    65,    67,    71,    78,
      85,    92,    99,   101,   108,   114,   120,   126,   127,   129,
     131,   135,   136,   138,   141,   143,   147,   152,   156,   160,
     166,   173,   177,   182,   188,   192,   196,   200,   204,   208,
     212,   216,   220,   226,   230,   234,   236,   238,   243,   247,
     251,   253,   255,   258,   260,   263,   265,   269,   270,   272,
     276,   277,   279,   285,   286,   288,   292,   294,   298,   300,
     303,   306,   307,   309,   312,   317,   318,   320,   323,   325,
     329,   333,   337,   343,   345,   349,   353,   355,   357,   359,
     361,   363,   365,   368,   371,   375,   379,   383,   387,   391,
     395,   399,   403,   407,   411,   415,   419,   423,   427,   431,
     435,   439,   443,   445,   450,   455,   459,   466,   473,   475,
     479,   482,   484,   486,   488,   493,   498,   503,   511,   517,
     519,   521,   523,   525,   527,   529,   531,   533,   535,   538,
     545,   547,   549,   550,   554,   556,   560,   562,   566,   570,
     572,   576,   578,   580,   582,   590,   600,   607,   608,   611,
     613,   617,   621,   623,   625,   628,   630,   632,   635,   644,
     646,   650,   654,   657,   660,   668,   670,   672
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
      89,     0,    -1,    90,    -1,    91,    -1,    91,    84,    -1,
     133,    -1,   141,    -1,   127,    -1,   128,    -1,   131,    -1,
     142,    -1,   147,    -1,   149,    -1,   150,    -1,   153,    -1,
     154,    -1,   155,    -1,   157,    -1,    92,    -1,    91,    84,
      92,    -1,    93,    -1,   125,    -1,    49,    94,    27,    97,
      98,   106,   108,   110,   114,   116,    -1,    95,    -1,    94,
      85,    95,    -1,     3,    -1,    31,    -1,   122,    96,     3,
      -1,    10,    86,   122,    87,    96,     3,    -1,    39,    86,
     122,    87,    96,     3,    -1,    41,    86,   122,    87,    96,
       3,    -1,    55,    86,   122,    87,    96,     3,    -1,    79,
      -1,    17,    86,    79,    87,    96,     3,    -1,    64,    86,
      87,    96,     3,    -1,    38,    86,    87,    96,     3,    -1,
      17,    86,    22,     3,    87,    -1,    -1,     8,    -1,     3,
      -1,    97,    85,     3,    -1,    -1,    99,    -1,    65,   100,
      -1,   101,    -1,   100,    68,   101,    -1,    37,    86,     7,
      87,    -1,   102,    71,   103,    -1,   102,    72,   103,    -1,
     102,    32,    86,   105,    87,    -1,   102,    82,    32,    86,
     105,    87,    -1,   102,    32,    60,    -1,   102,    82,    32,
      60,    -1,   102,    12,   103,    68,   103,    -1,   102,    74,
     103,    -1,   102,    73,   103,    -1,   102,    75,   103,    -1,
     102,    76,   103,    -1,   102,    71,   104,    -1,   102,    72,
     104,    -1,   102,    74,   104,    -1,   102,    73,   104,    -1,
     102,    12,   104,    68,   104,    -1,   102,    75,   104,    -1,
     102,    76,   104,    -1,     3,    -1,     4,    -1,    17,    86,
      79,    87,    -1,    64,    86,    87,    -1,    38,    86,    87,
      -1,    31,    -1,     5,    -1,    78,     5,    -1,     6,    -1,
      78,     6,    -1,   103,    -1,   105,    85,   103,    -1,    -1,
     107,    -1,    30,    13,   102,    -1,    -1,   109,    -1,    66,
      30,    45,    13,   112,    -1,    -1,   111,    -1,    45,    13,
     112,    -1,   113,    -1,   112,    85,   113,    -1,   102,    -1,
     102,     9,    -1,   102,    20,    -1,    -1,   115,    -1,    36,
       5,    -1,    36,     5,    85,     5,    -1,    -1,   117,    -1,
      44,   118,    -1,   119,    -1,   118,    85,   119,    -1,     3,
      71,     3,    -1,     3,    71,     5,    -1,     3,    71,    86,
     120,    87,    -1,   121,    -1,   120,    85,   121,    -1,     3,
      71,   103,    -1,     3,    -1,     4,    -1,    31,    -1,     5,
      -1,     6,    -1,    60,    -1,    78,   122,    -1,    82,   122,
      -1,   122,    77,   122,    -1,   122,    78,   122,    -1,   122,
      79,   122,    -1,   122,    80,   122,    -1,   122,    73,   122,
      -1,   122,    74,   122,    -1,   122,    70,   122,    -1,   122,
      69,   122,    -1,   122,    81,   122,    -1,   122,    23,   122,
      -1,   122,    42,   122,    -1,   122,    76,   122,    -1,   122,
      75,   122,    -1,   122,    71,   122,    -1,   122,    72,   122,
      -1,   122,    68,   122,    -1,   122,    67,   122,    -1,    86,
     122,    87,    -1,   123,    -1,     3,    86,   124,    87,    -1,
      32,    86,   124,    87,    -1,     3,    86,    87,    -1,    41,
      86,   122,    85,   122,    87,    -1,    39,    86,   122,    85,
     122,    87,    -1,   122,    -1,   124,    85,   122,    -1,    51,
     126,    -1,    63,    -1,    54,    -1,    40,    -1,    50,     3,
      71,   130,    -1,    50,     3,    71,   129,    -1,    50,     3,
      71,    43,    -1,    50,    29,    60,    71,    86,   105,    87,
      -1,    50,    29,     3,    71,   129,    -1,     3,    -1,     7,
      -1,    58,    -1,    25,    -1,   103,    -1,    16,    -1,    48,
      -1,   132,    -1,    11,    -1,    53,    57,    -1,   134,    35,
       3,   135,    61,   137,    -1,    33,    -1,    46,    -1,    -1,
      86,   136,    87,    -1,   102,    -1,   136,    85,   102,    -1,
     138,    -1,   137,    85,   138,    -1,    86,   139,    87,    -1,
     140,    -1,   139,    85,   140,    -1,   103,    -1,   104,    -1,
       7,    -1,    19,    27,     3,    65,    31,    71,   103,    -1,
      19,    27,     3,    65,    31,    32,    86,   105,    87,    -1,
      14,     3,    86,   139,   143,    87,    -1,    -1,    85,   144,
      -1,   145,    -1,   144,    85,   145,    -1,   140,    96,   146,
      -1,     3,    -1,    36,    -1,   148,     3,    -1,    21,    -1,
      20,    -1,    51,    56,    -1,    59,     3,    50,   151,    65,
      31,    71,   103,    -1,   152,    -1,   151,    85,   152,    -1,
       3,    71,   103,    -1,    51,    62,    -1,    51,    15,    -1,
      18,    28,     3,    47,   156,    52,     7,    -1,    34,    -1,
      26,    -1,    24,    28,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   102,   102,   103,   104,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   126,   127,
     131,   132,   136,   151,   152,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   182,   184,   188,
     189,   192,   194,   198,   202,   203,   207,   212,   219,   227,
     235,   244,   249,   254,   259,   264,   269,   274,   279,   280,
     281,   282,   287,   292,   297,   305,   306,   311,   317,   323,
     329,   338,   339,   343,   344,   348,   354,   360,   362,   366,
     373,   375,   379,   385,   387,   391,   398,   399,   403,   404,
     405,   408,   410,   414,   419,   426,   428,   432,   436,   437,
     441,   446,   451,   460,   465,   472,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   512,   513,   514,   515,   516,   520,   521,
     527,   531,   532,   533,   539,   544,   549,   557,   562,   570,
     571,   575,   576,   577,   591,   592,   593,   597,   598,   604,
     612,   613,   616,   618,   622,   623,   627,   628,   632,   636,
     637,   641,   642,   643,   649,   655,   667,   674,   676,   680,
     685,   689,   697,   698,   704,   712,   713,   719,   725,   736,
     737,   741,   755,   759,   765,   776,   777,   781
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_IDENT", "TOK_ATIDENT", 
  "TOK_CONST_INT", "TOK_CONST_FLOAT", "TOK_QUOTED_STRING", "TOK_AS", 
  "TOK_ASC", "TOK_AVG", "TOK_BEGIN", "TOK_BETWEEN", "TOK_BY", "TOK_CALL", 
  "TOK_COLLATION", "TOK_COMMIT", "TOK_COUNT", "TOK_CREATE", "TOK_DELETE", 
  "TOK_DESC", "TOK_DESCRIBE", "TOK_DISTINCT", "TOK_DIV", "TOK_DROP", 
  "TOK_FALSE", "TOK_FLOAT", "TOK_FROM", "TOK_FUNCTION", "TOK_GLOBAL", 
  "TOK_GROUP", "TOK_ID", "TOK_IN", "TOK_INSERT", "TOK_INT", "TOK_INTO", 
  "TOK_LIMIT", "TOK_MATCH", "TOK_MATCH_WEIGHT", "TOK_MAX", "TOK_META", 
  "TOK_MIN", "TOK_MOD", "TOK_NULL", "TOK_OPTION", "TOK_ORDER", 
  "TOK_REPLACE", "TOK_RETURNS", "TOK_ROLLBACK", "TOK_SELECT", "TOK_SET", 
  "TOK_SHOW", "TOK_SONAME", "TOK_START", "TOK_STATUS", "TOK_SUM", 
  "TOK_TABLES", "TOK_TRANSACTION", "TOK_TRUE", "TOK_UPDATE", 
  "TOK_USERVAR", "TOK_VALUES", "TOK_VARIABLES", "TOK_WARNINGS", 
  "TOK_WEIGHT", "TOK_WHERE", "TOK_WITHIN", "TOK_OR", "TOK_AND", "'|'", 
  "'&'", "'='", "TOK_NE", "'<'", "'>'", "TOK_GTE", "TOK_LTE", "'+'", 
  "'-'", "'*'", "'/'", "'%'", "TOK_NOT", "TOK_NEG", "';'", "','", "'('", 
  "')'", "$accept", "request", "statement", "multi_stmt_list", 
  "multi_stmt", "select_from", "select_items_list", "select_item", 
  "opt_as", "ident_list", "opt_where_clause", "where_clause", 
  "where_expr", "where_item", "expr_ident", "const_int", "const_float", 
  "const_list", "opt_group_clause", "group_clause", 
  "opt_group_order_clause", "group_order_clause", "opt_order_clause", 
  "order_clause", "order_items_list", "order_item", "opt_limit_clause", 
  "limit_clause", "opt_option_clause", "option_clause", "option_list", 
  "option_item", "named_const_list", "named_const", "expr", "function", 
  "arglist", "show_clause", "show_variable", "set_clause", 
  "set_global_clause", "set_string_value", "boolean_value", "transact_op", 
  "start_transaction", "insert_into", "insert_or_replace", 
  "opt_column_list", "column_list", "insert_rows_list", "insert_row", 
  "insert_vals_list", "insert_val", "delete_from", "call_proc", 
  "opt_call_opts_list", "call_opts_list", "call_opt", "call_opt_name", 
  "describe", "describe_tok", "show_tables", "update", 
  "update_items_list", "update_item", "show_variables", "show_collation", 
  "create_function", "udf_type", "drop_function", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   124,
      38,    61,   324,    60,    62,   325,   326,    43,    45,    42,
      47,    37,   327,   328,    59,    44,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    88,    89,    89,    89,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    91,    91,
      92,    92,    93,    94,    94,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    96,    96,    97,
      97,    98,    98,    99,   100,   100,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   102,   102,   102,   102,   102,
     102,   103,   103,   104,   104,   105,   105,   106,   106,   107,
     108,   108,   109,   110,   110,   111,   112,   112,   113,   113,
     113,   114,   114,   115,   115,   116,   116,   117,   118,   118,
     119,   119,   119,   120,   120,   121,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   123,   123,   123,   123,   123,   124,   124,
     125,   126,   126,   126,   127,   127,   127,   128,   128,   129,
     129,   130,   130,   130,   131,   131,   131,   132,   132,   133,
     134,   134,   135,   135,   136,   136,   137,   137,   138,   139,
     139,   140,   140,   140,   141,   141,   142,   143,   143,   144,
     144,   145,   146,   146,   147,   148,   148,   149,   150,   151,
     151,   152,   153,   154,   155,   156,   156,   157
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,    10,     1,     3,     1,     1,     3,     6,     6,
       6,     6,     1,     6,     5,     5,     5,     0,     1,     1,
       3,     0,     1,     2,     1,     3,     4,     3,     3,     5,
       6,     3,     4,     5,     3,     3,     3,     3,     3,     3,
       3,     3,     5,     3,     3,     1,     1,     4,     3,     3,
       1,     1,     2,     1,     2,     1,     3,     0,     1,     3,
       0,     1,     5,     0,     1,     3,     1,     3,     1,     2,
       2,     0,     1,     2,     4,     0,     1,     2,     1,     3,
       3,     3,     5,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     4,     4,     3,     6,     6,     1,     3,
       2,     1,     1,     1,     4,     4,     4,     7,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     6,
       1,     1,     0,     3,     1,     3,     1,     3,     3,     1,
       3,     1,     1,     1,     7,     9,     6,     0,     2,     1,
       3,     3,     1,     1,     2,     1,     1,     2,     8,     1,
       3,     3,     2,     2,     7,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,   157,     0,   154,     0,     0,   186,   185,     0,   160,
     161,   155,     0,     0,     0,     0,     0,     0,     2,     3,
      18,    20,    21,     7,     8,     9,   156,     5,     0,     6,
      10,    11,     0,    12,    13,    14,    15,    16,    17,     0,
       0,     0,     0,   106,   107,   109,   110,     0,     0,   108,
       0,     0,     0,     0,     0,   111,     0,     0,    32,     0,
       0,     0,    23,    37,   132,     0,     0,   193,   143,   142,
     187,   192,   141,   140,   158,     0,     1,     4,     0,   184,
       0,     0,     0,   197,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   106,   108,     0,     0,   112,   113,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,   162,    71,    73,
     173,     0,   171,   172,   177,   169,     0,     0,   135,   138,
       0,     0,     0,     0,     0,    37,     0,     0,     0,    37,
       0,     0,   131,    39,    41,    24,   123,   124,   130,   129,
     121,   120,   127,   128,   118,   119,   126,   125,   114,   115,
     116,   117,   122,    27,   149,   150,   152,   146,   151,     0,
     153,   145,   144,     0,     0,     0,     0,   189,     0,     0,
      72,    74,     0,     0,   196,   195,     0,     0,     0,   133,
      37,     0,    37,   134,     0,     0,    37,     0,    37,    37,
       0,     0,     0,     0,     0,    77,    42,   148,     0,     0,
       0,     0,    65,    66,     0,    70,     0,     0,   164,     0,
       0,    37,   178,   179,   176,     0,     0,     0,   139,     0,
      36,     0,    35,     0,     0,     0,     0,     0,    34,     0,
      43,    44,     0,    40,     0,    80,    78,    75,     0,   191,
       0,   190,     0,     0,     0,     0,   163,     0,   159,   166,
       0,     0,   194,     0,   174,    28,    33,   137,    29,   136,
      30,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,    81,     0,   147,     0,
       0,    69,    68,   165,     0,     0,   182,   183,   181,    37,
     180,     0,     0,    45,     0,     0,    51,     0,    47,    58,
      48,    59,    55,    61,    54,    60,    56,    63,    57,    64,
       0,    79,     0,     0,    91,    84,    76,   188,    67,     0,
     168,   167,   175,    46,     0,     0,     0,    52,     0,     0,
       0,     0,    95,    92,   170,    53,     0,    62,    49,     0,
       0,    88,    85,    86,    93,     0,    22,    96,    50,    82,
      89,    90,     0,     0,     0,    97,    98,    87,    94,     0,
       0,   100,   101,     0,    99,     0,     0,   103,     0,     0,
     102,   105,   104
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,    17,    18,    19,    20,    21,    61,    62,   270,   154,
     215,   216,   250,   251,   361,   132,   133,   258,   255,   256,
     295,   296,   334,   335,   362,   363,   352,   353,   366,   367,
     375,   376,   386,   387,    63,    64,   140,    22,    73,    23,
      24,   181,   182,    25,    26,    27,    28,   189,   229,   268,
     269,   134,   135,    29,    30,   193,   232,   233,   308,    31,
      32,    33,    34,   186,   187,    35,    36,    37,   196,    38
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -247
static const short yypact[] =
{
     633,  -247,    22,  -247,     4,    81,  -247,  -247,    10,  -247,
    -247,  -247,   154,    40,   166,    58,    70,   112,  -247,    35,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,    89,  -247,
    -247,  -247,   140,  -247,  -247,  -247,  -247,  -247,  -247,    64,
     153,   170,   177,    52,  -247,  -247,  -247,   108,   115,   -15,
     116,   119,   135,   144,   148,  -247,   179,    36,  -247,    36,
      36,    -4,  -247,   174,  -247,   164,    61,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,   165,  -247,    23,   222,  -247,
       8,   192,   206,  -247,     5,    36,    -3,    36,   186,    36,
      36,    36,   188,   193,  -247,   194,   211,  -247,  -247,   275,
     271,   154,  -247,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
     297,   129,   207,   245,   315,    50,  -247,   250,  -247,  -247,
    -247,   156,  -247,  -247,   235,  -247,   149,   306,  -247,   461,
      59,   296,   354,   273,    92,   350,   214,   254,   317,   350,
      36,    36,  -247,  -247,    46,  -247,  -247,  -247,   234,   476,
     502,   542,   562,   562,   481,   481,   481,   481,   132,   132,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,   373,
    -247,  -247,  -247,    19,   293,   310,    55,  -247,   200,   339,
    -247,  -247,     8,   312,  -247,  -247,   368,    34,    36,  -247,
     350,   334,   350,  -247,   399,    36,   350,    36,   350,   350,
     421,   380,   400,   479,   438,   413,  -247,  -247,     2,     2,
     414,   315,  -247,  -247,   358,  -247,   376,   377,  -247,   103,
     378,    16,   381,  -247,  -247,   480,   402,     2,   461,   483,
    -247,   486,  -247,   338,   487,   359,   488,   489,  -247,   407,
     426,  -247,   187,  -247,   482,   431,  -247,  -247,   104,  -247,
     427,  -247,   422,   415,   418,   200,  -247,     8,   423,  -247,
      42,     8,  -247,     2,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,   493,   479,    15,    47,    15,    15,    15,    15,
      15,    15,   474,   200,   477,   464,  -247,     2,  -247,     2,
     424,  -247,  -247,  -247,   113,   378,  -247,  -247,  -247,   350,
    -247,   123,   425,  -247,   445,   446,  -247,     2,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
      49,  -247,   470,   506,   484,  -247,  -247,  -247,  -247,     8,
    -247,  -247,  -247,  -247,     2,    11,   139,  -247,     2,   508,
     200,   517,   519,  -247,  -247,  -247,   518,  -247,  -247,   181,
     200,    97,   441,  -247,   442,   561,  -247,  -247,  -247,   441,
    -247,  -247,   200,   563,   495,   485,  -247,  -247,  -247,    13,
     561,  -247,  -247,   564,  -247,   498,   185,  -247,     2,   564,
    -247,  -247,  -247
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -247,  -247,  -247,  -247,   494,  -247,  -247,   490,   -61,  -247,
    -247,  -247,  -247,   303,  -183,  -121,  -161,  -246,  -247,  -247,
    -247,  -247,  -247,  -247,   227,   216,  -247,  -247,  -247,  -247,
    -247,   209,  -247,   201,   -56,  -247,   505,  -247,  -247,  -247,
    -247,   410,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
     289,   328,  -186,  -247,  -247,  -247,  -247,   325,  -247,  -247,
    -247,  -247,  -247,  -247,   379,  -247,  -247,  -247,  -247,  -247
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -171
static const short yytable[] =
{
     180,    97,   120,    98,    99,   228,   231,   128,    93,    44,
      45,    46,   -26,   128,   129,   130,   381,   129,   382,   142,
     128,   129,   174,   100,   102,    39,   175,   311,   139,   141,
     252,   139,    40,   146,   147,   148,    94,    50,    42,    93,
      44,    45,    46,    65,    95,   306,    96,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   122,    55,   236,    94,    50,    66,
     -26,   346,    12,    75,   125,    95,   143,    96,   307,   -25,
     179,   101,   303,    57,   204,   309,   131,    59,   210,   356,
      68,    60,   138,   131,   211,   212,    55,   257,   259,   383,
     252,  -170,   359,  -170,    69,   237,   370,   316,    41,   347,
     331,   213,    76,    72,    57,    74,   274,   371,    59,    77,
     220,   123,    60,   315,    78,   319,   321,   323,   325,   327,
     329,   214,   174,   317,   128,   348,   175,   -25,    84,   239,
     221,   241,   238,    79,   198,   244,   199,   246,   247,   243,
      80,   245,   257,   354,   176,   103,    81,    43,    44,    45,
      46,   190,   191,   314,    47,   318,   320,   322,   324,   326,
     328,    48,   177,    82,   104,   194,   336,   198,   337,   203,
      83,    67,   102,   195,   357,    49,    50,   178,   265,   297,
     266,   298,    51,    52,    85,    53,   257,   103,   339,   284,
     340,    86,    87,   222,   223,    88,    68,   179,   297,    54,
     342,   117,   118,   119,    55,   124,   104,   224,    56,   285,
      69,    89,    70,   355,   297,   127,   358,   257,    71,    72,
      90,   225,    57,    58,    91,   121,    59,   103,   226,   136,
      60,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   104,   103,   286,   287,
     288,   289,   290,   291,   227,    92,   297,   391,   368,   292,
     389,   137,   390,   145,   153,   149,   104,   103,   183,    84,
     150,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   104,   151,   103,   205,
     173,   206,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   184,   104,   185,   103,
     192,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   188,   197,   104,   207,
     103,   208,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   201,   102,   104,
     202,   103,   152,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   190,   218,
     104,   219,   103,   200,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   234,
     230,   104,   242,   103,   209,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     235,   240,   104,   103,   248,   277,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   253,   104,   254,   262,   260,   279,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   263,   264,   267,   205,   271,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   222,   223,   103,   207,   275,   272,   273,   276,
     278,   280,   281,   282,   283,   293,   224,   294,   299,   103,
     312,   300,   301,   104,   103,   302,   330,   332,   305,   333,
     225,   338,   343,   344,   345,   349,   249,   226,   104,   350,
     351,   360,   364,   104,   191,   103,   372,   373,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   227,   104,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   115,   116,
     117,   118,   119,   365,   374,   103,   379,   385,   378,   388,
     380,   126,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   104,   103,   313,   369,   377,   384,
     392,   155,   144,   217,   341,   304,   310,     0,     0,     0,
     261,     0,     0,     0,   104,     0,     0,     0,     0,     0,
       0,     0,     0,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   112,   113,   114,   115,
     116,   117,   118,   119,     1,     0,     0,     2,     0,     3,
       0,     4,     5,     6,     7,     0,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
       0,    11,    12,    13,    14,     0,    15,     0,     0,     0,
       0,     0,    16
};

static const short yycheck[] =
{
     121,    57,    63,    59,    60,   188,   192,     5,     3,     4,
       5,     6,    27,     5,     6,     7,     3,     6,     5,    22,
       5,     6,     3,    27,     8,     3,     7,   273,    84,    85,
     213,    87,    28,    89,    90,    91,    31,    32,    28,     3,
       4,     5,     6,     3,    39,     3,    41,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,     3,    60,    32,    31,    32,    29,
      85,   317,    49,     3,    51,    39,    79,    41,    36,    27,
      78,    85,   265,    78,   145,   271,    78,    82,   149,    78,
      40,    86,    87,    78,   150,   151,    60,   218,   219,    86,
     283,    85,   348,    87,    54,    71,     9,    60,    27,    60,
     293,    65,     0,    63,    78,    57,   237,    20,    82,    84,
      65,    60,    86,   284,    35,   286,   287,   288,   289,   290,
     291,    85,     3,    86,     5,    86,     7,    85,    86,   200,
      85,   202,   198,     3,    85,   206,    87,   208,   209,   205,
      86,   207,   273,   339,    25,    23,     3,     3,     4,     5,
       6,     5,     6,   284,    10,   286,   287,   288,   289,   290,
     291,    17,    43,     3,    42,    26,   297,    85,   299,    87,
       3,    15,     8,    34,   345,    31,    32,    58,    85,    85,
      87,    87,    38,    39,    86,    41,   317,    23,    85,    12,
      87,    86,    86,     3,     4,    86,    40,    78,    85,    55,
      87,    79,    80,    81,    60,    50,    42,    17,    64,    32,
      54,    86,    56,   344,    85,     3,    87,   348,    62,    63,
      86,    31,    78,    79,    86,    71,    82,    23,    38,    47,
      86,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    42,    23,    71,    72,
      73,    74,    75,    76,    64,    86,    85,   388,    87,    82,
      85,    65,    87,    87,     3,    87,    42,    23,    71,    86,
      86,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    42,    86,    23,    85,
       3,    87,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    71,    42,     3,    23,
      85,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    86,    31,    42,    85,
      23,    87,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,     3,     8,    42,
      87,    23,    87,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,     5,    86,
      42,    71,    23,    87,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    87,
      61,    42,     3,    23,    87,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      52,    87,    42,    23,     3,    87,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,     3,    42,    30,    86,    31,    87,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    86,    86,    86,    85,    85,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,     3,     4,    23,    85,     3,     7,    86,     3,
       3,     3,     3,    86,    68,    13,    17,    66,    71,    23,
       7,    79,    87,    42,    23,    87,    32,    30,    85,    45,
      31,    87,    87,    68,    68,    45,    37,    38,    42,    13,
      36,    13,     5,    42,     6,    23,    85,    85,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    64,    42,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    77,    78,
      79,    80,    81,    44,     3,    23,    71,     3,     5,    71,
      85,    77,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    42,    23,   283,   360,   372,   380,
     389,   101,    87,   183,   305,   267,   271,    -1,    -1,    -1,
     221,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    11,    -1,    -1,    14,    -1,    16,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    48,    49,    50,    51,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    59
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    11,    14,    16,    18,    19,    20,    21,    24,    33,
      46,    48,    49,    50,    51,    53,    59,    89,    90,    91,
      92,    93,   125,   127,   128,   131,   132,   133,   134,   141,
     142,   147,   148,   149,   150,   153,   154,   155,   157,     3,
      28,    27,    28,     3,     4,     5,     6,    10,    17,    31,
      32,    38,    39,    41,    55,    60,    64,    78,    79,    82,
      86,    94,    95,   122,   123,     3,    29,    15,    40,    54,
      56,    62,    63,   126,    57,     3,     0,    84,    35,     3,
      86,     3,     3,     3,    86,    86,    86,    86,    86,    86,
      86,    86,    86,     3,    31,    39,    41,   122,   122,   122,
      27,    85,     8,    23,    42,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      96,    71,     3,    60,    50,    51,    92,     3,     5,     6,
       7,    78,   103,   104,   139,   140,    47,    65,    87,   122,
     124,   122,    22,    79,   124,    87,   122,   122,   122,    87,
      86,    86,    87,     3,    97,    95,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,     3,     3,     7,    25,    43,    58,    78,
     103,   129,   130,    71,    71,     3,   151,   152,    86,   135,
       5,     6,    85,   143,    26,    34,   156,    31,    85,    87,
      87,     3,    87,    87,    96,    85,    87,    85,    87,    87,
      96,   122,   122,    65,    85,    98,    99,   129,    86,    71,
      65,    85,     3,     4,    17,    31,    38,    64,   102,   136,
      61,   140,   144,   145,    87,    52,    32,    71,   122,    96,
      87,    96,     3,   122,    96,   122,    96,    96,     3,    37,
     100,   101,   102,     3,    30,   106,   107,   103,   105,   103,
      31,   152,    86,    86,    86,    85,    87,    86,   137,   138,
      96,    85,     7,    86,   103,     3,     3,    87,     3,    87,
       3,     3,    86,    68,    12,    32,    71,    72,    73,    74,
      75,    76,    82,    13,    66,   108,   109,    85,    87,    71,
      79,    87,    87,   102,   139,    85,     3,    36,   146,   140,
     145,   105,     7,   101,   103,   104,    60,    86,   103,   104,
     103,   104,   103,   104,   103,   104,   103,   104,   103,   104,
      32,   102,    30,    45,   110,   111,   103,   103,    87,    85,
      87,   138,    87,    87,    68,    68,   105,    60,    86,    45,
      13,    36,   114,   115,   140,   103,    78,   104,    87,   105,
      13,   102,   112,   113,     5,    44,   116,   117,    87,   112,
       9,    20,    85,    85,     3,   118,   119,   113,     5,    71,
      85,     3,     5,    86,   119,     3,   120,   121,    71,    85,
      87,   103,   121
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1

/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror (pParser, "syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, pParser)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylineno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylineno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse ( SqlParser_c * pParser );
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse ( SqlParser_c * pParser )
#else
int
yyparse (pParser)
     SqlParser_c * pParser ;
#endif
#endif
{
  /* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

    { pParser->PushQuery(); ;}
    break;

  case 18:

    { pParser->PushQuery(); ;}
    break;

  case 19:

    { pParser->PushQuery(); ;}
    break;

  case 22:

    {
			pParser->m_pStmt->m_eStmt = STMT_SELECT;
			pParser->m_pQuery->m_sIndexes.SetBinary ( pParser->m_pBuf+yyvsp[-6].m_iStart, yyvsp[-6].m_iEnd-yyvsp[-6].m_iStart );
		;}
    break;

  case 25:

    { pParser->SetSelect ( yyvsp[0].m_iStart, yyvsp[0].m_iEnd ); pParser->AddItem ( &yyvsp[0], NULL ); ;}
    break;

  case 26:

    { pParser->SetSelect ( yyvsp[0].m_iStart, yyvsp[0].m_iEnd ); pParser->AddItem ( &yyvsp[0], NULL ); pParser->SetNewSyntax(); ;}
    break;

  case 27:

    { pParser->SetSelect ( yyvsp[-2].m_iStart, yyvsp[0].m_iEnd ); pParser->AddItem ( &yyvsp[-2], &yyvsp[0] ); ;}
    break;

  case 28:

    { pParser->SetSelect (yyvsp[-5].m_iStart, yyvsp[0].m_iEnd); pParser->AddItem ( &yyvsp[-3], &yyvsp[0], SPH_AGGR_AVG ); ;}
    break;

  case 29:

    { pParser->SetSelect (yyvsp[-5].m_iStart, yyvsp[0].m_iEnd); pParser->AddItem ( &yyvsp[-3], &yyvsp[0], SPH_AGGR_MAX ); ;}
    break;

  case 30:

    { pParser->SetSelect (yyvsp[-5].m_iStart, yyvsp[0].m_iEnd); pParser->AddItem ( &yyvsp[-3], &yyvsp[0], SPH_AGGR_MIN ); ;}
    break;

  case 31:

    { pParser->SetSelect (yyvsp[-5].m_iStart, yyvsp[0].m_iEnd); pParser->AddItem ( &yyvsp[-3], &yyvsp[0], SPH_AGGR_SUM ); ;}
    break;

  case 32:

    { pParser->SetSelect (yyvsp[0].m_iStart, yyvsp[0].m_iEnd); pParser->AddItem ( &yyvsp[0], NULL ); ;}
    break;

  case 33:

    { pParser->SetSelect ( yyvsp[-5].m_iStart, yyvsp[0].m_iEnd ); if ( !pParser->AddItem ( "count(*)", &yyvsp[0], true ) ) YYERROR; ;}
    break;

  case 34:

    { pParser->SetSelect ( yyvsp[-4].m_iStart, yyvsp[0].m_iEnd ); if ( !pParser->AddItem ( "weight()", &yyvsp[0], true ) ) YYERROR; ;}
    break;

  case 35:

    { pParser->SetSelect ( yyvsp[-4].m_iStart, yyvsp[0].m_iEnd ); if ( !pParser->AddItem ( "weight()", &yyvsp[0], true ) ) YYERROR; ;}
    break;

  case 36:

    {
			if ( !pParser->m_pQuery->m_sGroupDistinct.IsEmpty() )
			{
				yyerror ( pParser, "too many COUNT(DISTINCT) clauses" );
				YYERROR;

			} else
			{
				pParser->SetSelect ( yyvsp[-4].m_iStart, yyvsp[0].m_iEnd );
				pParser->m_pQuery->m_sGroupDistinct = yyvsp[-1].m_sValue;
			}
		;}
    break;

  case 40:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 46:

    {
			if ( !pParser->SetMatch(yyvsp[-1]) )
				YYERROR;
		;}
    break;

  case 47:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-2] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues.Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 48:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-2] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues.Add ( yyvsp[0].m_iValue );
			pFilter->m_bExclude = true;
		;}
    break;

  case 49:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-4] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues = *yyvsp[-1].m_pValues.Ptr();
			pFilter->m_dValues.Sort();
		;}
    break;

  case 50:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-5] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues = *yyvsp[-1].m_pValues.Ptr();
			pFilter->m_bExclude = true;
			pFilter->m_dValues.Sort();
		;}
    break;

  case 51:

    {
			if ( !pParser->AddUservarFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_sValue, false ) )
				YYERROR;
		;}
    break;

  case 52:

    {
			if ( !pParser->AddUservarFilter ( yyvsp[-3].m_sValue, yyvsp[-1].m_sValue, true ) )
				YYERROR;
		;}
    break;

  case 53:

    {
			if ( !pParser->AddUintRangeFilter ( yyvsp[-4].m_sValue, yyvsp[-2].m_iValue, yyvsp[0].m_iValue ) )
				YYERROR;
		;}
    break;

  case 54:

    {
			if ( !pParser->AddUintRangeFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_iValue+1, UINT_MAX ) )
				YYERROR;
		;}
    break;

  case 55:

    {
			if ( !pParser->AddUintRangeFilter ( yyvsp[-2].m_sValue, 0, yyvsp[0].m_iValue-1 ) )
				YYERROR;
		;}
    break;

  case 56:

    {
			if ( !pParser->AddUintRangeFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_iValue, UINT_MAX ) )
				YYERROR;
		;}
    break;

  case 57:

    {
			if ( !pParser->AddUintRangeFilter ( yyvsp[-2].m_sValue, 0, yyvsp[0].m_iValue ) )
				YYERROR;
		;}
    break;

  case 61:

    {
			yyerror ( pParser, "only >=, <=, and BETWEEN floating-point filter types are supported in this version" );
			YYERROR;
		;}
    break;

  case 62:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-4].m_sValue, yyvsp[-2].m_fValue, yyvsp[0].m_fValue ) )
				YYERROR;
		;}
    break;

  case 63:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_fValue, FLT_MAX ) )
				YYERROR;
		;}
    break;

  case 64:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, -FLT_MAX, yyvsp[0].m_fValue ) )
				YYERROR;
		;}
    break;

  case 66:

    {
			if ( !pParser->SetOldSyntax() )
				YYERROR;
		;}
    break;

  case 67:

    {
			yyval.m_sValue = "@count";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 68:

    {
			yyval.m_sValue = "@weight";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 69:

    {
			yyval.m_sValue = "@weight";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 70:

    {
			yyval.m_sValue = "@id";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 71:

    { yyval.m_iInstype = TOK_CONST_INT; yyval.m_iValue = yyvsp[0].m_iValue; ;}
    break;

  case 72:

    { yyval.m_iInstype = TOK_CONST_INT; yyval.m_iValue = -yyvsp[0].m_iValue; ;}
    break;

  case 73:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; ;}
    break;

  case 74:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = -yyvsp[0].m_fValue; ;}
    break;

  case 75:

    {
			assert ( !yyval.m_pValues.Ptr() );
			yyval.m_pValues = new RefcountedVector_c<SphAttr_t> ();
			yyval.m_pValues->Add ( yyvsp[0].m_iValue ); 
		;}
    break;

  case 76:

    {
			yyval.m_pValues->Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 79:

    {
			pParser->m_pQuery->m_eGroupFunc = SPH_GROUPBY_ATTR;
			pParser->m_pQuery->m_sGroupBy = yyvsp[0].m_sValue;
		;}
    break;

  case 82:

    {
			pParser->m_pQuery->m_sSortBy.SetBinary ( pParser->m_pBuf+yyvsp[0].m_iStart, yyvsp[0].m_iEnd-yyvsp[0].m_iStart );
		;}
    break;

  case 85:

    {
			pParser->m_pQuery->m_sOrderBy.SetBinary ( pParser->m_pBuf+yyvsp[0].m_iStart, yyvsp[0].m_iEnd-yyvsp[0].m_iStart );
		;}
    break;

  case 87:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 89:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 90:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 93:

    {
			pParser->m_pQuery->m_iOffset = 0;
			pParser->m_pQuery->m_iLimit = yyvsp[0].m_iValue;
		;}
    break;

  case 94:

    {
			pParser->m_pQuery->m_iOffset = yyvsp[-2].m_iValue;
			pParser->m_pQuery->m_iLimit = yyvsp[0].m_iValue;
		;}
    break;

  case 100:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 101:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 102:

    {
			if ( !pParser->AddOption ( yyvsp[-4], pParser->GetNamedVec ( yyvsp[-1].m_iValue ) ) )
				YYERROR;
			pParser->FreeNamedVec ( yyvsp[-1].m_iValue );
		;}
    break;

  case 103:

    {
			yyval.m_iValue = pParser->AllocNamedVec ();
			pParser->AddConst ( yyval.m_iValue, yyvsp[0] );
		;}
    break;

  case 104:

    {
			pParser->AddConst( yyval.m_iValue, yyvsp[0] );
		;}
    break;

  case 105:

    {
			yyval.m_sValue = yyvsp[-2].m_sValue;
			yyval.m_iValue = yyvsp[0].m_iValue;
		;}
    break;

  case 107:

    { if ( !pParser->SetOldSyntax() ) YYERROR; ;}
    break;

  case 108:

    { if ( !pParser->SetNewSyntax() ) YYERROR; ;}
    break;

  case 112:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 113:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 114:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 115:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 116:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 117:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 118:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 119:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 120:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 121:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 122:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 123:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 124:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 125:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 126:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 127:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 128:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 129:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 130:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 131:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 133:

    { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 134:

    { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 135:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 136:

    { yyval = yyvsp[-5]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 137:

    { yyval = yyvsp[-5]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 141:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_WARNINGS; ;}
    break;

  case 142:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_STATUS; ;}
    break;

  case 143:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_META; ;}
    break;

  case 144:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_iSetValue = yyvsp[0].m_iValue;
		;}
    break;

  case 145:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_sSetValue = yyvsp[0].m_sValue;
		;}
    break;

  case 146:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_bSetNull = true;
		;}
    break;

  case 147:

    {
			pParser->SetStatement ( yyvsp[-4], SET_GLOBAL_UVAR );
			pParser->m_pStmt->m_dSetValues = *yyvsp[-1].m_pValues.Ptr();
		;}
    break;

  case 148:

    {
			pParser->SetStatement ( yyvsp[-2], SET_GLOBAL_SVAR );
			pParser->m_pStmt->m_sSetValue = yyvsp[0].m_sValue;
		;}
    break;

  case 151:

    { yyval.m_iValue = 1; ;}
    break;

  case 152:

    { yyval.m_iValue = 0; ;}
    break;

  case 153:

    {
			yyval.m_iValue = yyvsp[0].m_iValue;
			if ( yyval.m_iValue!=0 && yyval.m_iValue!=1 )
			{
				yyerror ( pParser, "only 0 and 1 could be used as boolean values" );
				YYERROR;
			}
		;}
    break;

  case 154:

    { pParser->m_pStmt->m_eStmt = STMT_COMMIT; ;}
    break;

  case 155:

    { pParser->m_pStmt->m_eStmt = STMT_ROLLBACK; ;}
    break;

  case 156:

    { pParser->m_pStmt->m_eStmt = STMT_BEGIN; ;}
    break;

  case 159:

    {
			// everything else is pushed directly into parser within the rules
			pParser->m_pStmt->m_sIndex = yyvsp[-3].m_sValue;
		;}
    break;

  case 160:

    { pParser->m_pStmt->m_eStmt = STMT_INSERT; ;}
    break;

  case 161:

    { pParser->m_pStmt->m_eStmt = STMT_REPLACE; ;}
    break;

  case 164:

    { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 165:

    { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 168:

    { if ( !pParser->m_pStmt->CheckInsertIntegrity() ) { yyerror ( pParser, "wrong number of values here" ); YYERROR; } ;}
    break;

  case 169:

    { AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); ;}
    break;

  case 170:

    { AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); ;}
    break;

  case 171:

    { yyval.m_iInstype = TOK_CONST_INT; yyval.m_iValue = yyvsp[0].m_iValue; ;}
    break;

  case 172:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; ;}
    break;

  case 173:

    { yyval.m_iInstype = TOK_QUOTED_STRING; yyval.m_sValue = yyvsp[0].m_sValue; ;}
    break;

  case 174:

    {
			pParser->m_pStmt->m_eStmt = STMT_DELETE;
			pParser->m_pStmt->m_sIndex = yyvsp[-4].m_sValue;
			pParser->m_pStmt->m_dDeleteIds.Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 175:

    {
			pParser->m_pStmt->m_eStmt = STMT_DELETE;
			pParser->m_pStmt->m_sIndex = yyvsp[-6].m_sValue;
			for ( int i=0; i<yyvsp[-1].m_pValues.Ptr()->GetLength(); i++ )
				pParser->m_pStmt->m_dDeleteIds.Add ( (*yyvsp[-1].m_pValues.Ptr())[i] );
		;}
    break;

  case 176:

    {
			pParser->m_pStmt->m_eStmt = STMT_CALL;
			pParser->m_pStmt->m_sCallProc = yyvsp[-4].m_sValue;
		;}
    break;

  case 179:

    {
			assert ( pParser->m_pStmt->m_dCallOptNames.GetLength()==1 );
			assert ( pParser->m_pStmt->m_dCallOptValues.GetLength()==1 );
		;}
    break;

  case 181:

    {
			pParser->m_pStmt->m_dCallOptNames.Add ( yyvsp[0].m_sValue );
			AddInsval ( pParser->m_pStmt->m_dCallOptValues, yyvsp[-2] );
		;}
    break;

  case 183:

    { yyval.m_sValue = "limit"; ;}
    break;

  case 184:

    {
			pParser->m_pStmt->m_eStmt = STMT_DESC;
			pParser->m_pStmt->m_sIndex = yyvsp[0].m_sValue;
		;}
    break;

  case 187:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_TABLES; ;}
    break;

  case 188:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_UPDATE;
			tStmt.m_sIndex = yyvsp[-6].m_sValue;	
			tStmt.m_tUpdate.m_dDocids.Add ( (SphDocID_t) yyvsp[0].m_iValue );
			tStmt.m_tUpdate.m_dRowOffset.Add ( 0 );
		;}
    break;

  case 191:

    {
			CSphAttrUpdate & tUpd = pParser->m_pStmt->m_tUpdate;
			CSphColumnInfo & tAttr = tUpd.m_dAttrs.Add();
			tAttr.m_sName = yyvsp[-2].m_sValue;
			tAttr.m_sName.ToLower();
			tAttr.m_eAttrType = SPH_ATTR_INTEGER; // sorry, ints only for now, riding on legacy shit!
			tUpd.m_dPool.Add ( (DWORD) yyvsp[0].m_iValue );
		;}
    break;

  case 192:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 193:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 194:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_CREATE_FUNC;
			tStmt.m_sUdfName = yyvsp[-4].m_sValue;
			tStmt.m_sUdfLib = yyvsp[0].m_sValue;
			tStmt.m_eUdfType = (ESphAttr) yyvsp[-2].m_iValue;
		;}
    break;

  case 195:

    { yyval.m_iValue = SPH_ATTR_INTEGER; ;}
    break;

  case 196:

    { yyval.m_iValue = SPH_ATTR_FLOAT; ;}
    break;

  case 197:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_DROP_FUNC;
			tStmt.m_sUdfName = yyvsp[0].m_sValue;
		;}
    break;


    }

/* Line 991 of yacc.c.  */


  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("syntax error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 4)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      else
		{
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			snprintf (yyp, (int)(yysize - (yyp - yymsg)), ", expecting %s (or %d other tokens)", yytname[yyx], yycount - 1);
			while (*yyp++);
			break;
		      }
		}

	      yyerror (pParser, yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror (pParser, "syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (pParser, "syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab2;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:

  /* Suppress GCC warning that yyerrlab1 is unused when no action
     invokes YYERROR.  */
#if defined (__GNUC_MINOR__) && 2093 <= (__GNUC__ * 1000 + __GNUC_MINOR__)
//  __attribute__ ((__unused__))
#endif


  goto yyerrlab2;


/*---------------------------------------------------------------.
| yyerrlab2 -- pop states until the error token can be shifted.  |
`---------------------------------------------------------------*/
yyerrlab2:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror (pParser, "parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}





#if USE_WINDOWS
#pragma warning(pop)
#endif

