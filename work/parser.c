/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/parser.y" /* yacc.c:337  */

#include "nodetypes.h"
#include "tree.h"

/* This defines the type for every $$ value in the productions. */
#define YYSTYPE node_t *

/*
 * Convenience macros for repeated code. These macros are named CN for "create
 * node", number of children (3 is the most we need for a basic VSL syntax
 * tree), and with a trailing N or D for the data label (N is "NULL", D means
 * something goes in the data pointer).
 */
#define CN0D(node,type,data)\
    node_init ( node = malloc(sizeof(node_t)), type, data, 0 )
#define CN0N(node,type)\
    node_init ( node = malloc(sizeof(node_t)), type, NULL, 0 )
#define CN1D(node,type,data,A) \
    node_init ( node = malloc(sizeof(node_t)), type, data, 1, A )
#define CN1N(node,type,A) \
    node_init ( node = malloc(sizeof(node_t)), type, NULL, 1, A )
#define CN2D(node,type,data,A,B) \
    node_init ( node = malloc(sizeof(node_t)), type, data, 2, A, B )
#define CN2N(node,type,A,B) \
    node_init ( node = malloc(sizeof(node_t)), type, NULL, 2, A, B )
#define CN3N(node,type,A,B,C) \
    node_init ( node = malloc(sizeof(node_t)), type, NULL, 3, A, B, C )
#define CN3D(node,type,data,A,B,C) \
    node_init ( node = malloc(sizeof(node_t)), type, data, 3, A, B, C )

/*
 * Variables connecting the parser to the state of the scanner - defs. will be
 * generated as part of the scanner (lexical analyzer).
 */
extern char yytext[];
extern int yylineno;


/*
 * Since the return value of yyparse is an integer (as defined by yacc/bison),
 * we need the top level production to finalize parsing by setting the root
 * node of the entire syntax tree inside its semantic rule instead. This global
 * variable will let us get a hold of the tree root after it has been
 * generated.
 */
node_t *root;


/*
 * These functions are referenced by the generated parser before their
 * definition. Prototyping them saves us a couple of warnings during build.
 */
int yyerror ( const char *error );  /* Defined below */
int yylex ( void );                 /* Defined in the generated scanner */

#line 126 "y.tab.c" /* yacc.c:337  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
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
   by #include "parser.h".  */
#ifndef YY_YY_WORK_PARSER_H_INCLUDED
# define YY_YY_WORK_PARSER_H_INCLUDED
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
    NUMBER = 258,
    STRING = 259,
    IDENTIFIER = 260,
    ASSIGN = 261,
    FUNC = 262,
    PRINT = 263,
    RETURN = 264,
    CONTINUE = 265,
    IF = 266,
    THEN = 267,
    ELSE = 268,
    FI = 269,
    WHILE = 270,
    DO = 271,
    DONE = 272,
    VAR = 273,
    POWER = 274,
    UMINUS = 275
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_WORK_PARSER_H_INCLUDED  */



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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   140

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  55
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  98

#define YYUNDEFTOK  2
#define YYMAXUTOK   275

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      26,    27,    22,    20,    25,    21,     2,    23,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    30,     2,    31,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    28,     2,    29,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    24
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    91,    91,    94,    95,    97,    98,   100,   101,   103,
     104,   106,   107,   108,   109,   111,   112,   115,   116,   119,
     120,   123,   127,   128,   129,   130,   131,   132,   133,   135,
     136,   137,   139,   140,   141,   143,   145,   149,   153,   154,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   169,   170,   171,   172,   174
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "STRING", "IDENTIFIER",
  "ASSIGN", "FUNC", "PRINT", "RETURN", "CONTINUE", "IF", "THEN", "ELSE",
  "FI", "WHILE", "DO", "DONE", "VAR", "POWER", "'+'", "'-'", "'*'", "'/'",
  "UMINUS", "','", "'('", "')'", "'{'", "'}'", "'['", "']'", "$accept",
  "program", "function_list", "statement_list", "print_list",
  "expression_list", "variable_list", "argument_list", "parameter_list",
  "declaration_list", "function", "statement", "block",
  "assignment_statement", "return_statement", "print_statement",
  "null_statement", "if_statement", "while_statement", "print_item",
  "expression", "declaration", "indexed_variable", "variable", "text",
  "integer", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
      43,    45,    42,    47,   275,    44,    40,    41,   123,   125,
      91,    93
};
# endif

#define YYPACT_NINF -43

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-43)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -5,     0,    15,    -5,   -43,   -43,    -9,   -43,   -43,     0,
       4,    -3,   -43,    13,     0,    73,    41,   -43,    13,    82,
      88,   -43,    88,    88,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,     3,   -43,    18,   -43,    88,    88,    25,
     -43,   117,   -14,   -43,   -43,   117,    98,   112,    62,    88,
      88,   -43,   -43,   103,    82,    88,    88,    88,    88,    88,
      88,    88,    73,    73,     0,    17,   -43,   -43,   117,    34,
     -43,   -43,    32,   -12,   -12,    32,    32,    27,    31,   117,
      75,    21,    42,     4,   -43,   -43,    54,    88,   -43,   -43,
      73,   -43,   -43,    88,   117,    52,   117,   -43
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     3,    53,     0,     1,     4,    18,
      17,     0,    12,    11,     0,     0,     0,    14,    13,     0,
       0,    34,     0,     0,    20,    21,    28,    22,    23,    24,
      25,    26,    27,     0,    55,     0,    54,     0,     0,    33,
       7,    38,    48,    39,    47,    32,     0,     0,     0,     0,
       0,    52,    45,     0,     0,     0,     0,     0,     0,     0,
      16,     0,     0,     0,     0,     0,     5,    19,    30,     0,
      46,     8,    44,    40,    41,    42,    43,    15,     0,     9,
       0,     0,     0,    51,    29,     6,     0,     0,    49,    50,
       0,    35,    37,     0,    10,     0,    31,    36
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -43,   -43,   -43,   -43,   -43,   -43,     5,   -43,   -43,   -43,
      72,   -42,   -43,   -43,   -43,   -43,   -43,   -43,   -43,    22,
     -19,   -43,    65,    -1,   -43,    76
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    65,    39,    77,    10,    78,    11,    48,
       4,    25,    26,    27,    28,    29,    30,    31,    32,    40,
      41,    67,    12,    42,    43,    44
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       6,    45,     1,    46,    47,     5,    66,    55,    13,    49,
      58,    59,    60,    18,    33,     7,    61,     9,    52,    53,
      81,    82,     5,    85,    15,    19,    20,    21,    22,    14,
      68,    69,    23,    50,    90,    91,    72,    73,    74,    75,
      76,    79,    80,    16,    34,    24,    84,    33,    95,    51,
      54,    55,    87,    55,    56,    57,    58,    59,    88,    92,
      93,    33,    33,    13,    33,    86,    97,     5,    94,    83,
      19,    20,    21,    22,    96,     8,    71,    23,     5,    17,
      64,    19,    20,    21,    22,    34,    36,     5,    23,    33,
      24,    34,    35,     5,    55,    56,    57,    58,    59,     0,
       0,    24,     0,    37,     0,     0,    89,     0,    38,    37,
      62,     0,     0,     0,    38,     0,     0,    55,    56,    57,
      58,    59,    55,    56,    57,    58,    59,     0,    63,     0,
      70,    55,    56,    57,    58,    59,    55,    56,    57,    58,
      59
};

static const yytype_int8 yycheck[] =
{
       1,    20,     7,    22,    23,     5,    48,    19,     9,     6,
      22,    23,    26,    14,    15,     0,    30,    26,    37,    38,
      62,    63,     5,    65,    27,     8,     9,    10,    11,    25,
      49,    50,    15,    30,    13,    14,    55,    56,    57,    58,
      59,    60,    61,    30,     3,    28,    29,    48,    90,    31,
      25,    19,    25,    19,    20,    21,    22,    23,    27,    17,
       6,    62,    63,    64,    65,    31,    14,     5,    87,    64,
       8,     9,    10,    11,    93,     3,    54,    15,     5,    14,
      18,     8,     9,    10,    11,     3,     4,     5,    15,    90,
      28,     3,    16,     5,    19,    20,    21,    22,    23,    -1,
      -1,    28,    -1,    21,    -1,    -1,    31,    -1,    26,    21,
      12,    -1,    -1,    -1,    26,    -1,    -1,    19,    20,    21,
      22,    23,    19,    20,    21,    22,    23,    -1,    16,    -1,
      27,    19,    20,    21,    22,    23,    19,    20,    21,    22,
      23
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    33,    34,    42,     5,    55,     0,    42,    26,
      38,    40,    54,    55,    25,    27,    30,    54,    55,     8,
       9,    10,    11,    15,    28,    43,    44,    45,    46,    47,
      48,    49,    50,    55,     3,    57,     4,    21,    26,    36,
      51,    52,    55,    56,    57,    52,    52,    52,    41,     6,
      30,    31,    52,    52,    25,    19,    20,    21,    22,    23,
      26,    30,    12,    16,    18,    35,    43,    53,    52,    52,
      27,    51,    52,    52,    52,    52,    52,    37,    39,    52,
      52,    43,    43,    38,    29,    43,    31,    25,    27,    31,
      13,    14,    17,     6,    52,    43,    52,    14
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    32,    33,    34,    34,    35,    35,    36,    36,    37,
      37,    38,    38,    38,    38,    39,    39,    40,    40,    41,
      41,    42,    43,    43,    43,    43,    43,    43,    43,    44,
      45,    45,    46,    47,    48,    49,    49,    50,    51,    51,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    53,    54,    55,    56,    57
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     2,     1,     3,     1,
       3,     1,     1,     3,     3,     1,     0,     1,     0,     2,
       0,     6,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     6,     2,     2,     1,     5,     7,     5,     1,     1,
       3,     3,     3,     3,     3,     2,     3,     1,     1,     4,
       4,     2,     4,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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
  unsigned long yylno = yyrline[yyrule];
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
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
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
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
| yyreduce -- do a reduction.  |
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
#line 91 "src/parser.y" /* yacc.c:1652  */
    {
    node_init ( root = malloc(sizeof(node_t)), program_n, NULL, 1, yyvsp[0]);
}
#line 1354 "y.tab.c" /* yacc.c:1652  */
    break;

  case 3:
#line 94 "src/parser.y" /* yacc.c:1652  */
    { CN1N ( yyval, function_list_n, yyvsp[0] ); }
#line 1360 "y.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 95 "src/parser.y" /* yacc.c:1652  */
    { CN2N ( yyval, function_list_n, yyvsp[-1], yyvsp[0] ); }
#line 1366 "y.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 97 "src/parser.y" /* yacc.c:1652  */
    { CN1N ( yyval, statement_list_n, yyvsp[0] ); }
#line 1372 "y.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 98 "src/parser.y" /* yacc.c:1652  */
    { CN2N ( yyval, statement_list_n, yyvsp[-1], yyvsp[0] ); }
#line 1378 "y.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 100 "src/parser.y" /* yacc.c:1652  */
    { CN1N ( yyval, print_list_n, yyvsp[0] ); }
#line 1384 "y.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 101 "src/parser.y" /* yacc.c:1652  */
    { CN2N ( yyval, print_list_n, yyvsp[-2], yyvsp[0] ); }
#line 1390 "y.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 103 "src/parser.y" /* yacc.c:1652  */
    { CN1N ( yyval, expression_list_n, yyvsp[0] ); }
#line 1396 "y.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 104 "src/parser.y" /* yacc.c:1652  */
    { CN2N ( yyval, expression_list_n, yyvsp[-2], yyvsp[0]); }
#line 1402 "y.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 106 "src/parser.y" /* yacc.c:1652  */
    { CN1N ( yyval, variable_list_n, yyvsp[0] ); }
#line 1408 "y.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 107 "src/parser.y" /* yacc.c:1652  */
    { CN1N ( yyval, variable_list_n, yyvsp[0] ); }
#line 1414 "y.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 108 "src/parser.y" /* yacc.c:1652  */
    { CN2N ( yyval, variable_list_n, yyvsp[-2], yyvsp[0] ); }
#line 1420 "y.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 109 "src/parser.y" /* yacc.c:1652  */
    { CN2N ( yyval, variable_list_n, yyvsp[-2], yyvsp[0] ); }
#line 1426 "y.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 111 "src/parser.y" /* yacc.c:1652  */
    { CN1N ( yyval, argument_list_n, yyvsp[0] ); }
#line 1432 "y.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 112 "src/parser.y" /* yacc.c:1652  */
    { yyval = NULL; }
#line 1438 "y.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 115 "src/parser.y" /* yacc.c:1652  */
    { CN1N ( yyval, parameter_list_n, yyvsp[0] ); }
#line 1444 "y.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 116 "src/parser.y" /* yacc.c:1652  */
    { yyval = NULL; }
#line 1450 "y.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 119 "src/parser.y" /* yacc.c:1652  */
    { CN2N( yyval, declaration_list_n, yyvsp[-1], yyvsp[0]); }
#line 1456 "y.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 120 "src/parser.y" /* yacc.c:1652  */
    { yyval = NULL; }
#line 1462 "y.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 124 "src/parser.y" /* yacc.c:1652  */
    { CN3N ( yyval, function_n, yyvsp[-4], yyvsp[-2], yyvsp[0] ); }
#line 1468 "y.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 127 "src/parser.y" /* yacc.c:1652  */
    { CN1N ( yyval, statement_n, yyvsp[0] ); }
#line 1474 "y.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 128 "src/parser.y" /* yacc.c:1652  */
    { CN1N ( yyval, statement_n, yyvsp[0] ); }
#line 1480 "y.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 129 "src/parser.y" /* yacc.c:1652  */
    { CN1N ( yyval, statement_n, yyvsp[0] ); }
#line 1486 "y.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 130 "src/parser.y" /* yacc.c:1652  */
    { CN1N ( yyval, statement_n, yyvsp[0] ); }
#line 1492 "y.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 131 "src/parser.y" /* yacc.c:1652  */
    { CN1N ( yyval, statement_n, yyvsp[0] ); }
#line 1498 "y.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 132 "src/parser.y" /* yacc.c:1652  */
    { CN1N ( yyval, statement_n, yyvsp[0] ); }
#line 1504 "y.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 133 "src/parser.y" /* yacc.c:1652  */
    { CN1N ( yyval, statement_n, yyvsp[0] ); }
#line 1510 "y.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 135 "src/parser.y" /* yacc.c:1652  */
    { CN2N( yyval, block_n, yyvsp[-2], yyvsp[-1]); }
#line 1516 "y.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 136 "src/parser.y" /* yacc.c:1652  */
    { CN2N( yyval, assignment_statement_n, yyvsp[-2], yyvsp[0]); }
#line 1522 "y.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 137 "src/parser.y" /* yacc.c:1652  */
    { CN3N( yyval, assignment_statement_n, yyvsp[-5], yyvsp[-3], yyvsp[0]); }
#line 1528 "y.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 139 "src/parser.y" /* yacc.c:1652  */
    { CN1N ( yyval, return_statement_n, yyvsp[0] ); }
#line 1534 "y.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 140 "src/parser.y" /* yacc.c:1652  */
    { CN1N ( yyval, print_statement_n, yyvsp[0] ); }
#line 1540 "y.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 141 "src/parser.y" /* yacc.c:1652  */
    { CN0N ( yyval, null_statement_n ); }
#line 1546 "y.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 144 "src/parser.y" /* yacc.c:1652  */
    { CN2N ( yyval, if_statement_n, yyvsp[-3], yyvsp[-1]); }
#line 1552 "y.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 146 "src/parser.y" /* yacc.c:1652  */
    { CN3N ( yyval, if_statement_n, yyvsp[-5], yyvsp[-3], yyvsp[-1] ); }
#line 1558 "y.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 150 "src/parser.y" /* yacc.c:1652  */
    { CN2N ( yyval, while_statement_n, yyvsp[-3], yyvsp[-1] ); }
#line 1564 "y.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 153 "src/parser.y" /* yacc.c:1652  */
    { CN1N ( yyval, print_item_n, yyvsp[0] ); }
#line 1570 "y.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 154 "src/parser.y" /* yacc.c:1652  */
    { CN1N ( yyval, print_item_n, yyvsp[0] ); }
#line 1576 "y.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 157 "src/parser.y" /* yacc.c:1652  */
    { CN2D( yyval, expression_n, STRDUP("+"),yyvsp[-2],yyvsp[0] ); }
#line 1582 "y.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 158 "src/parser.y" /* yacc.c:1652  */
    { CN2D( yyval, expression_n, STRDUP("-"),yyvsp[-2],yyvsp[0] ); }
#line 1588 "y.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 159 "src/parser.y" /* yacc.c:1652  */
    { CN2D( yyval, expression_n, STRDUP("*"),yyvsp[-2],yyvsp[0] ); }
#line 1594 "y.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 160 "src/parser.y" /* yacc.c:1652  */
    { CN2D( yyval, expression_n, STRDUP("/"),yyvsp[-2],yyvsp[0] ); }
#line 1600 "y.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 161 "src/parser.y" /* yacc.c:1652  */
    { CN2D( yyval, expression_n, STRDUP("^"), yyvsp[-2], yyvsp[0]); }
#line 1606 "y.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 162 "src/parser.y" /* yacc.c:1652  */
    { CN1D( yyval, expression_n, STRDUP("-"), yyvsp[0]); }
#line 1612 "y.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 163 "src/parser.y" /* yacc.c:1652  */
    { CN1N ( yyval, expression_n, yyvsp[-1] ); }
#line 1618 "y.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 164 "src/parser.y" /* yacc.c:1652  */
    { CN1N ( yyval, expression_n, yyvsp[0] ); }
#line 1624 "y.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 165 "src/parser.y" /* yacc.c:1652  */
    { CN1N ( yyval, expression_n, yyvsp[0] ); }
#line 1630 "y.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 166 "src/parser.y" /* yacc.c:1652  */
    { CN2D ( yyval, expression_n, STRDUP("F"), yyvsp[-3], yyvsp[-1] ); }
#line 1636 "y.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 167 "src/parser.y" /* yacc.c:1652  */
    { CN2D ( yyval, expression_n, STRDUP("A"), yyvsp[-3], yyvsp[-1] ); }
#line 1642 "y.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 169 "src/parser.y" /* yacc.c:1652  */
    { CN1N ( yyval, declaration_n, yyvsp[0] ); }
#line 1648 "y.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 170 "src/parser.y" /* yacc.c:1652  */
    { CN1D ( yyval, variable_n, yyvsp[-3]->data, yyvsp[-1]); free(yyvsp[-3]);}
#line 1654 "y.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 171 "src/parser.y" /* yacc.c:1652  */
    { CN0D ( yyval, variable_n, STRDUP(yytext) ); }
#line 1660 "y.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 172 "src/parser.y" /* yacc.c:1652  */
    { CN0D ( yyval, text_n, STRDUP(yytext) ); }
#line 1666 "y.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 175 "src/parser.y" /* yacc.c:1652  */
    {
        CN0D ( yyval, integer_n, calloc ( 1, sizeof(int32_t) ) );
        *((int32_t *)yyval->data) = strtol ( yytext, NULL, 10 );
      }
#line 1675 "y.tab.c" /* yacc.c:1652  */
    break;


#line 1679 "y.tab.c" /* yacc.c:1652  */
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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
#line 180 "src/parser.y" /* yacc.c:1918  */



/*
 * This function is called with an error description when parsing fails.
 * Serious error diagnosis requires a lot of code (and imagination), so in the
 * interest of keeping this project on a manageable scale, we just chuck the
 * message/line number on the error stream and stop dead.
 */
int
yyerror ( const char *error )
{
    fprintf ( stderr, "\tError: %s detected at line %d\n", error, yylineno );
    exit ( EXIT_FAILURE );
}
