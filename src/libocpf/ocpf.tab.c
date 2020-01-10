
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         ocpf_yyparse
#define yylex           ocpf_yylex
#define yyerror         ocpf_yyerror
#define yylval          ocpf_yylval
#define yychar          ocpf_yychar
#define yydebug         ocpf_yydebug
#define yynerrs         ocpf_yynerrs


/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 20 "libocpf/ocpf.y"


#include "libocpf/ocpf.h"
#include "libocpf/ocpf_api.h"
#include "libocpf/lex.h"

int ocpf_yylex(void *, void *);
void yyerror(struct ocpf_context *, void *, char *);



/* Line 189 of yacc.c  */
#line 93 "libocpf/ocpf.tab.c"

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
     UINT8 = 258,
     BOOLEAN = 259,
     SHORT = 260,
     INTEGER = 261,
     I8 = 262,
     DOUBLE = 263,
     IDENTIFIER = 264,
     STRING = 265,
     UNICODE = 266,
     SYSTIME = 267,
     VAR = 268,
     kw_TYPE = 269,
     kw_FOLDER = 270,
     kw_OLEGUID = 271,
     kw_SET = 272,
     kw_PROPERTY = 273,
     kw_NPROPERTY = 274,
     kw_RECIPIENT = 275,
     kw_TO = 276,
     kw_CC = 277,
     kw_BCC = 278,
     kw_OOM = 279,
     kw_MNID_ID = 280,
     kw_MNID_STRING = 281,
     kw_PT_BOOLEAN = 282,
     kw_PT_STRING8 = 283,
     kw_PT_UNICODE = 284,
     kw_PT_SHORT = 285,
     kw_PT_LONG = 286,
     kw_PT_I8 = 287,
     kw_PT_DOUBLE = 288,
     kw_PT_SYSTIME = 289,
     kw_PT_MV_LONG = 290,
     kw_PT_MV_BINARY = 291,
     kw_PT_MV_STRING8 = 292,
     kw_PT_MV_UNICODE = 293,
     kw_PT_BINARY = 294,
     OBRACE = 295,
     EBRACE = 296,
     COMMA = 297,
     SEMICOLON = 298,
     COLON = 299,
     LOWER = 300,
     GREATER = 301,
     EQUAL = 302
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 37 "libocpf/ocpf.y"

	uint8_t				i;
	uint8_t				b;
	uint16_t			s;
	uint32_t			l;
	uint64_t			d;
	double				dbl;
	char				*name;
	char				*nameW;
	char				*date;
	char				*var;
	struct LongArray_r		MVl;
	struct StringArray_r		MVszA;
	struct StringArrayW_r		MVszW;
	struct BinaryArray_r		MVbin;



/* Line 214 of yacc.c  */
#line 195 "libocpf/ocpf.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 207 "libocpf/ocpf.tab.c"

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
# if YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   203

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNRULES -- Number of states.  */
#define YYNSTATES  154

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      19,    21,    24,    27,    30,    33,    37,    42,    48,    49,
      52,    58,    64,    70,    71,    74,    78,    82,    86,    90,
      96,    97,   100,   104,   108,   112,   116,   118,   120,   122,
     124,   126,   128,   130,   132,   137,   142,   147,   151,   158,
     162,   163,   166,   169,   170,   173,   176,   177,   180,   183,
     184,   187,   189,   190,   193,   198,   204,   205,   208,   212,
     216,   220,   224,   230,   238,   246,   248,   250,   252,   254,
     256,   258,   260,   262,   264,   266,   268,   270,   272,   278
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,    -1,    49,    50,    -1,    51,    -1,    52,
      -1,    53,    -1,    54,    -1,    60,    -1,    74,    -1,    55,
      -1,    14,    10,    -1,    15,    10,    -1,    15,     7,    -1,
      15,    13,    -1,    16,     9,    10,    -1,    17,    13,    47,
      63,    -1,    20,    40,    56,    41,    43,    -1,    -1,    56,
      57,    -1,    21,    40,    58,    41,    43,    -1,    22,    40,
      58,    41,    43,    -1,    23,    40,    58,    41,    43,    -1,
      -1,    58,    59,    -1,     9,    47,    63,    -1,     6,    47,
      63,    -1,     9,    47,    13,    -1,     6,    47,    13,    -1,
      18,    40,    61,    41,    43,    -1,    -1,    61,    62,    -1,
       9,    47,    63,    -1,     6,    47,    63,    -1,     9,    47,
      13,    -1,     6,    47,    13,    -1,    10,    -1,    11,    -1,
       5,    -1,     6,    -1,     4,    -1,     7,    -1,     8,    -1,
      12,    -1,    40,    64,     6,    41,    -1,    40,    66,    10,
      41,    -1,    40,    68,    11,    41,    -1,    40,    70,    41,
      -1,    40,    72,    40,    70,    41,    41,    -1,    45,    10,
      46,    -1,    -1,    64,    65,    -1,     6,    42,    -1,    -1,
      66,    67,    -1,    10,    42,    -1,    -1,    68,    69,    -1,
      11,    42,    -1,    -1,    70,    71,    -1,     3,    -1,    -1,
      72,    73,    -1,    40,    70,    41,    42,    -1,    19,    40,
      75,    41,    43,    -1,    -1,    75,    76,    -1,    77,    47,
      63,    -1,    79,    47,    63,    -1,    77,    47,    13,    -1,
      79,    47,    13,    -1,    24,    44,     9,    44,     9,    -1,
      25,    44,     6,    44,    78,    44,     9,    -1,    26,    44,
      10,    44,    78,    44,     9,    -1,    28,    -1,    29,    -1,
      30,    -1,    31,    -1,    33,    -1,    32,    -1,    27,    -1,
      34,    -1,    35,    -1,    37,    -1,    38,    -1,    39,    -1,
      36,    -1,    25,    44,     6,    44,     9,    -1,    26,    44,
      10,    44,     9,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   107,   107,   107,   113,   114,   115,   116,   117,   118,
     119,   123,   136,   145,   154,   166,   179,   187,   191,   191,
     194,   199,   204,   211,   211,   217,   222,   227,   231,   237,
     241,   241,   248,   253,   258,   262,   268,   273,   278,   279,
     280,   281,   282,   283,   288,   303,   321,   339,   349,   372,
     381,   381,   383,   398,   398,   401,   419,   419,   421,   439,
     439,   441,   459,   459,   461,   485,   489,   489,   495,   499,
     503,   507,   513,   519,   525,   533,   538,   543,   548,   553,
     558,   563,   568,   573,   578,   583,   588,   593,   600,   607
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "UINT8", "BOOLEAN", "SHORT", "INTEGER",
  "I8", "DOUBLE", "IDENTIFIER", "STRING", "UNICODE", "SYSTIME", "VAR",
  "kw_TYPE", "kw_FOLDER", "kw_OLEGUID", "kw_SET", "kw_PROPERTY",
  "kw_NPROPERTY", "kw_RECIPIENT", "kw_TO", "kw_CC", "kw_BCC", "kw_OOM",
  "kw_MNID_ID", "kw_MNID_STRING", "kw_PT_BOOLEAN", "kw_PT_STRING8",
  "kw_PT_UNICODE", "kw_PT_SHORT", "kw_PT_LONG", "kw_PT_I8", "kw_PT_DOUBLE",
  "kw_PT_SYSTIME", "kw_PT_MV_LONG", "kw_PT_MV_BINARY", "kw_PT_MV_STRING8",
  "kw_PT_MV_UNICODE", "kw_PT_BINARY", "OBRACE", "EBRACE", "COMMA",
  "SEMICOLON", "COLON", "LOWER", "GREATER", "EQUAL", "$accept", "keywords",
  "kvalues", "Type", "Folder", "OLEGUID", "Set", "Recipient", "recipients",
  "recipient", "rpcontent", "rcontent", "Property", "pcontent", "content",
  "propvalue", "mvlong_contents", "mvlong_content", "mvstring_contents",
  "mvstring_content", "mvunicode_contents", "mvunicode_content",
  "binary_contents", "binary_content", "mvbin_contents", "mvbin_content",
  "NProperty", "npcontent", "ncontent", "kind", "proptype", "known_kind", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    49,    50,    50,    50,    50,    50,    50,
      50,    51,    52,    52,    52,    53,    54,    55,    56,    56,
      57,    57,    57,    58,    58,    59,    59,    59,    59,    60,
      61,    61,    62,    62,    62,    62,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      64,    64,    65,    66,    66,    67,    68,    68,    69,    70,
      70,    71,    72,    72,    73,    74,    75,    75,    76,    76,
      76,    76,    77,    77,    77,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    79,    79
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     3,     4,     5,     0,     2,
       5,     5,     5,     0,     2,     3,     3,     3,     3,     5,
       0,     2,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     3,     6,     3,
       0,     2,     2,     0,     2,     2,     0,     2,     2,     0,
       2,     1,     0,     2,     4,     5,     0,     2,     3,     3,
       3,     3,     5,     7,     7,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       3,     4,     5,     6,     7,    10,     8,     9,    11,    13,
      12,    14,     0,     0,    30,    66,    18,    15,     0,     0,
       0,     0,    40,    38,    39,    41,    42,    36,    37,    43,
      59,     0,    16,     0,     0,     0,    31,     0,     0,     0,
       0,    67,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,     0,
       0,    65,     0,     0,    23,    23,    23,    17,     0,    51,
       0,    54,     0,    57,    61,    47,    60,    59,    63,    49,
      35,    33,    34,    32,     0,     0,     0,    70,    68,    71,
      69,     0,     0,     0,    44,    52,    45,    55,    46,    58,
       0,     0,     0,     0,     0,     0,     0,    24,     0,     0,
       0,    72,    88,    81,    75,    76,    77,    78,    80,    79,
      82,    83,    87,    84,    85,    86,     0,    89,     0,     0,
       0,    20,    21,    22,    48,    64,     0,     0,    28,    26,
      27,    25,    73,    74
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    10,    11,    12,    13,    14,    15,    31,    58,
     101,   117,    16,    29,    46,    42,    59,    79,    60,    81,
      61,    83,    62,    86,    63,    88,    17,    30,    51,    52,
     136,    53
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -66
static const yytype_int16 yypact[] =
{
     -66,   166,   -66,    -4,    54,    42,    26,    -6,    14,    16,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,    49,    19,   -66,   -66,   -66,   -66,    98,    71,
     106,   103,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
      47,    53,   -66,    50,    60,    72,   -66,    29,    75,    77,
      79,   -66,    80,    82,    94,    96,    97,    99,   -66,   133,
     130,   134,    11,   101,   104,     5,    15,   -66,   142,   181,
     178,   -66,    25,    36,   -66,   -66,   -66,   -66,   -39,   -66,
     -37,   -66,    27,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   145,   146,   147,   -66,   -66,   -66,
     -66,   105,   107,   111,   -66,   -66,   -66,   -66,   -66,   -66,
      21,   183,   126,   140,   148,   149,   150,   -66,   151,   154,
      30,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   155,   -66,   156,    78,
      88,   -66,   -66,   -66,   -66,   -66,   189,   192,   -66,   -66,
     -66,   -66,   -66,   -66
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       3,   -66,   -66,   -66,   -66,   -65,   -66,   -66,   -66,   -66,
     -66,   -66,   115,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
      90,   -66
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -63
static const yytype_int16 yytable[] =
{
      91,    93,   104,   105,   106,   107,    18,    98,   100,    32,
      33,    34,    35,    36,    84,    37,    38,    39,    90,    32,
      33,    34,    35,    36,    84,    37,    38,    39,    92,    32,
      33,    34,    35,    36,    24,    37,    38,    39,    97,    23,
      32,    33,    34,    35,    36,    40,    37,    38,    39,    99,
      41,    22,    85,   -50,    25,    40,    26,   -53,   -56,    27,
      41,    19,   120,    64,    20,    40,    28,    21,   108,   109,
      41,   144,   145,    68,   149,   151,    40,    43,   102,   103,
      44,    41,    32,    33,    34,    35,    36,   -62,    37,    38,
      39,   148,    32,    33,    34,    35,    36,    65,    37,    38,
      39,   150,    32,    33,    34,    35,    36,    66,    37,    38,
      39,   114,    45,   114,   115,    67,   115,   114,    40,    69,
     115,    70,    71,    41,    54,    55,    56,    72,    40,    73,
      47,    48,    49,    41,    74,   122,    75,    76,    40,    78,
      80,    87,    77,    41,    57,    82,   116,    50,   118,   137,
      89,    94,   119,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,     2,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
       3,     4,     5,     6,     7,     8,     9,    95,    96,   111,
     112,   113,   121,   141,   142,   139,   140,   143,   152,   146,
     147,   153,   110,   138
};

static const yytype_uint8 yycheck[] =
{
      65,    66,    41,    42,    41,    42,    10,    72,    73,     4,
       5,     6,     7,     8,     3,    10,    11,    12,    13,     4,
       5,     6,     7,     8,     3,    10,    11,    12,    13,     4,
       5,     6,     7,     8,    40,    10,    11,    12,    13,    13,
       4,     5,     6,     7,     8,    40,    10,    11,    12,    13,
      45,     9,    41,     6,    40,    40,    40,    10,    11,    10,
      45,     7,    41,    10,    10,    40,    47,    13,    41,    42,
      45,    41,    42,    44,   139,   140,    40,     6,    75,    76,
       9,    45,     4,     5,     6,     7,     8,    40,    10,    11,
      12,    13,     4,     5,     6,     7,     8,    47,    10,    11,
      12,    13,     4,     5,     6,     7,     8,    47,    10,    11,
      12,     6,    41,     6,     9,    43,     9,     6,    40,    44,
       9,    44,    43,    45,    21,    22,    23,    47,    40,    47,
      24,    25,    26,    45,    40,     9,    40,    40,    40,     6,
      10,    40,    43,    45,    41,    11,    41,    41,    41,     9,
      46,     9,    41,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      14,    15,    16,    17,    18,    19,    20,     6,    10,    44,
      44,    44,     9,    43,    43,    47,    47,    43,     9,    44,
      44,     9,    87,   113
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    49,     0,    14,    15,    16,    17,    18,    19,    20,
      50,    51,    52,    53,    54,    55,    60,    74,    10,     7,
      10,    13,     9,    13,    40,    40,    40,    10,    47,    61,
      75,    56,     4,     5,     6,     7,     8,    10,    11,    12,
      40,    45,    63,     6,     9,    41,    62,    24,    25,    26,
      41,    76,    77,    79,    21,    22,    23,    41,    57,    64,
      66,    68,    70,    72,    10,    47,    47,    43,    44,    44,
      44,    43,    47,    47,    40,    40,    40,    43,     6,    65,
      10,    67,    11,    69,     3,    41,    71,    40,    73,    46,
      13,    63,    13,    63,     9,     6,    10,    13,    63,    13,
      63,    58,    58,    58,    41,    42,    41,    42,    41,    42,
      70,    44,    44,    44,     6,     9,    41,    59,    41,    41,
      41,     9,     9,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    78,     9,    78,    47,
      47,    43,    43,    43,    41,    42,    44,    44,    13,    63,
      13,    63,     9,     9
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
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (ctx, scanner, YY_("syntax error: cannot back up")); \
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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, scanner)
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
		  Type, Value, ctx, scanner); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, struct ocpf_context *ctx, void *scanner)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, ctx, scanner)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    struct ocpf_context *ctx;
    void *scanner;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (ctx);
  YYUSE (scanner);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, struct ocpf_context *ctx, void *scanner)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, ctx, scanner)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    struct ocpf_context *ctx;
    void *scanner;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, ctx, scanner);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, struct ocpf_context *ctx, void *scanner)
#else
static void
yy_reduce_print (yyvsp, yyrule, ctx, scanner)
    YYSTYPE *yyvsp;
    int yyrule;
    struct ocpf_context *ctx;
    void *scanner;
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
		       		       , ctx, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, ctx, scanner); \
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, struct ocpf_context *ctx, void *scanner)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, ctx, scanner)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    struct ocpf_context *ctx;
    void *scanner;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (ctx);
  YYUSE (scanner);

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
int yyparse (struct ocpf_context *ctx, void *scanner);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
yyparse (struct ocpf_context *ctx, void *scanner)
#else
int
yyparse (ctx, scanner)
    struct ocpf_context *ctx;
    void *scanner;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
        case 3:

/* Line 1455 of yacc.c  */
#line 108 "libocpf/ocpf.y"
    {
			memset(&ctx->lpProp, 0, sizeof (union SPropValue_CTR));
		;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 124 "libocpf/ocpf.y"
    {
			if (!ctx->typeset) {
			  ocpf_type_add(ctx,(yyvsp[(2) - (2)].name));
				ctx->typeset++;
			} else {
				ocpf_error_message(ctx, "%s", "duplicated TYPE\n");
				return -1;
			}
		;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 137 "libocpf/ocpf.y"
    {
			if (ctx->folderset == false) {
				ocpf_folder_add(ctx, (yyvsp[(2) - (2)].name), 0, NULL);
				ctx->folderset = true;
			} else {
				ocpf_error_message(ctx, "%s", "duplicated FOLDER\n");
			}
		;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 146 "libocpf/ocpf.y"
    {
			if (ctx->folderset == false) {
				ocpf_folder_add(ctx, NULL, (yyvsp[(2) - (2)].d), NULL);
				ctx->folderset = true;
			} else {
				ocpf_error_message(ctx,"%s", "duplicated FOLDER\n");
			}
		;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 155 "libocpf/ocpf.y"
    {
			if (ctx->folderset == false) {
				ocpf_folder_add(ctx, NULL, 0, (yyvsp[(2) - (2)].var));
				ctx->folderset = true;
			} else {
				ocpf_error_message(ctx,"%s", "duplicated FOLDER\n");
			}
		;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 167 "libocpf/ocpf.y"
    { 
			char *name;
			char *guid;
			
			name = talloc_strdup(ctx, (yyvsp[(2) - (3)].name));
			guid = talloc_strdup(ctx, (yyvsp[(3) - (3)].name));

			ocpf_oleguid_add(ctx, name, guid);
		;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 180 "libocpf/ocpf.y"
    {
			ocpf_variable_add(ctx, (yyvsp[(2) - (4)].var), ctx->lpProp, ctx->ltype, true);
			memset(&ctx->lpProp, 0, sizeof (union SPropValue_CTR));
		;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 188 "libocpf/ocpf.y"
    {
		;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 195 "libocpf/ocpf.y"
    {
			ocpf_recipient_set_class(ctx, MAPI_TO);
			ocpf_new_recipient(ctx);
		;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 200 "libocpf/ocpf.y"
    {
			ocpf_recipient_set_class(ctx, MAPI_CC);
			ocpf_new_recipient(ctx);
		;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 205 "libocpf/ocpf.y"
    {
			ocpf_recipient_set_class(ctx, MAPI_BCC);
			ocpf_new_recipient(ctx);
		;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 212 "libocpf/ocpf.y"
    {
			memset(&ctx->lpProp, 0, sizeof (union SPropValue_CTR));
		;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 218 "libocpf/ocpf.y"
    {
			ocpf_propvalue_s(ctx, (yyvsp[(1) - (3)].name), ctx->lpProp, ctx->ltype, true, kw_RECIPIENT);
			ocpf_propvalue_free(ctx->lpProp, ctx->ltype);
		;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 223 "libocpf/ocpf.y"
    {
			ocpf_propvalue(ctx, (yyvsp[(1) - (3)].l), ctx->lpProp, ctx->ltype, true, kw_RECIPIENT);
			ocpf_propvalue_free(ctx->lpProp, ctx->ltype);
		;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 228 "libocpf/ocpf.y"
    {
			ocpf_propvalue_var(ctx, (yyvsp[(1) - (3)].name), 0x0, (yyvsp[(3) - (3)].var), true, kw_RECIPIENT);
		;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 232 "libocpf/ocpf.y"
    {
			ocpf_propvalue_var(ctx, NULL, (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].var), true, kw_RECIPIENT);
		;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 238 "libocpf/ocpf.y"
    {
		;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 242 "libocpf/ocpf.y"
    {
			memset(&ctx->lpProp, 0, sizeof (union SPropValue_CTR));
		;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 249 "libocpf/ocpf.y"
    {
			ocpf_propvalue_s(ctx, (yyvsp[(1) - (3)].name), ctx->lpProp, ctx->ltype, true, kw_PROPERTY);
			ocpf_propvalue_free(ctx->lpProp, ctx->ltype);
		;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 254 "libocpf/ocpf.y"
    {
			ocpf_propvalue(ctx, (yyvsp[(1) - (3)].l), ctx->lpProp, ctx->ltype, true, kw_PROPERTY);
			ocpf_propvalue_free(ctx->lpProp, ctx->ltype);
		;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 259 "libocpf/ocpf.y"
    {
			ocpf_propvalue_var(ctx, (yyvsp[(1) - (3)].name), 0x0, (yyvsp[(3) - (3)].var), true, kw_PROPERTY);
		;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 263 "libocpf/ocpf.y"
    {
			ocpf_propvalue_var(ctx, NULL, (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].var), true, kw_PROPERTY);
		;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 269 "libocpf/ocpf.y"
    { 
			ctx->lpProp.lpszA = talloc_strdup(ctx, (yyvsp[(1) - (1)].name)); 
			ctx->ltype = PT_STRING8; 
		;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 274 "libocpf/ocpf.y"
    {
			ctx->lpProp.lpszW = talloc_strdup(ctx, (yyvsp[(1) - (1)].nameW));
			ctx->ltype = PT_UNICODE;
		;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 278 "libocpf/ocpf.y"
    { ctx->lpProp.i = (yyvsp[(1) - (1)].s); ctx->ltype = PT_SHORT; ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 279 "libocpf/ocpf.y"
    { ctx->lpProp.l = (yyvsp[(1) - (1)].l); ctx->ltype = PT_LONG; ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 280 "libocpf/ocpf.y"
    { ctx->lpProp.b = (yyvsp[(1) - (1)].b); ctx->ltype = PT_BOOLEAN; ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 281 "libocpf/ocpf.y"
    { ctx->lpProp.d = (yyvsp[(1) - (1)].d); ctx->ltype = PT_I8; ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 282 "libocpf/ocpf.y"
    { ctx->lpProp.dbl = (yyvsp[(1) - (1)].dbl), ctx->ltype = PT_DOUBLE; ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 284 "libocpf/ocpf.y"
    {
			ocpf_add_filetime((yyvsp[(1) - (1)].date), &ctx->lpProp.ft);
			ctx->ltype = PT_SYSTIME;
		;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 289 "libocpf/ocpf.y"
    {
			if (!ctx->lpProp.MVl.cValues) {
				ctx->lpProp.MVl.cValues = 0;
				ctx->lpProp.MVl.lpl = talloc_array(ctx, uint32_t, 2);
			} else {
				ctx->lpProp.MVl.lpl = talloc_realloc(NULL, ctx->lpProp.MVl.lpl,
								     uint32_t,
								     ctx->lpProp.MVl.cValues + 2);
			}
			ctx->lpProp.MVl.lpl[ctx->lpProp.MVl.cValues] = (yyvsp[(3) - (4)].l);
			ctx->lpProp.MVl.cValues += 1;

			ctx->ltype = PT_MV_LONG;
		;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 304 "libocpf/ocpf.y"
    {
			TALLOC_CTX	*mem_ctx;

			if (!ctx->lpProp.MVszA.cValues) {
				ctx->lpProp.MVszA.cValues = 0;
				ctx->lpProp.MVszA.lppszA = talloc_array(ctx, const char *, 2);
			} else {
				ctx->lpProp.MVszA.lppszA = talloc_realloc(NULL, ctx->lpProp.MVszA.lppszA, 
									  const char *,
									  ctx->lpProp.MVszA.cValues + 2);
			}
			mem_ctx = (TALLOC_CTX *) ctx->lpProp.MVszA.lppszA;
			ctx->lpProp.MVszA.lppszA[ctx->lpProp.MVszA.cValues] = talloc_strdup(mem_ctx, (yyvsp[(3) - (4)].name));
			ctx->lpProp.MVszA.cValues += 1;

			ctx->ltype = PT_MV_STRING8;
		;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 322 "libocpf/ocpf.y"
    {
			TALLOC_CTX	*mem_ctx;
			
			if (!ctx->lpProp.MVszW.cValues) {
				ctx->lpProp.MVszW.cValues = 0;
				ctx->lpProp.MVszW.lppszW = talloc_array(ctx, const char *, 2);
			} else {
				ctx->lpProp.MVszW.lppszW = talloc_realloc(NULL, ctx->lpProp.MVszW.lppszW,
									  const char *,
									  ctx->lpProp.MVszW.cValues + 2);
			}
			mem_ctx = (TALLOC_CTX *) ctx->lpProp.MVszW.lppszW;
			ctx->lpProp.MVszW.lppszW[ctx->lpProp.MVszW.cValues] = talloc_strdup(mem_ctx, (yyvsp[(3) - (4)].nameW));
			ctx->lpProp.MVszW.cValues += 1;

			ctx->ltype = PT_MV_UNICODE;
		;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 340 "libocpf/ocpf.y"
    {
			ctx->lpProp.bin.cb = ctx->bin.cb;
			ctx->lpProp.bin.lpb = talloc_memdup(ctx, ctx->bin.lpb, ctx->bin.cb);

			talloc_free(ctx->bin.lpb);
			ctx->bin.cb = 0;

			ctx->ltype = PT_BINARY;
		;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 350 "libocpf/ocpf.y"
    {
			TALLOC_CTX	*mem_ctx;

			if (!ctx->lpProp.MVbin.cValues) {
				ctx->lpProp.MVbin.cValues = 0;
				ctx->lpProp.MVbin.lpbin = talloc_array(ctx, struct Binary_r, 2);
			} else {
				ctx->lpProp.MVbin.lpbin = talloc_realloc(NULL, ctx->lpProp.MVbin.lpbin,
									 struct Binary_r,
									 ctx->lpProp.MVbin.cValues + 2);
			}
			mem_ctx = (TALLOC_CTX *) ctx->lpProp.MVbin.lpbin;
			ctx->lpProp.MVbin.lpbin[ctx->lpProp.MVbin.cValues].cb = ctx->bin.cb;
			ctx->lpProp.MVbin.lpbin[ctx->lpProp.MVbin.cValues].lpb = talloc_memdup(mem_ctx,
											       ctx->bin.lpb, 
											       ctx->bin.cb);
			ctx->lpProp.MVbin.cValues += 1;
			talloc_free(ctx->bin.lpb);
			ctx->bin.cb = 0;

			ctx->ltype = PT_MV_BINARY;
		;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 373 "libocpf/ocpf.y"
    {
			int	ret;

			ret = ocpf_binary_add(ctx, (yyvsp[(2) - (3)].name), &ctx->lpProp.bin);
			ctx->ltype = (ret == OCPF_SUCCESS) ? PT_BINARY : PT_ERROR;
		;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 384 "libocpf/ocpf.y"
    {
			if (!ctx->lpProp.MVl.cValues) {
				ctx->lpProp.MVl.cValues = 0;
				ctx->lpProp.MVl.lpl = talloc_array(ctx, uint32_t, 2);
			} else {
				ctx->lpProp.MVl.lpl = talloc_realloc(NULL, ctx->lpProp.MVl.lpl, uint32_t,
								     ctx->lpProp.MVl.cValues + 2);
			}
			ctx->lpProp.MVl.lpl[ctx->lpProp.MVl.cValues] = (yyvsp[(1) - (2)].l);
			ctx->lpProp.MVl.cValues += 1;
		;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 402 "libocpf/ocpf.y"
    {
			TALLOC_CTX	*mem_ctx;

			if (!ctx->lpProp.MVszA.cValues) {
				ctx->lpProp.MVszA.cValues = 0;
				ctx->lpProp.MVszA.lppszA = talloc_array(ctx, const char *, 2);
			} else {
				ctx->lpProp.MVszA.lppszA = talloc_realloc(NULL, ctx->lpProp.MVszA.lppszA, 
									  const char *,
									  ctx->lpProp.MVszA.cValues + 2);
			}
			mem_ctx = (TALLOC_CTX *) ctx->lpProp.MVszA.lppszA;
			ctx->lpProp.MVszA.lppszA[ctx->lpProp.MVszA.cValues] = talloc_strdup(mem_ctx, (yyvsp[(1) - (2)].name));
			ctx->lpProp.MVszA.cValues += 1;
		  ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 422 "libocpf/ocpf.y"
    {
			TALLOC_CTX *mem_ctx;

			if (!ctx->lpProp.MVszW.cValues) {
				ctx->lpProp.MVszW.cValues = 0;
				ctx->lpProp.MVszW.lppszW = talloc_array(ctx, const char *, 2);
			} else {
				ctx->lpProp.MVszW.lppszW = talloc_realloc(NULL, ctx->lpProp.MVszW.lppszW,
									  const char *,
									  ctx->lpProp.MVszW.cValues + 2);
			}
			mem_ctx = (TALLOC_CTX *) ctx->lpProp.MVszW.lppszW;
			ctx->lpProp.MVszW.lppszW[ctx->lpProp.MVszW.cValues] = talloc_strdup(mem_ctx, (yyvsp[(1) - (2)].nameW));
			ctx->lpProp.MVszW.cValues += 1;
		;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 442 "libocpf/ocpf.y"
    {
			if ((yyvsp[(1) - (1)].i) > 0xFF) {
				ocpf_error_message(ctx,"Invalid Binary constant: 0x%x > 0xFF\n", (yyvsp[(1) - (1)].i));
			}

			if (!ctx->bin.cb) {
				ctx->bin.cb = 0;
				ctx->bin.lpb = talloc_array(ctx, uint8_t, 2);
			} else {
				ctx->bin.lpb = talloc_realloc(NULL, ctx->bin.lpb, uint8_t,
								     ctx->bin.cb + 2);
			}
			ctx->bin.lpb[ctx->bin.cb] = (yyvsp[(1) - (1)].i);
			ctx->bin.cb += 1;
		;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 462 "libocpf/ocpf.y"
    {
			TALLOC_CTX	*mem_ctx;

			if (!ctx->lpProp.MVbin.cValues) {
				ctx->lpProp.MVbin.cValues = 0;
				ctx->lpProp.MVbin.lpbin = talloc_array(ctx, struct Binary_r, 2);
			} else {
				ctx->lpProp.MVbin.lpbin = talloc_realloc(NULL, ctx->lpProp.MVbin.lpbin,
									 struct Binary_r,
									 ctx->lpProp.MVbin.cValues + 2);
			}
			mem_ctx = (TALLOC_CTX *) ctx->lpProp.MVbin.lpbin;
			ctx->lpProp.MVbin.lpbin[ctx->lpProp.MVbin.cValues].cb = ctx->bin.cb;
			ctx->lpProp.MVbin.lpbin[ctx->lpProp.MVbin.cValues].lpb = talloc_memdup(mem_ctx,
											       ctx->bin.lpb,
											       ctx->bin.cb);
			ctx->lpProp.MVbin.cValues += 1;

			ctx->bin.cb = 0;
		;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 486 "libocpf/ocpf.y"
    {
		;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 490 "libocpf/ocpf.y"
    {
			memset(&ctx->lpProp, 0, sizeof (union SPropValue_CTR));
		;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 496 "libocpf/ocpf.y"
    {
			ocpf_nproperty_add(ctx, &ctx->nprop, ctx->lpProp, NULL, ctx->ltype, true);
		;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 500 "libocpf/ocpf.y"
    {
			ocpf_nproperty_add(ctx, &ctx->nprop, ctx->lpProp, NULL, ctx->ltype, true);
		;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 504 "libocpf/ocpf.y"
    {
			ocpf_nproperty_add(ctx, &ctx->nprop, ctx->lpProp, (yyvsp[(3) - (3)].var), ctx->ltype, true);
		;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 508 "libocpf/ocpf.y"
    {
			ocpf_nproperty_add(ctx, &ctx->nprop, ctx->lpProp, (yyvsp[(3) - (3)].var), ctx->ltype, true);
		;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 514 "libocpf/ocpf.y"
    {
			memset(&ctx->nprop, 0, sizeof (struct ocpf_nprop));
			ctx->nprop.OOM = talloc_strdup(ctx, (yyvsp[(3) - (5)].name));
			ctx->nprop.guid = (yyvsp[(5) - (5)].name);
		;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 520 "libocpf/ocpf.y"
    {
			ctx->nprop.registered = false;
			ctx->nprop.mnid_id = (yyvsp[(3) - (7)].l);
			ctx->nprop.guid = (yyvsp[(7) - (7)].name);
		;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 526 "libocpf/ocpf.y"
    {
			ctx->nprop.registered = false;
			ctx->nprop.mnid_string = talloc_strdup(ctx, (yyvsp[(3) - (7)].name));
			ctx->nprop.guid = (yyvsp[(7) - (7)].name);
		;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 534 "libocpf/ocpf.y"
    {
 			memset(&ctx->nprop, 0, sizeof (struct ocpf_nprop));
			ctx->nprop.propType = PT_STRING8; 
		;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 539 "libocpf/ocpf.y"
    {
			memset(&ctx->nprop, 0, sizeof (struct ocpf_nprop));
			ctx->nprop.propType = PT_UNICODE; 
		;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 544 "libocpf/ocpf.y"
    {
			memset(&ctx->nprop, 0, sizeof (struct ocpf_nprop));
			ctx->nprop.propType = PT_SHORT;
		;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 549 "libocpf/ocpf.y"
    {
			memset(&ctx->nprop, 0, sizeof (struct ocpf_nprop));
			ctx->nprop.propType = PT_LONG; 
		;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 554 "libocpf/ocpf.y"
    {
			memset(&ctx->nprop, 0, sizeof (struct ocpf_nprop));
			ctx->nprop.propType = PT_DOUBLE;
		;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 559 "libocpf/ocpf.y"
    {
			memset(&ctx->nprop, 0, sizeof (struct ocpf_nprop));
			ctx->nprop.propType = PT_I8;
		;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 564 "libocpf/ocpf.y"
    {
			memset(&ctx->nprop, 0, sizeof (struct ocpf_nprop));
			ctx->nprop.propType = PT_BOOLEAN;
		;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 569 "libocpf/ocpf.y"
    {
			memset(&ctx->nprop, 0, sizeof (struct ocpf_nprop));
			ctx->nprop.propType = PT_SYSTIME; 
		;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 574 "libocpf/ocpf.y"
    {
			memset(&ctx->nprop, 0, sizeof (struct ocpf_nprop));
			ctx->nprop.propType = PT_MV_LONG;
		;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 579 "libocpf/ocpf.y"
    {
			memset(&ctx->nprop, 0, sizeof (struct ocpf_nprop));
			ctx->nprop.propType = PT_MV_STRING8;
		;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 584 "libocpf/ocpf.y"
    {
			memset(&ctx->nprop, 0, sizeof (struct ocpf_nprop));
			ctx->nprop.propType = PT_MV_UNICODE;
		;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 589 "libocpf/ocpf.y"
    {
			memset(&ctx->nprop, 0, sizeof (struct ocpf_nprop));
			ctx->nprop.propType = PT_BINARY;
		;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 594 "libocpf/ocpf.y"
    {
			memset(&ctx->nprop, 0, sizeof (struct ocpf_nprop));
			ctx->nprop.propType = PT_MV_BINARY;
		;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 601 "libocpf/ocpf.y"
    {
			memset(&ctx->nprop, 0, sizeof (struct ocpf_nprop));
			ctx->nprop.registered = true;
			ctx->nprop.mnid_id = (yyvsp[(3) - (5)].l);
			ctx->nprop.guid = (yyvsp[(5) - (5)].name);
		;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 608 "libocpf/ocpf.y"
    {
			memset(&ctx->nprop, 0, sizeof (struct ocpf_nprop));
			ctx->nprop.registered = true;
			ctx->nprop.mnid_string = talloc_strdup(ctx, (yyvsp[(3) - (5)].name));
			ctx->nprop.guid = (yyvsp[(5) - (5)].name);
		;}
    break;



/* Line 1455 of yacc.c  */
#line 2332 "libocpf/ocpf.tab.c"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (ctx, scanner, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (ctx, scanner, yymsg);
	  }
	else
	  {
	    yyerror (ctx, scanner, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
		      yytoken, &yylval, ctx, scanner);
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, ctx, scanner);
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
  yyerror (ctx, scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, ctx, scanner);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, ctx, scanner);
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



/* Line 1675 of yacc.c  */
#line 616 "libocpf/ocpf.y"


void yyerror(struct ocpf_context *ctx, void *scanner, char *s)
{
	printf("%s: %d\n", s, ctx->lineno);
	fflush(0);
}

