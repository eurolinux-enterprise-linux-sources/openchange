
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
#define YYPURE 0

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


#include "libocpf/ocpf_private.h"
#include <libocpf/ocpf.h>
#include <libocpf/ocpf_api.h>
#include <libocpf/lex.h>

void yyerror(char *);

union SPropValue_CTR	lpProp;
struct ocpf_nprop      	nprop;
int		       	typeset;
uint16_t       	       	type;
int			folderset;
uint8_t			recip_type;



/* Line 189 of yacc.c  */
#line 100 "libocpf/ocpf.tab.c"

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
     DOUBLE = 262,
     IDENTIFIER = 263,
     STRING = 264,
     UNICODE = 265,
     MVSTRING = 266,
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
     kw_PT_SYSTIME = 287,
     kw_PT_MV_STRING8 = 288,
     kw_PT_BINARY = 289,
     OBRACE = 290,
     EBRACE = 291,
     COMMA = 292,
     SEMICOLON = 293,
     COLON = 294,
     LOWER = 295,
     GREATER = 296,
     EQUAL = 297
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 38 "libocpf/ocpf.y"

	uint8_t				i;
	uint8_t				b;
	uint16_t			s;
	uint32_t			l;
	uint64_t			d;
	char				*name;
	char				*nameW;
	char				*date;
	char				*var;
	struct StringArray_r		MVszA;



/* Line 214 of yacc.c  */
#line 193 "libocpf/ocpf.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 205 "libocpf/ocpf.tab.c"

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
#define YYLAST   131

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNRULES -- Number of states.  */
#define YYNSTATES  110

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      19,    21,    24,    27,    30,    33,    37,    42,    48,    49,
      52,    56,    60,    64,    68,    70,    72,    74,    76,    78,
      80,    82,    87,    91,    95,    96,    99,   102,   103,   106,
     108,   114,   115,   118,   122,   126,   130,   134,   140,   148,
     156,   158,   160,   162,   164,   166,   168,   170,   172,   178,
     184,   189,   191,   193,   195,   196,   199
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      44,     0,    -1,    -1,    44,    45,    -1,    46,    -1,    47,
      -1,    48,    -1,    49,    -1,    50,    -1,    58,    -1,    64,
      -1,    14,     9,    -1,    15,     9,    -1,    15,     7,    -1,
      15,    13,    -1,    16,     8,     9,    -1,    17,    13,    42,
      53,    -1,    18,    35,    51,    36,    38,    -1,    -1,    51,
      52,    -1,     8,    42,    53,    -1,     6,    42,    53,    -1,
       8,    42,    13,    -1,     6,    42,    13,    -1,     9,    -1,
      10,    -1,     5,    -1,     6,    -1,     4,    -1,     7,    -1,
      12,    -1,    35,    54,     9,    36,    -1,    35,    56,    36,
      -1,    40,     9,    41,    -1,    -1,    54,    55,    -1,     9,
      37,    -1,    -1,    56,    57,    -1,     6,    -1,    19,    35,
      59,    36,    38,    -1,    -1,    59,    60,    -1,    61,    42,
      53,    -1,    63,    42,    53,    -1,    61,    42,    13,    -1,
      63,    42,    13,    -1,    24,    39,     8,    39,     8,    -1,
      25,    39,     6,    39,    62,    39,     8,    -1,    26,    39,
       9,    39,    62,    39,     8,    -1,    28,    -1,    29,    -1,
      30,    -1,    31,    -1,    27,    -1,    32,    -1,    33,    -1,
      34,    -1,    25,    39,     6,    39,     8,    -1,    26,    39,
       9,    39,     8,    -1,    20,    65,    66,     9,    -1,    21,
      -1,    22,    -1,    23,    -1,    -1,    66,    67,    -1,     9,
      38,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    99,    99,    99,   105,   106,   107,   108,   109,   110,
     111,   115,   128,   137,   146,   158,   171,   179,   183,   183,
     190,   195,   200,   204,   210,   215,   220,   221,   222,   223,
     224,   229,   246,   250,   259,   259,   262,   279,   279,   281,
     303,   307,   307,   313,   317,   321,   325,   331,   337,   343,
     351,   356,   361,   366,   371,   376,   381,   386,   393,   400,
     410,   422,   426,   430,   436,   436,   438
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "UINT8", "BOOLEAN", "SHORT", "INTEGER",
  "DOUBLE", "IDENTIFIER", "STRING", "UNICODE", "MVSTRING", "SYSTIME",
  "VAR", "kw_TYPE", "kw_FOLDER", "kw_OLEGUID", "kw_SET", "kw_PROPERTY",
  "kw_NPROPERTY", "kw_RECIPIENT", "kw_TO", "kw_CC", "kw_BCC", "kw_OOM",
  "kw_MNID_ID", "kw_MNID_STRING", "kw_PT_BOOLEAN", "kw_PT_STRING8",
  "kw_PT_UNICODE", "kw_PT_SHORT", "kw_PT_LONG", "kw_PT_SYSTIME",
  "kw_PT_MV_STRING8", "kw_PT_BINARY", "OBRACE", "EBRACE", "COMMA",
  "SEMICOLON", "COLON", "LOWER", "GREATER", "EQUAL", "$accept", "keywords",
  "kvalues", "Type", "Folder", "OLEGUID", "Set", "Property", "pcontent",
  "content", "propvalue", "mvstring_contents", "mvstring_content",
  "binary_contents", "binary_content", "NProperty", "npcontent",
  "ncontent", "kind", "proptype", "known_kind", "Recipient", "recipClass",
  "recipients", "recipient", 0
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
     295,   296,   297
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    44,    45,    45,    45,    45,    45,    45,
      45,    46,    47,    47,    47,    48,    49,    50,    51,    51,
      52,    52,    52,    52,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    54,    54,    55,    56,    56,    57,
      58,    59,    59,    60,    60,    60,    60,    61,    61,    61,
      62,    62,    62,    62,    62,    62,    62,    62,    63,    63,
      64,    65,    65,    65,    66,    66,    67
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     3,     4,     5,     0,     2,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     4,     3,     3,     0,     2,     2,     0,     2,     1,
       5,     0,     2,     3,     3,     3,     3,     5,     7,     7,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     5,
       4,     1,     1,     1,     0,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    13,
      12,    14,     0,     0,    18,    41,    61,    62,    63,    64,
      15,     0,     0,     0,     0,    28,    26,    27,    29,    24,
      25,    30,    37,     0,    16,     0,     0,     0,    19,     0,
       0,     0,     0,    42,     0,     0,    60,    65,     0,     0,
       0,     0,     0,    17,     0,     0,     0,    40,     0,     0,
      66,     0,    35,    39,    32,    38,    33,    23,    21,    22,
      20,     0,     0,     0,    45,    43,    46,    44,    31,    36,
       0,     0,     0,    47,    58,    54,    50,    51,    52,    53,
      55,    56,    57,     0,    59,     0,     0,     0,    48,    49
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    10,    11,    12,    13,    14,    15,    32,    48,
      44,    58,    72,    59,    75,    16,    33,    53,    54,   103,
      55,    17,    29,    34,    57
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -12
static const yytype_int8 yypact[] =
{
     -12,   105,   -12,    -5,    99,    -1,     1,   -11,    -8,    27,
     -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,
     -12,   -12,    21,    -3,   -12,   -12,   -12,   -12,   -12,   -12,
     -12,    28,    36,    40,    34,   -12,   -12,   -12,   -12,   -12,
     -12,   -12,    50,    53,   -12,     3,    25,    31,   -12,    32,
      38,    43,    37,   -12,    42,    45,    41,   -12,    98,    11,
      68,    -4,     6,   -12,   102,   107,   106,   -12,    16,    48,
     -12,    49,   -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,
     -12,    72,    75,    77,   -12,   -12,   -12,   -12,   -12,   -12,
     109,    62,    70,   -12,   -12,   -12,   -12,   -12,   -12,   -12,
     -12,   -12,   -12,    79,   -12,    87,   119,   120,   -12,   -12
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,
      12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,    39,
     -12,   -12,   -12,   -12,   -12
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -35
static const yytype_int8 yytable[] =
{
      35,    36,    37,    38,    18,    39,    40,    22,    41,    77,
      35,    36,    37,    38,    23,    39,    40,    73,    41,    79,
      35,    36,    37,    38,    24,    39,    40,    25,    41,    84,
      30,    42,    35,    36,    37,    38,    43,    39,    40,    31,
      41,    42,    45,    56,    46,    61,    43,    74,    26,    27,
      28,    42,    35,    36,    37,    38,    43,    39,    40,   -34,
      41,    86,    60,    42,    49,    50,    51,    62,    43,    63,
      94,    64,    47,    78,    80,    67,    52,    65,   104,    70,
      85,    87,    66,    42,    68,    88,    89,    69,    43,    95,
      96,    97,    98,    99,   100,   101,   102,    95,    96,    97,
      98,    99,   100,   101,   102,     2,    19,    71,    20,    76,
      81,    90,    21,    82,    91,    83,    92,    93,   106,     3,
       4,     5,     6,     7,     8,     9,   107,   108,   109,     0,
       0,   105
};

static const yytype_int8 yycheck[] =
{
       4,     5,     6,     7,     9,     9,    10,     8,    12,    13,
       4,     5,     6,     7,    13,     9,    10,     6,    12,    13,
       4,     5,     6,     7,    35,     9,    10,    35,    12,    13,
       9,    35,     4,     5,     6,     7,    40,     9,    10,    42,
      12,    35,     6,     9,     8,    42,    40,    36,    21,    22,
      23,    35,     4,     5,     6,     7,    40,     9,    10,     9,
      12,    13,     9,    35,    24,    25,    26,    42,    40,    38,
       8,    39,    36,    61,    62,    38,    36,    39,     8,    38,
      68,    69,    39,    35,    42,    36,    37,    42,    40,    27,
      28,    29,    30,    31,    32,    33,    34,    27,    28,    29,
      30,    31,    32,    33,    34,     0,     7,     9,     9,    41,
       8,    39,    13,     6,    39,     9,    39,     8,    39,    14,
      15,    16,    17,    18,    19,    20,    39,     8,     8,    -1,
      -1,    92
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    44,     0,    14,    15,    16,    17,    18,    19,    20,
      45,    46,    47,    48,    49,    50,    58,    64,     9,     7,
       9,    13,     8,    13,    35,    35,    21,    22,    23,    65,
       9,    42,    51,    59,    66,     4,     5,     6,     7,     9,
      10,    12,    35,    40,    53,     6,     8,    36,    52,    24,
      25,    26,    36,    60,    61,    63,     9,    67,    54,    56,
       9,    42,    42,    38,    39,    39,    39,    38,    42,    42,
      38,     9,    55,     6,    36,    57,    41,    13,    53,    13,
      53,     8,     6,     9,    13,    53,    13,    53,    36,    37,
      39,    39,    39,     8,     8,    27,    28,    29,    30,    31,
      32,    33,    34,    62,     8,    62,    39,    39,     8,     8
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
#line 100 "libocpf/ocpf.y"
    {
			memset(&lpProp, 0, sizeof (union SPropValue_CTR));
		;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 116 "libocpf/ocpf.y"
    {
			if (!typeset) {
				ocpf_type_add((yyvsp[(2) - (2)].name));
				typeset++;
			} else {
				error_message("%s", "duplicated TYPE\n");
				return -1;
			}
		;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 129 "libocpf/ocpf.y"
    {
			if (folderset == false) {
				ocpf_folder_add((yyvsp[(2) - (2)].name), 0, NULL);
				folderset = true;
			} else {
				error_message("%s", "duplicated FOLDER\n");
			}
		;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 138 "libocpf/ocpf.y"
    {
			if (folderset == false) {
				ocpf_folder_add(NULL, (yyvsp[(2) - (2)].d), NULL);
				folderset = true;
			} else {
				error_message("%s", "duplicated FOLDER\n");
			}
		;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 147 "libocpf/ocpf.y"
    {
			if (folderset == false) {
				ocpf_folder_add(NULL, 0, (yyvsp[(2) - (2)].var));
				folderset = true;
			} else {
				error_message("%s", "duplicated FOLDER\n");
			}
		;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 159 "libocpf/ocpf.y"
    { 
			char *name;
			char *guid;
			
			name = talloc_strdup(ocpf->mem_ctx, (yyvsp[(2) - (3)].name));
			guid = talloc_strdup(ocpf->mem_ctx, (yyvsp[(3) - (3)].name));

			ocpf_oleguid_add(name, guid);
		;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 172 "libocpf/ocpf.y"
    {
			ocpf_variable_add((yyvsp[(2) - (4)].var), lpProp, type, true);
			memset(&lpProp, 0, sizeof (union SPropValue_CTR));
		;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 180 "libocpf/ocpf.y"
    {
		;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 184 "libocpf/ocpf.y"
    {
			memset(&lpProp, 0, sizeof (union SPropValue_CTR));
		;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 191 "libocpf/ocpf.y"
    {
		  ocpf_propvalue_s((yyvsp[(1) - (3)].name), lpProp, type, true);
			ocpf_propvalue_free(lpProp, type);
		;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 196 "libocpf/ocpf.y"
    {
			ocpf_propvalue((yyvsp[(1) - (3)].l), lpProp, type, true);
			ocpf_propvalue_free(lpProp, type);
		;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 201 "libocpf/ocpf.y"
    {
			ocpf_propvalue_var((yyvsp[(1) - (3)].name), 0x0, (yyvsp[(3) - (3)].var), true);
		;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 205 "libocpf/ocpf.y"
    {
			ocpf_propvalue_var(NULL, (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].var), true);
		;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 211 "libocpf/ocpf.y"
    { 
			lpProp.lpszA = talloc_strdup(ocpf->mem_ctx, (yyvsp[(1) - (1)].name)); 
			type = PT_STRING8; 
		;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 216 "libocpf/ocpf.y"
    {
			lpProp.lpszW = talloc_strdup(ocpf->mem_ctx, (yyvsp[(1) - (1)].nameW));
			type = PT_UNICODE;
		;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 220 "libocpf/ocpf.y"
    { lpProp.i = (yyvsp[(1) - (1)].s); type = PT_SHORT; ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 221 "libocpf/ocpf.y"
    { lpProp.l = (yyvsp[(1) - (1)].l); type = PT_LONG; ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 222 "libocpf/ocpf.y"
    { lpProp.b = (yyvsp[(1) - (1)].b); type = PT_BOOLEAN; ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 223 "libocpf/ocpf.y"
    { lpProp.d = (yyvsp[(1) - (1)].d); type = PT_DOUBLE; ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 225 "libocpf/ocpf.y"
    {
			ocpf_add_filetime((yyvsp[(1) - (1)].date), &lpProp.ft);
			type = PT_SYSTIME;
		;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 230 "libocpf/ocpf.y"
    {
			TALLOC_CTX *mem_ctx;

			if (!lpProp.MVszA.cValues) {
				lpProp.MVszA.cValues = 0;
				lpProp.MVszA.lppszA = talloc_array(ocpf->mem_ctx, const char *, 2);
			} else {
				lpProp.MVszA.lppszA = talloc_realloc(NULL, lpProp.MVszA.lppszA, const char *,
								     lpProp.MVszA.cValues + 2);
			}
			mem_ctx = (TALLOC_CTX *) lpProp.MVszA.lppszA;
			lpProp.MVszA.lppszA[lpProp.MVszA.cValues] = talloc_strdup(mem_ctx, (yyvsp[(3) - (4)].name));
			lpProp.MVszA.cValues += 1;

			type = PT_MV_STRING8;
		;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 247 "libocpf/ocpf.y"
    {
			type = PT_BINARY;
		;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 251 "libocpf/ocpf.y"
    {
			int	ret;

			ret = ocpf_binary_add((yyvsp[(2) - (3)].name), &lpProp.bin);
			type = (ret == OCPF_SUCCESS) ? PT_BINARY : PT_ERROR;
		;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 263 "libocpf/ocpf.y"
    {
			TALLOC_CTX *mem_ctx;

			if (!lpProp.MVszA.cValues) {
				lpProp.MVszA.cValues = 0;
				lpProp.MVszA.lppszA = talloc_array(ocpf->mem_ctx, const char *, 2);
			} else {
				lpProp.MVszA.lppszA = talloc_realloc(NULL, lpProp.MVszA.lppszA, const char *,
								     lpProp.MVszA.cValues + 2);
			}
			mem_ctx = (TALLOC_CTX *) lpProp.MVszA.lppszA;
			lpProp.MVszA.lppszA[lpProp.MVszA.cValues] = talloc_strdup(mem_ctx, (yyvsp[(1) - (2)].name));
			lpProp.MVszA.cValues += 1;
		  ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 282 "libocpf/ocpf.y"
    {
			TALLOC_CTX *mem_ctx;

			if ((yyvsp[(1) - (1)].l) > 0xFF) {
				error_message("Invalid Binary constant: 0x%x > 0xFF\n", (yyvsp[(1) - (1)].l));
			}

			if (!lpProp.bin.cb) {
				lpProp.bin.cb = 0;
				lpProp.bin.lpb = talloc_array(ocpf->mem_ctx, uint8_t, 2);
			} else {
				lpProp.bin.lpb = talloc_realloc(NULL, lpProp.bin.lpb, uint8_t,
								lpProp.bin.cb + 2);
			}
			mem_ctx = (TALLOC_CTX *) lpProp.bin.lpb;
			lpProp.bin.lpb[lpProp.bin.cb] = (yyvsp[(1) - (1)].l);
			lpProp.bin.cb += 1;
		;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 304 "libocpf/ocpf.y"
    {
		;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 308 "libocpf/ocpf.y"
    {
			memset(&lpProp, 0, sizeof (union SPropValue_CTR));
		;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 314 "libocpf/ocpf.y"
    {
			ocpf_nproperty_add(&nprop, lpProp, NULL, type, true);
		;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 318 "libocpf/ocpf.y"
    {
			ocpf_nproperty_add(&nprop, lpProp, NULL, type, true);
		;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 322 "libocpf/ocpf.y"
    {
			ocpf_nproperty_add(&nprop, lpProp, (yyvsp[(3) - (3)].var), type, true);
		;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 326 "libocpf/ocpf.y"
    {
			ocpf_nproperty_add(&nprop, lpProp, (yyvsp[(3) - (3)].var), type, true);
		;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 332 "libocpf/ocpf.y"
    {
			memset(&nprop, 0, sizeof (struct ocpf_nprop));
			nprop.OOM = talloc_strdup(ocpf->mem_ctx, (yyvsp[(3) - (5)].name));
			nprop.guid = (yyvsp[(5) - (5)].name);
		;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 338 "libocpf/ocpf.y"
    {
			nprop.registered = false;
			nprop.mnid_id = (yyvsp[(3) - (7)].l);
			nprop.guid = (yyvsp[(7) - (7)].name);
		;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 344 "libocpf/ocpf.y"
    {
			nprop.registered = false;
			nprop.mnid_string = talloc_strdup(ocpf->mem_ctx, (yyvsp[(3) - (7)].name));
			nprop.guid = (yyvsp[(7) - (7)].name);
		;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 352 "libocpf/ocpf.y"
    {
 			memset(&nprop, 0, sizeof (struct ocpf_nprop));
			nprop.propType = PT_STRING8; 
		;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 357 "libocpf/ocpf.y"
    {
			memset(&nprop, 0, sizeof (struct ocpf_nprop));
			nprop.propType = PT_UNICODE; 
		;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 362 "libocpf/ocpf.y"
    {
			memset(&nprop, 0, sizeof (struct ocpf_nprop));
			nprop.propType = PT_SHORT;
		;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 367 "libocpf/ocpf.y"
    {
			memset(&nprop, 0, sizeof (struct ocpf_nprop));
			nprop.propType = PT_LONG; 
		;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 372 "libocpf/ocpf.y"
    {
			memset(&nprop, 0, sizeof (struct ocpf_nprop));
			nprop.propType = PT_BOOLEAN;
		;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 377 "libocpf/ocpf.y"
    {
			memset(&nprop, 0, sizeof (struct ocpf_nprop));
			nprop.propType = PT_SYSTIME; 
		;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 382 "libocpf/ocpf.y"
    {
			memset(&nprop, 0, sizeof (struct ocpf_nprop));
			nprop.propType = PT_MV_STRING8;
		;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 387 "libocpf/ocpf.y"
    {
			memset(&nprop, 0, sizeof (struct ocpf_nprop));
			nprop.propType = PT_BINARY;
		;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 394 "libocpf/ocpf.y"
    {
			memset(&nprop, 0, sizeof (struct ocpf_nprop));
			nprop.registered = true;
			nprop.mnid_id = (yyvsp[(3) - (5)].l);
			nprop.guid = (yyvsp[(5) - (5)].name);
		;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 401 "libocpf/ocpf.y"
    {
			memset(&nprop, 0, sizeof (struct ocpf_nprop));
			nprop.registered = true;
			nprop.mnid_string = talloc_strdup(ocpf->mem_ctx, (yyvsp[(3) - (5)].name));
			nprop.guid = (yyvsp[(5) - (5)].name);
		;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 411 "libocpf/ocpf.y"
    {
			char	*recipient = NULL;

			recipient = talloc_strdup(ocpf->mem_ctx, (yyvsp[(4) - (4)].name));
			ocpf_recipient_add(recip_type, recipient);
			talloc_free(recipient);

			recip_type = 0;
		;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 423 "libocpf/ocpf.y"
    {
			recip_type = MAPI_TO;
		;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 427 "libocpf/ocpf.y"
    {
			recip_type = MAPI_CC;
		;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 431 "libocpf/ocpf.y"
    {
			recip_type = MAPI_BCC;
		;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 439 "libocpf/ocpf.y"
    {
			char	*recipient = NULL;

			recipient = talloc_strdup(ocpf->mem_ctx, (yyvsp[(1) - (2)].name));
			ocpf_recipient_add(recip_type, recipient);
			talloc_free(recipient);
		;}
    break;



/* Line 1455 of yacc.c  */
#line 2041 "libocpf/ocpf.tab.c"
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
      yyerror (YY_("syntax error"));
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
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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



/* Line 1675 of yacc.c  */
#line 447 "libocpf/ocpf.y"


void yyerror(char *s)
{
	printf("%s: %d", s, lineno);
}

