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
    NIL = 272,
    ABRE_PARENTESES = 273,
    FECHA_PARENTESES = 274,
    ABRE_CHAVES = 275,
    FECHA_CHAVES = 276,
    ATRIBUICAO = 277,
    VIRGULA = 278,
    PONTOVIRGULA = 279
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

#line 166 "sintatico.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTATICO_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 183 "sintatico.tab.c" /* yacc.c:358  */

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
#define YYLAST   1383

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  25
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  53
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  215

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   279

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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   102,   102,   110,   115,   121,   129,   132,   135,   141,
     152,   164,   173,   184,   190,   194,   200,   205,   212,   215,
     218,   221,   224,   227,   233,   245,   257,   272,   280,   289,
     298,   304,   330,   337,   344,   353,   359,   371,   377,   398,
     406,   412,   417,   424,   434,   440,   446,   454,   464,   477,
     483,   489,   494,   502
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "INT", "TIPO_INT", "OP_B_SOMA_SUB",
  "OP_B_MULT_DIV", "OP_LOGICA_AND", "OP_LOGICA_NEG", "OP_LOGICA_OR",
  "OP_B_RELACIONAIS", "IF", "ELSE", "THEN", "WHILE", "RETORNO", "NIL",
  "ABRE_PARENTESES", "FECHA_PARENTESES", "ABRE_CHAVES", "FECHA_CHAVES",
  "ATRIBUICAO", "VIRGULA", "PONTOVIRGULA", "$accept", "programa",
  "listaDeDeclaracoes", "TIPO", "declaracao", "declaracaoVariavel",
  "declaracaoFuncao", "listaDeParametros", "corpo", "dentroCorpo",
  "declaracoes", "expressao", "while", "condicional", "exp",
  "expressao_logica", "expressao_relacional", "opSomaSub", "opMultDiv",
  "expUnaria", "argumento", "chamadaDeFuncao", "retorno", "nil", "numero", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279
};
# endif

#define YYPACT_NINF -45

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-45)))

#define YYTABLE_NINF -54

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,   272,    16,    39,   304,    37,   317,   373,   385,   -45,
     391,    -8,    33,   406,    60,    62,   215,    13,    33,   486,
     457,  1192,    67,   940,    86,    24,   447,    84,    89,    17,
    1229,    92,   505,   526,    94,   547,   568,   589,   610,    97,
      77,   256,    26,  1079,  1088,  1094,  1100,   631,  1109,    52,
    1199,   474,  1115,   103,  1236,  1229,   652,   116,    99,   118,
    1206,   129,   673,   199,   199,   199,   199,    24,  1121,   132,
     135,   138,   694,   715,   134,    -2,   140,   736,  1130,   302,
     369,   268,  1136,  1142,  1151,   757,   778,   457,   925,   457,
     799,   157,   820,   457,   841,   862,   457,  1256,  1262,    64,
    1229,  1229,    65,   122,  1358,  1272,  1278,  1288,  1294,  1304,
     394,   251,   131,  1240,  1229,    98,   421,   409,   494,   974,
     989,   995,  1010,   883,   160,   167,   949,   163,   176,    56,
     457,   198,   193,   202,   212,   213,   224,   203,   226,   207,
    1168,  1310,   227,   228,  1247,  1247,  1247,  1247,    64,  1176,
    1209,   313,  1016,    27,   246,  1253,  1253,  1253,  1253,   131,
    1219,  1236,  1229,   232,   247,   261,   259,   271,   904,  1320,
     274,  1326,   958,  1346,  1364,  1336,  1342,  1031,   282,   968,
     289,   267,   297,   301,   310,  1037,  1180,  1190,  1157,  1052,
    1058,   316,   318,   331,   332,   328,    59,   329,   340,   344,
     349,  1352,  1073,   346,   347,   355,   374,   925,   925,   925,
     386,   397,   401,   925,   410
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
       0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -45,   -45,   -45,     0,   363,     3,   -45,   404,   -16,   -27,
     -44,   -41,   -31,    -9,   -24,   354,   334,   281,   194,   214,
      -1,    74,    43,   -36,   141
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,    31,     6,    32,     8,    15,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    73,    48
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,    21,    53,     7,     5,    57,    58,     7,    61,    72,
      12,     1,    14,    74,    19,     2,    13,    88,    14,    -5,
      51,    24,   124,    25,    52,    69,    26,    51,    24,   107,
      75,    76,    66,    20,   -35,    30,   -35,   -35,     2,     9,
      11,    56,    30,    90,    91,    92,   -31,   134,   107,    94,
     -35,   -31,   -13,   120,   107,    97,    98,   135,    99,    51,
      24,   100,    25,    16,   137,    26,    83,    97,    98,   139,
     101,    68,   133,   144,    30,   145,   142,   143,   208,   136,
     163,    17,   101,   124,   -30,    63,   -11,    64,   131,   153,
     154,   132,   -53,   -53,   -53,    59,   -53,   -53,   141,   107,
     107,   -30,    54,   165,   108,   164,   155,    55,   156,   182,
     -53,   152,   120,   107,   184,    60,   170,   -30,    78,   193,
     195,    62,   -30,   108,   194,   178,   183,   -31,   121,   108,
     -34,   138,   -34,   146,   151,   111,   137,   196,   197,   107,
      77,   -34,   123,   107,   107,   107,   107,   176,   107,   114,
     -16,    84,    85,    87,   120,   120,   120,   120,   190,    89,
     120,   107,    86,   210,   211,   212,   134,   134,   134,   214,
      93,   109,   134,   108,   108,   108,   135,   135,   135,   -24,
     -15,   161,   135,   137,   137,   137,   121,   121,   108,   137,
     109,   133,   133,   133,   162,   122,   109,   133,   136,   136,
     136,   166,    51,    24,   136,    25,   -19,   131,   131,   131,
     132,   132,   132,   131,   108,   -18,   132,    30,   108,   108,
     108,   108,   108,   108,   105,   -20,   -22,   167,   168,   121,
     121,   121,   121,   121,   -12,   121,   108,   -23,    18,   -21,
     109,   109,   109,   105,   106,   -50,   -31,   171,   118,   105,
     138,   138,   138,   122,   122,   109,   138,   -53,   -53,   -53,
      82,   -53,   -53,   106,   -34,   185,   -34,    65,   119,   106,
     -53,   198,    -8,    -8,    66,   -53,   -36,    -8,   -36,   -36,
     -34,   109,   199,   200,   -24,   109,   109,   109,   109,   109,
     109,   204,   -36,   201,   105,   105,   122,   122,   122,   122,
     122,   202,   122,   109,    -2,     1,   203,   118,   105,     2,
     -33,   104,   -33,    65,   106,   106,   -25,    -4,    -4,   -43,
     -43,   -43,    -4,   -43,   -43,   124,   -33,   119,   106,   -26,
     104,   149,   -43,   205,   105,   117,   104,   -43,   105,   105,
     105,   175,   206,   105,   -25,   -26,    81,   207,   209,   118,
     118,   118,   189,   -49,   106,   118,   105,   -14,   106,   106,
     106,   106,    -9,   106,   103,   -52,   -51,    10,   -52,   119,
     119,   119,   119,    -6,    -6,   119,   106,   -32,    -6,   -32,
      65,   104,   104,   103,   102,    -7,    -7,   -51,   116,   103,
      -7,    -3,    -3,   -32,   117,   104,    -3,    79,    80,   -28,
     -43,   -43,   -43,   102,   -43,   -43,    -9,    -9,   115,   102,
     213,    -9,   149,   -43,   -27,   158,   150,   -35,   -43,   -35,
     -35,   104,    22,   -29,     0,   104,   104,   174,   -35,   -34,
     104,   -34,   157,   -35,   103,   103,   117,   117,   188,     0,
     -34,     0,   117,   104,     0,   -34,     0,   116,   103,     0,
      51,    24,     0,    25,   102,   102,    26,     0,    95,     0,
      23,    24,     2,    25,     0,    30,    26,   115,   102,    27,
       0,     0,    28,    29,   103,    30,     0,    96,   172,   173,
     -43,   -43,   -43,   103,   -43,   -43,   -15,   -15,     0,   186,
     187,   -15,    49,     0,   102,   116,   103,     0,   -43,     0,
     -37,   159,   -37,   102,   -37,   -37,   -19,     0,   -19,   -19,
     -19,   -19,     0,   -37,   -19,   115,   102,   -19,   -37,     0,
     -19,   -19,     0,   -19,     0,   -19,   -19,   -18,     0,   -18,
     -18,   -18,   -18,     0,     0,   -18,     0,     0,   -18,     0,
       0,   -18,   -18,     0,   -18,     0,   -18,   -18,    95,     0,
      23,    24,     2,    25,     0,     0,    26,     0,     0,    27,
       0,     0,    28,    29,     0,    30,     0,    96,   -17,   -20,
       0,   -20,   -20,   -20,   -20,     0,     0,   -20,     0,     0,
     -20,     0,     0,   -20,   -20,     0,   -20,     0,   -20,   -20,
     -22,     0,   -22,   -22,   -22,   -22,     0,     0,   -22,     0,
       0,   -22,     0,     0,   -22,   -22,     0,   -22,     0,   -22,
     -22,   -23,     0,   -23,   -23,   -23,   -23,     0,     0,   -23,
       0,     0,   -23,     0,     0,   -23,   -23,     0,   -23,     0,
     -23,   -23,   -21,     0,   -21,   -21,   -21,   -21,     0,     0,
     -21,     0,     0,   -21,     0,     0,   -21,   -21,     0,   -21,
       0,   -21,   -21,   -50,     0,   -50,   -50,   -50,   -50,     0,
       0,   -50,     0,     0,   -50,     0,     0,   -50,   -50,     0,
     -50,     0,   -50,   -50,   -24,     0,   -24,   -24,   -24,   -24,
       0,     0,   -24,     0,     0,   -24,     0,     0,   -24,   -24,
       0,   -24,     0,   -24,   -24,   -25,     0,   -25,   -25,   -25,
     -25,     0,     0,   -25,     0,     0,   -25,     0,     0,   -25,
     -25,     0,   -25,     0,   -25,   -25,   -26,     0,   -26,   -26,
     -26,   -26,     0,     0,   -26,     0,     0,   -26,     0,     0,
     -26,   -26,     0,   -26,     0,   -26,   -26,   -49,     0,   -49,
     -49,   -49,   -49,     0,     0,   -49,     0,     0,   -49,     0,
       0,   -49,   -49,     0,   -49,     0,   -49,   -49,   -52,     0,
     -52,   -52,   -52,   -52,     0,     0,   -52,     0,     0,   -52,
       0,     0,   -52,   -52,     0,   -52,     0,   -52,   -52,   -51,
       0,   -51,   -51,   -51,   -51,     0,     0,   -51,     0,     0,
     -51,     0,     0,   -51,   -51,     0,   -51,     0,   -51,   -51,
     -28,     0,   -28,   -28,   -28,   -28,     0,     0,   -28,     0,
       0,   -28,     0,     0,   -28,   -28,     0,   -28,     0,   -28,
     -28,   -27,     0,   -27,   -27,   -27,   -27,     0,     0,   -27,
       0,     0,   -27,     0,     0,   -27,   -27,     0,   -27,     0,
     -27,   -27,   -29,     0,   -29,   -29,   -29,   -29,     0,     0,
     -29,     0,     0,   -29,     0,     0,   -29,   -29,     0,   -29,
       0,   -29,   -29,   -15,     0,   -15,   -15,   -15,   -15,     0,
       0,   -15,     0,     0,   -15,     0,     0,   -15,   -15,     0,
     -15,     0,   -15,   -15,    -9,     0,    -9,    -9,    -9,    -9,
       0,     0,    -9,     0,     0,    -9,     0,     0,    -9,    -9,
       0,    -9,     0,    -9,    -9,   -14,     0,   -14,   -14,   -14,
     -14,     0,     0,   -14,     0,     0,   -14,     0,     0,   -14,
     -14,     0,   -14,     0,   -14,   -14,   125,     0,   126,    24,
       2,    25,     0,     0,    26,     0,     0,   127,     0,     0,
     128,   129,     0,    30,     0,   130,   -43,   -43,   -43,     0,
     -43,   -43,     0,     0,     0,   -43,   -43,   -43,    49,   -43,
     -43,     0,    50,     0,   -43,     0,   -33,    49,   -33,   146,
       0,   160,     0,   -43,   -43,   -43,   -43,   -33,   -43,   -43,
     -40,   -40,   -40,     0,   -40,   -40,    49,     0,     0,     0,
     150,     0,   -43,   -40,     0,   -41,   -41,   -41,   -40,   -41,
     -41,   -46,   -46,   -46,     0,   -46,   -46,     0,   -41,     0,
       0,     0,     0,   -41,   -46,     0,   -44,   -44,   -44,   -46,
     -44,   -44,   -42,   -42,   -42,     0,   -42,   -42,     0,   -44,
       0,     0,     0,     0,   -44,   -42,     0,   -48,   -48,   -48,
     -42,   -48,   -48,   -45,   -45,   -45,     0,   -45,   -45,     0,
     -48,     0,     0,     0,     0,   -48,   -45,     0,   -38,   159,
     -38,   -45,   -38,   -38,   -39,   -39,   -39,     0,   -39,   -39,
       0,   -38,     0,     0,     0,     0,   -38,   -39,     0,   -47,
     -47,   -47,   -39,   -47,   -47,   -37,    67,   -37,     0,   -37,
     -37,     0,   -47,     0,   -40,   -40,   -40,   -47,   -40,   -40,
     -41,   -41,   -41,   -37,   -41,   -41,   -46,   -46,   -46,     0,
     -46,   -46,   -40,     0,     0,   -44,   -44,   -44,   -41,   -44,
     -44,   -42,   -42,   -42,   -46,   -42,   -42,   -48,   -48,   -48,
       0,   -48,   -48,   -44,     0,     0,   -45,   -45,   -45,   -42,
     -45,   -45,   -38,    67,   -38,   -48,   -38,   -38,   -39,   -39,
     -39,     0,   -39,   -39,   -45,     0,     0,   -47,   -47,   -47,
     -38,   -47,   -47,   158,     0,   -36,   -39,   -36,   -36,     0,
       0,    97,    98,     0,    99,   -47,   -36,   100,     0,    97,
      98,   -36,    99,     0,     0,   100,   101,   169,   -33,     0,
     -33,   157,   -10,   -10,   101,   177,     0,   -10,   -32,   -33,
     -32,   157,    23,    24,   -33,    25,   -14,   -14,    26,   -32,
      70,   -14,   179,    24,   -32,    25,    71,    30,    26,     0,
     180,     0,   126,    24,     0,    25,   181,    30,    26,     0,
     191,     0,    97,    98,     0,    99,   192,    30,   100,   110,
     111,     0,   112,   151,   111,   113,   112,   101,     0,   113,
      97,    98,     0,    99,   114,     0,   151,   111,   114,   112,
       0,     0,   -43,   -43,   -43,   101,   -43,   -43,   -53,   -53,
     -53,   114,   -53,   -53,   140,   -43,     0,     0,   -37,   148,
     -37,   -53,   -37,   -37,   -40,   -40,   -40,     0,   -40,   -40,
       0,   -37,     0,     0,   -41,   -41,   -41,   -40,   -41,   -41,
     -46,   -46,   -46,     0,   -46,   -46,     0,   -41,     0,     0,
     -44,   -44,   -44,   -46,   -44,   -44,   -42,   -42,   -42,     0,
     -42,   -42,     0,   -44,     0,     0,   -48,   -48,   -48,   -42,
     -48,   -48,   -45,   -45,   -45,     0,   -45,   -45,     0,   -48,
       0,     0,   -38,   148,   -38,   -45,   -38,   -38,   -39,   -39,
     -39,     0,   -39,   -39,   -32,   -38,   -32,   146,   -47,   -47,
     -47,   -39,   -47,   -47,   147,   -32,   -35,     0,   -35,   -35,
     147,   -47,   -36,     0,   -36,   -36,     0,   -35,     0,     0,
       0,     0,     0,   -36
};

static const yytype_int16 yycheck[] =
{
       0,    17,    26,     0,     4,    29,    30,     4,    35,    50,
      18,     1,    12,    54,     1,     5,    24,    19,    18,     3,
       3,     4,    24,     6,    25,    49,     9,     3,     4,    30,
      54,    55,     6,    20,     8,    18,    10,    11,     5,     0,
       3,    24,    18,    87,    88,    89,    19,    88,    49,    93,
      24,    24,    19,    54,    55,     3,     4,    88,     6,     3,
       4,     9,     6,     3,    88,     9,    67,     3,     4,    96,
      18,    19,    88,     8,    18,    10,   100,   101,    19,    88,
      24,    19,    18,    24,    19,     8,    19,    10,    88,   113,
     114,    88,     6,     7,     8,     3,    10,    11,    99,   100,
     101,    24,    18,   130,    30,   129,     8,    18,    10,   150,
      24,   112,   113,   114,   150,    21,   140,    19,    19,   160,
     161,    24,    24,    49,   160,   149,   150,    24,    54,    55,
       8,    88,    10,    11,     3,     4,   160,   161,   162,   140,
      24,    19,    24,   144,   145,   146,   147,   148,   149,    18,
      21,    19,    17,    19,   155,   156,   157,   158,   159,    19,
     161,   162,    24,   207,   208,   209,   207,   208,   209,   213,
      13,    30,   213,    99,   100,   101,   207,   208,   209,    19,
      13,    18,   213,   207,   208,   209,   112,   113,   114,   213,
      49,   207,   208,   209,    18,    54,    55,   213,   207,   208,
     209,     3,     3,     4,   213,     6,    13,   207,   208,   209,
     207,   208,   209,   213,   140,    13,   213,    18,   144,   145,
     146,   147,   148,   149,    30,    13,    13,    24,    21,   155,
     156,   157,   158,   159,    19,   161,   162,    13,    23,    13,
      99,   100,   101,    49,    30,    13,    19,    19,    54,    55,
     207,   208,   209,   112,   113,   114,   213,     6,     7,     8,
      66,    10,    11,    49,     8,    19,    10,    11,    54,    55,
      19,    24,     0,     1,     6,    24,     8,     5,    10,    11,
      24,   140,    21,    24,    13,   144,   145,   146,   147,   148,
     149,    24,    24,    19,   100,   101,   155,   156,   157,   158,
     159,    19,   161,   162,     0,     1,    17,   113,   114,     5,
       8,    30,    10,    11,   100,   101,    19,     0,     1,     6,
       7,     8,     5,    10,    11,    24,    24,   113,   114,    19,
      49,    18,    19,    17,   140,    54,    55,    24,   144,   145,
     146,   147,    24,   149,    13,    13,    65,    19,    19,   155,
     156,   157,   158,    13,   140,   161,   162,    13,   144,   145,
     146,   147,    13,   149,    30,    19,    19,     4,    13,   155,
     156,   157,   158,     0,     1,   161,   162,     8,     5,    10,
      11,   100,   101,    49,    30,     0,     1,    13,    54,    55,
       5,     0,     1,    24,   113,   114,     5,    63,    64,    13,
       6,     7,     8,    49,    10,    11,     0,     1,    54,    55,
      13,     5,    18,    19,    13,     6,    22,     8,    24,    10,
      11,   140,    18,    13,    -1,   144,   145,   146,    19,     8,
     149,    10,    11,    24,   100,   101,   155,   156,   157,    -1,
      19,    -1,   161,   162,    -1,    24,    -1,   113,   114,    -1,
       3,     4,    -1,     6,   100,   101,     9,    -1,     1,    -1,
       3,     4,     5,     6,    -1,    18,     9,   113,   114,    12,
      -1,    -1,    15,    16,   140,    18,    -1,    20,   144,   145,
       6,     7,     8,   149,    10,    11,     0,     1,    -1,   155,
     156,     5,    18,    -1,   140,   161,   162,    -1,    24,    -1,
       6,     7,     8,   149,    10,    11,     1,    -1,     3,     4,
       5,     6,    -1,    19,     9,   161,   162,    12,    24,    -1,
      15,    16,    -1,    18,    -1,    20,    21,     1,    -1,     3,
       4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,    -1,
      -1,    15,    16,    -1,    18,    -1,    20,    21,     1,    -1,
       3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,
      -1,    -1,    15,    16,    -1,    18,    -1,    20,    21,     1,
      -1,     3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,
      12,    -1,    -1,    15,    16,    -1,    18,    -1,    20,    21,
       1,    -1,     3,     4,     5,     6,    -1,    -1,     9,    -1,
      -1,    12,    -1,    -1,    15,    16,    -1,    18,    -1,    20,
      21,     1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      -1,    -1,    12,    -1,    -1,    15,    16,    -1,    18,    -1,
      20,    21,     1,    -1,     3,     4,     5,     6,    -1,    -1,
       9,    -1,    -1,    12,    -1,    -1,    15,    16,    -1,    18,
      -1,    20,    21,     1,    -1,     3,     4,     5,     6,    -1,
      -1,     9,    -1,    -1,    12,    -1,    -1,    15,    16,    -1,
      18,    -1,    20,    21,     1,    -1,     3,     4,     5,     6,
      -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    15,    16,
      -1,    18,    -1,    20,    21,     1,    -1,     3,     4,     5,
       6,    -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    15,
      16,    -1,    18,    -1,    20,    21,     1,    -1,     3,     4,
       5,     6,    -1,    -1,     9,    -1,    -1,    12,    -1,    -1,
      15,    16,    -1,    18,    -1,    20,    21,     1,    -1,     3,
       4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,    -1,
      -1,    15,    16,    -1,    18,    -1,    20,    21,     1,    -1,
       3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,
      -1,    -1,    15,    16,    -1,    18,    -1,    20,    21,     1,
      -1,     3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,
      12,    -1,    -1,    15,    16,    -1,    18,    -1,    20,    21,
       1,    -1,     3,     4,     5,     6,    -1,    -1,     9,    -1,
      -1,    12,    -1,    -1,    15,    16,    -1,    18,    -1,    20,
      21,     1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      -1,    -1,    12,    -1,    -1,    15,    16,    -1,    18,    -1,
      20,    21,     1,    -1,     3,     4,     5,     6,    -1,    -1,
       9,    -1,    -1,    12,    -1,    -1,    15,    16,    -1,    18,
      -1,    20,    21,     1,    -1,     3,     4,     5,     6,    -1,
      -1,     9,    -1,    -1,    12,    -1,    -1,    15,    16,    -1,
      18,    -1,    20,    21,     1,    -1,     3,     4,     5,     6,
      -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    15,    16,
      -1,    18,    -1,    20,    21,     1,    -1,     3,     4,     5,
       6,    -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    15,
      16,    -1,    18,    -1,    20,    21,     1,    -1,     3,     4,
       5,     6,    -1,    -1,     9,    -1,    -1,    12,    -1,    -1,
      15,    16,    -1,    18,    -1,    20,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,     6,     7,     8,    18,    10,
      11,    -1,    22,    -1,    24,    -1,     8,    18,    10,    11,
      -1,    22,    -1,    24,     6,     7,     8,    19,    10,    11,
       6,     7,     8,    -1,    10,    11,    18,    -1,    -1,    -1,
      22,    -1,    24,    19,    -1,     6,     7,     8,    24,    10,
      11,     6,     7,     8,    -1,    10,    11,    -1,    19,    -1,
      -1,    -1,    -1,    24,    19,    -1,     6,     7,     8,    24,
      10,    11,     6,     7,     8,    -1,    10,    11,    -1,    19,
      -1,    -1,    -1,    -1,    24,    19,    -1,     6,     7,     8,
      24,    10,    11,     6,     7,     8,    -1,    10,    11,    -1,
      19,    -1,    -1,    -1,    -1,    24,    19,    -1,     6,     7,
       8,    24,    10,    11,     6,     7,     8,    -1,    10,    11,
      -1,    19,    -1,    -1,    -1,    -1,    24,    19,    -1,     6,
       7,     8,    24,    10,    11,     6,     7,     8,    -1,    10,
      11,    -1,    19,    -1,     6,     7,     8,    24,    10,    11,
       6,     7,     8,    24,    10,    11,     6,     7,     8,    -1,
      10,    11,    24,    -1,    -1,     6,     7,     8,    24,    10,
      11,     6,     7,     8,    24,    10,    11,     6,     7,     8,
      -1,    10,    11,    24,    -1,    -1,     6,     7,     8,    24,
      10,    11,     6,     7,     8,    24,    10,    11,     6,     7,
       8,    -1,    10,    11,    24,    -1,    -1,     6,     7,     8,
      24,    10,    11,     6,    -1,     8,    24,    10,    11,    -1,
      -1,     3,     4,    -1,     6,    24,    19,     9,    -1,     3,
       4,    24,     6,    -1,    -1,     9,    18,    19,     8,    -1,
      10,    11,     0,     1,    18,    19,    -1,     5,     8,    19,
      10,    11,     3,     4,    24,     6,     0,     1,     9,    19,
      11,     5,     3,     4,    24,     6,    17,    18,     9,    -1,
      11,    -1,     3,     4,    -1,     6,    17,    18,     9,    -1,
      11,    -1,     3,     4,    -1,     6,    17,    18,     9,     3,
       4,    -1,     6,     3,     4,     9,     6,    18,    -1,     9,
       3,     4,    -1,     6,    18,    -1,     3,     4,    18,     6,
      -1,    -1,     6,     7,     8,    18,    10,    11,     6,     7,
       8,    18,    10,    11,    18,    19,    -1,    -1,     6,     7,
       8,    19,    10,    11,     6,     7,     8,    -1,    10,    11,
      -1,    19,    -1,    -1,     6,     7,     8,    19,    10,    11,
       6,     7,     8,    -1,    10,    11,    -1,    19,    -1,    -1,
       6,     7,     8,    19,    10,    11,     6,     7,     8,    -1,
      10,    11,    -1,    19,    -1,    -1,     6,     7,     8,    19,
      10,    11,     6,     7,     8,    -1,    10,    11,    -1,    19,
      -1,    -1,     6,     7,     8,    19,    10,    11,     6,     7,
       8,    -1,    10,    11,     8,    19,    10,    11,     6,     7,
       8,    19,    10,    11,     6,    19,     8,    -1,    10,    11,
       6,    19,     8,    -1,    10,    11,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     5,    26,    27,    28,    29,    30,    31,     0,
      29,     3,    18,    24,    28,    32,     3,    19,    23,     1,
      20,    33,    32,     3,     4,     6,     9,    12,    15,    16,
      18,    28,    30,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    49,    18,
      22,     3,    45,    39,    18,    18,    24,    39,    39,     3,
      21,    34,    24,     8,    10,    11,     6,     7,    19,    39,
      11,    17,    36,    48,    36,    39,    39,    24,    19,    41,
      41,    42,    43,    45,    19,    17,    24,    19,    19,    19,
      35,    35,    35,    13,    35,     1,    20,     3,     4,     6,
       9,    18,    40,    41,    42,    43,    44,    45,    46,    49,
       3,     4,     6,     9,    18,    40,    41,    42,    43,    44,
      45,    46,    49,    24,    24,     1,     3,    12,    15,    16,
      20,    28,    30,    33,    36,    37,    38,    39,    47,    34,
      18,    45,    39,    39,     8,    10,    11,     6,     7,    18,
      22,     3,    45,    39,    39,     8,    10,    11,     6,     7,
      22,    18,    18,    24,    39,    34,     3,    24,    21,    19,
      39,    19,    41,    41,    42,    43,    45,    19,    39,     3,
      11,    17,    36,    39,    48,    19,    41,    41,    42,    43,
      45,    11,    17,    36,    48,    36,    39,    39,    24,    21,
      24,    19,    19,    17,    24,    17,    24,    19,    19,    19,
      35,    35,    35,    13,    35
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    25,    26,    27,    27,    28,    29,    29,    29,    30,
      31,    32,    32,    32,    33,    33,    34,    34,    35,    35,
      35,    35,    35,    35,    36,    36,    36,    37,    38,    38,
      39,    39,    40,    40,    40,    41,    41,    42,    42,    43,
      43,    44,    44,    45,    45,    45,    45,    46,    46,    47,
      47,    48,    48,    49
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     3,
       6,     4,     2,     0,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     3,     5,     5,     7,
       1,     2,     3,     3,     1,     1,     3,     1,     3,     3,
       1,     1,     2,     1,     1,     3,     1,     4,     3,     3,
       2,     2,     2,     1
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
#line 102 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("programa");
        (yyval.ast)->pai = (yyvsp[0].ast);
        raiz = (yyval.ast);
    }
#line 1622 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 110 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("lista De Declaracoes");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        (yyvsp[-1].ast)->filho = (yyvsp[0].ast);
    }
#line 1632 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 115 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1640 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 121 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("INT");
        strcpy((yyval.ast)->tipo, "INT");
        tipo += 0;
    }
#line 1650 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 129 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1658 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 132 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1666 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 135 "sintatico.y" /* yacc.c:1646  */
    {
        erros++;
    }
#line 1674 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 141 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("Declaracao de Variavel");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        id = insereSimbolo(id, (yyvsp[-1].token).escopo, (yyvsp[-1].token).id, "Variavel", tipos[tipo], (yyvsp[-1].token).linha, (yyvsp[-1].token).coluna, 0);
        strcpy((yyvsp[-2].ast)->simbolo, (yyvsp[-1].token).id);
        sprintf((yyval.ast)->tableTac, "\t%s %s%d", tiposTac[tipo], (yyvsp[-1].token).id, (yyvsp[-1].token).escopo);
        tipo = 0;
    }
#line 1687 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 152 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("Declaracao de funcao");
        (yyval.ast)->pai = (yyvsp[-5].ast);
        (yyvsp[-5].ast)->filho = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        id = insereSimbolo(id, (yyvsp[-4].token).escopo, (yyvsp[-4].token).id, "Funcao", tipos[tipo], (yyvsp[-4].token).linha, (yyvsp[-4].token).coluna, 0);
        strcpy((yyvsp[-5].ast)->simbolo, (yyvsp[-4].token).id);
        tipo = 0;
    }
#line 1701 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 164 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("Lista de Parametros");
        (yyval.ast)->pai = (yyvsp[-3].ast);
        (yyvsp[-3].ast)->filho = (yyvsp[0].ast);
        id = insereSimbolo(id, (yyvsp[-2].token).escopo, (yyvsp[-2].token).id, "Variavel", tipos[tipo], (yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, 1);
        sprintf((yyval.ast)->tableTac,"\t%s %s%d", tiposTac[tipo], (yyvsp[-2].token).id, (yyvsp[-2].token).escopo+1);
        tipo = 0;
        strcpy((yyvsp[-3].ast)->simbolo, (yyvsp[-2].token).id);
    }
#line 1715 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 173 "sintatico.y" /* yacc.c:1646  */
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
#line 1731 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 184 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("Lista de Parametros vazia");
    }
#line 1739 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 190 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("dentro das chaves");
        (yyval.ast)->pai = (yyvsp[-1].ast);
    }
#line 1748 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 194 "sintatico.y" /* yacc.c:1646  */
    {
        erros++;
    }
#line 1756 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 200 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("declaracoes");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        (yyval.ast)->filho = (yyvsp[0].ast);
    }
#line 1766 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 205 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("declaracoes");
        (yyval.ast)->pai = (yyvsp[0].ast);
    }
#line 1775 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 212 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1783 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 215 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1791 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 218 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1799 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 221 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1807 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 224 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1815 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 227 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1823 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 233 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("expressao");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-1].ast)->tipo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[-1].ast));
        strcpy((yyval.ast)->simbolo, (yyvsp[-1].ast)->simbolo);
    }
#line 1835 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 245 "sintatico.y" /* yacc.c:1646  */
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
#line 1852 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 257 "sintatico.y" /* yacc.c:1646  */
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
#line 1868 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 272 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("while");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
    }
#line 1878 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 280 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("IF");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);

        // sprintf($$->codeTac, "saidaIf%d:\n", qtdIf);
        // sprintf($$->codeTac, "\tbrz ");
        // qtdIf++;
    }
#line 1892 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 289 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("IF-ELSE");
        (yyval.ast)->pai = (yyvsp[-4].ast);
        (yyvsp[-4].ast)->filho = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
    }
#line 1903 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 298 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("exp");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 1914 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 304 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("exp");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 1925 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 330 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("expressaoLogica");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        //strcpy($$->tipo, "INT");
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));        
    }
#line 1937 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 337 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("expressaoLogica");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        //strcpy($$->tipo, "INT");
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
    }
#line 1949 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 344 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("expressaoLogica");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1960 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 353 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("expressaoRelacional");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1971 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 359 "sintatico.y" /* yacc.c:1646  */
    {
        printf("Teste ----");
        (yyval.ast) = criaNo("expressaoRelacional");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-2].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-2].ast)->simbolo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
    }
#line 1985 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 371 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("Operando SomaSub");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1996 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 377 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("Operando SomaSub");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-2].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-2].ast)->simbolo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
        sprintf((yyval.ast)->codeTac, "\tadd %s, %s", (yyvsp[-2].ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2010 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 398 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("Operando MultDiv");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-2].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-2].ast)->simbolo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
    }
#line 2023 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 406 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2031 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 412 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("expUnaria");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2041 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 417 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("expUnaria");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2051 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 424 "sintatico.y" /* yacc.c:1646  */
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
#line 2066 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 434 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("argumento");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2077 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 440 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("argumento");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-1].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-1].ast)->simbolo);
    }
#line 2088 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 446 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("argumento");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
    }
#line 2098 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 454 "sintatico.y" /* yacc.c:1646  */
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
#line 2113 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 464 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("chamada de funcao");
        TabelaSimbolo* c = procuraVariavel(id, (yyvsp[-2].token).id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Funcao nao declarada!!!\n", (yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).id);
        }else{
            strcpy((yyval.ast)->tipo, c->tipo);
        }
    }
#line 2127 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 477 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("retorno");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        char tipoRetornoC[20] = "";
        strcpy(tipoRetornoC, (yyvsp[-1].ast)->tipo);
    }
#line 2138 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 483 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("retorno");
    }
#line 2146 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 489 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("NULO");
        strcpy((yyval.ast)->tipo, "NULO");
        strcpy((yyval.ast)->simbolo, (yyvsp[-1].token).id);
    }
#line 2156 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 494 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("NULO");
        strcpy((yyval.ast)->tipo, "NULO");
        strcpy((yyval.ast)->simbolo, (yyvsp[0].token).id);
    }
#line 2166 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 502 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("Numero");
        strcpy((yyval.ast)->tipo, "INT");
        strcpy((yyval.ast)->simbolo, (yyvsp[0].token).id);
    }
#line 2176 "sintatico.tab.c" /* yacc.c:1646  */
    break;


#line 2180 "sintatico.tab.c" /* yacc.c:1646  */
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
#line 515 "sintatico.y" /* yacc.c:1906  */


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
