/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "bc.y"

/* bc.y: The grammar for a POSIX compatable bc processor with some
         extensions to the language. */

/*  This file is part of GNU bc.
    Copyright (C) 1991, 1992, 1993, 1994, 1997 Free Software Foundation, Inc.

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License , or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; see the file COPYING.  If not, write to:
      The Free Software Foundation, Inc.
      59 Temple Place, Suite 330
      Boston, MA 02111 USA

    You may contact the author by:
       e-mail:  philnelson@acm.org
      us-mail:  Philip A. Nelson
                Computer Science Department, 9062
                Western Washington University
                Bellingham, WA 98226-9062
       
*************************************************************************/

#include "bcdefs.h"
#include "global.h"
#include "proto.h"


/* Line 268 of yacc.c  */
#line 109 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ENDOFLINE = 258,
     AND = 259,
     OR = 260,
     NOT = 261,
     STRING = 262,
     NAME = 263,
     NUMBER = 264,
     ASSIGN_OP = 265,
     REL_OP = 266,
     INCR_DECR = 267,
     Define = 268,
     Break = 269,
     Quit = 270,
     Length = 271,
     Return = 272,
     For = 273,
     If = 274,
     While = 275,
     Sqrt = 276,
     Else = 277,
     Scale = 278,
     Ibase = 279,
     Obase = 280,
     Auto = 281,
     Read = 282,
     Warranty = 283,
     Halt = 284,
     Last = 285,
     Continue = 286,
     Print = 287,
     Limits = 288,
     UNARY_MINUS = 289,
     HistoryVar = 290
   };
#endif
/* Tokens.  */
#define ENDOFLINE 258
#define AND 259
#define OR 260
#define NOT 261
#define STRING 262
#define NAME 263
#define NUMBER 264
#define ASSIGN_OP 265
#define REL_OP 266
#define INCR_DECR 267
#define Define 268
#define Break 269
#define Quit 270
#define Length 271
#define Return 272
#define For 273
#define If 274
#define While 275
#define Sqrt 276
#define Else 277
#define Scale 278
#define Ibase 279
#define Obase 280
#define Auto 281
#define Read 282
#define Warranty 283
#define Halt 284
#define Last 285
#define Continue 286
#define Print 287
#define Limits 288
#define UNARY_MINUS 289
#define HistoryVar 290




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 40 "bc.y"

	char	 *s_value;
	char	  c_value;
	int	  i_value;
	arg_list *a_value;
       


/* Line 293 of yacc.c  */
#line 224 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 236 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   746

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNRULES -- Number of states.  */
#define YYNSTATES  193

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    40,    42,     2,
      45,    46,    38,    36,    49,    37,     2,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    44,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,    43,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,    41,    48,    52,     2,     2,     2,
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
      35
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    12,    15,    16,    18,
      19,    21,    25,    28,    29,    31,    34,    38,    41,    45,
      47,    50,    52,    54,    56,    58,    60,    62,    64,    66,
      69,    70,    71,    72,    73,    88,    89,    98,    99,   100,
     109,   113,   114,   118,   120,   124,   126,   128,   129,   130,
     135,   136,   149,   150,   152,   153,   157,   161,   163,   167,
     172,   176,   182,   189,   190,   192,   194,   198,   202,   208,
     209,   211,   212,   214,   215,   220,   221,   226,   227,   232,
     235,   239,   243,   247,   251,   255,   259,   263,   267,   271,
     275,   278,   281,   283,   285,   289,   294,   297,   300,   305,
     310,   315,   319,   321,   326,   328,   330,   332,   334,   336,
     337,   339
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    -1,    54,    55,    -1,    57,     3,    -1,
      73,    -1,     1,     3,    -1,    -1,     3,    -1,    -1,    59,
      -1,    57,    44,    59,    -1,    57,    44,    -1,    -1,    59,
      -1,    58,     3,    -1,    58,     3,    59,    -1,    58,    44,
      -1,    58,    44,    60,    -1,    60,    -1,     1,    60,    -1,
      28,    -1,    33,    -1,    82,    -1,     7,    -1,    14,    -1,
      31,    -1,    15,    -1,    29,    -1,    17,    81,    -1,    -1,
      -1,    -1,    -1,    18,    61,    45,    80,    44,    62,    80,
      44,    63,    80,    46,    64,    56,    60,    -1,    -1,    19,
      45,    82,    46,    65,    56,    60,    71,    -1,    -1,    -1,
      20,    66,    45,    82,    67,    46,    56,    60,    -1,    47,
      58,    48,    -1,    -1,    32,    68,    69,    -1,    70,    -1,
      70,    49,    69,    -1,     7,    -1,    82,    -1,    -1,    -1,
      22,    72,    56,    60,    -1,    -1,    13,     8,    45,    75,
      46,    56,    47,    87,    76,    74,    58,    48,    -1,    -1,
      77,    -1,    -1,    26,    77,     3,    -1,    26,    77,    44,
      -1,     8,    -1,     8,    50,    51,    -1,    38,     8,    50,
      51,    -1,    77,    49,     8,    -1,    77,    49,     8,    50,
      51,    -1,    77,    49,    38,     8,    50,    51,    -1,    -1,
      79,    -1,    82,    -1,     8,    50,    51,    -1,    79,    49,
      82,    -1,    79,    49,     8,    50,    51,    -1,    -1,    82,
      -1,    -1,    82,    -1,    -1,    86,    10,    83,    82,    -1,
      -1,    82,     4,    84,    82,    -1,    -1,    82,     5,    85,
      82,    -1,     6,    82,    -1,    82,    11,    82,    -1,    82,
      36,    82,    -1,    82,    37,    82,    -1,    82,    38,    82,
      -1,    82,    39,    82,    -1,    82,    40,    82,    -1,    82,
      43,    82,    -1,    82,    52,    82,    -1,    82,    42,    82,
      -1,    82,    41,    82,    -1,    52,    82,    -1,    37,    82,
      -1,    86,    -1,     9,    -1,    45,    82,    46,    -1,     8,
      45,    78,    46,    -1,    12,    86,    -1,    86,    12,    -1,
      16,    45,    82,    46,    -1,    21,    45,    82,    46,    -1,
      23,    45,    82,    46,    -1,    27,    45,    46,    -1,     8,
      -1,     8,    50,    82,    51,    -1,    24,    -1,    25,    -1,
      23,    -1,    35,    -1,    30,    -1,    -1,     3,    -1,    87,
       3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   108,   108,   116,   118,   120,   122,   128,   129,   133,
     134,   135,   136,   139,   140,   141,   142,   143,   144,   146,
     147,   150,   152,   154,   163,   170,   180,   191,   193,   195,
     198,   203,   213,   224,   197,   242,   241,   255,   261,   254,
     273,   276,   275,   279,   280,   282,   288,   291,   293,   292,
     304,   302,   323,   324,   327,   328,   330,   333,   335,   337,
     339,   341,   343,   347,   348,   350,   355,   361,   366,   383,
     387,   390,   394,   403,   402,   429,   428,   442,   441,   457,
     463,   491,   496,   501,   506,   511,   516,   521,   526,   531,
     536,   541,   546,   555,   571,   573,   589,   608,   631,   633,
     635,   637,   643,   645,   650,   652,   654,   656,   660,   667,
     668,   669
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENDOFLINE", "AND", "OR", "NOT",
  "STRING", "NAME", "NUMBER", "ASSIGN_OP", "REL_OP", "INCR_DECR", "Define",
  "Break", "Quit", "Length", "Return", "For", "If", "While", "Sqrt",
  "Else", "Scale", "Ibase", "Obase", "Auto", "Read", "Warranty", "Halt",
  "Last", "Continue", "Print", "Limits", "UNARY_MINUS", "HistoryVar",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'|'", "'&'", "'^'", "';'", "'('",
  "')'", "'{'", "'}'", "','", "'['", "']'", "'~'", "$accept", "program",
  "input_item", "opt_newline", "semicolon_list", "statement_list",
  "statement_or_error", "statement", "$@1", "$@2", "@3", "$@4", "$@5",
  "$@6", "$@7", "$@8", "print_list", "print_element", "opt_else", "$@9",
  "function", "$@10", "opt_parameter_list", "opt_auto_define_list",
  "define_list", "opt_argument_list", "argument_list", "opt_expression",
  "return_expression", "expression", "$@11", "$@12", "$@13",
  "named_expression", "required_eol", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,    43,    45,    42,    47,
      37,   124,    38,    94,    59,    40,    41,   123,   125,    44,
      91,    93,   126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    54,    55,    55,    55,    56,    56,    57,
      57,    57,    57,    58,    58,    58,    58,    58,    58,    59,
      59,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      61,    62,    63,    64,    60,    65,    60,    66,    67,    60,
      60,    68,    60,    69,    69,    70,    70,    71,    72,    71,
      74,    73,    75,    75,    76,    76,    76,    77,    77,    77,
      77,    77,    77,    78,    78,    79,    79,    79,    79,    80,
      80,    81,    81,    83,    82,    84,    82,    85,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    86,    86,    86,    86,    86,    86,    86,    87,
      87,    87
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     2,     0,     1,     0,
       1,     3,     2,     0,     1,     2,     3,     2,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       0,     0,     0,     0,    14,     0,     8,     0,     0,     8,
       3,     0,     3,     1,     3,     1,     1,     0,     0,     4,
       0,    12,     0,     1,     0,     3,     3,     1,     3,     4,
       3,     5,     6,     0,     1,     1,     3,     3,     5,     0,
       1,     0,     1,     0,     4,     0,     4,     0,     4,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     1,     1,     3,     4,     2,     2,     4,     4,
       4,     3,     1,     4,     1,     1,     1,     1,     1,     0,
       1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,    24,   102,    93,     0,     0,
      25,    27,     0,    71,    30,     0,    37,     0,   106,   104,
     105,     0,    21,    28,   108,    26,    41,    22,   107,     0,
       0,     0,     0,     3,     0,    10,    19,     5,    23,    92,
       6,    20,    79,    63,     0,   102,   106,    96,     0,     0,
      29,    72,     0,     0,     0,     0,     0,     0,     0,    91,
       0,     0,     0,    14,    90,     4,     0,    75,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
      97,   102,     0,    64,    65,     0,    52,     0,    69,     0,
       0,     0,     0,   101,    45,    42,    43,    46,    94,     0,
      17,    40,    11,     0,     0,    80,    81,    82,    83,    84,
      85,    89,    88,    86,    87,     0,     0,    95,     0,   103,
      57,     0,     0,    53,    98,     0,    70,    35,    38,    99,
     100,     0,    16,    18,    76,    78,    74,    66,   102,    67,
       0,     0,     7,     0,    31,     7,     0,    44,     0,    58,
       0,     8,     0,    60,     0,    69,     0,     7,    68,    59,
     109,     0,     0,     0,    47,     0,   110,    54,    61,     0,
      32,    48,    36,    39,   111,     0,    50,    62,    69,     7,
       0,     0,     0,     0,    55,    56,     0,    33,    49,    51,
       7,     0,    34
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    33,   152,    34,    62,    63,    36,    52,   155,
     178,   190,   145,    54,   146,    58,    95,    96,   172,   179,
      37,   181,   122,   176,   123,    82,    83,   125,    50,    38,
     115,   103,   104,    39,   167
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -131
static const yytype_int16 yypact[] =
{
    -131,   178,  -131,   320,   634,  -131,   -39,  -131,   338,     5,
    -131,  -131,   -40,   634,  -131,   -23,  -131,   -19,   -12,  -131,
    -131,    19,  -131,  -131,  -131,  -131,  -131,  -131,  -131,   634,
     634,   104,   634,  -131,     1,  -131,  -131,  -131,   469,    13,
    -131,  -131,   131,   664,   634,    36,  -131,  -131,    46,   634,
    -131,   469,    47,   634,    48,   634,   634,    49,   540,    44,
      42,   508,    15,  -131,    44,  -131,   273,  -131,  -131,   634,
     634,   634,   634,   634,   634,   634,   634,   634,   634,  -131,
    -131,   -29,    52,    51,   469,   355,     6,   372,   634,   412,
     634,   429,   452,  -131,  -131,  -131,    55,   469,  -131,   225,
     508,  -131,  -131,   634,   634,   389,   347,   347,   -35,   -35,
     -35,   347,   -35,   -35,   469,   634,   570,  -131,   694,  -131,
      56,    93,    62,    60,  -131,    82,   469,  -131,   469,  -131,
    -131,   540,  -131,  -131,   131,    -2,   389,  -131,   -26,   469,
      87,    90,   140,    24,  -131,   140,    98,  -131,   602,  -131,
      94,  -131,    99,   100,   147,   634,   508,   140,  -131,  -131,
     154,   107,   109,   116,   139,   508,  -131,     4,  -131,   112,
    -131,  -131,  -131,  -131,  -131,     6,  -131,  -131,   634,   140,
       7,   104,   118,   508,  -131,  -131,    17,  -131,  -131,  -131,
     140,   508,  -131
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -131,  -131,  -131,  -130,  -131,   -16,     0,    -3,  -131,  -131,
    -131,  -131,  -131,  -131,  -131,  -131,    35,  -131,  -131,  -131,
    -131,  -131,  -131,  -131,    14,  -131,  -131,   -88,  -131,    -1,
    -131,  -131,  -131,   167,  -131
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -16
static const yytype_int16 yytable[] =
{
      41,    35,    67,    42,    65,    49,    43,   174,    77,    69,
     184,    44,    51,    48,   120,   156,    43,    78,    99,    43,
      99,   116,    53,    79,   148,    80,    55,   165,    59,    60,
     175,    64,   153,    56,    70,    71,    72,    73,    74,    75,
      76,    77,    84,    85,   121,    66,    67,    68,    87,   183,
      78,   185,    89,    69,    91,    92,   143,    97,    41,   100,
     191,   100,   154,   101,    57,   189,   102,   163,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    70,    71,
      72,    73,    74,    75,    76,    77,    44,   126,    98,   128,
     182,    86,    88,    90,    78,    93,    78,   133,   117,   132,
     118,   141,   134,   135,   131,    61,   140,   -13,   142,   143,
       4,     5,     6,     7,   136,    85,     8,   139,    10,    11,
      12,    13,    14,    15,    16,    17,   144,    18,    19,    20,
      97,    21,    22,    23,    24,    25,    26,    27,   149,    28,
     150,    29,    69,   151,   157,   159,   160,    85,   -13,    30,
     161,    31,   -13,   164,   126,   162,    32,   166,   168,   169,
     170,   171,   173,   177,   187,   186,   147,    70,    71,    72,
      73,    74,    75,    76,    77,    47,     0,   126,     2,     3,
     188,    -9,     0,    78,     4,     5,     6,     7,   192,   180,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
       0,    18,    19,    20,     0,    21,    22,    23,    24,    25,
      26,    27,     0,    28,     0,    29,     0,     0,     0,     0,
       0,     0,    -9,    30,     0,    31,    61,     0,   -15,     0,
      32,     4,     5,     6,     7,     0,     0,     8,     0,    10,
      11,    12,    13,    14,    15,    16,    17,     0,    18,    19,
      20,     0,    21,    22,    23,    24,    25,    26,    27,     0,
      28,     0,    29,     0,     0,     0,     0,     0,     0,   -15,
      30,     0,    31,   -15,    61,     0,   -12,    32,     0,     4,
       5,     6,     7,     0,     0,     8,     0,    10,    11,    12,
      13,    14,    15,    16,    17,     0,    18,    19,    20,     0,
      21,    22,    23,    24,    25,    26,    27,     0,    28,     0,
      29,     0,     0,     0,     0,     0,     0,   -12,    30,     0,
      31,     0,     0,    40,     0,    32,     4,     5,     6,     7,
       0,     0,     8,     0,    10,    11,    12,    13,    14,    15,
      16,    17,     0,    18,    19,    20,    45,    21,    22,    23,
      24,    25,    26,    27,     0,    28,     0,    29,     0,    67,
      68,    46,    19,    20,     0,    30,    69,    31,    24,     0,
       0,     0,    32,    28,     0,     0,    67,    68,     0,     0,
       0,     0,     0,    69,     0,    72,    73,    74,     0,    76,
      77,    70,    71,    72,    73,    74,    75,    76,    77,    78,
       0,     0,     0,     0,     0,     0,   119,    78,    70,    71,
      72,    73,    74,    75,    76,    77,    67,    68,   124,     0,
       0,     0,     0,    69,    78,    70,    71,    72,    73,    74,
      75,    76,    77,    67,    68,     0,     0,     0,     0,     0,
      69,    78,     0,     0,     0,     0,     0,     0,    70,    71,
      72,    73,    74,    75,    76,    77,    67,    68,   127,     0,
       0,     0,     0,    69,    78,    70,    71,    72,    73,    74,
      75,    76,    77,    67,    68,   129,     0,     0,     0,     0,
      69,    78,     0,     0,     0,     0,     0,     0,    70,    71,
      72,    73,    74,    75,    76,    77,     0,     0,   130,     0,
       0,     0,     0,     0,    78,    70,    71,    72,    73,    74,
      75,    76,    77,     0,     4,     5,     6,     7,     0,     0,
       8,    78,    10,    11,    12,    13,    14,    15,    16,    17,
       0,    18,    19,    20,     0,    21,    22,    23,    24,    25,
      26,    27,     0,    28,     0,    29,     4,    94,     6,     7,
       0,     0,     8,    30,     0,    31,    12,     0,     0,     0,
      32,    17,     0,    18,    19,    20,     0,    21,     0,     0,
      24,     0,     0,     0,     0,    28,     4,    29,     6,     7,
       0,     0,     8,     0,     0,    30,    12,     0,     0,     0,
       0,    17,    32,    18,    19,    20,     0,    21,     0,     0,
      24,     0,     0,     0,     0,    28,     0,    29,     4,     0,
       6,     7,     0,     0,     8,    30,     0,     0,    12,     0,
       0,   137,    32,    17,     0,    18,    19,    20,     0,    21,
       0,     0,    24,     0,     0,     0,     0,    28,     0,    29,
       4,     0,     6,     7,     0,     0,     8,    30,     0,     0,
      12,     0,     0,   158,    32,    17,     0,    18,    19,    20,
       0,    21,     0,     0,    24,     0,     0,     0,     0,    28,
       4,    29,    81,     7,     0,     0,     8,     0,     0,    30,
      12,     0,     0,     0,     0,    17,    32,    18,    19,    20,
       0,    21,     0,     0,    24,     0,     0,     0,     0,    28,
       4,    29,   138,     7,     0,     0,     8,     0,     0,    30,
      12,     0,     0,     0,     0,    17,    32,    18,    19,    20,
       0,    21,     0,     0,    24,     0,     0,     0,     0,    28,
       0,    29,     0,     0,     0,     0,     0,     0,     0,    30,
       0,     0,     0,     0,     0,     0,    32
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-131))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       3,     1,     4,     4,     3,    45,    45,     3,    43,    11,
       3,    50,    13,     8,     8,   145,    45,    52,     3,    45,
       3,    50,    45,    10,    50,    12,    45,   157,    29,    30,
      26,    32,     8,    45,    36,    37,    38,    39,    40,    41,
      42,    43,    43,    44,    38,    44,     4,     5,    49,   179,
      52,    44,    53,    11,    55,    56,    49,    58,    61,    44,
     190,    44,    38,    48,    45,    48,    66,   155,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    36,    37,
      38,    39,    40,    41,    42,    43,    50,    88,    46,    90,
     178,    45,    45,    45,    52,    46,    52,   100,    46,    99,
      49,     8,   103,   104,    49,     1,    50,     3,    46,    49,
       6,     7,     8,     9,   115,   116,    12,   118,    14,    15,
      16,    17,    18,    19,    20,    21,    44,    23,    24,    25,
     131,    27,    28,    29,    30,    31,    32,    33,    51,    35,
      50,    37,    11,     3,    46,    51,    47,   148,    44,    45,
      50,    47,    48,   156,   155,     8,    52,     3,    51,    50,
      44,    22,   165,    51,    46,   181,   131,    36,    37,    38,
      39,    40,    41,    42,    43,     8,    -1,   178,     0,     1,
     183,     3,    -1,    52,     6,     7,     8,     9,   191,   175,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    -1,    47,     1,    -1,     3,    -1,
      52,     6,     7,     8,     9,    -1,    -1,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    -1,
      35,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    -1,    47,    48,     1,    -1,     3,    52,    -1,     6,
       7,     8,     9,    -1,    -1,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      47,    -1,    -1,     3,    -1,    52,     6,     7,     8,     9,
      -1,    -1,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,     8,    27,    28,    29,
      30,    31,    32,    33,    -1,    35,    -1,    37,    -1,     4,
       5,    23,    24,    25,    -1,    45,    11,    47,    30,    -1,
      -1,    -1,    52,    35,    -1,    -1,     4,     5,    -1,    -1,
      -1,    -1,    -1,    11,    -1,    38,    39,    40,    -1,    42,
      43,    36,    37,    38,    39,    40,    41,    42,    43,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    36,    37,
      38,    39,    40,    41,    42,    43,     4,     5,    46,    -1,
      -1,    -1,    -1,    11,    52,    36,    37,    38,    39,    40,
      41,    42,    43,     4,     5,    -1,    -1,    -1,    -1,    -1,
      11,    52,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,     4,     5,    46,    -1,
      -1,    -1,    -1,    11,    52,    36,    37,    38,    39,    40,
      41,    42,    43,     4,     5,    46,    -1,    -1,    -1,    -1,
      11,    52,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    52,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,     6,     7,     8,     9,    -1,    -1,
      12,    52,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    -1,    37,     6,     7,     8,     9,
      -1,    -1,    12,    45,    -1,    47,    16,    -1,    -1,    -1,
      52,    21,    -1,    23,    24,    25,    -1,    27,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    35,     6,    37,     8,     9,
      -1,    -1,    12,    -1,    -1,    45,    16,    -1,    -1,    -1,
      -1,    21,    52,    23,    24,    25,    -1,    27,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    35,    -1,    37,     6,    -1,
       8,     9,    -1,    -1,    12,    45,    -1,    -1,    16,    -1,
      -1,    51,    52,    21,    -1,    23,    24,    25,    -1,    27,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    35,    -1,    37,
       6,    -1,     8,     9,    -1,    -1,    12,    45,    -1,    -1,
      16,    -1,    -1,    51,    52,    21,    -1,    23,    24,    25,
      -1,    27,    -1,    -1,    30,    -1,    -1,    -1,    -1,    35,
       6,    37,     8,     9,    -1,    -1,    12,    -1,    -1,    45,
      16,    -1,    -1,    -1,    -1,    21,    52,    23,    24,    25,
      -1,    27,    -1,    -1,    30,    -1,    -1,    -1,    -1,    35,
       6,    37,     8,     9,    -1,    -1,    12,    -1,    -1,    45,
      16,    -1,    -1,    -1,    -1,    21,    52,    23,    24,    25,
      -1,    27,    -1,    -1,    30,    -1,    -1,    -1,    -1,    35,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    54,     0,     1,     6,     7,     8,     9,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    23,    24,
      25,    27,    28,    29,    30,    31,    32,    33,    35,    37,
      45,    47,    52,    55,    57,    59,    60,    73,    82,    86,
       3,    60,    82,    45,    50,     8,    23,    86,     8,    45,
      81,    82,    61,    45,    66,    45,    45,    45,    68,    82,
      82,     1,    58,    59,    82,     3,    44,     4,     5,    11,
      36,    37,    38,    39,    40,    41,    42,    43,    52,    10,
      12,     8,    78,    79,    82,    82,    45,    82,    45,    82,
      45,    82,    82,    46,     7,    69,    70,    82,    46,     3,
      44,    48,    59,    84,    85,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    83,    50,    46,    49,    51,
       8,    38,    75,    77,    46,    80,    82,    46,    82,    46,
      46,    49,    59,    60,    82,    82,    82,    51,     8,    82,
      50,     8,    46,    49,    44,    65,    67,    69,    50,    51,
      50,     3,    56,     8,    38,    62,    56,    46,    51,    51,
      47,    50,     8,    80,    60,    56,     3,    87,    51,    50,
      44,    22,    71,    60,     3,    26,    76,    51,    63,    72,
      77,    74,    80,    56,     3,    44,    58,    46,    60,    48,
      64,    56,    60
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
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
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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

/* Line 1806 of yacc.c  */
#line 108 "bc.y"
    {
			      (yyval.i_value) = 0;
			      if (interactive && !quiet)
				{
				  show_bc_version ();
				  welcome ();
				}
			    }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 119 "bc.y"
    { run_code (); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 121 "bc.y"
    { run_code (); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 123 "bc.y"
    {
			      yyerrok;
			      init_gen ();
			    }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 130 "bc.y"
    { warn ("newline not allowed"); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 133 "bc.y"
    { (yyval.i_value) = 0; }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 139 "bc.y"
    { (yyval.i_value) = 0; }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 148 "bc.y"
    { (yyval.i_value) = (yyvsp[(2) - (2)].i_value); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 151 "bc.y"
    { warranty (""); }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 153 "bc.y"
    { limits (); }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 155 "bc.y"
    {
			      if ((yyvsp[(1) - (1)].i_value) & 2)
				warn ("comparison in expression");
			      if ((yyvsp[(1) - (1)].i_value) & 1)
				generate ("W");
			      else 
				generate ("p");
			    }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 164 "bc.y"
    {
			      (yyval.i_value) = 0;
			      generate ("w");
			      generate ((yyvsp[(1) - (1)].s_value));
			      free ((yyvsp[(1) - (1)].s_value));
			    }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 171 "bc.y"
    {
			      if (break_label == 0)
				yyerror ("Break outside a for/while");
			      else
				{
				  sprintf (genstr, "J%1d:", break_label);
				  generate (genstr);
				}
			    }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 181 "bc.y"
    {
			      warn ("Continue statement");
			      if (continue_label == 0)
				yyerror ("Continue outside a for");
			      else
				{
				  sprintf (genstr, "J%1d:", continue_label);
				  generate (genstr);
				}
			    }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 192 "bc.y"
    { exit (0); }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 194 "bc.y"
    { generate ("h"); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 196 "bc.y"
    { generate ("R"); }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 198 "bc.y"
    {
			      (yyvsp[(1) - (1)].i_value) = break_label; 
			      break_label = next_label++;
			    }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 203 "bc.y"
    {
			      if ((yyvsp[(4) - (5)].i_value) & 2)
				warn ("Comparison in first for expression");
			      if ((yyvsp[(4) - (5)].i_value) >= 0)
				generate ("p");
			      (yyvsp[(4) - (5)].i_value) = next_label++;
			      sprintf (genstr, "N%1d:", (yyvsp[(4) - (5)].i_value));
			      generate (genstr);
			    }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 213 "bc.y"
    {
			      if ((yyvsp[(7) - (8)].i_value) < 0) generate ("1");
			      (yyvsp[(7) - (8)].i_value) = next_label++;
			      sprintf (genstr, "B%1d:J%1d:", (yyvsp[(7) - (8)].i_value), break_label);
			      generate (genstr);
			      (yyval.i_value) = continue_label;
			      continue_label = next_label++;
			      sprintf (genstr, "N%1d:", continue_label);
			      generate (genstr);
			    }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 224 "bc.y"
    {
			      if ((yyvsp[(10) - (11)].i_value) & 2 )
				warn ("Comparison in third for expression");
			      if ((yyvsp[(10) - (11)].i_value) & 16)
				sprintf (genstr, "J%1d:N%1d:", (yyvsp[(4) - (11)].i_value), (yyvsp[(7) - (11)].i_value));
			      else
				sprintf (genstr, "pJ%1d:N%1d:", (yyvsp[(4) - (11)].i_value), (yyvsp[(7) - (11)].i_value));
			      generate (genstr);
			    }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 234 "bc.y"
    {
			      sprintf (genstr, "J%1d:N%1d:",
				       continue_label, break_label);
			      generate (genstr);
			      break_label = (yyvsp[(1) - (14)].i_value);
			      continue_label = (yyvsp[(9) - (14)].i_value);
			    }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 242 "bc.y"
    {
			      (yyvsp[(3) - (4)].i_value) = if_label;
			      if_label = next_label++;
			      sprintf (genstr, "Z%1d:", if_label);
			      generate (genstr);
			    }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 249 "bc.y"
    {
			      sprintf (genstr, "N%1d:", if_label); 
			      generate (genstr);
			      if_label = (yyvsp[(3) - (8)].i_value);
			    }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 255 "bc.y"
    {
			      (yyvsp[(1) - (1)].i_value) = next_label++;
			      sprintf (genstr, "N%1d:", (yyvsp[(1) - (1)].i_value));
			      generate (genstr);
			    }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 261 "bc.y"
    {
			      (yyvsp[(4) - (4)].i_value) = break_label; 
			      break_label = next_label++;
			      sprintf (genstr, "Z%1d:", break_label);
			      generate (genstr);
			    }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 268 "bc.y"
    {
			      sprintf (genstr, "J%1d:N%1d:", (yyvsp[(1) - (8)].i_value), break_label);
			      generate (genstr);
			      break_label = (yyvsp[(4) - (8)].i_value);
			    }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 274 "bc.y"
    { (yyval.i_value) = 0; }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 276 "bc.y"
    {  warn ("print statement"); }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 283 "bc.y"
    {
			      generate ("O");
			      generate ((yyvsp[(1) - (1)].s_value));
			      free ((yyvsp[(1) - (1)].s_value));
			    }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 289 "bc.y"
    { generate ("P"); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 293 "bc.y"
    {
			      warn ("else clause in if statement");
			      (yyvsp[(1) - (1)].i_value) = next_label++;
			      sprintf (genstr, "J%d:N%1d:", (yyvsp[(1) - (1)].i_value), if_label); 
			      generate (genstr);
			      if_label = (yyvsp[(1) - (1)].i_value);
			    }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 304 "bc.y"
    {
			      /* Check auto list against parameter list? */
			      check_params ((yyvsp[(4) - (9)].a_value),(yyvsp[(9) - (9)].a_value));
			      sprintf (genstr, "F%d,%s.%s[",
				       lookup((yyvsp[(2) - (9)].s_value),FUNCTDEF), 
				       arg_str ((yyvsp[(4) - (9)].a_value)), arg_str ((yyvsp[(9) - (9)].a_value)));
			      generate (genstr);
			      free_args ((yyvsp[(4) - (9)].a_value));
			      free_args ((yyvsp[(9) - (9)].a_value));
			      (yyvsp[(1) - (9)].i_value) = next_label;
			      next_label = 1;
			    }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 317 "bc.y"
    {
			      generate ("0R]");
			      next_label = (yyvsp[(1) - (12)].i_value);
			    }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 323 "bc.y"
    { (yyval.a_value) = NULL; }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 327 "bc.y"
    { (yyval.a_value) = NULL; }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 329 "bc.y"
    { (yyval.a_value) = (yyvsp[(2) - (3)].a_value); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 331 "bc.y"
    { (yyval.a_value) = (yyvsp[(2) - (3)].a_value); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 334 "bc.y"
    { (yyval.a_value) = nextarg (NULL, lookup ((yyvsp[(1) - (1)].s_value),SIMPLE), FALSE);}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 336 "bc.y"
    { (yyval.a_value) = nextarg (NULL, lookup ((yyvsp[(1) - (3)].s_value),ARRAY), FALSE); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 338 "bc.y"
    { (yyval.a_value) = nextarg (NULL, lookup ((yyvsp[(2) - (4)].s_value),ARRAY), TRUE); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 340 "bc.y"
    { (yyval.a_value) = nextarg ((yyvsp[(1) - (3)].a_value), lookup ((yyvsp[(3) - (3)].s_value),SIMPLE), FALSE); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 342 "bc.y"
    { (yyval.a_value) = nextarg ((yyvsp[(1) - (5)].a_value), lookup ((yyvsp[(3) - (5)].s_value),ARRAY), FALSE); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 344 "bc.y"
    { (yyval.a_value) = nextarg ((yyvsp[(1) - (6)].a_value), lookup ((yyvsp[(4) - (6)].s_value),ARRAY), TRUE); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 347 "bc.y"
    { (yyval.a_value) = NULL; }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 351 "bc.y"
    {
			      if ((yyvsp[(1) - (1)].i_value) & 2) warn ("comparison in argument");
			      (yyval.a_value) = nextarg (NULL,0,FALSE);
			    }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 356 "bc.y"
    {
			      sprintf (genstr, "K%d:", -lookup ((yyvsp[(1) - (3)].s_value),ARRAY));
			      generate (genstr);
			      (yyval.a_value) = nextarg (NULL,1,FALSE);
			    }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 362 "bc.y"
    {
			      if ((yyvsp[(3) - (3)].i_value) & 2) warn ("comparison in argument");
			      (yyval.a_value) = nextarg ((yyvsp[(1) - (3)].a_value),0,FALSE);
			    }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 367 "bc.y"
    {
			      sprintf (genstr, "K%d:", -lookup ((yyvsp[(3) - (5)].s_value),ARRAY));
			      generate (genstr);
			      (yyval.a_value) = nextarg ((yyvsp[(1) - (5)].a_value),1,FALSE);
			    }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 383 "bc.y"
    {
			      (yyval.i_value) = 16;
			      warn ("Missing expression in for statement");
			    }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 390 "bc.y"
    {
			      (yyval.i_value) = 0;
			      generate ("0");
			    }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 395 "bc.y"
    {
			      if ((yyvsp[(1) - (1)].i_value) & 2)
				warn ("comparison in return expresion");
			      if (!((yyvsp[(1) - (1)].i_value) & 4))
				warn ("return expression requires parenthesis");
			    }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 403 "bc.y"
    {
			      if ((yyvsp[(2) - (2)].c_value) != '=')
				{
				  if ((yyvsp[(1) - (2)].i_value) < 0)
				    sprintf (genstr, "DL%d:", -(yyvsp[(1) - (2)].i_value));
				  else
				    sprintf (genstr, "l%d:", (yyvsp[(1) - (2)].i_value));
				  generate (genstr);
				}
			    }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 414 "bc.y"
    {
			      if ((yyvsp[(4) - (4)].i_value) & 2) warn("comparison in assignment");
			      if ((yyvsp[(2) - (4)].c_value) != '=')
				{
				  sprintf (genstr, "%c", (yyvsp[(2) - (4)].c_value));
				  generate (genstr);
				}
			      if ((yyvsp[(1) - (4)].i_value) < 0)
				sprintf (genstr, "S%d:", -(yyvsp[(1) - (4)].i_value));
			      else
				sprintf (genstr, "s%d:", (yyvsp[(1) - (4)].i_value));
			      generate (genstr);
			      (yyval.i_value) = 0;
			    }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 429 "bc.y"
    {
			      warn("&& operator");
			      (yyvsp[(2) - (2)].i_value) = next_label++;
			      sprintf (genstr, "DZ%d:p", (yyvsp[(2) - (2)].i_value));
			      generate (genstr);
			    }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 436 "bc.y"
    {
			      sprintf (genstr, "DZ%d:p1N%d:", (yyvsp[(2) - (4)].i_value), (yyvsp[(2) - (4)].i_value));
			      generate (genstr);
			      (yyval.i_value) = ((yyvsp[(1) - (4)].i_value) | (yyvsp[(4) - (4)].i_value)) & ~4;
			    }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 442 "bc.y"
    {
			      warn("|| operator");
			      (yyvsp[(2) - (2)].i_value) = next_label++;
			      sprintf (genstr, "B%d:", (yyvsp[(2) - (2)].i_value));
			      generate (genstr);
			    }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 449 "bc.y"
    {
			      int tmplab;
			      tmplab = next_label++;
			      sprintf (genstr, "B%d:0J%d:N%d:1N%d:",
				       (yyvsp[(2) - (4)].i_value), tmplab, (yyvsp[(2) - (4)].i_value), tmplab);
			      generate (genstr);
			      (yyval.i_value) = ((yyvsp[(1) - (4)].i_value) | (yyvsp[(4) - (4)].i_value)) & ~4;
			    }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 458 "bc.y"
    {
			      (yyval.i_value) = (yyvsp[(2) - (2)].i_value) & ~4;
			      warn("! operator");
			      generate ("!");
			    }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 464 "bc.y"
    {
			      (yyval.i_value) = 3;
			      switch (*((yyvsp[(2) - (3)].s_value)))
				{
				case '=':
				  generate ("=");
				  break;

				case '!':
				  generate ("#");
				  break;

				case '<':
				  if ((yyvsp[(2) - (3)].s_value)[1] == '=')
				    generate ("{");
				  else
				    generate ("<");
				  break;

				case '>':
				  if ((yyvsp[(2) - (3)].s_value)[1] == '=')
				    generate ("}");
				  else
				    generate (">");
				  break;
				}
			    }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 492 "bc.y"
    {
			      generate ("+");
			      (yyval.i_value) = ((yyvsp[(1) - (3)].i_value) | (yyvsp[(3) - (3)].i_value)) & ~4;
			    }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 497 "bc.y"
    {
			      generate ("-");
			      (yyval.i_value) = ((yyvsp[(1) - (3)].i_value) | (yyvsp[(3) - (3)].i_value)) & ~4;
			    }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 502 "bc.y"
    {
			      generate ("*");
			      (yyval.i_value) = ((yyvsp[(1) - (3)].i_value) | (yyvsp[(3) - (3)].i_value)) & ~4;
			    }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 507 "bc.y"
    {
			      generate ("/");
			      (yyval.i_value) = ((yyvsp[(1) - (3)].i_value) | (yyvsp[(3) - (3)].i_value)) & ~4;
			    }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 512 "bc.y"
    {
			      generate ("%");
			      (yyval.i_value) = ((yyvsp[(1) - (3)].i_value) | (yyvsp[(3) - (3)].i_value)) & ~4;
			    }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 517 "bc.y"
    {
			      generate ("^");
			      (yyval.i_value) = ((yyvsp[(1) - (3)].i_value) | (yyvsp[(3) - (3)].i_value)) & ~4;
			    }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 522 "bc.y"
    {
			      generate ("~");
			      (yyval.i_value) = ((yyvsp[(1) - (3)].i_value) | (yyvsp[(3) - (3)].i_value)) & ~4;
			    }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 527 "bc.y"
    {
			      generate ("a");
			      (yyval.i_value) = ((yyvsp[(1) - (3)].i_value) | (yyvsp[(3) - (3)].i_value)) & ~4;
			    }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 532 "bc.y"
    {
			      generate ("o");
			      (yyval.i_value) = ((yyvsp[(1) - (3)].i_value) | (yyvsp[(3) - (3)].i_value)) & ~4;
			    }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 537 "bc.y"
    {
			      generate ("z");
			      (yyval.i_value) = (yyvsp[(2) - (2)].i_value) & ~4;
			    }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 542 "bc.y"
    {
			      generate ("n");
			      (yyval.i_value) = (yyvsp[(2) - (2)].i_value) & ~4;
			    }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 547 "bc.y"
    {
			      (yyval.i_value) = 1;
			      if ((yyvsp[(1) - (1)].i_value) < 0)
				sprintf (genstr, "L%d:", -(yyvsp[(1) - (1)].i_value));
			      else
				sprintf (genstr, "l%d:", (yyvsp[(1) - (1)].i_value));
			      generate (genstr);
			    }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 556 "bc.y"
    {
			      int len = strlen((yyvsp[(1) - (1)].s_value));
			      (yyval.i_value) = 1;
			      if (len == 1 && *(yyvsp[(1) - (1)].s_value) == '0')
				generate ("0");
			      else if (len == 1 && *(yyvsp[(1) - (1)].s_value) == '1')
				generate ("1");
			      else
				{
				  generate ("K");
				  generate ((yyvsp[(1) - (1)].s_value));
				  generate (":");
				}
			      free ((yyvsp[(1) - (1)].s_value));
			    }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 572 "bc.y"
    { (yyval.i_value) = (yyvsp[(2) - (3)].i_value) | 5; }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 574 "bc.y"
    {
			      (yyval.i_value) = 1;
			      if ((yyvsp[(3) - (4)].a_value) != NULL)
				{ 
				  sprintf (genstr, "C%d,%s:",
					   lookup ((yyvsp[(1) - (4)].s_value),FUNCT),
					   call_str ((yyvsp[(3) - (4)].a_value)));
				  free_args ((yyvsp[(3) - (4)].a_value));
				}
			      else
				{
				  sprintf (genstr, "C%d:", lookup ((yyvsp[(1) - (4)].s_value),FUNCT));
				}
			      generate (genstr);
			    }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 590 "bc.y"
    {
			      (yyval.i_value) = 1;
			      if ((yyvsp[(2) - (2)].i_value) < 0)
				{
				  if ((yyvsp[(1) - (2)].c_value) == '+')
				    sprintf (genstr, "DA%d:L%d:", -(yyvsp[(2) - (2)].i_value), -(yyvsp[(2) - (2)].i_value));
				  else
				    sprintf (genstr, "DM%d:L%d:", -(yyvsp[(2) - (2)].i_value), -(yyvsp[(2) - (2)].i_value));
				}
			      else
				{
				  if ((yyvsp[(1) - (2)].c_value) == '+')
				    sprintf (genstr, "i%d:l%d:", (yyvsp[(2) - (2)].i_value), (yyvsp[(2) - (2)].i_value));
				  else
				    sprintf (genstr, "d%d:l%d:", (yyvsp[(2) - (2)].i_value), (yyvsp[(2) - (2)].i_value));
				}
			      generate (genstr);
			    }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 609 "bc.y"
    {
			      (yyval.i_value) = 1;
			      if ((yyvsp[(1) - (2)].i_value) < 0)
				{
				  sprintf (genstr, "DL%d:x", -(yyvsp[(1) - (2)].i_value));
				  generate (genstr); 
				  if ((yyvsp[(2) - (2)].c_value) == '+')
				    sprintf (genstr, "A%d:", -(yyvsp[(1) - (2)].i_value));
				  else
				      sprintf (genstr, "M%d:", -(yyvsp[(1) - (2)].i_value));
				}
			      else
				{
				  sprintf (genstr, "l%d:", (yyvsp[(1) - (2)].i_value));
				  generate (genstr);
				  if ((yyvsp[(2) - (2)].c_value) == '+')
				    sprintf (genstr, "i%d:", (yyvsp[(1) - (2)].i_value));
				  else
				    sprintf (genstr, "d%d:", (yyvsp[(1) - (2)].i_value));
				}
			      generate (genstr);
			    }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 632 "bc.y"
    { generate ("cL"); (yyval.i_value) = 1;}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 634 "bc.y"
    { generate ("cR"); (yyval.i_value) = 1;}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 636 "bc.y"
    { generate ("cS"); (yyval.i_value) = 1;}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 638 "bc.y"
    {
			      warn ("read function");
			      generate ("cI"); (yyval.i_value) = 1;
			    }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 644 "bc.y"
    { (yyval.i_value) = lookup((yyvsp[(1) - (1)].s_value),SIMPLE); }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 646 "bc.y"
    {
			      if ((yyvsp[(3) - (4)].i_value) > 1) warn("comparison in subscript");
			      (yyval.i_value) = lookup((yyvsp[(1) - (4)].s_value),ARRAY);
			    }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 651 "bc.y"
    { (yyval.i_value) = 0; }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 653 "bc.y"
    { (yyval.i_value) = 1; }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 655 "bc.y"
    { (yyval.i_value) = 2; }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 657 "bc.y"
    { (yyval.i_value) = 3;
			      warn ("History variable");
			    }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 661 "bc.y"
    { (yyval.i_value) = 4;
			      warn ("Last variable");
			    }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 667 "bc.y"
    { warn ("End of line required"); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 670 "bc.y"
    { warn ("Too many end of lines"); }
    break;



/* Line 1806 of yacc.c  */
#line 2718 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 673 "bc.y"



