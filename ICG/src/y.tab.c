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
#define YYLAST   246

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  196

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
      60,    62,    63,    66,    66,    66,    77,    87,    97,    97,
      97,   107,   107,   107,   120,   121,   121,   131,   132,   133,
     134,   137,   138,   139,   140,   143,   143,   143,   155,   155,
     155,   167,   168,   179,   180,   181,   182,   183,   187,   187,
     195,   195,   203,   203,   211,   211,   219,   223,   228,   233,
     238,   241,   242,   243,   244,   245,   250,   251,   255,   255,
     260,   263,   264,   266,   267,   269,   271,   271,   273,   274,
     276,   277,   278,   279,   280,   281,   282,   283,   287,   288,
     289,   293,   293,   293,   293,   294,   294,   294,   294,   298,
     302,   307,   308,   311,   312,   313,   314,   315,   316,   320,
     323,   323,   323,   326
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
  "assign_operator", "FunctionCall", "ArrayUsage", "$@16", "Function",
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

#define YYPACT_NINF -129

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-129)))

#define YYTABLE_NINF -69

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     153,  -129,   148,  -129,  -129,     2,  -129,  -129,  -129,   153,
      31,   153,   -12,     6,   173,   153,    50,    12,  -129,  -129,
     133,    24,   177,   177,    11,    14,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,    19,  -129,    95,
      29,    33,  -129,    79,  -129,   177,  -129,    36,  -129,  -129,
     133,   116,    32,  -129,  -129,    19,    -6,  -129,    93,   116,
     177,   177,   177,  -129,  -129,  -129,    19,    45,    47,   133,
     135,  -129,  -129,  -129,  -129,   -33,  -129,    56,    68,  -129,
     118,  -129,  -129,  -129,    -6,    19,  -129,  -129,    90,  -129,
      19,    19,    19,    19,    87,   116,  -129,    52,    52,    45,
     187,   106,  -129,    91,    67,    67,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,   103,   165,  -129,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,    19,  -129,   108,  -129,  -129,
      93,  -129,  -129,  -129,  -129,  -129,    -6,    19,    64,  -129,
      52,    -6,    34,   117,   139,   140,   145,  -129,  -129,  -129,
    -129,   192,  -129,  -129,  -129,   156,  -129,   151,    30,  -129,
    -129,   190,   -38,    19,  -129,   142,   -25,    -2,  -129,   187,
     177,  -129,   164,    -6,    19,   169,   170,   171,    -6,    30,
      30,  -129,  -129,  -129,   180,   181,    30,    30,  -129,  -129,
     179,   184,   101,    87,  -129,  -129
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    12,    35,    46,    47,     0,    88,    89,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    44,    43,
       0,     0,     0,     0,     0,     0,     4,     1,     3,     7,
       8,    62,    63,    64,    65,    61,     9,     0,     2,    13,
       0,     0,    11,    35,    42,     0,    66,     0,    36,    39,
       0,     0,    59,    57,    58,     0,    41,    60,     0,    72,
       0,     0,     0,     6,    10,    67,     0,     0,     0,     0,
       0,    48,    50,    52,    54,    13,    16,     0,    71,    74,
       0,    14,    19,    22,    37,     0,    40,    69,     0,    56,
       0,     0,     0,     0,     0,     0,    75,     0,     0,     0,
       0,     0,   110,     0,    49,    51,    53,    55,    76,    70,
      73,    27,    28,    29,    30,     0,    24,    20,    23,   107,
     108,   103,   104,   105,   106,     0,   109,     0,    99,    79,
       0,    31,    32,    33,    34,    25,   113,     0,     0,    15,
       0,   111,     0,     0,     0,     0,     0,    83,    77,    80,
      78,     0,    81,    82,    26,     0,    84,     0,     0,    86,
      87,     0,    13,     0,    85,    59,    57,    58,   102,     0,
      60,    91,     0,   112,     0,     0,     0,     0,   101,     0,
       0,   100,    92,    96,     0,     0,     0,     0,    93,    97,
       0,     0,     0,     0,    94,    98
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -129,    86,  -128,   -57,  -129,  -129,  -129,  -129,  -129,  -129,
     141,  -129,   100,  -129,   -18,  -129,  -129,  -129,  -129,   -31,
    -129,  -129,  -129,  -129,   -15,  -129,     0,  -129,  -129,  -129,
    -129,   146,    49,  -129,  -129,    51,   -47,  -129,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,  -129,   -87,    75,   147,  -129,
    -129,  -129,  -129
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    40,    60,    97,    61,    98,    62,    99,
     115,   140,   116,   135,    12,    22,    66,    23,    67,   169,
      90,    91,    92,    93,    37,    13,    57,    24,    15,    77,
      78,    79,   109,   129,   138,   150,    16,   152,   175,   184,
     190,   176,   185,   191,    17,   153,   171,   125,    86,   101,
     127,   155,   102
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      14,    76,    44,    47,    69,    25,    56,    48,    49,    14,
     149,    14,    80,   -17,    58,    14,    41,   -68,   -17,    58,
      45,    45,    52,    53,    70,    54,   -46,    43,     3,   -46,
       4,    27,    68,   165,   166,    84,   167,    43,     3,    29,
       4,    71,    72,    73,    74,    81,    82,    83,    80,   -47,
      45,    88,   -47,    39,   100,   111,   112,    30,   113,   104,
     105,   106,   107,    42,   149,     1,    50,     2,     3,    45,
       4,    51,    55,   139,     5,     6,     7,     8,    46,   114,
      63,   142,   143,    55,    64,   156,   144,   -68,   145,   146,
      65,   151,   182,   183,   136,    26,    75,    28,    85,   188,
     189,    38,     1,    87,     2,     3,   141,     4,    18,    19,
      94,     5,     6,     7,     8,   147,    73,    74,   142,   143,
      95,    96,   148,   144,   157,   145,   146,     6,     7,     8,
     -45,    20,   173,   -45,   -68,   -45,    43,     3,    14,     4,
     168,   103,    45,   178,   108,   151,   -17,    58,    59,   128,
     -68,    41,   147,    -5,     1,   130,     2,     3,   170,     4,
     126,   168,   168,     5,     6,     7,     8,   137,   168,   168,
     158,    18,    19,   -35,   -35,   -35,   -35,    18,    19,   170,
     170,     9,    71,    72,    73,    74,   170,   170,   -35,    89,
     159,   160,    14,   -45,    20,   162,   -45,   -68,   161,   -45,
      20,    21,   164,   -68,    31,    32,    33,    34,    31,    32,
      33,    34,   131,   132,   133,   134,   163,   172,   177,    35,
     179,   180,   181,    35,    36,   119,   120,   121,   122,   123,
     124,   186,   187,   192,    71,    72,    73,    74,   193,   117,
     154,   110,   195,   194,   174,     0,   118
};

static const yytype_int16 yycheck[] =
{
       0,    58,    20,    21,    51,     3,    37,    22,    23,     9,
     138,    11,    59,    51,    52,    15,    16,    55,    51,    52,
      20,    21,     3,     4,    55,     6,    51,     3,     4,    54,
       6,     0,    50,     3,     4,    66,     6,     3,     4,    51,
       6,    47,    48,    49,    50,    60,    61,    62,    95,    51,
      50,    69,    54,     3,    85,     3,     4,    51,     6,    90,
      91,    92,    93,    51,   192,     1,    55,     3,     4,    69,
       6,    57,    53,   130,    10,    11,    12,    13,    54,    27,
      51,    17,    18,    53,    51,    51,    22,    55,    24,    25,
      54,   138,   179,   180,   125,     9,     3,    11,    53,   186,
     187,    15,     1,    56,     3,     4,   137,     6,    29,    30,
      54,    10,    11,    12,    13,    51,    49,    50,    17,    18,
      52,     3,    58,    22,   142,    24,    25,    11,    12,    13,
      51,    52,   163,    54,    55,    56,     3,     4,   138,     6,
     158,    51,   142,   174,    57,   192,    51,    52,    53,    58,
      55,   151,    51,     0,     1,    52,     3,     4,   158,     6,
      54,   179,   180,    10,    11,    12,    13,    59,   186,   187,
      53,    29,    30,    31,    32,    33,    34,    29,    30,   179,
     180,    28,    47,    48,    49,    50,   186,   187,    46,    54,
      51,    51,   192,    51,    52,     3,    54,    55,    53,    51,
      52,    53,    51,    55,    31,    32,    33,    34,    31,    32,
      33,    34,    47,    48,    49,    50,    60,    27,    54,    46,
      51,    51,    51,    46,    51,    38,    39,    40,    41,    42,
      43,    51,    51,    54,    47,    48,    49,    50,    54,    98,
     140,    95,   193,   192,   169,    -1,    99
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     6,    10,    11,    12,    13,    28,
      62,    63,    75,    86,    87,    89,    97,   105,    29,    30,
      52,    53,    76,    78,    88,     3,    62,     0,    62,    51,
      51,    31,    32,    33,    34,    46,    51,    85,    62,     3,
      64,    87,    51,     3,    75,    87,    54,    75,    85,    85,
      55,    57,     3,     4,     6,    53,    80,    87,    52,    53,
      65,    67,    69,    51,    51,    54,    77,    79,    75,    97,
      80,    47,    48,    49,    50,     3,    64,    90,    91,    92,
      97,    85,    85,    85,    80,    53,   109,    56,    75,    54,
      81,    82,    83,    84,    54,    52,     3,    66,    68,    70,
      80,   110,   113,    51,    80,    80,    80,    80,    57,    93,
      92,     3,     4,     6,    27,    71,    73,    71,   109,    38,
      39,    40,    41,    42,    43,   108,    54,   111,    58,    94,
      52,    47,    48,    49,    50,    74,    80,    59,    95,    64,
      72,    80,    17,    18,    22,    24,    25,    51,    58,    63,
      96,    97,    98,   106,    73,   112,    51,    75,    53,    51,
      51,    53,     3,    60,    51,     3,     4,     6,    75,    80,
      87,   107,    27,    80,   108,    99,   102,    54,    80,    51,
      51,    51,   107,   107,   100,   103,    51,    51,   107,   107,
     101,   104,    54,    54,    96,    93
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    62,    62,    62,    63,    63,    63,    63,
      63,    63,    63,    65,    66,    64,    64,    64,    67,    68,
      64,    69,    70,    64,    71,    72,    71,    73,    73,    73,
      73,    74,    74,    74,    74,    76,    77,    75,    78,    79,
      75,    75,    75,    75,    75,    75,    75,    75,    81,    80,
      82,    80,    83,    80,    84,    80,    80,    80,    80,    80,
      80,    85,    85,    85,    85,    85,    86,    86,    88,    87,
      89,    90,    90,    91,    91,    92,    94,    93,    95,    95,
      96,    96,    96,    96,    96,    96,    96,    96,    97,    97,
      97,    99,   100,   101,    98,   102,   103,   104,    98,   105,
     106,   107,   107,   108,   108,   108,   108,   108,   108,   109,
     111,   112,   110,   113
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     0,     3,     2,     2,     2,
       3,     2,     1,     0,     0,     7,     3,     1,     0,     0,
       5,     0,     0,     5,     1,     0,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     0,     5,     0,     0,
       5,     3,     3,     2,     2,     1,     1,     1,     0,     4,
       0,     4,     0,     4,     0,     4,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     0,     5,
       6,     1,     0,     3,     1,     2,     0,     4,     2,     0,
       1,     1,     1,     1,     2,     3,     2,     2,     1,     1,
       1,     0,     0,     0,    12,     0,     0,     0,    12,     7,
       5,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       0,     0,     7,     3
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
#line 1470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 60 "parser.y" /* yacc.c:1646  */
    { insert((yyvsp[-1].str),ARRAY,g_addr);
							insert((yyvsp[-1].str),(yyvsp[-2].iValue),g_addr); g_addr+=4; }
#line 1477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 66 "parser.y" /* yacc.c:1646  */
    {PushICGStack((yyvsp[0].str));}
#line 1483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 66 "parser.y" /* yacc.c:1646  */
    {PushICGStack((yyvsp[0].str));}
#line 1489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 67 "parser.y" /* yacc.c:1646  */
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
#line 1504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 78 "parser.y" /* yacc.c:1646  */
    { 
		if(IsAlreadyPresent((yyvsp[-2].str)))
			printf("\n%s Already declared\n", (yyvsp[-2].str));
		else{
			identifierList.push_back((yyvsp[-2].str)); 
			(yyval.str) = (yyvsp[-2].str);
		}
		
	}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 88 "parser.y" /* yacc.c:1646  */
    { 
		if(IsAlreadyPresent((yyvsp[0].str)))
			printf("\n%s Already declared\n", (yyvsp[0].str));
		else{
			identifierList.push_back((yyvsp[0].str)); 
			(yyval.str) = (yyvsp[0].str);
		}
	
	}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 97 "parser.y" /* yacc.c:1646  */
    {PushICGStack((yyvsp[0].str));}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 97 "parser.y" /* yacc.c:1646  */
    {PushICGStack((yyvsp[0].str));}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 98 "parser.y" /* yacc.c:1646  */
    { 
		if(IsAlreadyPresent((yyvsp[-4].str)))
			printf("\n%s Already declared\n", (yyvsp[-4].str));
		else{
			identifierList.push_back((yyvsp[-4].str)); 
			(yyval.str) = (yyvsp[-4].str);
		}
		ICGCurrAssignCodeGenr();
	}
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 107 "parser.y" /* yacc.c:1646  */
    {PushICGStack((yyvsp[0].str));}
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 107 "parser.y" /* yacc.c:1646  */
    {PushICGStack((yyvsp[0].str));}
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 108 "parser.y" /* yacc.c:1646  */
    { 
		if(IsAlreadyPresent((yyvsp[-4].str)))
			printf("\n%s Already declared\n", (yyvsp[-4].str));
		else{
			identifierList.push_back((yyvsp[-4].str)); 
			(yyval.str) = (yyvsp[-4].str);
		}
		printf("------ Here ------");
		ICGCurrAssignCodeGenr();
	}
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 120 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 121 "parser.y" /* yacc.c:1646  */
    {{ strcpy(tokenStack[++tokenStackTop], (yyvsp[0].str)); }}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 122 "parser.y" /* yacc.c:1646  */
    {
		if(!check((yyvsp[-3].str), (yyvsp[0].str)))
			printf("Type mismatch %s %s\n", (yyvsp[-3].str), (yyvsp[0].str));
		else
		  	(yyval.str) = (yyvsp[-3].str);
		ICGCurrCodeGenr();
	}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 131 "parser.y" /* yacc.c:1646  */
    { printf("----- Here : %s ------", (yyvsp[0].str)); PushICGStack((yyvsp[0].str)); (yyval.str) = (yyvsp[0].str);}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 132 "parser.y" /* yacc.c:1646  */
    {PushICGStack(ToString((yyvsp[0].realValue))); (yyval.str) = ToString((yyvsp[0].realValue));}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 133 "parser.y" /* yacc.c:1646  */
    {PushICGStack((yyvsp[0].str)); (yyval.str) = (yyvsp[0].str);}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 134 "parser.y" /* yacc.c:1646  */
    {PushICGStack((yyvsp[0].str)); (yyval.str) = (yyvsp[0].str);}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 143 "parser.y" /* yacc.c:1646  */
    { PushICGStack((yyvsp[0].str));}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 143 "parser.y" /* yacc.c:1646  */
    { PushICGStack((yyvsp[0].str)); }
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 144 "parser.y" /* yacc.c:1646  */
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
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 155 "parser.y" /* yacc.c:1646  */
    {PushICGStack((yyvsp[0].str));}
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 155 "parser.y" /* yacc.c:1646  */
    {PushICGStack((yyvsp[0].str));}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 156 "parser.y" /* yacc.c:1646  */
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
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 169 "parser.y" /* yacc.c:1646  */
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
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 179 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[-1].str);}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 180 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[-1].str);}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 181 "parser.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str);}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 182 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = ToString((yyvsp[0].realValue));}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 183 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 187 "parser.y" /* yacc.c:1646  */
    { strcpy(tokenStack[++tokenStackTop], "+"); }
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 188 "parser.y" /* yacc.c:1646  */
    { 
		if(!check((yyvsp[-3].str),(yyvsp[0].str)))
			printf("Type Mismatch %s %s \n",(yyvsp[-3].str),(yyvsp[0].str));
		else
			(yyval.str) = (yyvsp[-3].str);
		ICGCurrCodeGenr();
	}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 195 "parser.y" /* yacc.c:1646  */
    { strcpy(tokenStack[++tokenStackTop], ""); }
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 196 "parser.y" /* yacc.c:1646  */
    { 
		if(!check((yyvsp[-3].str),(yyvsp[0].str)))
			printf("Type Mismatch %s %s \n",(yyvsp[-3].str),(yyvsp[0].str));
		else
			(yyval.str) = (yyvsp[-3].str);
		ICGCurrCodeGenr();
	}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 203 "parser.y" /* yacc.c:1646  */
    { strcpy(tokenStack[++tokenStackTop], "*"); }
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 204 "parser.y" /* yacc.c:1646  */
    { 
		if(!check((yyvsp[-3].str),(yyvsp[0].str)))
			printf("Type Mismatch %s %s \n",(yyvsp[-3].str),(yyvsp[0].str));
		else
			(yyval.str) = (yyvsp[-3].str);
		ICGCurrCodeGenr();
	}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 211 "parser.y" /* yacc.c:1646  */
    { strcpy(tokenStack[++tokenStackTop], "/"); }
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 212 "parser.y" /* yacc.c:1646  */
    { 
		if(!check((yyvsp[-3].str),(yyvsp[0].str)))
			printf("Type Mismatch %s %s \n",(yyvsp[-3].str),(yyvsp[0].str));
		else
			(yyval.str) = (yyvsp[-3].str);
		ICGCurrCodeGenr();
	}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 220 "parser.y" /* yacc.c:1646  */
    { 
			(yyval.str) = (yyvsp[-1].str); 
		}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 224 "parser.y" /* yacc.c:1646  */
    { 
			(yyval.str) = ToString((yyvsp[0].realValue));
			PushICGStack(ToString((yyvsp[0].realValue))); 
		}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 229 "parser.y" /* yacc.c:1646  */
    {
			(yyval.str) = (yyvsp[0].str); 
			PushICGStack((yyvsp[0].str)); 
		}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 234 "parser.y" /* yacc.c:1646  */
    { 
			(yyval.str) = (yyvsp[0].str); 
			PushICGStack((yyvsp[0].str)); 
		}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 238 "parser.y" /* yacc.c:1646  */
    { ICGCurrArrayCodeGenr(); }
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 241 "parser.y" /* yacc.c:1646  */
    {char assign[2] = "="; (yyval.str)=assign;}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 255 "parser.y" /* yacc.c:1646  */
    {PushICGStack((yyvsp[0].str));}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 260 "parser.y" /* yacc.c:1646  */
    { insert((yyvsp[-4].str),FUNCTION,g_addr); insert((yyvsp[-4].str),(yyvsp[-5].iValue),g_addr);g_addr+=4; }
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 271 "parser.y" /* yacc.c:1646  */
    {saveST();}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 271 "parser.y" /* yacc.c:1646  */
    {popST(); (yyval.str) = (yyvsp[-1].str);}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 273 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 274 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = empty;}
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 276 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = empty;}
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 277 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = empty;}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 278 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = empty;}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 279 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = empty;}
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 280 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = empty;}
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 281 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[-1].str);}
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 282 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = empty;}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 283 "parser.y" /* yacc.c:1646  */
    {(yyval.str) = empty;}
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 293 "parser.y" /* yacc.c:1646  */
    {ForInitialisation();}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 293 "parser.y" /* yacc.c:1646  */
    {ForCondition();}
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 293 "parser.y" /* yacc.c:1646  */
    {ForChange();}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 293 "parser.y" /* yacc.c:1646  */
    {ForAfter();}
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 294 "parser.y" /* yacc.c:1646  */
    {ForInitialisation();}
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 294 "parser.y" /* yacc.c:1646  */
    {ForCondition();}
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 294 "parser.y" /* yacc.c:1646  */
    {ForChange();}
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 294 "parser.y" /* yacc.c:1646  */
    {ForAfter();}
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 298 "parser.y" /* yacc.c:1646  */
    { insert((yyvsp[-5].str),STRUCT,g_addr); g_addr+=4; }
#line 1991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 323 "parser.y" /* yacc.c:1646  */
    {ifAssignment();}
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 323 "parser.y" /* yacc.c:1646  */
    {ifCondition();}
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 323 "parser.y" /* yacc.c:1646  */
    { ifAfter(); (yyval.str) = (yyvsp[-6].str);}
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2013 "y.tab.c" /* yacc.c:1646  */
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
#line 331 "parser.y" /* yacc.c:1906  */


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
