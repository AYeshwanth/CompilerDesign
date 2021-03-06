/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

	#include <math.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include "symbol.cpp"
	int g_addr = 100;

	extern "C" {
		int yylex();
		void yyerror(char *);
	}

	

#line 81 "y.tab.c" /* yacc.c:339  */

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
    ID = 258,
    NUM = 259,
    SIZEOF = 260,
    REAL = 261,
    PTR = 262,
    DOT = 263,
    TYPEDEF = 264,
    STRUCT = 265,
    INT = 266,
    DOUBLE = 267,
    VOID = 268,
    IF = 269,
    ELSE = 270,
    WHILE = 271,
    RETURN = 272,
    FOR = 273,
    DO = 274,
    SWITCH = 275,
    CASE = 276,
    BREAK = 277,
    DEFAULT = 278,
    CONTINUE = 279,
    PRINTF = 280,
    SCANF = 281,
    STRING = 282,
    PREPROC = 283,
    DOUBLE_INCR = 284,
    DOUBLE_DCR = 285,
    MUL_ASSIGN = 286,
    SUB_ASSIGN = 287,
    DIV_ASSIGN = 288,
    ADD_ASSIGN = 289,
    ARRAY = 290,
    FUNCTION = 291,
    MAIN = 292,
    GT = 293,
    LT = 294,
    LE = 295,
    GE = 296,
    NE = 297,
    EQ = 298,
    AND = 299,
    OR = 300
  };
#endif
/* Tokens.  */
#define ID 258
#define NUM 259
#define SIZEOF 260
#define REAL 261
#define PTR 262
#define DOT 263
#define TYPEDEF 264
#define STRUCT 265
#define INT 266
#define DOUBLE 267
#define VOID 268
#define IF 269
#define ELSE 270
#define WHILE 271
#define RETURN 272
#define FOR 273
#define DO 274
#define SWITCH 275
#define CASE 276
#define BREAK 277
#define DEFAULT 278
#define CONTINUE 279
#define PRINTF 280
#define SCANF 281
#define STRING 282
#define PREPROC 283
#define DOUBLE_INCR 284
#define DOUBLE_DCR 285
#define MUL_ASSIGN 286
#define SUB_ASSIGN 287
#define DIV_ASSIGN 288
#define ADD_ASSIGN 289
#define ARRAY 290
#define FUNCTION 291
#define MAIN 292
#define GT 293
#define LT 294
#define LE 295
#define GE 296
#define NE 297
#define EQ 298
#define AND 299
#define OR 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 38 "parser.y" /* yacc.c:355  */

 		int iValue; /* integer value */
 		float realValue;
 		char *str; /* identifier name */
	

#line 215 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 230 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  58
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   384

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  213

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    53,
      54,    55,    49,    47,    52,    48,     2,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    61,    51,
       2,    46,     2,    60,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,     2,    59,     2,     2,     2,     2,
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
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    46,    46,    47,    48,    49,    53,    54,    55,    56,
      57,    59,    60,    63,    72,    81,    90,    99,   110,   111,
     114,   115,   116,   117,   118,   121,   122,   123,   124,   125,
     128,   139,   140,   141,   142,   143,   144,   155,   156,   167,
     179,   190,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   222,   223,   224,   225,   226,   230,   231,   235,   240,
     243,   244,   246,   247,   249,   251,   251,   253,   254,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   268,   269,
     270,   274,   275,   276,   277,   281,   282,   283,   287,   291,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   308,
     311,   312,   313,   314,   315,   316,   321,   322
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUM", "SIZEOF", "REAL", "PTR",
  "DOT", "TYPEDEF", "STRUCT", "INT", "DOUBLE", "VOID", "IF", "ELSE",
  "WHILE", "RETURN", "FOR", "DO", "SWITCH", "CASE", "BREAK", "DEFAULT",
  "CONTINUE", "PRINTF", "SCANF", "STRING", "PREPROC", "DOUBLE_INCR",
  "DOUBLE_DCR", "MUL_ASSIGN", "SUB_ASSIGN", "DIV_ASSIGN", "ADD_ASSIGN",
  "ARRAY", "FUNCTION", "MAIN", "GT", "LT", "LE", "GE", "NE", "EQ", "AND",
  "OR", "'='", "'+'", "'-'", "'*'", "'/'", "';'", "','", "'\\''", "'('",
  "')'", "'['", "']'", "'{'", "'}'", "'?'", "':'", "$accept", "start",
  "Declaration", "StatementDeclaration", "VariableInit", "ValueVar",
  "Oper", "Assignment", "assign_operator", "FunctionCall", "ArrayUsage",
  "Function", "ArgListOpt", "ArgList", "Arg", "CompoundStmt", "$@1",
  "StmtList", "Stmt", "Type", "ForStmt", "IfStmt", "StructStmt",
  "PrintFunc", "Expr", "Conditional_statement", "Conditonal_condition",
  "pointer", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,    61,    43,    45,    42,
      47,    59,    44,    39,    40,    41,    91,    93,   123,   125,
      63,    58
};
# endif

#define YYPACT_NINF -142

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-142)))

#define YYTABLE_NINF -62

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     215,  -142,   254,   100,   242,     3,  -142,  -142,  -142,   215,
       1,  -142,   128,   128,    16,   215,   -31,   -28,   163,   215,
      21,   -24,   128,  -142,  -142,  -142,  -142,  -142,  -142,   117,
     128,   128,   128,   128,   128,    55,   128,   135,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   -29,  -142,  -142,
    -142,  -142,   128,  -142,   265,     4,   309,    17,  -142,  -142,
    -142,  -142,  -142,  -142,   128,  -142,   206,    30,    34,  -142,
    -142,  -142,  -142,  -142,  -142,   339,  -142,    -6,  -142,  -142,
    -142,  -142,  -142,  -142,    36,    35,  -142,  -142,   309,  -142,
    -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,    94,    41,
    -142,  -142,  -142,   110,    96,    94,  -142,  -142,   110,   110,
     110,   110,   110,   110,   110,  -142,  -142,   128,  -142,    50,
     318,  -142,   -44,  -142,    56,    60,  -142,   115,  -142,  -142,
    -142,  -142,  -142,  -142,    58,    71,    96,  -142,  -142,  -142,
    -142,   110,    75,    94,  -142,   110,    77,  -142,  -142,  -142,
    -142,  -142,  -142,  -142,  -142,    76,    89,    22,    91,   107,
     108,   119,  -142,  -142,  -142,  -142,   166,  -142,  -142,  -142,
     128,  -142,   127,   128,  -142,  -142,   113,   -35,  -142,   309,
     290,  -142,   284,   124,   128,   128,   128,   128,   128,   128,
     150,   128,   150,   129,  -142,  -142,  -142,  -142,  -142,  -142,
     170,  -142,   333,  -142,  -142,  -142,    75,   128,  -142,   308,
     150,  -142,  -142
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    12,    60,    58,    59,     0,    88,    89,    90,     0,
       0,   116,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    43,    42,    62,    63,    64,    65,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,    57,
      55,    56,     0,   117,    60,     0,     0,     0,     1,     3,
       7,     8,    61,     9,     0,     2,    15,     0,     0,    11,
      32,    20,    21,    22,    23,     0,    31,     0,    38,    39,
      40,    41,    36,    66,     0,     0,    30,    33,    34,    44,
      45,    46,    47,    37,    48,    49,    50,    51,     0,     0,
      52,    53,    35,    24,     0,    71,     6,    10,    24,    24,
      24,    24,    24,    24,    24,    67,    68,     0,    54,    16,
      29,    17,    15,    14,     0,    70,    73,     0,   114,   115,
     110,   111,   112,   113,     0,     0,     0,    25,    26,    27,
      28,    24,     0,     0,    74,    24,     0,    13,    19,    75,
      69,    72,   109,    98,    78,     0,     0,     0,     0,     0,
       0,     0,    83,    76,    79,    77,     0,    80,    81,    82,
     100,    84,     0,   100,    86,    87,     0,    15,   107,   108,
       0,    85,     0,     0,   100,   100,   100,   100,   100,   100,
       0,   100,     0,     0,   105,   106,   101,   102,   103,   104,
      96,    95,     0,    94,    93,    99,     0,   100,    97,     0,
       0,    92,    91
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -142,    59,  -141,   -86,  -142,   137,  -142,     0,    -1,   149,
      47,  -142,  -142,  -142,    44,   -64,  -142,  -142,  -127,   -95,
    -142,  -142,  -142,  -142,    86,    88,  -142,   182
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    67,   119,    75,   141,   178,    64,    17,
      56,    19,   124,   125,   126,   150,   154,   155,   165,    20,
     167,   168,    21,   169,   180,    76,    77,    22
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      16,    37,   103,   117,    49,    50,    47,    51,   104,    16,
     127,   103,    55,    57,   164,    16,    58,   104,   123,    16,
      60,    36,    70,    61,    66,    54,     3,    69,     4,    98,
      78,    79,    80,    81,    82,    84,    85,    86,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    18,   127,   164,
     147,   164,    99,    37,   114,    52,    18,   100,    54,     3,
     166,     4,    18,   201,   102,   204,    18,    68,    48,   164,
      10,    11,   101,   171,    59,    12,    13,     1,    65,     2,
       3,   106,     4,   212,    88,   107,     5,     6,     7,     8,
     156,   115,   116,   157,   158,   166,   118,   166,   159,   122,
     160,   161,   136,    10,    11,     6,     7,     8,    12,    13,
      83,   142,   143,    71,    72,   166,    73,   135,   144,   145,
      71,    72,   146,    73,    10,    11,   200,   162,   203,    12,
      13,    54,     3,   149,     4,   163,   153,    74,     2,     3,
     183,     4,   208,   170,    74,   173,   211,    38,    39,    40,
      41,     1,    42,     2,     3,    16,     4,   172,   174,   175,
       5,     6,     7,     8,   156,   -61,   -61,   157,   158,   177,
     -61,   -61,   159,   176,   160,   161,    10,    11,   181,   193,
     205,    12,    13,    10,    11,   206,    87,   151,    12,    13,
      16,   121,    16,    53,    25,    26,    27,    28,    10,    11,
       0,   162,    18,    12,    13,     0,     0,     0,   149,    62,
      16,     0,     0,    68,    63,    -5,     1,   179,     2,     3,
     179,     4,     0,     0,     0,     5,     6,     7,     8,     0,
       0,   179,   179,   179,   179,   179,   179,    18,   179,    18,
     120,     0,     0,     9,     0,   128,   129,   130,   131,   132,
     133,   134,   103,     0,   179,     0,     0,    18,   104,   182,
     105,     0,    36,    10,    11,     0,     0,     0,    12,    13,
     194,   195,   196,   197,   198,   199,     0,   202,   148,     0,
       0,     0,   152,    23,    24,    25,    26,    27,    28,    43,
      44,    45,    46,   209,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,     0,    34,     0,    35,     0,
      36,    29,    30,    31,    32,    33,     0,    34,     0,     0,
       0,    36,   184,   185,   186,   187,   188,   189,   184,   185,
     186,   187,   188,   189,     0,   191,     0,     0,     0,   192,
      25,    26,    27,    28,     0,   190,   184,   185,   186,   187,
     188,   189,     0,     0,     0,    62,   108,   109,   110,   111,
     112,   113,     0,   210,     0,   137,   138,   139,   140,   -18,
     -18,   184,   185,   186,   187,   188,   189,   108,   109,   110,
     111,   112,   113,     0,   207
};

static const yytype_int16 yycheck[] =
{
       0,     2,    46,    98,     3,     4,     3,     6,    52,     9,
     105,    46,    12,    13,   155,    15,     0,    52,   104,    19,
      51,    56,    22,    51,     3,     3,     4,    51,     6,    58,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,     0,   143,   190,
     136,   192,    52,    54,    60,    54,     9,    53,     3,     4,
     155,     6,    15,   190,    64,   192,    19,    20,     9,   210,
      48,    49,    55,    51,    15,    53,    54,     1,    19,     3,
       4,    51,     6,   210,    37,    51,    10,    11,    12,    13,
      14,    55,    57,    17,    18,   190,    55,   192,    22,     3,
      24,    25,    52,    48,    49,    11,    12,    13,    53,    54,
      55,    55,    52,     3,     4,   210,     6,   117,     3,    61,
       3,     4,    51,     6,    48,    49,   190,    51,   192,    53,
      54,     3,     4,    58,     6,    59,    59,    27,     3,     4,
      27,     6,   206,    54,    27,    54,   210,    47,    48,    49,
      50,     1,    52,     3,     4,   155,     6,   157,    51,    51,
      10,    11,    12,    13,    14,    48,    49,    17,    18,     3,
      53,    54,    22,    54,    24,    25,    48,    49,    51,    55,
      51,    53,    54,    48,    49,    15,    37,   143,    53,    54,
     190,   103,   192,    11,    31,    32,    33,    34,    48,    49,
      -1,    51,   155,    53,    54,    -1,    -1,    -1,    58,    46,
     210,    -1,    -1,   166,    51,     0,     1,   170,     3,     4,
     173,     6,    -1,    -1,    -1,    10,    11,    12,    13,    -1,
      -1,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     103,    -1,    -1,    28,    -1,   108,   109,   110,   111,   112,
     113,   114,    46,    -1,   207,    -1,    -1,   210,    52,   173,
      54,    -1,    56,    48,    49,    -1,    -1,    -1,    53,    54,
     184,   185,   186,   187,   188,   189,    -1,   191,   141,    -1,
      -1,    -1,   145,    29,    30,    31,    32,    33,    34,    47,
      48,    49,    50,   207,    29,    30,    31,    32,    33,    34,
      46,    47,    48,    49,    50,    -1,    52,    -1,    54,    -1,
      56,    46,    47,    48,    49,    50,    -1,    52,    -1,    -1,
      -1,    56,    38,    39,    40,    41,    42,    43,    38,    39,
      40,    41,    42,    43,    -1,    51,    -1,    -1,    -1,    55,
      31,    32,    33,    34,    -1,    55,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    46,    38,    39,    40,    41,
      42,    43,    -1,    55,    -1,    47,    48,    49,    50,    51,
      52,    38,    39,    40,    41,    42,    43,    38,    39,    40,
      41,    42,    43,    -1,    51
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     6,    10,    11,    12,    13,    28,
      48,    49,    53,    54,    63,    64,    69,    71,    72,    73,
      81,    84,    89,    29,    30,    31,    32,    33,    34,    46,
      47,    48,    49,    50,    52,    54,    56,    70,    47,    48,
      49,    50,    52,    47,    48,    49,    50,     3,    63,     3,
       4,     6,    54,    89,     3,    69,    72,    69,     0,    63,
      51,    51,    46,    51,    70,    63,     3,    65,    72,    51,
      69,     3,     4,     6,    27,    67,    87,    88,    69,    69,
      69,    69,    69,    55,    69,    69,    69,    71,    72,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    58,    69,
      53,    55,    69,    46,    52,    54,    51,    51,    38,    39,
      40,    41,    42,    43,    60,    55,    57,    81,    55,    66,
      67,    87,     3,    65,    74,    75,    76,    81,    67,    67,
      67,    67,    67,    67,    67,    69,    52,    47,    48,    49,
      50,    68,    55,    52,     3,    61,    51,    65,    67,    58,
      77,    76,    67,    59,    78,    79,    14,    17,    18,    22,
      24,    25,    51,    59,    64,    80,    81,    82,    83,    85,
      54,    51,    69,    54,    51,    51,    54,     3,    69,    72,
      86,    51,    86,    27,    38,    39,    40,    41,    42,    43,
      55,    51,    55,    55,    86,    86,    86,    86,    86,    86,
      77,    80,    86,    77,    80,    51,    15,    51,    77,    86,
      55,    77,    80
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    63,    63,    63,    64,    64,    64,    64,
      64,    64,    64,    65,    65,    65,    65,    65,    66,    66,
      67,    67,    67,    67,    67,    68,    68,    68,    68,    68,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    70,    70,    70,    70,    70,    71,    71,    72,    73,
      74,    74,    75,    75,    76,    78,    77,    79,    79,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    81,    81,
      81,    82,    82,    82,    82,    83,    83,    83,    84,    85,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    87,
      88,    88,    88,    88,    88,    88,    89,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     0,     3,     2,     2,     2,
       3,     2,     1,     5,     3,     1,     3,     3,     1,     3,
       1,     1,     1,     1,     0,     1,     1,     1,     1,     0,
       3,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     4,     6,
       1,     0,     3,     1,     2,     0,     4,     2,     0,     1,
       1,     1,     1,     1,     2,     3,     2,     2,     1,     1,
       1,     9,     9,     5,     5,     5,     5,     7,     7,     5,
       0,     3,     3,     3,     3,     3,     3,     1,     1,     5,
       3,     3,     3,     3,     3,     3,     1,     2
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
        case 6:
#line 53 "parser.y" /* yacc.c:1646  */
    {insertWithError((yyvsp[-2].iValue), g_addr); g_addr+=4; identifierList.clear();}
#line 1494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 57 "parser.y" /* yacc.c:1646  */
    { insert((yyvsp[-1].str),ARRAY,g_addr);
							insert((yyvsp[-1].str),(yyvsp[-2].iValue),g_addr); g_addr+=4; }
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 64 "parser.y" /* yacc.c:1646  */
    { 
		if(IsAlreadyPresent((yyvsp[-4].str))){
			printf("\n%s Already declared\n", (yyvsp[-4].str));
		}
		else{
			identifierList.push_back((yyvsp[-4].str)); 
		}
	}
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 73 "parser.y" /* yacc.c:1646  */
    { 
		if(IsAlreadyPresent((yyvsp[-2].str)))
			printf("\n%s Already declared\n", (yyvsp[-2].str));
		else{
			identifierList.push_back((yyvsp[-2].str)); 
		}
		
	}
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 82 "parser.y" /* yacc.c:1646  */
    { 
		if(IsAlreadyPresent((yyvsp[0].str)))
			printf("\n%s Already declared\n", (yyvsp[0].str));
		else{
			identifierList.push_back((yyvsp[0].str)); 
		}
	
	}
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 91 "parser.y" /* yacc.c:1646  */
    { 
		if(IsAlreadyPresent((yyvsp[-2].str)))
			printf("\n%s Already declared\n", (yyvsp[-2].str));
		else{
			identifierList.push_back((yyvsp[-2].str)); 
		}
	
	}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 100 "parser.y" /* yacc.c:1646  */
    { 
		if(IsAlreadyPresent((yyvsp[-2].str)))
			printf("\n%s Already declared\n", (yyvsp[-2].str));
		else{
			identifierList.push_back((yyvsp[-2].str)); 
		}
	
	}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 129 "parser.y" /* yacc.c:1646  */
    {
		if(!IsAlreadyPresent((yyvsp[-2].str))){
			printf("%s Undeclared Variable.", (yyvsp[-2].str));
		}else{
			if(!check((yyvsp[-2].str), (yyvsp[0].str)))
				printf("Type mismatch %s %s\n", (yyvsp[-2].str), (yyvsp[0].str));
			else
			  	(yyval.str) = (yyvsp[-2].str);
		}
	}
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 145 "parser.y" /* yacc.c:1646  */
    {
		if(!IsAlreadyPresent((yyvsp[-2].str))){
			printf("%s Undeclared Variable.", (yyvsp[-2].str));
		}else{
			if(!check((yyvsp[-2].str), (yyvsp[0].str)))
				printf("Type mismatch %s %s\n", (yyvsp[-2].str), (yyvsp[0].str));
			else
			  	(yyval.str) = (yyvsp[-2].str);
		}
	}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 157 "parser.y" /* yacc.c:1646  */
    {
		if(!IsAlreadyPresent((yyvsp[-2].str))){
			printf("%s Undeclared Variable.", (yyvsp[-2].str));
		}else{
			if(!check((yyvsp[-2].str), (yyvsp[0].str)))
				printf("Type mismatch %s %s\n", (yyvsp[-2].str), (yyvsp[0].str));
			else
			  	(yyval.str) = (yyvsp[-2].str);
		}
	}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 168 "parser.y" /* yacc.c:1646  */
    {
		if(!IsAlreadyPresent((yyvsp[-2].str))){
			printf("%s Undeclared Variable.", (yyvsp[-2].str));
		}else{
			if(!check((yyvsp[-2].str), (yyvsp[0].str)))
				printf("Type mismatch %s %s\n", (yyvsp[-2].str), (yyvsp[0].str));
			else
			  	(yyval.str) = (yyvsp[-2].str);
		}
	}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 180 "parser.y" /* yacc.c:1646  */
    {
		if(!IsAlreadyPresent((yyvsp[-2].str))){
			printf("%s Undeclared Variable.", (yyvsp[-2].str));
		}else{
			if(!check((yyvsp[-2].str), (yyvsp[0].str)))
				printf("Type mismatch %s %s\n", (yyvsp[-2].str), (yyvsp[0].str));
			else
			  	(yyval.str) = (yyvsp[-2].str);
		}
	}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 191 "parser.y" /* yacc.c:1646  */
    {
		if(!IsAlreadyPresent((yyvsp[-2].str))){
			printf("%s Undeclared Variable.", (yyvsp[-2].str));
		}else{
			if(!check((yyvsp[-2].str), (yyvsp[0].str)))
				printf("Type mismatch %s %s\n", (yyvsp[-2].str), (yyvsp[0].str));
			else
			  	(yyval.str) = (yyvsp[-2].str);
		}
	}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 217 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = "INT";}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 218 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = "DOUBLE";}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 219 "parser.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str);}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 240 "parser.y" /* yacc.c:1646  */
    { insert((yyvsp[-4].str),FUNCTION,g_addr); insert((yyvsp[-4].str),(yyvsp[-5].iValue),g_addr);g_addr+=4; }
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 251 "parser.y" /* yacc.c:1646  */
    {saveST();}
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 251 "parser.y" /* yacc.c:1646  */
    {popST();}
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 287 "parser.y" /* yacc.c:1646  */
    { insert((yyvsp[-5].str),STRUCT,g_addr); g_addr+=4; }
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1702 "y.tab.c" /* yacc.c:1646  */
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
#line 327 "parser.y" /* yacc.c:1906  */


#include "lex.yy.c"
#include "ctype.h"
int count=0;

int main(int argc,char *argv[])
{
	FILE *file;
		file = fopen(argv[1], "r");
		if (!file)
		{
			fprintf(stderr, "Could not open %s\n", argv[1]);
			exit(1);
		}
		yyin = file;

	if(!yyparse())
		{
		printf("\nParsing done\n");
		printsym();
		}
	else
		printf("\nParsing failed\n");

	fclose(yyin);
	return 0;
}

void yyerror(char *s)
{
	printf("%d 	:	%s  %s \n",yylineno,s,yytext);
}
