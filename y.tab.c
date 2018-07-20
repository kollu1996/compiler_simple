/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "symbol.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdlib.h>
        #include<string.h>
	
	
   

      	int yylex(void);
        int yyerror();
         FILE *yyin;
         struct arglist *arglistentry2=NULL,*temp5,*temp6,*temp10,*kay,*kay1;
   	 int a=2,countes=0,countes1=0,c=-1,z=0,u=0,cef=0,w;
	#include "symbol.h"
	#include "symbol.c"
	#define YYSTYPE tnode *

#line 84 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    END = 258,
    NUM = 259,
    ID = 260,
    READ = 261,
    WRITE = 262,
    IF = 263,
    THEN = 264,
    ELSE = 265,
    DO = 266,
    WHILE = 267,
    ENDIF = 268,
    ENDWHILE = 269,
    DE = 270,
    BOOL = 271,
    INT = 272,
    DECL = 273,
    ENDDECL = 274,
    INTEGER = 275,
    BE = 276,
    FINAL = 277,
    FALSE = 278,
    TRUE = 279,
    MAIN = 280,
    RET = 281,
    NEQ = 282
  };
#endif
/* Tokens.  */
#define END 258
#define NUM 259
#define ID 260
#define READ 261
#define WRITE 262
#define IF 263
#define THEN 264
#define ELSE 265
#define DO 266
#define WHILE 267
#define ENDIF 268
#define ENDWHILE 269
#define DE 270
#define BOOL 271
#define INT 272
#define DECL 273
#define ENDDECL 274
#define INTEGER 275
#define BE 276
#define FINAL 277
#define FALSE 278
#define TRUE 279
#define MAIN 280
#define RET 281
#define NEQ 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 189 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   329

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  160

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   284

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      39,    40,    30,    28,    36,    29,     2,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    43,
      33,    44,    32,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    37,     2,    38,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,    42,     2,     2,     2,     2,
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
      25,    26,    27,    34,    35
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    28,    28,    29,    30,    31,    32,    35,    37,    40,
      41,    44,    47,    48,    53,    59,    67,    84,    85,    88,
      95,    96,    99,   151,   152,   155,   162,   163,   166,   167,
     171,   174,   183,   194,   204,   205,   208,   211,   212,   215,
     220,   225,   234,   238,   239,   240,   243,   245,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   294,   296,   297,   298,   300,   350,   354
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "END", "NUM", "ID", "READ", "WRITE",
  "IF", "THEN", "ELSE", "DO", "WHILE", "ENDIF", "ENDWHILE", "DE", "BOOL",
  "INT", "DECL", "ENDDECL", "INTEGER", "BE", "FINAL", "FALSE", "TRUE",
  "MAIN", "RET", "NEQ", "'+'", "'-'", "'*'", "'/'", "'>'", "'<'", "\"<=\"",
  "\">=\"", "','", "'['", "']'", "'('", "')'", "'{'", "'}'", "';'", "'='",
  "$accept", "Program", "GdeclBlock", "Gdecllist", "Gdecl", "Gidlist",
  "Gid", "ArgaList", "Arga", "FdefBlock", "Fdef", "Paramlist", "Param",
  "LdeclBlock", "Ldecllist", "Ldecl", "Lidlist", "MainBlock", "Type", "K",
  "Slist", "Stmt", "E", "ArgList", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,    43,    45,
      42,    47,    62,    60,   283,   284,    44,    91,    93,    40,
      41,   123,   125,    59,    61
};
# endif

#define YYPACT_NINF -133

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-133)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     104,    -8,    40,    25,   108,  -133,     0,  -133,  -133,  -133,
      52,  -133,    37,  -133,    -8,   108,  -133,  -133,    42,    10,
    -133,  -133,    67,    16,  -133,  -133,  -133,    22,    14,    62,
     110,    37,   110,    79,    32,   -18,  -133,    78,  -133,     1,
    -133,    98,    56,    96,  -133,   110,  -133,  -133,   110,   106,
    -133,  -133,    65,  -133,   137,   292,   118,  -133,  -133,    79,
    -133,  -133,  -133,   -27,   -24,   109,   124,   125,   126,    41,
      93,  -133,  -133,    96,   156,  -133,    41,    41,   161,    41,
      41,    41,  -133,    81,  -133,  -133,    41,    59,  -133,  -133,
     138,  -133,   206,    80,   -25,   122,   143,   164,    41,    39,
     185,    41,    41,    41,    41,    41,    41,    41,    41,    41,
      41,  -133,  -133,   123,  -133,    41,   139,   158,   159,   192,
     227,  -133,   294,    13,  -133,   175,   175,   154,   154,   196,
     196,   175,   175,   175,   175,    41,   248,  -133,  -133,   292,
     292,  -133,    41,  -133,   101,   165,   133,   282,   294,  -133,
     163,   292,   179,   181,  -133,   240,  -133,  -133,   183,  -133
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     6,     5,     0,    35,    34,     8,
       0,    10,     0,     1,    34,     4,    21,     3,     0,     0,
       7,     9,    14,    11,    13,    20,     2,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,     0,    12,     0,
      24,     0,     0,     0,    15,     0,    16,    19,     0,     0,
      25,    27,     0,    29,     0,     0,     0,    17,    23,     0,
      26,    28,    32,     0,     0,     0,     0,     0,     0,     0,
       0,    38,    33,     0,     0,    30,     0,     0,     0,     0,
       0,     0,    59,    60,    63,    62,     0,     0,    36,    37,
       0,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,    22,     0,    39,     0,     0,     0,     0,     0,
       0,    64,    67,     0,    52,    58,    57,    48,    50,    49,
      51,    54,    53,    55,    56,     0,     0,    41,    43,     0,
       0,    61,     0,    65,     0,     0,     0,     0,    66,    40,
       0,     0,     0,     0,    42,     0,    44,    45,     0,    46
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -133,  -133,  -133,  -133,   217,  -133,   201,  -133,   198,  -133,
     234,  -133,   202,   205,  -133,   199,  -133,    -1,     6,   194,
    -132,   -70,   -75,  -133
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,    10,    11,    23,    24,    35,    36,    15,
      16,    39,    40,    43,    52,    53,    63,     5,    12,    56,
      70,    71,    87,   123
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      89,    92,    93,    17,    95,    96,    97,   146,   147,    74,
      18,   100,   115,    76,    26,   116,    75,     6,    45,   155,
      77,    18,    46,   120,   122,    13,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,    37,    48,    41,    19,
     136,    49,    22,    82,    83,    82,    83,    27,    54,   142,
      28,    37,    31,   143,    41,    33,     7,     8,    54,     9,
     144,    32,    84,    85,    84,    85,    34,   148,     7,     8,
      44,    20,     7,     8,   101,    51,    89,    89,    86,   121,
      86,     7,     8,    47,    60,    89,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   101,    88,    42,    64,    65,
      66,    67,   111,    50,    29,    68,    30,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   101,    55,    98,    69,
      99,     1,     2,   114,     7,    14,     7,     8,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   101,    64,    65,
      66,    67,    62,   151,   149,    68,   152,    59,    78,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   101,    69,
      72,    91,   117,    79,    80,    81,    94,   135,   139,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   101,
     112,   102,   137,   118,   105,   106,   107,   108,   109,   110,
      -1,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     101,   138,    -1,   140,   119,   150,   154,    -1,    -1,    -1,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   101,   156,   102,   157,   124,   159,    21,   107,   108,
     109,   110,    38,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   101,    57,   113,    64,    65,    66,    67,    25,
      58,    61,    68,   158,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   101,    73,   141,    69,    90,     0,     0,
       0,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     107,   108,   109,   110,     0,     0,   145,    64,    65,    66,
      67,     0,     0,     0,    68,     0,   153,    64,    65,    66,
      67,     0,     0,     0,    68,     0,     0,     0,    69,   101,
       0,     0,     0,     0,     0,     0,     0,     0,    69,     0,
       0,   102,   103,   104,   105,   106,   107,   108,   109,   110
};

static const yytype_int16 yycheck[] =
{
      70,    76,    77,     4,    79,    80,    81,   139,   140,    36,
       4,    86,    37,    37,    15,    40,    43,    25,    36,   151,
      44,    15,    40,    98,    99,     0,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,    30,    36,    32,    39,
     115,    40,     5,     4,     5,     4,     5,     5,    42,    36,
      40,    45,    36,    40,    48,    41,    16,    17,    52,    19,
     135,    39,    23,    24,    23,    24,     4,   142,    16,    17,
      38,    19,    16,    17,    15,    19,   146,   147,    39,    40,
      39,    16,    17,     5,    19,   155,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    15,     3,    18,     5,     6,
       7,     8,    43,     5,    37,    12,    39,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    15,    21,    37,    26,
      39,    17,    18,    43,    16,    17,    16,    17,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    15,     5,     6,
       7,     8,     5,    10,    43,    12,    13,    41,    39,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    15,    26,
      42,     5,    40,    39,    39,    39,     5,    44,     9,    15,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    15,
      42,    27,    43,    40,    30,    31,    32,    33,    34,    35,
      15,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      15,    43,    27,    11,    40,    40,    43,    32,    33,    34,
      35,    15,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    15,    43,    27,    43,    40,    43,    10,    32,    33,
      34,    35,    31,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    15,    45,    38,     5,     6,     7,     8,    15,
      48,    52,    12,    13,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    15,    59,    38,    26,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    38,     5,     6,     7,
       8,    -1,    -1,    -1,    12,    -1,    14,     5,     6,     7,
       8,    -1,    -1,    -1,    12,    -1,    -1,    -1,    26,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,    18,    46,    47,    62,    25,    16,    17,    19,
      48,    49,    63,     0,    17,    54,    55,    62,    63,    39,
      19,    49,     5,    50,    51,    55,    62,     5,    40,    37,
      39,    36,    39,    41,     4,    52,    53,    63,    51,    56,
      57,    63,    18,    58,    38,    36,    40,     5,    36,    40,
       5,    19,    59,    60,    63,    21,    64,    53,    57,    41,
      19,    60,     5,    61,     5,     6,     7,     8,    12,    26,
      65,    66,    42,    58,    36,    43,    37,    44,    39,    39,
      39,    39,     4,     5,    23,    24,    39,    67,     3,    66,
      64,     5,    67,    67,     5,    67,    67,    67,    37,    39,
      67,    15,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    43,    42,    38,    43,    37,    40,    40,    40,    40,
      67,    40,    67,    68,    40,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    44,    67,    43,    43,     9,
      11,    38,    36,    40,    67,    38,    65,    65,    67,    43,
      40,    10,    13,    14,    43,    65,    43,    43,    13,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    46,    46,    46,    46,    47,    47,    48,
      48,    49,    50,    50,    51,    51,    51,    52,    52,    53,
      54,    54,    55,    56,    56,    57,    58,    58,    59,    59,
      60,    61,    61,    62,    63,    63,    64,    65,    65,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    68,    68
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     1,     3,     2,     2,
       1,     2,     3,     1,     1,     4,     4,     3,     1,     2,
       2,     1,     9,     3,     1,     2,     3,     2,     2,     1,
       3,     3,     1,     8,     1,     1,     3,     2,     1,     4,
       7,     5,     8,     5,     8,     8,    10,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     4,     1,     1,     3,     4,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
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

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
      yychar = yylex ();
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 28 "symbol.y" /* yacc.c:1646  */
    {  }
#line 1399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 35 "symbol.y" /* yacc.c:1646  */
    { nikhil_codegen(); 
					 }
#line 1406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 53 "symbol.y" /* yacc.c:1646  */
    {int *t; t=(int*)malloc(sizeof(int)); 
                            
                            if(Glookup((yyvsp[0])->name)!=NULL) {printf("identifier already found\n"); exit(1);}
                             if((a%2)==0) { (yyval)=makeanentry((yyvsp[0])->name,0,0,NULL,1,-1,NULL);} 
                              else if((a%2)!=0){(yyval)=makeanentry((yyvsp[0])->name,1,0,NULL,1,-1,NULL);}}
#line 1416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 59 "symbol.y" /* yacc.c:1646  */
    {int *b; b=(int*)malloc(((yyvsp[-1])->value)*sizeof(int));

                                if(Glookup((yyvsp[-3])->name)!=NULL) {
                      printf("identifier already found\n");exit(1);} 
                 if((a%2)==0){(yyval)=makeanentry((yyvsp[-3])->name,0,0,NULL,((yyvsp[-1])->value),-1,NULL);}
                        else if((a%2)!=0){(yyval)=makeanentry((yyvsp[-3])->name,1,0,NULL,((yyvsp[-1])->value),-1,NULL);}}
#line 1427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 68 "symbol.y" /* yacc.c:1646  */
    {int *b=(int*)malloc(countes*sizeof(int));
                           if(Glookup((yyvsp[-3])->name)!=NULL)
                          { 
                          (yyval)=makeanentry((yyvsp[-3])->name,1,0,NULL,0,c,headparam);
                          }
                          else if(Glookup((yyvsp[-3])->name)==NULL)
                            {
                              c++;
                              if(((yyvsp[-3])->type)==0)
                               (yyval)=makeanentry((yyvsp[-3])->name,0,0,NULL,0,c,headparam);
                             else if(((yyvsp[-3])->type)==1)
                               (yyval)=makeanentry((yyvsp[-3])->name,1,0,NULL,0,c,headparam);
                            }  
                          }
#line 1446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 88 "symbol.y" /* yacc.c:1646  */
    {
                  countes=countes+1;
                /*if(llookup($2->name)!=NULL) { printf("Re decleration of variable\n"); exit(1);} */
                           
                          }
#line 1456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 100 "symbol.y" /* yacc.c:1646  */
    { 
                                                          
                                                        
                                                        char x = 'a';char *y = &x; (yyval)=makenode(0,48,y,0,(yyvsp[-1]),(yyvsp[-7]),NULL); 
                                                  
                                                      
                                                        //printf("%d-%d\n",(Glookup($2->name)->TYPE),$2->type);
							if(Glookup((yyvsp[-7])->name)==NULL) { printf("no function exists\n"); exit(1);}
                                                        
						          if((Glookup((yyvsp[-7])->name)->TYPE)!=(a%2))
                                                         {
                                                            printf("error in function decleration type\n");
                                                            exit(0);
                                                         }
							/*struct parameter *paramlist1=headparam;

                                                       
							while((kay!=NULL)&&(paramlist1!=NULL))
							{
							
							   if(kay->type!=paramlist1->type)
							     
							      {
								   printf("conflicting in arguments types\n");
								   exit(1);
							       }
							   

							 

							   kay=kay->next;
							   paramlist1=paramlist1->next;
							}
                                                       */

                                                        cef=2;
							codegen((yyval));
                                                       
                                                          
					               head3=NULL;
                                                       head2=NULL;
                                                       head1=NULL;
                                                       
                                                        
							z=0;
							u=0;
                                                       
                                                      }
#line 1509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 155 "symbol.y" /* yacc.c:1646  */
    {u=u+1;  if((a%2)==0){ headparam=makeparamentry((yyvsp[0])->name,0,u,NULL);}
                            else if((a%2)==1) { headparam=makeparamentry((yyvsp[0])->name,1,u,NULL);}
                  }
#line 1517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 175 "symbol.y" /* yacc.c:1646  */
    {if(llookup((yyvsp[0])->name)!=NULL) { printf("Re decleration of variable 1\n"); exit(1);} 
                               
                       z=z+1;  if(((yyvsp[0])->type)==0) {(yyval)=makelocal((yyvsp[0])->name,0,z,NULL); }
                              else if(((yyvsp[0])->type)==1) {(yyval)=makelocal((yyvsp[0])->name,1,z,NULL);}
                           
                         }
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 183 "symbol.y" /* yacc.c:1646  */
    { if(llookup((yyvsp[0])->name)!=NULL) { printf("Re decleration of variable 2\n"); exit(1);} 
                                    
                         z=z+1;  if(((yyvsp[0])->type)==0) {(yyval)=makelocal((yyvsp[0])->name,0,z,NULL);}
                                 else if(((yyvsp[0])->type)==1) {(yyval)=makelocal((yyvsp[0])->name,1,z,NULL);}
                         
                             
                          }
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 194 "symbol.y" /* yacc.c:1646  */
    { char x = 'a';char *y = &x;(yyval)=makenode(0,45,y,0,(yyvsp[-1]),NULL,NULL);
							cef=1;
							 codegen((yyval)); 
							head3=NULL;head2=NULL;head1=NULL;
							z=0;
							u=0;
							
                                                       }
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 204 "symbol.y" /* yacc.c:1646  */
    {a=a+2;}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 205 "symbol.y" /* yacc.c:1646  */
    {a=a+1;}
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 208 "symbol.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 211 "symbol.y" /* yacc.c:1646  */
    {char x = 'a';char *y = &x;(yyval) = makenode(0,0,y,0,(yyvsp[-1]),(yyvsp[0]),NULL);}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 212 "symbol.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 215 "symbol.y" /* yacc.c:1646  */
    {char x = '=';char *y = &x;if((Glookup((yyvsp[-3])->name))&&(llookup((yyvsp[-3])->name))==NULL){printf("you are printing something undeclared ffff \n");exit(1);}
(yyval) = makenode(0,1,y,0,(yyvsp[-3]),(yyvsp[-1]),NULL);  typecheck((yyval)); }
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 220 "symbol.y" /* yacc.c:1646  */
    { char x = '=';char *y = &x;if((Glookup((yyvsp[-4])->name))&&(llookup((yyvsp[-4])->name))==NULL){printf("you are printing something undeclared\n"); exit(1);} (yyval) = makenode(0,2,y,0,(yyvsp[-6]),(yyvsp[-1]),(yyvsp[-4])); typecheck((yyval));}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 225 "symbol.y" /* yacc.c:1646  */
    {char x = '=';char *y = &x;if((Glookup((yyvsp[-2])->name))&&(llookup((yyvsp[-2])->name))==NULL){printf("you are printing something undeclared ggggg\n");exit(1);}(yyval) = makenode(0,30,y,0,(yyvsp[-2]),NULL,NULL); 
                                 }
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 234 "symbol.y" /* yacc.c:1646  */
    {char x = '=';char *y = &x;if((Glookup((yyvsp[-5])->name))==NULL){printf("you are printing something undecalredr\n");exit(1);}  (yyval) = makenode(0,31,y,0,(yyvsp[-5]),NULL,(yyvsp[-3]));}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 238 "symbol.y" /* yacc.c:1646  */
    {char x = 'a';char *y = &x; (yyval) = makenode(0,3,y,0,(yyvsp[-2]),NULL,NULL);}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 239 "symbol.y" /* yacc.c:1646  */
    {char x = 'a';char *y = &x; (yyval) = makenode(0,13,y,0,(yyvsp[-5]),(yyvsp[-2]),NULL); }
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 240 "symbol.y" /* yacc.c:1646  */
    {char x = 'a';char *y = &x;
                                                 (yyval) = makenode(0,14,y,0,(yyvsp[-5]),(yyvsp[-2]),NULL);
                                                }
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 243 "symbol.y" /* yacc.c:1646  */
    {char x='a';char *y=&x; (yyval) =makenode(0,15,y,0,(yyvsp[-7]),(yyvsp[-4]),(yyvsp[-2]));}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 245 "symbol.y" /* yacc.c:1646  */
    {char x = 'a';char *y = &x;(yyval) = makenode(0,67,y,0,(yyvsp[-1]),NULL,NULL);}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 250 "symbol.y" /* yacc.c:1646  */
    { char x = '+';char *y = &x;(yyval)=makenode(0,4,y,0,(yyvsp[-2]),(yyvsp[0]),NULL);typecheck((yyval));}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 251 "symbol.y" /* yacc.c:1646  */
    { char x = '*';char *y = &x;(yyval)=makenode(0,5,y,0,(yyvsp[-2]),(yyvsp[0]),NULL); typecheck((yyval));}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 252 "symbol.y" /* yacc.c:1646  */
    {char x= "-"; char *y = &x;(yyval)=makenode(0,6,y,0,(yyvsp[-2]),(yyvsp[0]),NULL);typecheck((yyval));}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 253 "symbol.y" /* yacc.c:1646  */
    {char x= "/"; char *y = &x;(yyval)=makenode(0,7,y,0,(yyvsp[-2]),(yyvsp[0]),NULL);typecheck((yyval));}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 254 "symbol.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 255 "symbol.y" /* yacc.c:1646  */
    {char x = '<';char *y = &x;(yyval)=makenode(1,11,y,0,(yyvsp[-2]),(yyvsp[0]),NULL);typecheck((yyval));}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 256 "symbol.y" /* yacc.c:1646  */
    {char x = '>';char *y = &x;(yyval)=makenode(1,10,y,0,(yyvsp[-2]),(yyvsp[0]),NULL);typecheck((yyval));}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 257 "symbol.y" /* yacc.c:1646  */
    {char x = "<=";char *y = &x;(yyval)=makenode(1,23,y,0,(yyvsp[-2]),(yyvsp[0]),NULL);typecheck((yyval));}
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 258 "symbol.y" /* yacc.c:1646  */
    {char x = ">=";char *y = &x;(yyval)=makenode(1,22,y,0,(yyvsp[-2]),(yyvsp[0]),NULL);typecheck((yyval));}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 259 "symbol.y" /* yacc.c:1646  */
    {char x = "!=";char *y = &x;(yyval)=makenode(1,90,y,0,(yyvsp[-2]),(yyvsp[0]),NULL);typecheck((yyval));}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 260 "symbol.y" /* yacc.c:1646  */
    {char x = '>';char *y = &x;(yyval)=makenode(1,12,y,0,(yyvsp[-2]),(yyvsp[0]),NULL); typecheck((yyval));}
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 261 "symbol.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]);}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 262 "symbol.y" /* yacc.c:1646  */
    {    if((Glookup((yyvsp[0])->name))&&(llookup((yyvsp[0])->name))==NULL)
                         {printf("you are printing something undeclared hhhh\n");exit(1);}  
                   struct gsymbol*hash1;
                   struct lsymbol*hash2;
                   struct parameter *hash3;
                  hash1=Glookup((yyvsp[0])->name);
                  hash2=llookup((yyvsp[0])->name);
                  hash3=plookup((yyvsp[0])->name);
                  
                  if(hash1!=NULL)
                  {
                  if(hash1->TYPE==1){ (yyvsp[0])->type=1;} 
                 else if(hash1->TYPE==0) { (yyvsp[0])->type=0;}
                  }


                 if(hash2!=NULL)
                {
                   if(hash2->type==1){ (yyvsp[0])->type=1;} 
                 else if(hash2->type==0) { (yyvsp[0])->type=0;}
                   
                }   
               
                 if(hash3!=NULL)
                 {
                   if(hash3->type==1){ (yyvsp[0])->type=1;} 
                 else if(hash3->type==0) { (yyvsp[0])->type=0;}
                }
                       
            
                   (yyval)=(yyvsp[0]);}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 294 "symbol.y" /* yacc.c:1646  */
    {char x = '>';char *y = &x;if((Glookup((yyvsp[-3])->name))==NULL){printf("you are printing something undeclared\n"); exit(1);} 
                 (yyval)=makenode(0,101,y,0,(yyvsp[-3]),NULL,(yyvsp[-1]));}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 296 "symbol.y" /* yacc.c:1646  */
    {  (yyval)=(yyvsp[0]);}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 297 "symbol.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]);}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 298 "symbol.y" /* yacc.c:1646  */
    {char x = '=';char *y = &x;(yyval)=makenode(0,43,y,0,(yyvsp[-2]),NULL,NULL);}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 300 "symbol.y" /* yacc.c:1646  */
    {struct arglist * temp7; temp7=llookup((yyvsp[-3])->name);
                   if(temp7!=NULL){printf("redecleration of variable\n"); exit(1);}
                char x = '=';char *y = &x; kay=temp5; arglistentry2=temp5;
                  
                (yyval)=makenode(0,44,y,0,(yyvsp[-3]),NULL,NULL);  
                
                  kay=(yyval)->arglistentry1;
                  kay1=kay;
                 while(kay!=NULL)
                  {
                    countes1=countes1+1;
                    kay=kay->next;
                   }
                 /* if(countes1!=countes)
                    {
                      printf("error in number of arguments\n");
                      exit(0);
                    } */
               
       
                                                      struct parameter *paramlist1=headparam;
                                                    
                                                       
							while((kay1!=NULL)&&(paramlist1!=NULL))
							{
							  //printf("%d\n",kay1->type);
                                                              
							   if(kay1->type!=paramlist1->type)
							     
							      {
								   printf("conflicting in arguments types\n");
								   exit(1);
							       }
							   kay1=kay1->next;
							   paramlist1=paramlist1->next;
							}
                        
                                              if(paramlist1!=NULL||kay1!=NULL)
                                              {
                                                  printf("error in number of arguments\n");
                                                       exit(1);
                                               }
                                                       

         // printf("hai\n");
		head3=NULL;
                arglistentry2=NULL; 
               }
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 350 "symbol.y" /* yacc.c:1646  */
    { if(((yyvsp[0])->type)==0){temp5=arglistentry((yyvsp[0]),0,NULL);}
                          else if(((yyvsp[0])->type)==1){temp5=arglistentry((yyvsp[0]),1,NULL);}
                         }
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 354 "symbol.y" /* yacc.c:1646  */
    { 
			     if(((yyvsp[0])->type)==0)
                             {
                              temp5=arglistentry((yyvsp[0]),0,NULL);
                              }
                             else if(((yyvsp[0])->type)==1)
                             {
                            temp5=arglistentry((yyvsp[0]),1,NULL);
                            }
                            }
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1854 "y.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 366 "symbol.y" /* yacc.c:1906  */
                         

int  yyerror(char const *s)
{
    printf("yyerror %s",s);
     return 0;
}


int main(int argc,char *argv[]) {
     yyin=fopen(argv[1],"r");
	yyparse();
	return 0;
}
