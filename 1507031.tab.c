
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



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 3 "1507031.y"

	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	#include<string.h>
	char varName[100][100];
	double varValue[100];
	int varType[100];
	int indexOfVar=0;
	int caseNo;
	int isDefault=1;
	int isCurrentVarInt=0;
	int findIndex(char* str);//to prevent implicit declaration
	double findValue(char* str); //same
	int isInt(double d);//same


/* Line 189 of yacc.c  */
#line 91 "1507031.tab.c"

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
     NUM = 258,
     VAR = 259,
     FUNCTION = 260,
     STRING = 261,
     SM = 262,
     IF = 263,
     ELSE = 264,
     PS = 265,
     PE = 266,
     AS = 267,
     LS = 268,
     GT = 269,
     EQ = 270,
     BS = 271,
     BE = 272,
     SWITCH = 273,
     CASE = 274,
     DEFAULT = 275,
     INC = 276,
     DEC = 277,
     FOR = 278,
     CM = 279,
     INT = 280,
     DOUBLE = 281,
     IFX = 282,
     POWER = 283,
     MN = 284,
     PL = 285,
     MOD = 286,
     DV = 287,
     ML = 288,
     FACTORIAL = 289
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 22 "1507031.y"

  double DOB;
  char* STR;



/* Line 214 of yacc.c  */
#line 168 "1507031.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 180 "1507031.tab.c"

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
#define YYLAST   296

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  9
/* YYNRULES -- Number of rules.  */
#define YYNRULES  35
/* YYNRULES -- Number of states.  */
#define YYNSTATES  86

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    18,    22,    28,
      32,    34,    40,    48,    53,    55,    57,    71,    76,    78,
      80,    84,    88,    92,    96,   100,   103,   107,   111,   115,
     119,   123,   126,   128,   132,   134
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      36,     0,    -1,    -1,    36,    37,    -1,     7,    -1,    40,
       7,    -1,    25,     4,    12,    40,     7,    -1,    25,     4,
       7,    -1,    26,     4,    12,    40,     7,    -1,    26,     4,
       7,    -1,    39,    -1,     8,    10,    40,    11,    37,    -1,
       8,    10,    40,    11,    37,     9,    37,    -1,     5,    16,
      37,    17,    -1,    41,    -1,    38,    -1,    23,    10,    39,
       4,    13,    40,     7,     4,    11,    16,    40,     7,    17,
      -1,     4,    12,    40,     7,    -1,     3,    -1,     4,    -1,
      40,    30,    40,    -1,    40,    29,    40,    -1,    40,    33,
      40,    -1,    40,    32,    40,    -1,    40,    31,    40,    -1,
      40,    34,    -1,    40,    28,    40,    -1,    40,    13,    40,
      -1,    40,    14,    40,    -1,    40,    15,    40,    -1,    10,
      40,    11,    -1,    20,    37,    -1,    42,    -1,    19,    40,
      37,    -1,    43,    -1,    18,    10,    40,    11,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    57,    57,    59,    62,    64,    66,    82,    98,   114,
     130,   132,   143,   154,   158,   160,   163,   171,   186,   188,
     207,   209,   211,   213,   223,   243,   260,   262,   264,   266,
     268,   272,   278,   281,   289,   294
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "VAR", "FUNCTION", "STRING", "SM",
  "IF", "ELSE", "PS", "PE", "AS", "LS", "GT", "EQ", "BS", "BE", "SWITCH",
  "CASE", "DEFAULT", "INC", "DEC", "FOR", "CM", "INT", "DOUBLE", "IFX",
  "POWER", "MN", "PL", "MOD", "DV", "ML", "FACTORIAL", "$accept",
  "program", "statement", "forLoop", "assignment", "expression",
  "casestatement", "otherCases", "sw", 0
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
     285,   286,   287,   288,   289
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    36,    36,    37,    37,    37,    37,    37,    37,
      37,    37,    37,    37,    37,    37,    38,    39,    40,    40,
      40,    40,    40,    40,    40,    40,    40,    40,    40,    40,
      40,    41,    41,    42,    42,    43
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     5,     3,     5,     3,
       1,     5,     7,     4,     1,     1,    13,     4,     1,     1,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     3,
       3,     2,     1,     3,     1,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    18,    19,     0,     4,     0,     0,     0,
       0,     0,     0,     0,     0,     3,    15,    10,     0,    14,
      32,    34,     0,     0,     0,    19,     0,     0,     0,    31,
       0,     0,     0,     5,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,     0,     0,     0,    30,     0,    33,
       0,     0,     7,     0,     9,     0,    27,    28,    29,    26,
      21,    20,    24,    23,    22,    17,    13,     0,    35,     0,
       0,     0,    11,     0,     6,     8,     0,     0,    12,     0,
       0,     0,     0,     0,     0,    16
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    15,    16,    17,    18,    19,    20,    21
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -26
static const yytype_int16 yypact[] =
{
     -26,   184,   -26,   -26,    -7,    -9,   -26,    -2,     0,    10,
       0,   208,    14,    21,    31,   -26,   -26,   -26,     8,   -26,
     -26,   -26,     0,   208,     0,   -26,   209,     0,    65,   -26,
      42,    -1,     5,   -26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -26,    93,    37,   233,   -26,   240,   -26,
      -7,    51,   -26,     0,   -26,     0,    19,    19,    30,   262,
      70,    70,   -25,   -25,   -25,   -26,   -26,   208,   -26,    43,
     102,   130,    49,     0,   -26,   -26,   208,   139,   -26,    63,
      60,    61,     0,   167,    59,   -26
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -26,   -26,   -10,   -26,    52,    -8,   -26,   -26,   -26
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      26,    29,    28,     3,    25,    22,    52,    23,    24,    43,
       8,    53,    54,    45,    44,    33,    46,    55,    49,    48,
      27,    34,    35,    36,    30,    31,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    32,    37,    38,    39,    40,
      41,    42,    43,    34,    35,    70,    50,    71,    38,    39,
      40,    41,    42,    43,    66,    69,    73,    72,    76,    38,
      39,    40,    41,    42,    43,    77,    78,    80,     3,     4,
       5,    81,     6,     7,    83,     8,    85,    82,    34,    35,
      36,     0,    51,     9,    10,    11,     0,     0,    12,     0,
      13,    14,     0,    37,    38,    39,    40,    41,    42,    43,
      65,    40,    41,    42,    43,     0,    34,    35,    36,    74,
       0,     0,     0,     0,     0,    34,    35,    36,     0,     0,
       0,    37,    38,    39,    40,    41,    42,    43,     0,     0,
      37,    38,    39,    40,    41,    42,    43,    75,     0,     0,
       0,     0,     0,    34,    35,    36,    79,     0,     0,     0,
       0,     0,    34,    35,    36,     0,     0,     0,    37,    38,
      39,    40,    41,    42,    43,     0,     0,    37,    38,    39,
      40,    41,    42,    43,    84,     0,     0,     0,     0,     0,
      34,    35,    36,     0,     2,     0,     0,     3,     4,     5,
       0,     6,     7,     0,     8,    37,    38,    39,    40,    41,
      42,    43,     9,    10,    11,     0,     0,    12,     0,    13,
      14,     3,     4,     5,     0,     6,     7,     0,     8,     0,
      47,     0,    34,    35,    36,     0,     9,    10,    11,     0,
       0,    12,     0,    13,    14,     0,     0,    37,    38,    39,
      40,    41,    42,    43,    67,     0,    34,    35,    36,     0,
       0,    68,     0,    34,    35,    36,     0,     0,     0,     0,
       0,    37,    38,    39,    40,    41,    42,    43,    37,    38,
      39,    40,    41,    42,    43,    34,    35,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,    38,    39,    40,    41,    42,    43
};

static const yytype_int8 yycheck[] =
{
       8,    11,    10,     3,     4,    12,     7,    16,    10,    34,
      10,    12,     7,    23,    22,     7,    24,    12,    28,    27,
      10,    13,    14,    15,    10,     4,    34,    35,    36,    37,
      38,    39,    40,    41,    42,     4,    28,    29,    30,    31,
      32,    33,    34,    13,    14,    53,     4,    55,    29,    30,
      31,    32,    33,    34,    17,     4,    13,    67,     9,    29,
      30,    31,    32,    33,    34,    73,    76,     4,     3,     4,
       5,    11,     7,     8,    82,    10,    17,    16,    13,    14,
      15,    -1,    30,    18,    19,    20,    -1,    -1,    23,    -1,
      25,    26,    -1,    28,    29,    30,    31,    32,    33,    34,
       7,    31,    32,    33,    34,    -1,    13,    14,    15,     7,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,     7,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,     7,    -1,    -1,    -1,
      -1,    -1,    13,    14,    15,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    34,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,     7,    -1,    -1,    -1,    -1,    -1,
      13,    14,    15,    -1,     0,    -1,    -1,     3,     4,     5,
      -1,     7,     8,    -1,    10,    28,    29,    30,    31,    32,
      33,    34,    18,    19,    20,    -1,    -1,    23,    -1,    25,
      26,     3,     4,     5,    -1,     7,     8,    -1,    10,    -1,
      11,    -1,    13,    14,    15,    -1,    18,    19,    20,    -1,
      -1,    23,    -1,    25,    26,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    11,    -1,    13,    14,    15,    -1,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    28,    29,
      30,    31,    32,    33,    34,    13,    14,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    36,     0,     3,     4,     5,     7,     8,    10,    18,
      19,    20,    23,    25,    26,    37,    38,    39,    40,    41,
      42,    43,    12,    16,    10,     4,    40,    10,    40,    37,
      10,     4,     4,     7,    13,    14,    15,    28,    29,    30,
      31,    32,    33,    34,    40,    37,    40,    11,    40,    37,
       4,    39,     7,    12,     7,    12,    40,    40,    40,    40,
      40,    40,    40,    40,    40,     7,    17,    11,    11,     4,
      40,    40,    37,    13,     7,     7,     9,    40,    37,     7,
       4,    11,    16,    40,     7,    17
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
        case 5:

/* Line 1455 of yacc.c  */
#line 64 "1507031.y"
    { printf("value of expression: %lf\n", (yyvsp[(1) - (2)].DOB)); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 66 "1507031.y"
    {
						//declaration of a variable with initialization
						if(findIndex((yyvsp[(2) - (5)].STR))==-1)
						{
							strcpy(varName[indexOfVar],(yyvsp[(2) - (5)].STR));
							varValue[indexOfVar]=(yyvsp[(4) - (5)].DOB);
							varType[indexOfVar]=1;
							indexOfVar++;
							printf("A new variable named: %s is declared and initialized with: %lf\n",(yyvsp[(2) - (5)].STR),(yyvsp[(4) - (5)].DOB));
						}
						else
						{
							printf("Variable named: %s is already declared...try using different name\n",(yyvsp[(2) - (5)].STR));
						}
	;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 82 "1507031.y"
    {
						//declaration of a variable without initialization
						if(findIndex((yyvsp[(2) - (3)].STR))==-1)
						{
							strcpy(varName[indexOfVar],(yyvsp[(2) - (3)].STR));
							varValue[indexOfVar]=0;
							varType[indexOfVar]=1;
							indexOfVar++;
							printf("A new variable named: %s is declared\n",(yyvsp[(2) - (3)].STR));
						}
						else
						{
							printf("Variable named: %s is already declared...try using different name\n",(yyvsp[(2) - (3)].STR));
						}
	;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 98 "1507031.y"
    {
						//declaration of a variable with initialization
						if(findIndex((yyvsp[(2) - (5)].STR))==-1)
						{
							strcpy(varName[indexOfVar],(yyvsp[(2) - (5)].STR));
							varValue[indexOfVar]=(yyvsp[(4) - (5)].DOB);
							varType[indexOfVar]=0;
							indexOfVar++;
							printf("A new variable named: %s is declared and initialized with: %lf\n",(yyvsp[(2) - (5)].STR),(yyvsp[(4) - (5)].DOB));
						}
						else
						{
							printf("Variable named: %s is already declared...try using different name\n",(yyvsp[(2) - (5)].STR));
						}
	;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 114 "1507031.y"
    {
						//declaration of a variable without initialization
						if(findIndex((yyvsp[(2) - (3)].STR))==-1)
						{
							strcpy(varName[indexOfVar],(yyvsp[(2) - (3)].STR));
							varValue[indexOfVar]=0;
							varType[indexOfVar]=0;
							indexOfVar++;
							printf("A new variable named: %s is declared\n",(yyvsp[(2) - (3)].STR));
						}
						else
						{
							printf("Variable named: %s is already declared...try using different name\n",(yyvsp[(2) - (3)].STR));
						}
	;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 132 "1507031.y"
    {
								if((yyvsp[(3) - (5)].DOB))
								{
									printf("value of expression in IF: %lf\n",(yyvsp[(5) - (5)].DOB));
								}
								else
								{
									printf("condition is false in IF block\n");
								}
							;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 143 "1507031.y"
    {
								 	if((yyvsp[(3) - (7)].DOB))
									{
										printf("value of expression in IF: %lf\n",(yyvsp[(5) - (7)].DOB));
									}
									else
									{
										printf("value of expression in ELSE: %lf\n",(yyvsp[(7) - (7)].DOB));
									}
								   ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 154 "1507031.y"
    { 
									printf(" inside Function %s\n",(yyvsp[(1) - (4)].STR)); printf("Statement value: %lf\n",(yyvsp[(3) - (4)].DOB));  printf(" \n"); 
								;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 163 "1507031.y"
    { 
	      double i;
	      for (i=varValue[findIndex((yyvsp[(3) - (13)].STR))] ; i<(yyvsp[(6) - (13)].DOB);i++)
				{
		  		       printf("\nexpression in for loop : %lf",(yyvsp[(11) - (13)].DOB)); /*a increment kora hoeni tai still 0 print hoe...OK*/
			    }
		   ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 171 "1507031.y"
    {
					    (yyval.STR) = (yyvsp[(1) - (4)].STR);
    					int idx=findIndex((yyvsp[(1) - (4)].STR));
    					if(idx==-1)
    					{
    						printf("Variable %s is not declared\n",(yyvsp[(1) - (4)].STR));
    					}
    					else
    					{
    						varValue[idx] = (yyvsp[(3) - (4)].DOB); 
							printf("Variable name: %s and its assigned value: %lf\t\n",(yyvsp[(1) - (4)].STR),(yyvsp[(3) - (4)].DOB));
    					}
					;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 186 "1507031.y"
    { (yyval.DOB) = (yyvsp[(1) - (1)].DOB); /*printf("var->exp %lf\n",$$);*/ ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 188 "1507031.y"
    { 	if(varType[findIndex((yyvsp[(1) - (1)].STR))]==1)
							{
								isCurrentVarInt=1;
							}
							else
							{
								isCurrentVarInt=0;	
							}
							int idx=findIndex((yyvsp[(1) - (1)].STR));
							if(idx!=-1)
							{
								(yyval.DOB) = findValue((yyvsp[(1) - (1)].STR));
							}
							else
							{
								printf("Variable %s is not declared\n",(yyvsp[(1) - (1)].STR));
							}
						;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 207 "1507031.y"
    { (yyval.DOB) = (yyvsp[(1) - (3)].DOB) + (yyvsp[(3) - (3)].DOB); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 209 "1507031.y"
    { (yyval.DOB) = (yyvsp[(1) - (3)].DOB) - (yyvsp[(3) - (3)].DOB); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 211 "1507031.y"
    { (yyval.DOB) = (yyvsp[(1) - (3)].DOB) * (yyvsp[(3) - (3)].DOB); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 213 "1507031.y"
    { 	if((yyvsp[(3) - (3)].DOB)) 
				  		{
				     			(yyval.DOB) = (yyvsp[(1) - (3)].DOB) / (yyvsp[(3) - (3)].DOB);
				  		}
				  		else
				  		{
							(yyval.DOB) = 0;
							printf("\ndivision by zero\t");
				  		} 	
				    	;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 223 "1507031.y"
    {	if((yyvsp[(3) - (3)].DOB)) 
							  		{
							  			
							     		if(isInt((yyvsp[(1) - (3)].DOB))&&isInt((yyvsp[(3) - (3)].DOB))&&isCurrentVarInt==1)
							     		{
							     			int temp1=(yyvsp[(1) - (3)].DOB),temp2=(yyvsp[(3) - (3)].DOB);
							     			(yyval.DOB)=temp1%temp2;
							     		}
							     		else
							     		{
							     			printf("Invalid datatype. Mod operation is only available for integers\n");
							     			(yyval.DOB)=0;
							     		}
							  		}
							  		else
							  		{
										(yyval.DOB) = 0;
										printf("\ncannot mod with zero\t");
							  		} 	
				    	;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 243 "1507031.y"
    {
							int mult=1 ,i,n=(yyvsp[(1) - (2)].DOB);
							if(isInt((yyvsp[(1) - (2)].DOB))&&isCurrentVarInt==1)
							{
								for(i=(yyvsp[(1) - (2)].DOB);i>0;i--)
								{
									mult=mult*i;
								}
								(yyval.DOB)=mult;
								printf("factorial value %d ! = %.10lf\n",n,(yyval.DOB)); 
							}
							else
							{
								printf("Cannot find factorial for double value\n");
							}
						;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 260 "1507031.y"
    { (yyval.DOB)=pow((yyvsp[(1) - (3)].DOB),(yyvsp[(3) - (3)].DOB)); printf("To the power value %.10lf\n",(yyval.DOB)); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 262 "1507031.y"
    { (yyval.DOB) = (yyvsp[(1) - (3)].DOB) < (yyvsp[(3) - (3)].DOB); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 264 "1507031.y"
    { (yyval.DOB) = (yyvsp[(1) - (3)].DOB) > (yyvsp[(3) - (3)].DOB); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 266 "1507031.y"
    { (yyval.DOB) = (yyvsp[(1) - (3)].DOB) == (yyvsp[(3) - (3)].DOB); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 268 "1507031.y"
    { (yyval.DOB) = (yyvsp[(2) - (3)].DOB);	;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 272 "1507031.y"
    {    if(isDefault)
							 {
							 	printf("No case matched and executing default statement and its value : %lf\n",(yyvsp[(2) - (2)].DOB));
							 }
							 isDefault=1;
 				;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 281 "1507031.y"
    { 
						 if((yyvsp[(2) - (3)].DOB)==caseNo)
						 {
						 	printf("Case no %.0lf : value of statement: %lf\n",(yyvsp[(2) - (3)].DOB),(yyvsp[(3) - (3)].DOB));
						 	isDefault=0;
						 }
				    ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 294 "1507031.y"
    {
												printf("Switch case forwarded to case: %.0lf\n",(yyvsp[(3) - (4)].DOB));
											   	caseNo=(yyvsp[(3) - (4)].DOB);
										;}
    break;



/* Line 1455 of yacc.c  */
#line 1824 "1507031.tab.c"
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
#line 299 "1507031.y"


int isInt(double d)
{
    char str[16];
    sprintf(str, "%f",d);
    int ck=0,i;
    for(i=strlen(str)-1;i>=0;i--)
    {
        if(str[i]=='.')
        {
            return 1;
        }
        if(str[i]>'0'&&str[i]<='9')
        {
            return 0;
        }
    }
}


int findIndex(char* str)
{
    int i,j,z;
    for(i=0;i<100;i++)
    {
        int isFound=1;
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]!=varName[i][j])
            {
                isFound=0;
                break;
            }
        }
        if(isFound==1&&strlen(str)==strlen(varName[i]))
        {
            return i;
        }
    }
    return -1; //if the variable is found to be undeclared
}

double findValue(char* str)
{
	int idx=findIndex(str);
	return varValue[idx];
}

int yywrap()
{
return 1;
}

int main(){
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	yyparse();
}

int yyerror(char *s){
	printf( "%s\n", s);
}

//hafiz031
