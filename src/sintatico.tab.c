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
#line 5 "sintatico.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "../lib/arvore.h"
    #include "../lib/tabelaSimbolo.h"
    extern int yylex();
    extern int yylex_destroy();
    extern void yyerror(const char* s);
    extern FILE *yyin;
    AST* raiz;
    TabelaSimbolo* id;
    int erros = 0;
    char tipos[4][10] = {"INT", "FLOAT", "INT LIST", "FLOAT LIST"}; // TODO REVER ISSO POIS PODE SER REMOVIDO
    char tiposTac[4][10] = {"int", "float", "int list", "float list"}; // TODO REVER ISSO POIS PODE SER REMOVIDO
    int tipo = 0;
    extern int escopoL[1000];
    extern int escopoAtual;
    extern int escopo;
    extern char type_symbol[20];
    int qtdString = 0;
    int qtdIf = 0;
    int funcao = 0;

#line 91 "sintatico.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "sintatico.tab.h".  */
#ifndef YY_YY_SINTATICO_TAB_H_INCLUDED
# define YY_YY_SINTATICO_TAB_H_INCLUDED
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
    INT = 259,
    TIPO_INT = 260,
    OP_B_SOMA_SUB = 261,
    OP_B_MULT_DIV = 262,
    OP_LOGICA_AND = 263,
    OP_LOGICA_NEG = 264,
    OP_LOGICA_OR = 265,
    OP_B_RELACIONAIS = 266,
    IF = 267,
    ELSE = 268,
    THEN = 269,
    WHILE = 270,
    RETORNO = 271,
    ENTRADA = 272,
    SAIDA = 273,
    CONSTRUTOR_LISTA = 274,
    OP_LISTA = 275,
    FUNCOES_LISTA = 276,
    STRING = 277,
    NIL = 278,
    ABRE_PARENTESES = 279,
    FECHA_PARENTESES = 280,
    ABRE_CHAVES = 281,
    FECHA_CHAVES = 282,
    ATRIBUICAO = 283,
    VIRGULA = 284,
    PONTOVIRGULA = 285,
    COLCHETES = 286
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 31 "sintatico.y" /* yacc.c:355  */

    struct AST* ast;
    struct Token {
        int linha;
        int coluna;
        char id[100];
        int escopo;
    } token;

#line 173 "sintatico.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTATICO_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 190 "sintatico.tab.c" /* yacc.c:358  */

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2418

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  328

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   106,   106,   114,   119,   125,   148,   151,   154,   160,
     171,   183,   192,   203,   209,   213,   219,   224,   231,   234,
     237,   240,   243,   246,   249,   252,   258,   265,   270,   282,
     297,   324,   333,   342,   348,   357,   361,   366,   374,   381,
     388,   397,   403,   415,   421,   430,   442,   450,   456,   461,
     468,   478,   484,   490,   498,   508,   520,   538,   555,   562,
     566,   572,   578,   584,   589,   597
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "INT", "TIPO_INT", "OP_B_SOMA_SUB",
  "OP_B_MULT_DIV", "OP_LOGICA_AND", "OP_LOGICA_NEG", "OP_LOGICA_OR",
  "OP_B_RELACIONAIS", "IF", "ELSE", "THEN", "WHILE", "RETORNO", "ENTRADA",
  "SAIDA", "CONSTRUTOR_LISTA", "OP_LISTA", "FUNCOES_LISTA", "STRING",
  "NIL", "ABRE_PARENTESES", "FECHA_PARENTESES", "ABRE_CHAVES",
  "FECHA_CHAVES", "ATRIBUICAO", "VIRGULA", "PONTOVIRGULA", "COLCHETES",
  "$accept", "programa", "listaDeDeclaracoes", "TIPO", "declaracao",
  "declaracaoVariavel", "declaracaoFuncao", "listaDeParametros", "corpo",
  "dentroCorpo", "declaracoes", "expressao", "while", "condicional", "exp",
  "expressaoList", "expressao_logica", "expressao_relacional", "opSomaSub",
  "opMultDiv", "expressao_unaria", "argumento", "chamadaDeFuncao",
  "entrada", "saida", "retorno", "nil", "numero", YY_NULLPTR
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
     285,   286
};
# endif

#define YYPACT_NINF -176

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-176)))

#define YYTABLE_NINF -66

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      93,    15,     5,    24,   488,    22,   506,   693,   711,  -176,
     801,    61,     6,   811,    27,    12,   101,    20,     6,  1678,
      66,  1688,    32,   140,  1886,    39,   470,    14,    42,    23,
      71,    76,   110,   566,   122,   328,   397,   105,   511,   889,
     916,   943,    82,   970,   296,   622,  2066,  1892,  1913,  1919,
    1940,   997,  1024,  1051,  1946,   113,  2226,   356,  1967,   139,
     168,   566,  1078,   115,   153,  2248,   143,   150,   146,  1740,
     158,   199,   207,  1105,    52,    52,    52,   441,    39,  1973,
     188,   192,   190,  1132,  1159,   196,   500,   204,  1186,   205,
     596,   236,   217,   223,  1213,  1994,   222,   229,  2197,  2204,
    2080,    52,  2000,  2021,  2027,  1240,  1267,    66,  1645,    66,
     238,   240,    -2,   284,   288,  1294,  1321,  2048,  1348,   242,
    1375,  1402,  1429,   293,  1456,  1483,    66,  1510,  1537,  1564,
      66,   448,   201,   332,   661,   566,   261,   125,   133,   494,
     807,  2087,  2096,  2105,  2277,  2289,   346,   566,   566,    79,
    1656,   574,  2297,  2305,  2313,  2321,  2329,   844,  1697,   424,
     879,   250,   566,   299,   604,  2169,   769,  1718,  1725,  1746,
    1753,  1774,   184,  1591,   324,   327,   322,  2236,   338,   176,
     329,   333,    30,   344,   350,   373,    66,   379,   370,   380,
     381,   391,   392,   262,   395,   403,   405,   406,   363,   393,
     386,  2112,   396,   410,   375,   375,   375,   742,   332,   700,
    2337,   411,   412,   686,   686,   686,   754,   346,   783,    99,
    1781,   740,   416,   432,   825,   825,   825,   837,   424,   436,
     437,  1691,   399,   438,   450,   452,  2258,   168,   566,   467,
     455,   484,  2270,   473,   482,   480,   510,   519,   520,  1618,
    2121,   472,  2130,   230,   331,   669,   375,  2137,  2146,  2345,
     509,  2353,  2233,  2255,  2393,   686,  2361,  2369,  1802,   514,
    1809,  2176,  2192,  2054,   825,  1830,  1837,   521,   522,   523,
     531,   534,   528,   554,   555,   546,   893,   551,   564,   558,
    1666,   585,   569,   570,   576,   584,   592,   568,   578,  2155,
    2162,  2377,  2385,  1858,  1865,   598,   603,  1645,  1645,  1645,
     579,   588,    34,   589,   609,   629,   635,   638,   640,   646,
     649,   650,   636,   658,   659,  1645,   665,   670
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -176,  -176,  -176,     0,   680,     3,  -176,   682,   -12,   -37,
     -58,   -46,   -35,   -31,   -20,   -43,   567,   662,   621,   431,
     526,    19,   225,    -9,    -6,    13,  -175,   336
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,    34,     6,    35,     8,    15,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    84,    54
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,    70,   235,     7,     5,    21,    59,     7,    -5,    63,
      83,     2,    14,    67,    85,    -8,    -8,   163,    14,    93,
      -8,    19,   163,   123,     9,    11,   131,   132,   198,   133,
      16,   -13,   134,   131,   132,    80,   133,    17,    60,   134,
      86,    87,    57,    24,    58,   172,    20,   135,   141,   118,
     119,   120,   154,    62,   135,    57,    24,   -11,    25,   322,
     239,   284,   190,    33,   198,   194,    61,   129,   128,    23,
      24,     2,    25,   191,   154,    26,    33,   192,    27,   169,
     154,    28,    29,    30,    31,    12,    32,   213,   193,   214,
      33,    13,   130,   199,     1,    64,   189,   103,     2,   195,
      65,    71,   196,    72,   -33,   -50,   -50,   -50,   187,   -50,
     -50,   188,    73,    66,   202,   203,   144,   145,   -50,   146,
     -50,   197,   147,   218,   -50,    68,   -12,   211,   212,   -50,
      18,   234,    69,   -40,   163,   -40,   206,   148,    79,   207,
     221,   -41,   223,   -41,   -41,    88,   -50,   -50,   -50,   244,
     -50,   -50,   201,   141,   154,   -40,    89,   172,   -34,   -50,
     -34,   -50,   240,   -41,    55,   210,   154,   154,    56,   -34,
     -50,   157,   158,    94,   159,    95,   173,   160,   220,   169,
     251,   154,   -50,   -50,   -50,   -16,   -50,   -50,   161,   260,
     283,   285,   162,   194,   163,   -50,   293,   -50,   269,   163,
      55,   141,    96,   174,   236,   175,   -50,   -65,   -65,   -65,
      97,   -65,   -65,   104,   176,   105,   193,   286,   287,   154,
     106,   107,   172,   141,   141,   141,   141,   258,   154,   109,
     110,   -65,   154,   154,   154,   154,   267,   154,   -39,   112,
     -39,   206,   113,   169,   169,   169,   169,   276,   114,   317,
     318,   319,   115,   222,   142,   126,   169,   154,   155,   116,
     -39,   190,   190,   190,   194,   194,   194,   327,   121,   204,
     122,   205,   191,   191,   191,   141,   192,   192,   192,   190,
     155,   246,   194,   247,   154,   170,   155,   193,   193,   193,
     191,   -33,   248,   169,   192,   189,   189,   189,   195,   195,
     195,   196,   196,   196,    74,   193,    75,   187,   187,   187,
     188,   188,   188,   189,   124,   -33,   195,   -33,   125,   196,
     197,   197,   197,   127,   -27,   187,   -33,   229,   188,   -19,
     230,   -19,   -19,   -19,   -19,   131,   132,   -19,   197,   -38,
     -19,   -38,   206,   -19,   -19,   -19,   -19,   -26,   -19,   144,
     145,   -15,   -19,   237,   -19,   -19,   135,   238,   142,   142,
     155,   -38,   -50,   -50,   -50,   143,   -50,   -50,   241,   156,
     148,   155,   155,   155,   242,   -50,   243,   -50,   131,   132,
      55,   133,   245,   -19,   170,   170,   -50,   155,   -35,   144,
     145,   156,   146,   -18,   -20,   147,   171,   156,   -18,   135,
     -18,   -18,   -18,   -18,   -24,   -25,   -18,   142,   -27,   -18,
     148,   250,   -18,   -18,   -18,   -18,   -21,   -18,   -23,   -22,
     249,   -18,   279,   -18,   -18,   155,   -34,   219,   158,   142,
     142,   142,   142,   142,   155,   252,   -34,   261,   155,   155,
     155,   155,   155,   155,    57,    24,   198,    25,   162,   170,
     170,   170,   170,   170,   -50,   -50,   -50,   270,   -50,   -50,
     139,   101,   170,   155,   152,    33,   277,   278,   280,   143,
     143,   156,   200,    57,    24,   -28,    25,   -29,   -50,    26,
     -62,   142,   156,   156,   156,   288,   152,   289,    -2,     1,
     155,   167,   152,     2,    33,   171,   171,   299,   156,   170,
     -43,   208,   -43,   294,   -43,   -43,    -4,    -4,   102,   295,
     296,    -4,   129,   297,    23,    24,     2,    25,   143,   174,
      26,   175,   298,    27,   -43,   108,    28,    29,    30,    31,
     176,    32,   117,   -26,   301,    33,   156,   130,   -17,   303,
     143,   143,   143,   143,   143,   156,   -36,   -37,   -64,   156,
     156,   156,   156,   156,   156,   140,   -63,   305,   306,   153,
     171,   171,   171,   171,   171,   139,   152,   -28,   -29,   144,
     145,   307,   146,   171,   156,   147,   309,   -61,   152,   152,
     216,   153,   -41,   310,   -41,   -41,   168,   153,   312,   -35,
     148,   167,   143,   152,   313,   314,   136,   -14,   315,   -41,
     149,   156,   -50,   -50,   -50,    -9,   -50,   -50,   316,   320,
     171,   -64,   224,   139,   225,   -50,   -63,   -50,   321,   323,
      55,   111,   149,   -33,   177,   -33,   -50,   164,   149,   -33,
     -40,   152,   -40,    76,   -33,   139,   139,   139,   257,   324,
     152,   -40,   -36,   -40,   152,   152,   152,   266,   -37,   152,
     138,   -31,   -40,   325,   151,   167,   167,   167,   275,   -30,
     140,   153,   -56,   -58,   131,   132,   326,   133,   167,   152,
     134,   -57,   -59,   153,   153,   207,   151,   -42,   -60,   -42,
     -42,   166,   151,   -32,    10,   135,   168,   300,   153,   144,
     145,   137,   146,    -6,    -6,   150,   302,   100,    -6,   -42,
      22,   136,   149,   144,   145,   304,   146,     0,   140,   147,
     148,    -7,    -7,     0,   149,   149,    -7,   150,     0,     0,
       0,     0,   165,   150,   148,   259,   153,   164,     0,   149,
     140,   140,   140,   140,     0,   153,    98,    99,     0,   153,
     153,   153,   153,     0,   153,   131,   132,     0,   133,   136,
     168,   168,   168,   168,     0,   138,   151,   144,   145,   -34,
     146,   -34,   256,   168,   153,   -34,   135,   149,   151,   151,
     -34,     0,     0,     0,   265,   227,   149,   -41,   148,   -41,
     -41,   166,   140,   151,     0,   149,   144,   145,   -41,   146,
     -41,   153,   147,     0,   -41,     0,   137,   150,     0,   -41,
     168,    -3,    -3,   138,   164,   149,    -3,   148,   268,   150,
     150,    -9,    -9,   -47,   -47,   -47,    -9,   -47,   -47,     0,
       0,   151,   165,     0,   150,   138,   138,   255,   219,   158,
     151,   159,     0,     0,   151,   151,   264,   -47,     0,   151,
     219,   158,     0,   159,   137,   166,   166,   273,     0,   162,
     -50,   -50,   -50,     0,   -50,   -50,     0,   274,   166,   151,
       0,   162,   150,   -50,     0,   -50,   253,   254,   218,   -50,
       0,   150,   177,     0,   -50,   262,   263,     0,     0,     0,
     150,     0,   219,   158,     0,   159,   271,   272,   160,     0,
     -20,     0,   -20,   -20,   -20,   -20,     0,     0,   -20,   165,
     150,   -20,     0,   162,   -20,   -20,   -20,   -20,     0,   -20,
       0,     0,   174,   -20,   175,   -20,   -20,   -24,   308,   -24,
     -24,   -24,   -24,   176,     0,   -24,     0,     0,   -24,     0,
       0,   -24,   -24,   -24,   -24,     0,   -24,     0,     0,     0,
     -24,     0,   -24,   -24,   -25,     0,   -25,   -25,   -25,   -25,
       0,     0,   -25,     0,     0,   -25,     0,     0,   -25,   -25,
     -25,   -25,     0,   -25,     0,     0,     0,   -25,     0,   -25,
     -25,   -27,     0,   -27,   -27,   -27,   -27,     0,     0,   -27,
       0,     0,   -27,     0,     0,   -27,   -27,   -27,   -27,     0,
     -27,     0,     0,     0,   -27,     0,   -27,   -27,   -21,     0,
     -21,   -21,   -21,   -21,     0,     0,   -21,     0,     0,   -21,
       0,     0,   -21,   -21,   -21,   -21,     0,   -21,     0,     0,
       0,   -21,     0,   -21,   -21,   -23,     0,   -23,   -23,   -23,
     -23,     0,     0,   -23,     0,     0,   -23,     0,     0,   -23,
     -23,   -23,   -23,     0,   -23,     0,     0,     0,   -23,     0,
     -23,   -23,   -22,     0,   -22,   -22,   -22,   -22,     0,     0,
     -22,     0,     0,   -22,     0,     0,   -22,   -22,   -22,   -22,
       0,   -22,     0,     0,     0,   -22,     0,   -22,   -22,   -62,
       0,   -62,   -62,   -62,   -62,     0,     0,   -62,     0,     0,
     -62,     0,     0,   -62,   -62,   -62,   -62,     0,   -62,     0,
       0,     0,   -62,     0,   -62,   -62,   -26,     0,   -26,   -26,
     -26,   -26,     0,     0,   -26,     0,     0,   -26,     0,     0,
     -26,   -26,   -26,   -26,     0,   -26,     0,     0,     0,   -26,
       0,   -26,   -26,   -28,     0,   -28,   -28,   -28,   -28,     0,
       0,   -28,     0,     0,   -28,     0,     0,   -28,   -28,   -28,
     -28,     0,   -28,     0,     0,     0,   -28,     0,   -28,   -28,
     -29,     0,   -29,   -29,   -29,   -29,     0,     0,   -29,     0,
       0,   -29,     0,     0,   -29,   -29,   -29,   -29,     0,   -29,
       0,     0,     0,   -29,     0,   -29,   -29,   -61,     0,   -61,
     -61,   -61,   -61,     0,     0,   -61,     0,     0,   -61,     0,
       0,   -61,   -61,   -61,   -61,     0,   -61,     0,     0,     0,
     -61,     0,   -61,   -61,   -35,     0,   -35,   -35,   -35,   -35,
       0,     0,   -35,     0,     0,   -35,     0,     0,   -35,   -35,
     -35,   -35,     0,   -35,     0,     0,     0,   -35,     0,   -35,
     -35,   -64,     0,   -64,   -64,   -64,   -64,     0,     0,   -64,
       0,     0,   -64,     0,     0,   -64,   -64,   -64,   -64,     0,
     -64,     0,     0,     0,   -64,     0,   -64,   -64,   -63,     0,
     -63,   -63,   -63,   -63,     0,     0,   -63,     0,     0,   -63,
       0,     0,   -63,   -63,   -63,   -63,     0,   -63,     0,     0,
       0,   -63,     0,   -63,   -63,   -36,     0,   -36,   -36,   -36,
     -36,     0,     0,   -36,     0,     0,   -36,     0,     0,   -36,
     -36,   -36,   -36,     0,   -36,     0,     0,     0,   -36,     0,
     -36,   -36,   -37,     0,   -37,   -37,   -37,   -37,     0,     0,
     -37,     0,     0,   -37,     0,     0,   -37,   -37,   -37,   -37,
       0,   -37,     0,     0,     0,   -37,     0,   -37,   -37,   -31,
       0,   -31,   -31,   -31,   -31,     0,     0,   -31,     0,     0,
     -31,     0,     0,   -31,   -31,   -31,   -31,     0,   -31,     0,
       0,     0,   -31,     0,   -31,   -31,   -30,     0,   -30,   -30,
     -30,   -30,     0,     0,   -30,     0,     0,   -30,     0,     0,
     -30,   -30,   -30,   -30,     0,   -30,     0,     0,     0,   -30,
       0,   -30,   -30,   -56,     0,   -56,   -56,   -56,   -56,     0,
       0,   -56,     0,     0,   -56,     0,     0,   -56,   -56,   -56,
     -56,     0,   -56,     0,     0,     0,   -56,     0,   -56,   -56,
     -58,     0,   -58,   -58,   -58,   -58,     0,     0,   -58,     0,
       0,   -58,     0,     0,   -58,   -58,   -58,   -58,     0,   -58,
       0,     0,     0,   -58,     0,   -58,   -58,   -57,     0,   -57,
     -57,   -57,   -57,     0,     0,   -57,     0,     0,   -57,     0,
       0,   -57,   -57,   -57,   -57,     0,   -57,     0,     0,     0,
     -57,     0,   -57,   -57,   -59,     0,   -59,   -59,   -59,   -59,
       0,     0,   -59,     0,     0,   -59,     0,     0,   -59,   -59,
     -59,   -59,     0,   -59,     0,     0,     0,   -59,     0,   -59,
     -59,   -60,     0,   -60,   -60,   -60,   -60,     0,     0,   -60,
       0,     0,   -60,     0,     0,   -60,   -60,   -60,   -60,     0,
     -60,     0,     0,     0,   -60,     0,   -60,   -60,   -32,     0,
     -32,   -32,   -32,   -32,     0,     0,   -32,     0,     0,   -32,
       0,     0,   -32,   -32,   -32,   -32,     0,   -32,     0,     0,
       0,   -32,     0,   -32,   -32,   -15,     0,   -15,   -15,   -15,
     -15,     0,     0,   -15,     0,     0,   -15,     0,     0,   -15,
     -15,   -15,   -15,     0,   -15,     0,     0,     0,   -15,     0,
     -15,   -15,    -9,     0,    -9,    -9,    -9,    -9,     0,     0,
      -9,     0,     0,    -9,     0,     0,    -9,    -9,    -9,    -9,
       0,    -9,     0,     0,     0,    -9,     0,    -9,    -9,   -14,
       0,   -14,   -14,   -14,   -14,     0,     0,   -14,     0,     0,
     -14,     0,     0,   -14,   -14,   -14,   -14,     0,   -14,     0,
       0,     0,   -14,     0,   -14,   -14,   178,     0,   179,    24,
       2,    25,     0,     0,    26,     0,     0,   180,     0,     0,
     181,   182,   183,   184,   -40,   185,   -40,   215,     0,    33,
       0,   186,   -50,   -50,   -50,     0,   -50,   -50,   -15,   -15,
       0,   -40,     0,   -15,     0,   -50,     0,   -50,   -10,   -10,
      55,   311,     0,   -10,   177,     0,   -50,   -50,   -50,   -50,
       0,   -50,   -50,   -65,   -65,   -65,     0,   -65,   -65,     0,
     -50,     0,   -50,     0,     0,    55,   -65,     0,   -65,   177,
       0,   -50,   -65,     0,   -43,   228,   -43,   -65,   -43,   -43,
       0,   -47,   -47,   -47,     0,   -47,   -47,   -43,     0,   -43,
     -14,   -14,     0,   -43,   -47,   -14,   -47,     0,   -43,     0,
     -47,     0,   -48,   -48,   -48,   -47,   -48,   -48,     0,   -53,
     -53,   -53,     0,   -53,   -53,   -48,     0,   -48,     0,     0,
       0,   -48,   -53,     0,   -53,     0,   -48,     0,   -53,     0,
     -51,   -51,   -51,   -53,   -51,   -51,     0,   -49,   -49,   -49,
       0,   -49,   -49,   -51,     0,   -51,     0,     0,     0,   -51,
     -49,     0,   -49,     0,   -51,     0,   -49,     0,   -55,   -55,
     -55,   -49,   -55,   -55,     0,   -52,   -52,   -52,     0,   -52,
     -52,   -55,     0,   -55,     0,     0,     0,   -55,   -52,     0,
     -52,     0,   -55,     0,   -52,     0,   -44,   228,   -44,   -52,
     -44,   -44,     0,   -46,   -46,   -46,     0,   -46,   -46,   -44,
       0,   -44,     0,     0,     0,   -44,   -46,     0,   -46,     0,
     -44,     0,   -46,     0,   -54,   -54,   -54,   -46,   -54,   -54,
       0,   -45,   228,   -45,     0,   -45,   -45,   -54,     0,   -54,
       0,     0,     0,   -54,   -45,     0,   -45,     0,   -54,     0,
     -45,     0,   -65,   -65,   -65,   -45,   -65,   -65,   -43,    78,
     -43,     0,   -43,   -43,     0,   -65,     0,   -65,     0,     0,
       0,   -43,     0,   -43,     0,     0,   -65,     0,     0,   -47,
     -47,   -47,   -43,   -47,   -47,   -48,   -48,   -48,     0,   -48,
     -48,     0,   -47,     0,   -47,     0,     0,     0,   -48,     0,
     -48,     0,     0,   -47,     0,     0,   -53,   -53,   -53,   -48,
     -53,   -53,   -51,   -51,   -51,     0,   -51,   -51,     0,   -53,
       0,   -53,     0,     0,     0,   -51,     0,   -51,     0,     0,
     -53,     0,     0,   -49,   -49,   -49,   -51,   -49,   -49,   -55,
     -55,   -55,     0,   -55,   -55,     0,   -49,     0,   -49,     0,
       0,     0,   -55,     0,   -55,     0,     0,   -49,     0,     0,
     -52,   -52,   -52,   -55,   -52,   -52,   -44,    78,   -44,     0,
     -44,   -44,     0,   -52,     0,   -52,     0,     0,     0,   -44,
       0,   -44,     0,     0,   -52,     0,     0,   -46,   -46,   -46,
     -44,   -46,   -46,   -54,   -54,   -54,     0,   -54,   -54,     0,
     -46,     0,   -46,     0,     0,     0,   -54,     0,   -54,     0,
       0,   -46,     0,     0,   -45,    78,   -45,   -54,   -45,   -45,
     227,     0,   -42,     0,   -42,   -42,     0,   -45,     0,   -45,
       0,     0,    77,   -42,   -41,   -42,   -41,   -41,   -45,   -42,
       0,     0,     0,     0,   -42,   -41,    77,   -41,   -42,     0,
     -42,   -42,     0,   -48,   -48,   -48,   -41,   -48,   -48,   -42,
       0,   -42,   -53,   -53,   -53,     0,   -53,   -53,     0,     0,
     -42,   -51,   -51,   -51,     0,   -51,   -51,   -48,   -49,   -49,
     -49,     0,   -49,   -49,     0,     0,   -53,   -55,   -55,   -55,
       0,   -55,   -55,     0,     0,   -51,   -52,   -52,   -52,     0,
     -52,   -52,   -49,   -44,   208,   -44,     0,   -44,   -44,     0,
       0,   -55,   -46,   -46,   -46,     0,   -46,   -46,     0,     0,
     -52,   -54,   -54,   -54,     0,   -54,   -54,   -44,   -45,   208,
     -45,     0,   -45,   -45,     0,     0,   -46,   -40,     0,   -40,
     226,     0,     0,     0,   -39,   -54,   -39,   226,   -40,     0,
     -40,     0,   -45,     0,   -40,   -39,     0,   -39,     0,   -40,
     -38,   -39,   -38,   226,     0,   -39,   -39,   -39,    76,     0,
       0,   -38,   -38,   -38,   -38,    76,   -39,   -38,   -39,     0,
       0,     0,   -38,   -38,     0,   -38,     0,   -39,     0,    23,
      24,     0,    25,     0,   -38,    26,     0,    81,     0,   231,
      24,   -39,    25,   -39,   215,    26,    32,   232,     0,    82,
      33,    90,    24,     0,    25,     0,   161,    26,   -39,   233,
      33,   179,    24,   -38,    25,   -38,   215,    26,    91,   281,
      92,     0,    33,   290,    24,     0,    25,     0,   185,    26,
     -38,   282,    33,   -50,   -50,   -50,     0,   -50,   -50,     0,
     291,     0,   292,     0,    33,   -65,   -65,   -65,     0,   -65,
     -65,   209,   -50,   -43,   217,   -43,     0,   -43,   -43,     0,
       0,   -47,   -47,   -47,   -65,   -47,   -47,     0,     0,   -48,
     -48,   -48,   -43,   -48,   -48,     0,     0,   -53,   -53,   -53,
     -47,   -53,   -53,     0,     0,   -51,   -51,   -51,   -48,   -51,
     -51,     0,     0,   -49,   -49,   -49,   -53,   -49,   -49,     0,
       0,   -55,   -55,   -55,   -51,   -55,   -55,     0,     0,   -52,
     -52,   -52,   -49,   -52,   -52,     0,     0,   -44,   217,   -44,
     -55,   -44,   -44,     0,     0,   -46,   -46,   -46,   -52,   -46,
     -46,     0,     0,   -54,   -54,   -54,   -44,   -54,   -54,     0,
       0,   -45,   217,   -45,   -46,   -45,   -45,     0,     0,   216,
       0,   -42,   -54,   -42,   -42,     0,     0,     0,     0,     0,
     -45,     0,     0,     0,     0,     0,     0,     0,   -42
};

static const yytype_int16 yycheck[] =
{
       0,    38,   177,     0,     4,    17,    26,     4,     3,    29,
      56,     5,    12,    33,    60,     0,     1,    60,    18,    65,
       5,     1,    65,    25,     0,     3,     3,     4,    30,     6,
       3,    25,     9,     3,     4,    55,     6,    25,    24,     9,
      60,    61,     3,     4,    25,    65,    26,    24,    29,   107,
     108,   109,    33,    30,    24,     3,     4,    25,     6,    25,
      30,   236,   108,    24,    30,   108,    24,     1,   126,     3,
       4,     5,     6,   108,    55,     9,    24,   108,    12,    60,
      61,    15,    16,    17,    18,    24,    20,     8,   108,    10,
      24,    30,    26,   130,     1,    24,   108,    78,     5,   108,
      24,    19,   108,    21,    25,     6,     7,     8,   108,    10,
      11,   108,    30,     3,   134,   135,     3,     4,    19,     6,
      21,   108,     9,    24,    25,     3,    25,   147,   148,    30,
      29,   177,    27,     8,   177,    10,    11,    24,    25,     6,
     160,     8,   162,    10,    11,    30,     6,     7,     8,   186,
      10,    11,   133,   134,   135,    30,     3,   177,    19,    19,
      21,    21,   182,    30,    24,   146,   147,   148,    28,    30,
      30,     3,     4,    30,     6,    25,    30,     9,   159,   160,
     200,   162,     6,     7,     8,    27,    10,    11,    20,   209,
     236,   237,    24,   236,   237,    19,   242,    21,   218,   242,
      24,   182,     3,    19,    28,    21,    30,     6,     7,     8,
       3,    10,    11,    25,    30,    23,   236,   237,   238,   200,
      30,    25,   242,   204,   205,   206,   207,   208,   209,    25,
      25,    30,   213,   214,   215,   216,   217,   218,     8,     3,
      10,    11,    25,   224,   225,   226,   227,   228,    25,   307,
     308,   309,    30,     3,    29,    13,   237,   238,    33,    30,
      30,   307,   308,   309,   307,   308,   309,   325,    30,     8,
      30,    10,   307,   308,   309,   256,   307,   308,   309,   325,
      55,    19,   325,    21,   265,    60,    61,   307,   308,   309,
     325,    30,    30,   274,   325,   307,   308,   309,   307,   308,
     309,   307,   308,   309,     8,   325,    10,   307,   308,   309,
     307,   308,   309,   325,    30,    19,   325,    21,    30,   325,
     307,   308,   309,    30,    25,   325,    30,     3,   325,     1,
       3,     3,     4,     5,     6,     3,     4,     9,   325,     8,
      12,    10,    11,    15,    16,    17,    18,    25,    20,     3,
       4,    13,    24,    24,    26,    27,    24,    24,   133,   134,
     135,    30,     6,     7,     8,    29,    10,    11,    24,    33,
      24,   146,   147,   148,    24,    19,     3,    21,     3,     4,
      24,     6,     3,    13,   159,   160,    30,   162,    25,     3,
       4,    55,     6,    13,    13,     9,    60,    61,     1,    24,
       3,     4,     5,     6,    13,    13,     9,   182,    13,    12,
      24,    25,    15,    16,    17,    18,    13,    20,    13,    13,
      27,    24,    23,    26,    27,   200,    30,     3,     4,   204,
     205,   206,   207,   208,   209,    25,    25,    25,   213,   214,
     215,   216,   217,   218,     3,     4,    30,     6,    24,   224,
     225,   226,   227,   228,     6,     7,     8,    25,    10,    11,
      29,    20,   237,   238,    33,    24,    30,    30,    30,   133,
     134,   135,    24,     3,     4,    25,     6,    25,    30,     9,
      13,   256,   146,   147,   148,    30,    55,     3,     0,     1,
     265,    60,    61,     5,    24,   159,   160,    25,   162,   274,
       6,     7,     8,    30,    10,    11,     0,     1,    77,    27,
      30,     5,     1,     3,     3,     4,     5,     6,   182,    19,
       9,    21,     3,    12,    30,    25,    15,    16,    17,    18,
      30,    20,   101,    13,    25,    24,   200,    26,    27,    25,
     204,   205,   206,   207,   208,   209,    25,    25,    25,   213,
     214,   215,   216,   217,   218,    29,    25,    23,    30,    33,
     224,   225,   226,   227,   228,   134,   135,    13,    13,     3,
       4,    25,     6,   237,   238,     9,    25,    13,   147,   148,
       6,    55,     8,    25,    10,    11,    60,    61,     3,    13,
      24,   160,   256,   162,    25,    25,    29,    13,    30,    25,
      33,   265,     6,     7,     8,    13,    10,    11,    30,    30,
     274,    13,     8,   182,    10,    19,    13,    21,    30,    30,
      24,    25,    55,    19,    28,    21,    30,    60,    61,    25,
       8,   200,    10,    11,    30,   204,   205,   206,   207,    30,
     209,    19,    13,    21,   213,   214,   215,   216,    13,   218,
      29,    13,    30,    13,    33,   224,   225,   226,   227,    13,
     134,   135,    13,    13,     3,     4,    30,     6,   237,   238,
       9,    13,    13,   147,   148,     6,    55,     8,    13,    10,
      11,    60,    61,    13,     4,    24,   160,   256,   162,     3,
       4,    29,     6,     0,     1,    33,   265,    76,     5,    30,
      18,   134,   135,     3,     4,   274,     6,    -1,   182,     9,
      24,     0,     1,    -1,   147,   148,     5,    55,    -1,    -1,
      -1,    -1,    60,    61,    24,    25,   200,   160,    -1,   162,
     204,   205,   206,   207,    -1,   209,    74,    75,    -1,   213,
     214,   215,   216,    -1,   218,     3,     4,    -1,     6,   182,
     224,   225,   226,   227,    -1,   134,   135,     3,     4,    19,
       6,    21,    20,   237,   238,    25,    24,   200,   147,   148,
      30,    -1,    -1,    -1,    20,     6,   209,     8,    24,    10,
      11,   160,   256,   162,    -1,   218,     3,     4,    19,     6,
      21,   265,     9,    -1,    25,    -1,   134,   135,    -1,    30,
     274,     0,     1,   182,   237,   238,     5,    24,    25,   147,
     148,     0,     1,     6,     7,     8,     5,    10,    11,    -1,
      -1,   200,   160,    -1,   162,   204,   205,   206,     3,     4,
     209,     6,    -1,    -1,   213,   214,   215,    30,    -1,   218,
       3,     4,    -1,     6,   182,   224,   225,   226,    -1,    24,
       6,     7,     8,    -1,    10,    11,    -1,    20,   237,   238,
      -1,    24,   200,    19,    -1,    21,   204,   205,    24,    25,
      -1,   209,    28,    -1,    30,   213,   214,    -1,    -1,    -1,
     218,    -1,     3,     4,    -1,     6,   224,   225,     9,    -1,
       1,    -1,     3,     4,     5,     6,    -1,    -1,     9,   237,
     238,    12,    -1,    24,    15,    16,    17,    18,    -1,    20,
      -1,    -1,    19,    24,    21,    26,    27,     1,    25,     3,
       4,     5,     6,    30,    -1,     9,    -1,    -1,    12,    -1,
      -1,    15,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    -1,    26,    27,     1,    -1,     3,     4,     5,     6,
      -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    15,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    -1,    26,
      27,     1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      -1,    -1,    12,    -1,    -1,    15,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    24,    -1,    26,    27,     1,    -1,
       3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,
      -1,    -1,    15,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    24,    -1,    26,    27,     1,    -1,     3,     4,     5,
       6,    -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    15,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,    -1,
      26,    27,     1,    -1,     3,     4,     5,     6,    -1,    -1,
       9,    -1,    -1,    12,    -1,    -1,    15,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    24,    -1,    26,    27,     1,
      -1,     3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,
      12,    -1,    -1,    15,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    -1,    26,    27,     1,    -1,     3,     4,
       5,     6,    -1,    -1,     9,    -1,    -1,    12,    -1,    -1,
      15,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,
      -1,    26,    27,     1,    -1,     3,     4,     5,     6,    -1,
      -1,     9,    -1,    -1,    12,    -1,    -1,    15,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    24,    -1,    26,    27,
       1,    -1,     3,     4,     5,     6,    -1,    -1,     9,    -1,
      -1,    12,    -1,    -1,    15,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    -1,    26,    27,     1,    -1,     3,
       4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,    -1,
      -1,    15,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    -1,    26,    27,     1,    -1,     3,     4,     5,     6,
      -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    15,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    -1,    26,
      27,     1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      -1,    -1,    12,    -1,    -1,    15,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    24,    -1,    26,    27,     1,    -1,
       3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,
      -1,    -1,    15,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    24,    -1,    26,    27,     1,    -1,     3,     4,     5,
       6,    -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    15,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,    -1,
      26,    27,     1,    -1,     3,     4,     5,     6,    -1,    -1,
       9,    -1,    -1,    12,    -1,    -1,    15,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    24,    -1,    26,    27,     1,
      -1,     3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,
      12,    -1,    -1,    15,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    -1,    26,    27,     1,    -1,     3,     4,
       5,     6,    -1,    -1,     9,    -1,    -1,    12,    -1,    -1,
      15,    16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,
      -1,    26,    27,     1,    -1,     3,     4,     5,     6,    -1,
      -1,     9,    -1,    -1,    12,    -1,    -1,    15,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    24,    -1,    26,    27,
       1,    -1,     3,     4,     5,     6,    -1,    -1,     9,    -1,
      -1,    12,    -1,    -1,    15,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    24,    -1,    26,    27,     1,    -1,     3,
       4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,    -1,
      -1,    15,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      24,    -1,    26,    27,     1,    -1,     3,     4,     5,     6,
      -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    15,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    24,    -1,    26,
      27,     1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      -1,    -1,    12,    -1,    -1,    15,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    24,    -1,    26,    27,     1,    -1,
       3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,
      -1,    -1,    15,    16,    17,    18,    -1,    20,    -1,    -1,
      -1,    24,    -1,    26,    27,     1,    -1,     3,     4,     5,
       6,    -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    15,
      16,    17,    18,    -1,    20,    -1,    -1,    -1,    24,    -1,
      26,    27,     1,    -1,     3,     4,     5,     6,    -1,    -1,
       9,    -1,    -1,    12,    -1,    -1,    15,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    24,    -1,    26,    27,     1,
      -1,     3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,
      12,    -1,    -1,    15,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    -1,    26,    27,     1,    -1,     3,     4,
       5,     6,    -1,    -1,     9,    -1,    -1,    12,    -1,    -1,
      15,    16,    17,    18,     8,    20,    10,    11,    -1,    24,
      -1,    26,     6,     7,     8,    -1,    10,    11,     0,     1,
      -1,    25,    -1,     5,    -1,    19,    -1,    21,     0,     1,
      24,    25,    -1,     5,    28,    -1,    30,     6,     7,     8,
      -1,    10,    11,     6,     7,     8,    -1,    10,    11,    -1,
      19,    -1,    21,    -1,    -1,    24,    19,    -1,    21,    28,
      -1,    30,    25,    -1,     6,     7,     8,    30,    10,    11,
      -1,     6,     7,     8,    -1,    10,    11,    19,    -1,    21,
       0,     1,    -1,    25,    19,     5,    21,    -1,    30,    -1,
      25,    -1,     6,     7,     8,    30,    10,    11,    -1,     6,
       7,     8,    -1,    10,    11,    19,    -1,    21,    -1,    -1,
      -1,    25,    19,    -1,    21,    -1,    30,    -1,    25,    -1,
       6,     7,     8,    30,    10,    11,    -1,     6,     7,     8,
      -1,    10,    11,    19,    -1,    21,    -1,    -1,    -1,    25,
      19,    -1,    21,    -1,    30,    -1,    25,    -1,     6,     7,
       8,    30,    10,    11,    -1,     6,     7,     8,    -1,    10,
      11,    19,    -1,    21,    -1,    -1,    -1,    25,    19,    -1,
      21,    -1,    30,    -1,    25,    -1,     6,     7,     8,    30,
      10,    11,    -1,     6,     7,     8,    -1,    10,    11,    19,
      -1,    21,    -1,    -1,    -1,    25,    19,    -1,    21,    -1,
      30,    -1,    25,    -1,     6,     7,     8,    30,    10,    11,
      -1,     6,     7,     8,    -1,    10,    11,    19,    -1,    21,
      -1,    -1,    -1,    25,    19,    -1,    21,    -1,    30,    -1,
      25,    -1,     6,     7,     8,    30,    10,    11,     6,     7,
       8,    -1,    10,    11,    -1,    19,    -1,    21,    -1,    -1,
      -1,    19,    -1,    21,    -1,    -1,    30,    -1,    -1,     6,
       7,     8,    30,    10,    11,     6,     7,     8,    -1,    10,
      11,    -1,    19,    -1,    21,    -1,    -1,    -1,    19,    -1,
      21,    -1,    -1,    30,    -1,    -1,     6,     7,     8,    30,
      10,    11,     6,     7,     8,    -1,    10,    11,    -1,    19,
      -1,    21,    -1,    -1,    -1,    19,    -1,    21,    -1,    -1,
      30,    -1,    -1,     6,     7,     8,    30,    10,    11,     6,
       7,     8,    -1,    10,    11,    -1,    19,    -1,    21,    -1,
      -1,    -1,    19,    -1,    21,    -1,    -1,    30,    -1,    -1,
       6,     7,     8,    30,    10,    11,     6,     7,     8,    -1,
      10,    11,    -1,    19,    -1,    21,    -1,    -1,    -1,    19,
      -1,    21,    -1,    -1,    30,    -1,    -1,     6,     7,     8,
      30,    10,    11,     6,     7,     8,    -1,    10,    11,    -1,
      19,    -1,    21,    -1,    -1,    -1,    19,    -1,    21,    -1,
      -1,    30,    -1,    -1,     6,     7,     8,    30,    10,    11,
       6,    -1,     8,    -1,    10,    11,    -1,    19,    -1,    21,
      -1,    -1,     6,    19,     8,    21,    10,    11,    30,    25,
      -1,    -1,    -1,    -1,    30,    19,     6,    21,     8,    -1,
      10,    11,    -1,     6,     7,     8,    30,    10,    11,    19,
      -1,    21,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      30,     6,     7,     8,    -1,    10,    11,    30,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    30,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    30,     6,     7,     8,    -1,
      10,    11,    30,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    30,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      30,     6,     7,     8,    -1,    10,    11,    30,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    30,     8,    -1,    10,
      11,    -1,    -1,    -1,     8,    30,    10,    11,    19,    -1,
      21,    -1,    30,    -1,    25,    19,    -1,    21,    -1,    30,
       8,    25,    10,    11,    -1,     8,    30,    10,    11,    -1,
      -1,    19,     8,    21,    10,    11,    19,    25,    21,    -1,
      -1,    -1,    30,    19,    -1,    21,    -1,    30,    -1,     3,
       4,    -1,     6,    -1,    30,     9,    -1,    11,    -1,     3,
       4,     8,     6,    10,    11,     9,    20,    11,    -1,    23,
      24,     3,     4,    -1,     6,    -1,    20,     9,    25,    23,
      24,     3,     4,     8,     6,    10,    11,     9,    20,    11,
      22,    -1,    24,     3,     4,    -1,     6,    -1,    20,     9,
      25,    23,    24,     6,     7,     8,    -1,    10,    11,    -1,
      20,    -1,    22,    -1,    24,     6,     7,     8,    -1,    10,
      11,    24,    25,     6,     7,     8,    -1,    10,    11,    -1,
      -1,     6,     7,     8,    25,    10,    11,    -1,    -1,     6,
       7,     8,    25,    10,    11,    -1,    -1,     6,     7,     8,
      25,    10,    11,    -1,    -1,     6,     7,     8,    25,    10,
      11,    -1,    -1,     6,     7,     8,    25,    10,    11,    -1,
      -1,     6,     7,     8,    25,    10,    11,    -1,    -1,     6,
       7,     8,    25,    10,    11,    -1,    -1,     6,     7,     8,
      25,    10,    11,    -1,    -1,     6,     7,     8,    25,    10,
      11,    -1,    -1,     6,     7,     8,    25,    10,    11,    -1,
      -1,     6,     7,     8,    25,    10,    11,    -1,    -1,     6,
      -1,     8,    25,    10,    11,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     5,    33,    34,    35,    36,    37,    38,     0,
      36,     3,    24,    30,    35,    39,     3,    25,    29,     1,
      26,    40,    39,     3,     4,     6,     9,    12,    15,    16,
      17,    18,    20,    24,    35,    37,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    59,    24,    28,     3,    53,    46,
      24,    24,    30,    46,    24,    24,     3,    46,     3,    27,
      41,    19,    21,    30,     8,    10,    11,     6,     7,    25,
      46,    11,    23,    43,    58,    43,    46,    46,    30,     3,
       3,    20,    22,    43,    30,    25,     3,     3,    49,    49,
      50,    20,    51,    53,    25,    23,    30,    25,    25,    25,
      25,    25,     3,    25,    25,    30,    30,    51,    42,    42,
      42,    30,    30,    25,    30,    30,    13,    30,    42,     1,
      26,     3,     4,     6,     9,    24,    48,    49,    50,    51,
      52,    53,    54,    59,     3,     4,     6,     9,    24,    48,
      49,    50,    51,    52,    53,    54,    59,     3,     4,     6,
       9,    20,    24,    47,    48,    49,    50,    51,    52,    53,
      54,    59,    46,    30,    19,    21,    30,    28,     1,     3,
      12,    15,    16,    17,    18,    20,    26,    35,    37,    40,
      43,    44,    45,    46,    47,    55,    56,    57,    30,    41,
      24,    53,    46,    46,     8,    10,    11,     6,     7,    24,
      53,    46,    46,     8,    10,    11,     6,     7,    24,     3,
      53,    46,     3,    46,     8,    10,    11,     6,     7,     3,
       3,     3,    11,    23,    43,    58,    28,    24,    24,    30,
      46,    24,    24,     3,    41,     3,    19,    21,    30,    27,
      25,    46,    25,    49,    49,    50,    20,    51,    53,    25,
      46,    25,    49,    49,    50,    20,    51,    53,    25,    46,
      25,    49,    49,    50,    20,    51,    53,    30,    30,    23,
      30,    11,    23,    43,    58,    43,    46,    46,    30,     3,
       3,    20,    22,    43,    30,    27,    30,     3,     3,    25,
      51,    25,    51,    25,    51,    23,    30,    25,    25,    25,
      25,    25,     3,    25,    25,    30,    30,    42,    42,    42,
      30,    30,    25,    30,    30,    13,    30,    42
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    32,    33,    34,    34,    35,    36,    36,    36,    37,
      38,    39,    39,    39,    40,    40,    41,    41,    42,    42,
      42,    42,    42,    42,    42,    42,    43,    43,    43,    43,
      44,    45,    45,    46,    46,    47,    47,    47,    48,    48,
      48,    49,    49,    50,    50,    50,    51,    51,    52,    52,
      53,    53,    53,    53,    54,    54,    55,    56,    56,    56,
      56,    57,    57,    58,    58,    59
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     3,
       6,     4,     2,     0,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     3,     3,
       5,     5,     7,     1,     2,     3,     4,     4,     3,     3,
       1,     1,     3,     1,     3,     4,     3,     1,     1,     2,
       1,     1,     3,     1,     4,     3,     5,     5,     5,     5,
       6,     3,     2,     2,     2,     1
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
#line 106 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("programa");
        (yyval.ast)->pai = (yyvsp[0].ast);
        raiz = (yyval.ast);
    }
#line 1875 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 114 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("lista De Declaracoes");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        (yyvsp[-1].ast)->filho = (yyvsp[0].ast);
    }
#line 1885 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 119 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1893 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 125 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("INT");
        strcpy((yyval.ast)->tipo, "INT");
        tipo += 0;
    }
#line 1903 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 148 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1911 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 151 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1919 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 154 "sintatico.y" /* yacc.c:1646  */
    {
        erros++;
    }
#line 1927 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 160 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("Declaracao de Variavel");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        id = insereSimbolo(id, (yyvsp[-1].token).escopo, (yyvsp[-1].token).id, "Variavel", tipos[tipo], (yyvsp[-1].token).linha, (yyvsp[-1].token).coluna, 0);
        strcpy((yyvsp[-2].ast)->simbolo, (yyvsp[-1].token).id);
        sprintf((yyval.ast)->tableTac, "\t%s %s%d", tiposTac[tipo], (yyvsp[-1].token).id, (yyvsp[-1].token).escopo);
        tipo = 0;
    }
#line 1940 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 171 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("Declaracao de funcao");
        (yyval.ast)->pai = (yyvsp[-5].ast);
        (yyvsp[-5].ast)->filho = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        id = insereSimbolo(id, (yyvsp[-4].token).escopo, (yyvsp[-4].token).id, "Funcao", tipos[tipo], (yyvsp[-4].token).linha, (yyvsp[-4].token).coluna, 0);
        strcpy((yyvsp[-5].ast)->simbolo, (yyvsp[-4].token).id);
        tipo = 0;
    }
#line 1954 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 183 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("Lista de Parametros");
        (yyval.ast)->pai = (yyvsp[-3].ast);
        (yyvsp[-3].ast)->filho = (yyvsp[0].ast);
        id = insereSimbolo(id, (yyvsp[-2].token).escopo, (yyvsp[-2].token).id, "Variavel", tipos[tipo], (yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, 1);
        sprintf((yyval.ast)->tableTac,"\t%s %s%d", tiposTac[tipo], (yyvsp[-2].token).id, (yyvsp[-2].token).escopo+1);
        tipo = 0;
        strcpy((yyvsp[-3].ast)->simbolo, (yyvsp[-2].token).id);
    }
#line 1968 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 192 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("Lista de Parametros");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        escopoL[++escopoAtual] = escopo++;
        id = insereSimbolo(id, escopoL[escopoAtual], (yyvsp[0].token).id, "Variavel", tipos[tipo], (yyvsp[0].token).linha, (yyvsp[0].token).coluna, 1);
        strcpy((yyvsp[-1].ast)->simbolo, (yyvsp[0].token).id);
        sprintf((yyval.ast)->tableTac,"\t%s %s%d", tiposTac[tipo], (yyvsp[0].token).id, escopoL[escopoAtual]+1);
        tipo = 0;
        escopoAtual--;
        escopo--;
    }
#line 1984 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 203 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("Lista de Parametros vazia");
    }
#line 1992 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 209 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("dentro das chaves");
        (yyval.ast)->pai = (yyvsp[-1].ast);
    }
#line 2001 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 213 "sintatico.y" /* yacc.c:1646  */
    {
        erros++;
    }
#line 2009 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 219 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("declaracoes");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        (yyval.ast)->filho = (yyvsp[0].ast);
    }
#line 2019 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 224 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("declaracoes");
        (yyval.ast)->pai = (yyvsp[0].ast);
    }
#line 2028 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 231 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2036 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 234 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2044 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 237 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2052 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 240 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2060 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 243 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2068 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 246 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2076 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 249 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2084 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 252 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2092 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 258 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("expressao");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-1].ast)->tipo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[-1].ast));
        strcpy((yyval.ast)->simbolo, (yyvsp[-1].ast)->simbolo);
    }
#line 2104 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 265 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("expressao");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
    }
#line 2114 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 270 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("ATRIBUICAO");
        (yyval.ast)->pai = (yyvsp[0].ast);
        TabelaSimbolo* c = procuraVariavel(id, (yyvsp[-2].token).id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Variavel nao declarada!!!\n", (yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).id);
        } else{
            strcpy((yyval.ast)->tipo, c->tipo);
            castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
            strcpy((yyval.ast)->simbolo, (yyvsp[-2].token).id);
        }
    }
#line 2131 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 282 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("NULO");
        (yyval.ast)->pai = (yyvsp[0].ast);
        TabelaSimbolo* c = procuraVariavel(id, (yyvsp[-2].token).id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Variavel nao declarada!!!\n", (yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).id);
        } else{
            strcpy((yyval.ast)->tipo, c->tipo);
            castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
        }
    }
#line 2147 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 297 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("while");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
    }
#line 2157 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 324 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("IF");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);

        // sprintf($$->codeTac, "saidaIf%d:\n", qtdIf);
        // sprintf($$->codeTac, "\tbrz ");
        // qtdIf++;
    }
#line 2171 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 333 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("IF-ELSE");
        (yyval.ast)->pai = (yyvsp[-4].ast);
        (yyvsp[-4].ast)->filho = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
    }
#line 2182 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 342 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("exp");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2193 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 348 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("exp");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2204 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 357 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("expressaoList");
        strcpy((yyval.ast)->tipo, "OPERACAOLISTA");
    }
#line 2213 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 361 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("expressaoList");
        (yyval.ast)->pai = (yyvsp[-3].ast);
        strcpy((yyval.ast)->tipo, "CONSTRUTORLISTA");
    }
#line 2223 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 366 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("expressaoList");
        (yyval.ast)->pai = (yyvsp[-3].ast);
        strcpy((yyval.ast)->tipo, "FUNCAOLISTA");
    }
#line 2233 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 374 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("expressaoLogica");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        //strcpy($$->tipo, "INT");
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));        
    }
#line 2245 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 381 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("expressaoLogica");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        //strcpy($$->tipo, "INT");
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
    }
#line 2257 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 388 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("expressaoLogica");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2268 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 397 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("expressaoRelacional");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2279 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 403 "sintatico.y" /* yacc.c:1646  */
    {
        printf("Teste ----");
        (yyval.ast) = criaNo("expressaoRelacional");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-2].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-2].ast)->simbolo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
    }
#line 2293 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 415 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("Operando SomaSub");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2304 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 421 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("Operando SomaSub");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-2].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-2].ast)->simbolo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
        sprintf((yyval.ast)->codeTac, "\tadd %s, %s", (yyvsp[-2].ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2318 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 430 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("Operando SomaSub");
        (yyval.ast)->pai = (yyvsp[-3].ast);
        (yyvsp[-3].ast)->filho = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-3].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-3].ast)->simbolo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
    }
#line 2331 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 442 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("Operando MultDiv");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-2].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-2].ast)->simbolo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
    }
#line 2344 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 450 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2352 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 456 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("expressao_unaria");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2362 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 461 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("expressao_unaria");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2372 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 468 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("ID");
        TabelaSimbolo* c = procuraVariavel(id, (yyvsp[0].token).id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Variavel nao declarada!!!\n", (yyvsp[0].token).linha, (yyvsp[0].token).coluna, (yyvsp[0].token).id);
        }else{
            strcpy((yyval.ast)->tipo, c->tipo);
            strcpy((yyval.ast)->simbolo, (yyvsp[0].token).id);
        }
    }
#line 2387 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 478 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("argumento");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2398 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 484 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("argumento");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-1].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-1].ast)->simbolo);
    }
#line 2409 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 490 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("argumento");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
    }
#line 2419 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 498 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("chamada de funcao");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        TabelaSimbolo* c = procuraVariavel(id, (yyvsp[-3].token).id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Funcao nao declarada!!!\n", (yyvsp[-3].token).linha, (yyvsp[-3].token).coluna, (yyvsp[-3].token).id);
        }else{
            strcpy((yyval.ast)->tipo, c->tipo);
        }
    }
#line 2434 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 508 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("chamada de funcao");
        TabelaSimbolo* c = procuraVariavel(id, (yyvsp[-2].token).id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Funcao nao declarada!!!\n", (yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).id);
        }else{
            strcpy((yyval.ast)->tipo, c->tipo);
        }
    }
#line 2448 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 520 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("entrada");
        TabelaSimbolo* c = procuraVariavel(id, (yyvsp[-2].token).id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Variavel nao declarada!!!\n", (yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).id);
        }else{
            strcpy((yyval.ast)->tipo, c->tipo);
            // if(strcmp($$->tipo, "FLOAT") == 0){ // TODO REMOVER
            //     sprintf($$->codeTac,"\tscanf %s%d",$3.id, $3.escopo);
            // }
            if(strcmp((yyval.ast)->tipo, "INT") == 0){
                sprintf((yyval.ast)->codeTac,"\tscani %s%d",(yyvsp[-2].token).id, (yyvsp[-2].token).escopo);
            }
        }
    }
#line 2468 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 538 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("saida");
        strcpy((yyval.ast)->simbolo, (yyvsp[-2].token).id);
        sprintf((yyval.ast)->tableTac, "\tchar string%d[] = %s", qtdString, (yyvsp[-2].token).id);
        if(strcmp((yyvsp[-4].token).id, "writeln") == 0){
            int tamanho = (int)strlen((yyvsp[-2].token).id) - 2;
            sprintf((yyval.ast)->codeTac, "\tstring%d", qtdString);
            sprintf((yyval.ast)->codeTac, "\tmov $400, &string%d\n\tparam %d\n\tparam $400\n\tcall writeln_fn, 2", qtdString, tamanho);
        }
        if(strcmp((yyvsp[-4].token).id, "write") == 0){
            int tamanho = (int)strlen((yyvsp[-2].token).id) - 2;
            sprintf((yyval.ast)->codeTac, "\tstring%d", qtdString);
            sprintf((yyval.ast)->codeTac, "\tmov $400, &string%d\n\tparam %d\n\tparam $400\n\tcall write_fn, 2", qtdString, tamanho);
        }
        qtdString++;

    }
#line 2490 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 555 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("saida");
        TabelaSimbolo* c = procuraVariavel(id, (yyvsp[-2].token).id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Variavel nao declarada!!!\n", (yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).id);
        }
    }
#line 2502 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 562 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("saida");
        (yyval.ast)->pai = (yyvsp[-2].ast);
    }
#line 2511 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 566 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("saida");
    }
#line 2519 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 572 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("retorno");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        char tipoRetornoC[20] = "";
        strcpy(tipoRetornoC, (yyvsp[-1].ast)->tipo);
    }
#line 2530 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 578 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("retorno");
    }
#line 2538 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 584 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("NULO");
        strcpy((yyval.ast)->tipo, "NULO");
        strcpy((yyval.ast)->simbolo, (yyvsp[-1].token).id);
    }
#line 2548 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 589 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("NULO");
        strcpy((yyval.ast)->tipo, "NULO");
        strcpy((yyval.ast)->simbolo, (yyvsp[0].token).id);
    }
#line 2558 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 597 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("Numero");
        strcpy((yyval.ast)->tipo, "INT");
        strcpy((yyval.ast)->simbolo, (yyvsp[0].token).id);
    }
#line 2568 "sintatico.tab.c" /* yacc.c:1646  */
    break;


#line 2572 "sintatico.tab.c" /* yacc.c:1646  */
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
#line 610 "sintatico.y" /* yacc.c:1906  */


void yyerror(const char* s){
    fprintf(stderr, "Linha: %d - Coluna: %d - Token: %s - Erro: %s\n", yylval.token.linha, yylval.token.coluna, yylval.token.id, s);
}

const char* saida = 
    "write_fn:\n"
    "\tmov $500, 0\n"
    "proximo:\n"
    "\tmov $499, #1\n"
    "\tmov $499, $499[$500]\n"
    "\tadd $500, $500, 1\n"
    "\tprint $499\n"
    "\tsub $499, $500, #0\n"
    "\tbrnz proximo, $499\n"
    "\treturn\n"
    "writeln_fn:\n"
    "\tcall write_fn, 2\n"
    "\tprintln\n"
    "\treturn\n";

void tabelaTac(AST* ast, FILE *fp){
    if (ast == NULL){
        return;
    }
    if(strcmp(ast->tableTac, "")){
        fprintf (fp, "%s\n", ast->tableTac);
    }
    tabelaTac(ast->pai, fp);
    tabelaTac(ast->filho, fp);
}

void codigoTac(AST* ast, FILE *fp){
    if (ast == NULL){
        return;
    }
    if(strcmp(ast->nome_regra, "Declaracao de funcao") == 0){
        if(funcao == 1) fprintf (fp, "\treturn 0\n");
        funcao = 1;
        fprintf (fp, "\n%s:\n", ast->pai->simbolo);
    }
    codigoTac(ast->pai, fp);
    codigoTac(ast->filho, fp);
    if(strcmp(ast->codeTac, "")){
        fprintf (fp, "%s\n", ast->codeTac);
    }
}

void geraArquivoTac(AST* raiz, char* nomeArquivo){
    char arquivo[200] = "";
    sprintf(arquivo, "%s.tac", nomeArquivo);
    FILE *fp = fopen(arquivo, "w+");
    if(fp){
        fprintf (fp, ".table\n");
        tabelaTac(raiz, fp);
        fprintf (fp, "\n.code\n");
        fprintf(fp, "\n%s\n", saida);
        codigoTac(raiz, fp);
    }
    else{
        printf("Error, could not write TAC file.\n");
    }
    fclose(fp);
}


int main(int argc, char ** argv) {
    int posicao = 6;
    int final = (int)strlen(argv[1]) - posicao;
    char parte[10000];
    memcpy(parte, &argv[1][posicao], final-2);
    yyin = fopen(argv[1], "r");
    
    yyparse();

    if(procuraMain(id) == 0){
        printf("Erro Semantico - Funcao Main nao encontrada!!!\n");
    }

    if(erros == 0){
        mostraAST(raiz, 0);
    }
    mostraTabela(id);
    if(erros == 0){
        geraArquivoTac(raiz, parte);
    }
    limpaTabela(id);
    liberaAST();
    fclose(yyin);
    yylex_destroy();
    printf("\n\n");
    return 0;
}
