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
	#include "icg.cpp"
	int g_addr = 100;

	extern "C" {
		int yylex();
		void yyerror(char *);
	}
	char empty[2] = " ";
	

#line 82 "y.tab.c" /* yacc.c:339  */

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
#line 41 "parser.y" /* yacc.c:355  */

 		int iValue; /* integer value */
 		float realValue;
 		char *str; /* identifier name */
	

#line 216 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 231 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   231

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  192

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      53,    54,    49,    47,    52,    48,     2,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    60,    51,
       2,    46,     2,    59,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    55,     2,    56,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,    58,     2,     2,     2,     2,
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
       0,    49,    49,    50,    51,    52,    56,    57,    58,    59,
      60,    62,    63,    68,    68,    68,    77,    77,    77,    88,
      88,    88,    99,   109,   123,   124,   124,   134,   135,   136,
     137,   140,   141,   142,   143,   146,   146,   146,   158,   158,
     158,   170,   171,   182,   183,   184,   185,   186,   190,   190,
     198,   198,   206,   206,   214,   214,   222,   226,   231,   236,
     241,   245,   256,   257,   261,   261,   266,   269,   270,   272,
     273,   275,   277,   277,   279,   280,   282,   283,   284,   285,
     286,   287,   288,   289,   293,   294,   295,   299,   299,   299,
     299,   300,   300,   300,   300,   304,   308,   313,   314,   317,
     318,   319,   320,   321,   322,   326,   329,   329,   329,   332
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
  "OR", "'='", "'+'", "'-'", "'*'", "'/'", "';'", "','", "'('", "')'",
  "'['", "']'", "'{'", "'}'", "'?'", "':'", "$accept", "start",
  "Declaration", "StatementDeclaration", "$@1", "$@2", "$@3", "$@4", "$@5",
  "$@6", "VariableInit", "$@7", "ValueVar", "Oper", "Assignment", "$@8",
  "$@9", "$@10", "$@11", "Expression", "$@12", "$@13", "$@14", "$@15",
  "EqualTo", "FunctionCall", "ArrayUsage", "$@16", "Function",
  "ArgListOpt", "ArgList", "Arg", "CompoundStmt", "$@17", "StmtList",
  "Stmt", "Type", "ForStmt", "$@18", "$@19", "$@20", "$@21", "$@22",
  "$@23", "StructStmt", "PrintFunc", "Expr", "RelationalOperator",
  "Conditional_statement", "Conditional_Operator", "$@24", "$@25",
  "Conditonal_condition", YY_NULLPTR
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
      47,    59,    44,    40,    41,    91,    93,   123,   125,    63,
      58
};
# endif

#define YYPACT_NINF -170

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-170)))

#define YYTABLE_NINF -65

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     140,  -170,    44,  -170,  -170,     7,  -170,  -170,  -170,   140,
      31,   140,   -25,   -12,   -29,   140,    38,     4,  -170,  -170,
      78,    21,    34,    34,    12,    20,  -170,  -170,  -170,  -170,
    -170,  -170,  -170,    26,  -170,   139,    43,    51,  -170,   141,
    -170,    34,  -170,    50,  -170,  -170,    78,   173,    63,  -170,
    -170,    26,   163,  -170,   103,   173,    34,    34,    34,  -170,
    -170,  -170,    26,    64,    67,    78,   112,  -170,  -170,  -170,
    -170,   -33,  -170,    75,    80,  -170,   127,  -170,  -170,  -170,
     163,    26,  -170,  -170,    82,  -170,    26,    26,    26,    26,
     106,   173,  -170,    64,   122,   122,   159,    81,  -170,    79,
      62,    62,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,  -170,   167,    87,  -170,  -170,  -170,  -170,  -170,
    -170,    26,  -170,   108,  -170,  -170,  -170,  -170,  -170,  -170,
    -170,   103,   163,    26,    32,   122,  -170,   163,    65,   116,
     123,   128,   120,  -170,  -170,  -170,  -170,   186,  -170,  -170,
    -170,   135,  -170,   152,    60,  -170,  -170,   177,    37,    26,
    -170,   126,   -14,    73,  -170,   159,    34,  -170,   151,   163,
      26,   168,   169,   170,   163,    60,    60,  -170,  -170,  -170,
     171,   172,    60,    60,  -170,  -170,   164,   174,    97,   106,
    -170,  -170
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    12,    35,    46,    47,     0,    84,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    44,    43,
       0,     0,     0,     0,     0,     0,     4,     1,     3,     7,
       8,    61,     9,     0,     2,    13,     0,     0,    11,    45,
      42,     0,    62,     0,    36,    39,     0,     0,    59,    57,
      58,     0,    41,    60,     0,    68,     0,     0,     0,     6,
      10,    63,     0,     0,     0,     0,     0,    48,    50,    52,
      54,    13,    22,     0,    67,    70,     0,    14,    17,    20,
      37,     0,    40,    65,     0,    56,     0,     0,     0,     0,
       0,     0,    71,     0,     0,     0,     0,     0,   106,     0,
      49,    51,    53,    55,    72,    66,    69,    15,    27,    28,
      29,    30,    18,    24,     0,   103,   104,    99,   100,   101,
     102,     0,   105,     0,    95,    75,    31,    32,    33,    34,
      25,     0,   109,     0,     0,     0,    21,   107,     0,     0,
       0,     0,     0,    79,    73,    76,    74,     0,    77,    78,
      26,     0,    80,     0,     0,    82,    83,     0,    13,     0,
      81,    59,    57,    58,    98,     0,    60,    87,     0,   108,
       0,     0,     0,     0,    97,     0,     0,    96,    88,    92,
       0,     0,     0,     0,    89,    93,     0,     0,     0,     0,
      90,    94
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -170,    61,  -126,   -53,  -170,  -170,  -170,  -170,  -170,  -170,
     129,  -170,    90,  -170,   -18,  -170,  -170,  -170,  -170,   -28,
    -170,  -170,  -170,  -170,    29,  -170,     0,  -170,  -170,  -170,
    -170,   136,    40,  -170,  -170,    42,   -43,  -170,  -170,  -170,
    -170,  -170,  -170,  -170,  -170,  -170,  -169,    66,   133,  -170,
    -170,  -170,  -170
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    36,    56,    93,    57,    94,    58,    95,
     112,   135,   113,   130,    12,    22,    62,    23,    63,   165,
      86,    87,    88,    89,    33,    13,    53,    24,    15,    73,
      74,    75,   105,   125,   134,   146,    16,   148,   171,   180,
     186,   172,   181,   187,    17,   149,   167,   121,    82,    97,
     123,   151,    98
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      14,    72,    40,    43,    65,    52,   178,   179,   145,    14,
      25,    14,    76,   184,   185,    14,    37,    31,   -23,    54,
      41,    41,    32,    66,    39,     3,    29,     4,    64,    48,
      49,    27,    50,     1,    80,     2,     3,   -46,     4,    30,
     -46,    35,     5,     6,     7,     8,    41,    84,    76,   138,
     139,    44,    45,    96,   140,    38,   141,   142,   100,   101,
     102,   103,   145,   161,   162,    41,   163,    46,    39,     3,
      26,     4,    28,    18,    19,    42,    34,    47,   136,    51,
      31,    39,     3,   143,     4,    77,    78,    79,   -23,    54,
     144,   147,   -64,   132,    59,   -45,    20,    21,     1,   -64,
       2,     3,    60,     4,    61,   137,    71,     5,     6,     7,
       8,    69,    70,    51,   138,   139,   152,    81,   -64,   140,
     153,   141,   142,    83,   -47,   108,   109,   -47,   110,    90,
      92,   169,    91,    99,    14,   122,   164,   124,    41,   131,
      -5,     1,   174,     2,     3,   147,     4,    37,   143,   111,
       5,     6,     7,     8,   166,    18,    19,   164,   164,    67,
      68,    69,    70,   104,   164,   164,    85,   133,     9,   154,
      18,    19,   -35,   157,   155,   166,   166,   -45,    20,   156,
     -45,   -64,   166,   166,     6,     7,     8,   -35,    14,   158,
     -23,    54,    55,    20,   -64,   159,   -64,   115,   116,   117,
     118,   119,   120,   160,   168,   173,    67,    68,    69,    70,
      67,    68,    69,    70,   126,   127,   128,   129,   188,   175,
     176,   177,   182,   183,   114,   150,   107,   106,   189,   191,
     190,   170
};

static const yytype_uint8 yycheck[] =
{
       0,    54,    20,    21,    47,    33,   175,   176,   134,     9,
       3,    11,    55,   182,   183,    15,    16,    46,    51,    52,
      20,    21,    51,    51,     3,     4,    51,     6,    46,     3,
       4,     0,     6,     1,    62,     3,     4,    51,     6,    51,
      54,     3,    10,    11,    12,    13,    46,    65,    91,    17,
      18,    22,    23,    81,    22,    51,    24,    25,    86,    87,
      88,    89,   188,     3,     4,    65,     6,    55,     3,     4,
       9,     6,    11,    29,    30,    54,    15,    57,   131,    53,
      46,     3,     4,    51,     6,    56,    57,    58,    51,    52,
      58,   134,    55,   121,    51,    51,    52,    53,     1,    55,
       3,     4,    51,     6,    54,   133,     3,    10,    11,    12,
      13,    49,    50,    53,    17,    18,    51,    53,    55,    22,
     138,    24,    25,    56,    51,     3,     4,    54,     6,    54,
       3,   159,    52,    51,   134,    54,   154,    58,   138,    52,
       0,     1,   170,     3,     4,   188,     6,   147,    51,    27,
      10,    11,    12,    13,   154,    29,    30,   175,   176,    47,
      48,    49,    50,    57,   182,   183,    54,    59,    28,    53,
      29,    30,    46,    53,    51,   175,   176,    51,    52,    51,
      54,    55,   182,   183,    11,    12,    13,    46,   188,     3,
      51,    52,    53,    52,    55,    60,    55,    38,    39,    40,
      41,    42,    43,    51,    27,    54,    47,    48,    49,    50,
      47,    48,    49,    50,    47,    48,    49,    50,    54,    51,
      51,    51,    51,    51,    95,   135,    93,    91,    54,   189,
     188,   165
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     6,    10,    11,    12,    13,    28,
      62,    63,    75,    86,    87,    89,    97,   105,    29,    30,
      52,    53,    76,    78,    88,     3,    62,     0,    62,    51,
      51,    46,    51,    85,    62,     3,    64,    87,    51,     3,
      75,    87,    54,    75,    85,    85,    55,    57,     3,     4,
       6,    53,    80,    87,    52,    53,    65,    67,    69,    51,
      51,    54,    77,    79,    75,    97,    80,    47,    48,    49,
      50,     3,    64,    90,    91,    92,    97,    85,    85,    85,
      80,    53,   109,    56,    75,    54,    81,    82,    83,    84,
      54,    52,     3,    66,    68,    70,    80,   110,   113,    51,
      80,    80,    80,    80,    57,    93,    92,   109,     3,     4,
       6,    27,    71,    73,    71,    38,    39,    40,    41,    42,
      43,   108,    54,   111,    58,    94,    47,    48,    49,    50,
      74,    52,    80,    59,    95,    72,    64,    80,    17,    18,
      22,    24,    25,    51,    58,    63,    96,    97,    98,   106,
      73,   112,    51,    75,    53,    51,    51,    53,     3,    60,
      51,     3,     4,     6,    75,    80,    87,   107,    27,    80,
     108,    99,   102,    54,    80,    51,    51,    51,   107,   107,
     100,   103,    51,    51,   107,   107,   101,   104,    54,    54,
      96,    93
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    62,    62,    62,    63,    63,    63,    63,
      63,    63,    63,    65,    66,    64,    67,    68,    64,    69,
      70,    64,    64,    64,    71,    72,    71,    73,    73,    73,
      73,    74,    74,    74,    74,    76,    77,    75,    78,    79,
      75,    75,    75,    75,    75,    75,    75,    75,    81,    80,
      82,    80,    83,    80,    84,    80,    80,    80,    80,    80,
      80,    85,    86,    86,    88,    87,    89,    90,    90,    91,
      91,    92,    94,    93,    95,    95,    96,    96,    96,    96,
      96,    96,    96,    96,    97,    97,    97,    99,   100,   101,
      98,   102,   103,   104,    98,   105,   106,   107,   107,   108,
     108,   108,   108,   108,   108,   109,   111,   112,   110,   113
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     0,     3,     2,     2,     2,
       3,     2,     1,     0,     0,     5,     0,     0,     5,     0,
       0,     7,     3,     1,     1,     0,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     0,     5,     0,     0,
       5,     3,     3,     2,     2,     1,     1,     1,     0,     4,
       0,     4,     0,     4,     0,     4,     3,     1,     1,     1,
       1,     1,     3,     4,     0,     5,     6,     1,     0,     3,
       1,     2,     0,     4,     2,     0,     1,     1,     1,     1,
       2,     3,     2,     2,     1,     1,     1,     0,     0,     0,
      12,     0,     0,     0,    12,     7,     5,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     0,     0,     7,     3
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
#line 56 "parser.y" /* yacc.c:1646  */
    {insertWithError((yyvsp[-2].iValue), g_addr); g_addr+=4; identifierList.clear();}
#line 1465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 60 "parser.y" /* yacc.c:1646  */
    { insert((yyvsp[-1].str),ARRAY,g_addr);
							insert((yyvsp[-1].str),(yyvsp[-2].iValue),g_addr); g_addr+=4; }
#line 1472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 68 "parser.y" /* yacc.c:1646  */
    {PushICGStack((yyvsp[0].str));}
#line 1478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 68 "parser.y" /* yacc.c:1646  */
    {PushICGStack((yyvsp[0].str));}
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 69 "parser.y" /* yacc.c:1646  */
    { 
		if(IsAlreadyPresent((yyvsp[-4].str)))
			printf("\n%s Already declared\n", (yyvsp[-4].str));
		else{
			identifierList.push_back((yyvsp[-4].str)); 
			(yyval.str) = (yyvsp[-4].str);
		}
	}
#line 1497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 77 "parser.y" /* yacc.c:1646  */
    {PushICGStack((yyvsp[0].str));}
#line 1503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 77 "parser.y" /* yacc.c:1646  */
    {PushICGStack((yyvsp[0].str));}
#line 1509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 78 "parser.y" /* yacc.c:1646  */
    { 
		if(IsAlreadyPresent((yyvsp[-4].str)))
			printf("\n%s Already declared\n", (yyvsp[-4].str));
		else{
			identifierList.push_back((yyvsp[-4].str)); 
			(yyval.str) = (yyvsp[-4].str);
		}
		ICGCurrAssignCodeGenr();
	}
#line 1523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 88 "parser.y" /* yacc.c:1646  */
    {PushICGStack((yyvsp[0].str));}
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 88 "parser.y" /* yacc.c:1646  */
    {PushICGStack((yyvsp[0].str));}
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 89 "parser.y" /* yacc.c:1646  */
    { 
		if(IsAlreadyPresent((yyvsp[-6].str))){
			printf("\n%s Already declared\n", (yyvsp[-6].str));
		}
		else{
			identifierList.push_back((yyvsp[-6].str)); 
			(yyval.str) = (yyvsp[-6].str);
		}
		ICGCurrAssignCodeGenr();
	}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 100 "parser.y" /* yacc.c:1646  */
    { 
		if(IsAlreadyPresent((yyvsp[-2].str)))
			printf("\n%s Already declared\n", (yyvsp[-2].str));
		else{
			identifierList.push_back((yyvsp[-2].str)); 
			(yyval.str) = (yyvsp[-2].str);
		}
		
	}
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 110 "parser.y" /* yacc.c:1646  */
    { 
		if(IsAlreadyPresent((yyvsp[0].str)))
			printf("\n%s Already declared\n", (yyvsp[0].str));
		else{
			identifierList.push_back((yyvsp[0].str)); 
			(yyval.str) = (yyvsp[0].str);
		}
	
	}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 123 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 124 "parser.y" /* yacc.c:1646  */
    {{ strcpy(tokenStack[++tokenStackTop], (yyvsp[0].str)); }}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 125 "parser.y" /* yacc.c:1646  */
    {
		if(!check((yyvsp[-3].str), (yyvsp[0].str)))
			printf("Type mismatch %s %s\n", (yyvsp[-3].str), (yyvsp[0].str));
		else
		  	(yyval.str) = (yyvsp[-3].str);
		ICGCurrCodeGenr();
	}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 134 "parser.y" /* yacc.c:1646  */
    { PushICGStack((yyvsp[0].str)); (yyval.str) = (yyvsp[0].str);}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 135 "parser.y" /* yacc.c:1646  */
    {PushICGStack(ToString((yyvsp[0].realValue))); (yyval.str) = ToString((yyvsp[0].realValue));}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 136 "parser.y" /* yacc.c:1646  */
    {PushICGStack((yyvsp[0].str)); (yyval.str) = (yyvsp[0].str);}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 137 "parser.y" /* yacc.c:1646  */
    {PushICGStack((yyvsp[0].str)); (yyval.str) = (yyvsp[0].str);}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 146 "parser.y" /* yacc.c:1646  */
    { PushICGStack((yyvsp[0].str));}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 146 "parser.y" /* yacc.c:1646  */
    { PushICGStack((yyvsp[0].str)); }
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 147 "parser.y" /* yacc.c:1646  */
    {
		if(!IsAlreadyPresent((yyvsp[-4].str))){
			printf("%s Undeclared Variable.", (yyvsp[-4].str));
		}else{
			if(!check((yyvsp[-4].str), (yyvsp[0].str)))
				;
			else
			  	(yyval.str) = (yyvsp[-4].str);
		}
		ICGCurrAssignCodeGenr();
	}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 158 "parser.y" /* yacc.c:1646  */
    {PushICGStack((yyvsp[0].str));}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 158 "parser.y" /* yacc.c:1646  */
    {PushICGStack((yyvsp[0].str));}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 159 "parser.y" /* yacc.c:1646  */
    {
		if(!IsAlreadyPresent((yyvsp[-4].str))){
			printf("%s Undeclared Variable.", (yyvsp[-4].str));
		}else{
			if(!check((yyvsp[-4].str), (yyvsp[0].str)))
				printf("Type mismatch %s %s\n", (yyvsp[-4].str), (yyvsp[0].str));
			else
			  	(yyval.str) = (yyvsp[-4].str);
		}
		ICGCurrAssignCodeGenr();	
	}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 172 "parser.y" /* yacc.c:1646  */
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
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 182 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[-1].str);}
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 183 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[-1].str);}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 184 "parser.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str);}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 185 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = ToString((yyvsp[0].realValue));}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 186 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 190 "parser.y" /* yacc.c:1646  */
    { strcpy(tokenStack[++tokenStackTop], "+"); }
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 191 "parser.y" /* yacc.c:1646  */
    { 
		if(!check((yyvsp[-3].str),(yyvsp[0].str)))
			printf("Type Mismatch %s %s \n",(yyvsp[-3].str),(yyvsp[0].str));
		else
			(yyval.str) = (yyvsp[-3].str);
		ICGCurrCodeGenr();
	}
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 198 "parser.y" /* yacc.c:1646  */
    { strcpy(tokenStack[++tokenStackTop], ""); }
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 199 "parser.y" /* yacc.c:1646  */
    { 
		if(!check((yyvsp[-3].str),(yyvsp[0].str)))
			printf("Type Mismatch %s %s \n",(yyvsp[-3].str),(yyvsp[0].str));
		else
			(yyval.str) = (yyvsp[-3].str);
		ICGCurrCodeGenr();
	}
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 206 "parser.y" /* yacc.c:1646  */
    { strcpy(tokenStack[++tokenStackTop], "*"); }
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 207 "parser.y" /* yacc.c:1646  */
    { 
		if(!check((yyvsp[-3].str),(yyvsp[0].str)))
			printf("Type Mismatch %s %s \n",(yyvsp[-3].str),(yyvsp[0].str));
		else
			(yyval.str) = (yyvsp[-3].str);
		ICGCurrCodeGenr();
	}
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 214 "parser.y" /* yacc.c:1646  */
    { strcpy(tokenStack[++tokenStackTop], "/"); }
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 215 "parser.y" /* yacc.c:1646  */
    { 
		if(!check((yyvsp[-3].str),(yyvsp[0].str)))
			printf("Type Mismatch %s %s \n",(yyvsp[-3].str),(yyvsp[0].str));
		else
			(yyval.str) = (yyvsp[-3].str);
		ICGCurrCodeGenr();
	}
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 223 "parser.y" /* yacc.c:1646  */
    { 
			(yyval.str) = (yyvsp[-1].str); 
		}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 227 "parser.y" /* yacc.c:1646  */
    { 
			(yyval.str) = ToString((yyvsp[0].realValue));
			PushICGStack(ToString((yyvsp[0].realValue))); 
		}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 232 "parser.y" /* yacc.c:1646  */
    {
			(yyval.str) = (yyvsp[0].str); 
			PushICGStack((yyvsp[0].str)); 
		}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 237 "parser.y" /* yacc.c:1646  */
    { 
			(yyval.str) = (yyvsp[0].str); 
			PushICGStack((yyvsp[0].str)); 
		}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 241 "parser.y" /* yacc.c:1646  */
    { ICGCurrArrayCodeGenr(); }
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 245 "parser.y" /* yacc.c:1646  */
    {char assign[2] = "="; (yyval.str)=assign;}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 261 "parser.y" /* yacc.c:1646  */
    {PushICGStack((yyvsp[0].str));}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 266 "parser.y" /* yacc.c:1646  */
    { insert((yyvsp[-4].str),FUNCTION,g_addr); insert((yyvsp[-4].str),(yyvsp[-5].iValue),g_addr);g_addr+=4; }
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 277 "parser.y" /* yacc.c:1646  */
    {saveST();}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 277 "parser.y" /* yacc.c:1646  */
    {popST(); (yyval.str) = (yyvsp[-1].str);}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 279 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 280 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = empty;}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 282 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = empty;}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 283 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = empty;}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 284 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = empty;}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 285 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = empty;}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 286 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = empty;}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 287 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[-1].str);}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 288 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = empty;}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 289 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = empty;}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 299 "parser.y" /* yacc.c:1646  */
    {ForInitialisation();}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 299 "parser.y" /* yacc.c:1646  */
    {ForCondition();}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 299 "parser.y" /* yacc.c:1646  */
    {ForChange();}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 299 "parser.y" /* yacc.c:1646  */
    {ForAfter();}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 300 "parser.y" /* yacc.c:1646  */
    {ForInitialisation();}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 300 "parser.y" /* yacc.c:1646  */
    {ForCondition();}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 300 "parser.y" /* yacc.c:1646  */
    {ForChange();}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 300 "parser.y" /* yacc.c:1646  */
    {ForAfter();}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 304 "parser.y" /* yacc.c:1646  */
    { insert((yyvsp[-5].str),STRUCT,g_addr); g_addr+=4; }
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 317 "parser.y" /* yacc.c:1646  */
    {strcpy(tokenStack[++tokenStackTop], "<=");}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 318 "parser.y" /* yacc.c:1646  */
    {strcpy(tokenStack[++tokenStackTop], ">=");}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 319 "parser.y" /* yacc.c:1646  */
    {strcpy(tokenStack[++tokenStackTop], "!=");}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 320 "parser.y" /* yacc.c:1646  */
    {strcpy(tokenStack[++tokenStackTop], "==");}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 321 "parser.y" /* yacc.c:1646  */
    {strcpy(tokenStack[++tokenStackTop], ">");}
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 322 "parser.y" /* yacc.c:1646  */
    {strcpy(tokenStack[++tokenStackTop], "<");}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 329 "parser.y" /* yacc.c:1646  */
    {ifAssignment();}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 329 "parser.y" /* yacc.c:1646  */
    {ifCondition();}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 329 "parser.y" /* yacc.c:1646  */
    { ifAfter(); (yyval.str) = (yyvsp[-6].str);}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 332 "parser.y" /* yacc.c:1646  */
    {ICGCurrCodeGenr();}
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2048 "y.tab.c" /* yacc.c:1646  */
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
#line 337 "parser.y" /* yacc.c:1906  */


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
