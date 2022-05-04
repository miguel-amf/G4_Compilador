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
    char tipos[4][10] = {"INT", "VOID"}; // TODO REVER ISSO POIS PODE SER REMOVIDO
    char tiposTac[4][10] = {"int", "void"}; // TODO REVER ISSO POIS PODE SER REMOVIDO
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
    VOID = 260,
    TIPO_INT = 261,
    OP_B_SOMA_SUB = 262,
    OP_B_MULT_DIV = 263,
    OP_LOGICA_AND = 264,
    OP_LOGICA_NEG = 265,
    OP_LOGICA_OR = 266,
    OP_B_RELACIONAIS = 267,
    IF = 268,
    ELSE = 269,
    THEN = 270,
    WHILE = 271,
    RETORNO = 272,
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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1286

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  25
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  51
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  201

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
       0,    93,    93,   101,   106,   112,   117,   126,   129,   132,
     138,   149,   162,   171,   182,   188,   192,   198,   203,   210,
     213,   216,   219,   222,   225,   231,   238,   254,   262,   271,
     280,   286,   294,   301,   308,   317,   323,   335,   341,   353,
     361,   367,   372,   379,   389,   395,   401,   409,   419,   432,
     438,   445
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "INT", "VOID", "TIPO_INT",
  "OP_B_SOMA_SUB", "OP_B_MULT_DIV", "OP_LOGICA_AND", "OP_LOGICA_NEG",
  "OP_LOGICA_OR", "OP_B_RELACIONAIS", "IF", "ELSE", "THEN", "WHILE",
  "RETORNO", "ABRE_PARENTESES", "FECHA_PARENTESES", "ABRE_CHAVES",
  "FECHA_CHAVES", "ATRIBUICAO", "VIRGULA", "PONTOVIRGULA", "$accept",
  "programa", "listaDeDeclaracoes", "TIPO", "declaracao",
  "declaracaoVariavel", "declaracaoFuncao", "listaDeParametros", "corpo",
  "dentroCorpo", "declaracoes", "expressao", "while", "condicional", "exp",
  "expressao_logica", "expressao_relacional", "opSomaSub", "opMultDiv",
  "expUnaria", "argumento", "chamadaDeFuncao", "retorno", "numero", YY_NULLPTR
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

#define YYPACT_NINF -81

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-81)))

#define YYTABLE_NINF -52

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     186,   512,     6,    24,    28,  1244,    41,  1246,  1253,  1255,
     -81,  1262,    -4,    67,  1264,    57,    34,    79,     5,    67,
    1271,   833,  1273,    60,    88,   123,   105,    19,    64,    70,
      14,   355,    82,   365,   485,   100,   518,   539,   560,   581,
     116,    22,   134,    50,   224,  1021,  1027,  1035,   602,  1041,
     490,   544,   887,  1049,   124,   565,   355,   623,   125,    72,
     126,  1280,   138,   644,    47,    47,    47,    47,   105,  1055,
     142,   665,   143,   103,   181,   686,  1063,   235,   836,   310,
    1069,  1077,  1083,   833,   851,   833,   707,   110,   728,   833,
     749,   770,   833,  1115,  1128,   208,   355,   355,   161,    92,
    1218,  1134,  1143,  1149,  1158,  1164,   291,   901,   234,   586,
     355,   459,   438,    59,   907,   921,   927,   941,   947,   791,
     185,   193,   405,   209,   227,    45,   833,   216,   236,   237,
     246,   247,   248,   239,   258,   262,  1093,  1173,   270,   276,
     346,   346,   346,   346,   208,  1095,   607,   865,   961,   109,
     277,   649,   649,   649,   649,   234,   628,   565,   355,   283,
     280,   284,   287,   294,   812,  1179,   293,  1188,   205,  1229,
    1224,  1194,  1203,   967,   295,   879,   297,   299,   981,  1097,
    1106,   194,   987,  1001,   316,   312,   201,   314,   326,   329,
     330,  1209,  1007,   851,   851,   851,   331,   332,   338,   851,
     340
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -81,   -81,   -81,     0,   358,     3,   -81,   348,   -17,   -34,
     -42,   -39,   -80,   -28,   -20,   -16,   375,   324,   251,   301,
     113,   133,    -9,   184
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,    32,     7,    33,     9,    16,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    22,    62,     8,   131,     6,    20,    54,     8,    -6,
      58,    59,    71,    15,    13,    98,    72,    52,    25,    15,
      14,    26,    52,    25,    27,    21,    26,    -5,    10,    27,
      70,    64,    31,    65,    98,    73,    74,    31,    57,   111,
      98,    86,    87,    88,    12,   130,   -30,    90,    52,    25,
      52,    25,    26,    18,    26,    27,   132,    67,   135,   -35,
      17,   -35,   -35,    31,   133,    31,   154,   129,   -35,   159,
     -35,   -35,     2,     3,   -35,   134,   138,   139,   -35,   -12,
      98,    98,    55,   -35,   127,    60,   -14,   128,    56,   149,
     150,    76,   161,   111,    98,   -43,   -43,   -43,   -13,   -43,
     -43,   -34,    19,   -34,   142,   160,    50,   176,    52,    25,
      51,   -34,   -43,   131,   131,   131,   166,   184,   185,   131,
      98,    61,    84,    31,    89,   174,   177,   120,   -31,    98,
     -51,   -51,   -51,   -31,   -51,   -51,   133,   186,   187,    53,
      63,   111,    98,   -34,   103,   -34,    66,   -51,   -31,    75,
     119,   196,   197,   198,   130,   130,   130,   200,   -34,   -17,
     130,    82,    83,   103,   104,   132,   132,   132,   116,   103,
     140,   132,   141,   133,   133,   133,   129,   129,   129,   133,
     -30,    81,   129,   104,   134,   134,   134,     1,   117,   104,
     134,     2,     3,   127,   127,   127,   128,   128,   128,   127,
      85,   154,   128,   -36,   -25,   -36,   -36,   -16,   137,   103,
     103,    93,    94,   -36,   -33,   105,   -33,   142,   -36,   162,
     194,   148,   116,   103,   -33,   120,    97,   157,   104,   104,
     104,   -37,    68,   -37,   105,   -37,   -37,   147,   107,   118,
     105,   117,   117,   104,   -33,   158,   -33,    66,   -37,   103,
     -20,   -19,   110,   103,   103,   103,   103,   172,   103,   -33,
     -21,   -23,   -24,   163,   116,   116,   116,   116,   183,   104,
     116,   103,   -22,   104,   104,   104,   104,   104,   104,   105,
     105,   105,   101,   164,   117,   117,   117,   117,   117,   -31,
     117,   104,   118,   118,   105,   167,   178,   -50,   -43,   -43,
     -43,   101,   -43,   -43,   188,   189,   114,   101,   -25,   145,
     -43,   190,   191,   146,   192,   -43,   -26,    67,    80,   -36,
     105,   -36,   -36,   120,   105,   105,   105,   105,   105,   105,
     -26,   193,   102,   195,   -36,   118,   118,   118,   118,   118,
     -49,   118,   105,   -15,   -10,   -28,   199,   101,   101,    93,
      94,   102,   -27,    95,   -29,   100,   115,   102,    93,    94,
     114,   101,    95,    11,    97,    96,   -20,    23,   -20,   -20,
     -20,   -20,   -20,    97,   100,   -20,     0,     0,   -20,   113,
     100,   -20,   -20,   -20,     0,   -20,   -20,   101,     0,     0,
      79,   101,   101,   101,   171,     0,   101,   102,   102,     0,
       0,     0,   114,   114,   114,   182,    99,     0,   114,   101,
     115,   102,   -43,   -43,   -43,     0,   -43,   -43,     0,     0,
     100,   100,     0,    50,     0,    99,     0,   156,     0,   -43,
     112,    99,     0,   113,   100,     0,     0,   102,     0,    77,
      78,   102,   102,   102,   102,     0,   102,   -34,     0,   -34,
     153,     0,   115,   115,   115,   115,     0,   -34,   115,   102,
     100,     0,   -34,     0,   100,   100,   170,     0,   151,   100,
     152,    99,    99,     0,     0,   113,   113,   181,   -30,     0,
       0,   113,   100,   -30,   112,    99,   -19,     0,   -19,   -19,
     -19,   -19,   -19,    93,    94,   -19,     0,    95,   -19,     0,
      96,   -19,   -19,   -19,     0,   -19,   -19,     0,    97,    69,
       0,    99,    -9,    -9,     0,   168,   169,    -9,    -9,    91,
      99,    24,    25,     2,     3,    26,   179,   180,    27,     0,
       0,    28,   112,    99,    29,    30,    31,     0,    92,   -18,
     -21,     0,   -21,   -21,   -21,   -21,   -21,    24,    25,   -21,
       0,    26,   -21,     0,    27,   -21,   -21,   -21,     0,   -21,
     -21,   -23,    31,   -23,   -23,   -23,   -23,   -23,   106,   107,
     -23,     0,   108,   -23,     0,   109,   -23,   -23,   -23,     0,
     -23,   -23,   -24,   110,   -24,   -24,   -24,   -24,   -24,   147,
     107,   -24,     0,   108,   -24,     0,   109,   -24,   -24,   -24,
       0,   -24,   -24,   -22,   110,   -22,   -22,   -22,   -22,   -22,
     175,    25,   -22,     0,    26,   -22,     0,    27,   -22,   -22,
     -22,     0,   -22,   -22,   -50,    31,   -50,   -50,   -50,   -50,
     -50,   122,    25,   -50,     0,    26,   -50,     0,    27,   -50,
     -50,   -50,     0,   -50,   -50,   -25,    31,   -25,   -25,   -25,
     -25,   -25,   147,   107,   -25,     0,   108,   -25,     0,     0,
     -25,   -25,   -25,     0,   -25,   -25,   -26,   110,   -26,   -26,
     -26,   -26,   -26,     0,     0,   -26,     0,     0,   -26,     0,
       0,   -26,   -26,   -26,     0,   -26,   -26,   -49,     0,   -49,
     -49,   -49,   -49,   -49,     0,     0,   -49,     0,     0,   -49,
       0,     0,   -49,   -49,   -49,     0,   -49,   -49,   -28,     0,
     -28,   -28,   -28,   -28,   -28,     0,     0,   -28,     0,     0,
     -28,     0,     0,   -28,   -28,   -28,     0,   -28,   -28,   -27,
       0,   -27,   -27,   -27,   -27,   -27,     0,     0,   -27,     0,
       0,   -27,     0,     0,   -27,   -27,   -27,     0,   -27,   -27,
     -29,     0,   -29,   -29,   -29,   -29,   -29,     0,     0,   -29,
       0,     0,   -29,     0,     0,   -29,   -29,   -29,     0,   -29,
     -29,   -16,     0,   -16,   -16,   -16,   -16,   -16,     0,     0,
     -16,     0,     0,   -16,     0,     0,   -16,   -16,   -16,     0,
     -16,   -16,   -10,     0,   -10,   -10,   -10,   -10,   -10,     0,
       0,   -10,     0,     0,   -10,     0,     0,   -10,   -10,   -10,
       0,   -10,   -10,   -15,     0,   -15,   -15,   -15,   -15,   -15,
       0,     0,   -15,     0,     0,   -15,     0,     0,   -15,   -15,
     -15,     0,   -15,   -15,    91,     0,    24,    25,     2,     3,
      26,     0,     0,    27,     0,   -32,    28,   -32,    66,    29,
      30,    31,   121,    92,   122,    25,     2,     3,    26,     0,
     -32,    27,     0,     0,   123,     0,     0,   124,   125,    31,
       0,   126,   -43,   -43,   -43,     0,   -43,   -43,     0,     0,
       0,     0,     0,   145,   -43,     0,   -43,   -43,   -43,   -43,
     -43,   -43,     0,     0,   -43,   -43,   -43,    50,   -43,   -43,
       0,   146,     0,   -43,     0,    50,     0,     0,   -51,   -51,
     -51,   -43,   -51,   -51,   -37,   155,   -37,     0,   -37,   -37,
     -51,     0,     0,     0,     0,   -51,   -37,     0,   -40,   -40,
     -40,   -37,   -40,   -40,   -41,   -41,   -41,     0,   -41,   -41,
     -40,     0,     0,     0,     0,   -40,   -41,     0,   -46,   -46,
     -46,   -41,   -46,   -46,   -44,   -44,   -44,     0,   -44,   -44,
     -46,     0,     0,     0,     0,   -46,   -44,     0,   -42,   -42,
     -42,   -44,   -42,   -42,   -48,   -48,   -48,     0,   -48,   -48,
     -42,     0,     0,     0,     0,   -42,   -48,     0,   -45,   -45,
     -45,   -48,   -45,   -45,   -38,   155,   -38,     0,   -38,   -38,
     -45,     0,     0,     0,     0,   -45,   -38,     0,   -39,   -39,
     -39,   -38,   -39,   -39,   -47,   -47,   -47,     0,   -47,   -47,
     -39,     0,     0,     0,     0,   -39,   -47,     0,   -40,   -40,
     -40,   -47,   -40,   -40,   -41,   -41,   -41,     0,   -41,   -41,
       0,     0,   -46,   -46,   -46,   -40,   -46,   -46,   -44,   -44,
     -44,   -41,   -44,   -44,     0,     0,   -42,   -42,   -42,   -46,
     -42,   -42,   -48,   -48,   -48,   -44,   -48,   -48,     0,     0,
     -45,   -45,   -45,   -42,   -45,   -45,   -38,    68,   -38,   -48,
     -38,   -38,     0,     0,   -39,   -39,   -39,   -45,   -39,   -39,
     -47,   -47,   -47,   -38,   -47,   -47,    93,    94,    93,    94,
      95,   -39,    95,    96,     0,    96,   -33,   -47,   -33,   153,
       0,    97,   165,    97,   173,   -32,   -33,   -32,   153,     0,
       0,   -33,   -43,   -43,   -43,   -32,   -43,   -43,     0,     0,
     -32,     0,     0,   136,   -43,   -51,   -51,   -51,     0,   -51,
     -51,   -37,   144,   -37,     0,   -37,   -37,   -51,     0,     0,
     -40,   -40,   -40,   -37,   -40,   -40,   -41,   -41,   -41,     0,
     -41,   -41,   -40,     0,     0,   -46,   -46,   -46,   -41,   -46,
     -46,   -44,   -44,   -44,     0,   -44,   -44,   -46,     0,     0,
     -42,   -42,   -42,   -44,   -42,   -42,   -48,   -48,   -48,     0,
     -48,   -48,   -42,     0,     0,   -45,   -45,   -45,   -48,   -45,
     -45,   -38,   144,   -38,     0,   -38,   -38,   -45,     0,     0,
     -39,   -39,   -39,   -38,   -39,   -39,   -47,   -47,   -47,     0,
     -47,   -47,   -39,     0,     0,   143,     0,   -35,   -47,   -35,
     -35,   143,     0,   -36,     0,   -36,   -36,   -35,   -32,     0,
     -32,   142,     0,   -36,    -2,     1,    -4,    -4,   -32,     2,
       3,    -4,    -4,    -7,    -7,    -8,    -8,     0,    -7,    -7,
      -8,    -8,    -3,    -3,   -10,   -10,     0,    -3,    -3,   -10,
     -10,   -16,   -16,   -11,   -11,     0,   -16,   -16,   -11,   -11,
     -15,   -15,     0,     0,     0,   -15,   -15
};

static const yytype_int16 yycheck[] =
{
       0,    18,    36,     0,    84,     5,     1,    27,     5,     3,
      30,    31,    51,    13,    18,    31,    55,     3,     4,    19,
      24,     7,     3,     4,    10,    20,     7,     3,     0,    10,
      50,     9,    18,    11,    50,    55,    56,    18,    24,    55,
      56,    83,    84,    85,     3,    84,    24,    89,     3,     4,
       3,     4,     7,    19,     7,    10,    84,     7,    92,     9,
       3,    11,    12,    18,    84,    18,     7,    84,     9,    24,
      11,    12,     5,     6,    24,    84,    96,    97,    19,    19,
      96,    97,    18,    24,    84,     3,    19,    84,    18,   109,
     110,    19,   126,   109,   110,     7,     8,     9,    19,    11,
      12,     9,    23,    11,    12,   125,    18,   146,     3,     4,
      22,    19,    24,   193,   194,   195,   136,   156,   157,   199,
     136,    21,    19,    18,    14,   145,   146,    24,    19,   145,
       7,     8,     9,    24,    11,    12,   156,   157,   158,    26,
      24,   157,   158,     9,    31,    11,    12,    24,    24,    24,
      24,   193,   194,   195,   193,   194,   195,   199,    24,    21,
     199,    19,    19,    50,    31,   193,   194,   195,    55,    56,
       9,   199,    11,   193,   194,   195,   193,   194,   195,   199,
      19,    68,   199,    50,   193,   194,   195,     1,    55,    56,
     199,     5,     6,   193,   194,   195,   193,   194,   195,   199,
      19,     7,   199,     9,    19,    11,    12,    14,    95,    96,
      97,     3,     4,    19,     9,    31,    11,    12,    24,     3,
      19,   108,   109,   110,    19,    24,    18,    18,    95,    96,
      97,     7,     8,     9,    50,    11,    12,     3,     4,    55,
      56,   108,   109,   110,     9,    18,    11,    12,    24,   136,
      14,    14,    18,   140,   141,   142,   143,   144,   145,    24,
      14,    14,    14,    24,   151,   152,   153,   154,   155,   136,
     157,   158,    14,   140,   141,   142,   143,   144,   145,    95,
      96,    97,    31,    21,   151,   152,   153,   154,   155,    19,
     157,   158,   108,   109,   110,    19,    19,    14,     7,     8,
       9,    50,    11,    12,    24,    21,    55,    56,    14,    18,
      19,    24,    19,    22,    19,    24,    19,     7,    67,     9,
     136,    11,    12,    24,   140,   141,   142,   143,   144,   145,
      14,    19,    31,    19,    24,   151,   152,   153,   154,   155,
      14,   157,   158,    14,    14,    14,    14,    96,    97,     3,
       4,    50,    14,     7,    14,    31,    55,    56,     3,     4,
     109,   110,     7,     5,    18,    10,     1,    19,     3,     4,
       5,     6,     7,    18,    50,    10,    -1,    -1,    13,    55,
      56,    16,    17,    18,    -1,    20,    21,   136,    -1,    -1,
      66,   140,   141,   142,   143,    -1,   145,    96,    97,    -1,
      -1,    -1,   151,   152,   153,   154,    31,    -1,   157,   158,
     109,   110,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      96,    97,    -1,    18,    -1,    50,    -1,    22,    -1,    24,
      55,    56,    -1,   109,   110,    -1,    -1,   136,    -1,    64,
      65,   140,   141,   142,   143,    -1,   145,     9,    -1,    11,
      12,    -1,   151,   152,   153,   154,    -1,    19,   157,   158,
     136,    -1,    24,    -1,   140,   141,   142,    -1,     9,   145,
      11,    96,    97,    -1,    -1,   151,   152,   153,    19,    -1,
      -1,   157,   158,    24,   109,   110,     1,    -1,     3,     4,
       5,     6,     7,     3,     4,    10,    -1,     7,    13,    -1,
      10,    16,    17,    18,    -1,    20,    21,    -1,    18,    19,
      -1,   136,     0,     1,    -1,   140,   141,     5,     6,     1,
     145,     3,     4,     5,     6,     7,   151,   152,    10,    -1,
      -1,    13,   157,   158,    16,    17,    18,    -1,    20,    21,
       1,    -1,     3,     4,     5,     6,     7,     3,     4,    10,
      -1,     7,    13,    -1,    10,    16,    17,    18,    -1,    20,
      21,     1,    18,     3,     4,     5,     6,     7,     3,     4,
      10,    -1,     7,    13,    -1,    10,    16,    17,    18,    -1,
      20,    21,     1,    18,     3,     4,     5,     6,     7,     3,
       4,    10,    -1,     7,    13,    -1,    10,    16,    17,    18,
      -1,    20,    21,     1,    18,     3,     4,     5,     6,     7,
       3,     4,    10,    -1,     7,    13,    -1,    10,    16,    17,
      18,    -1,    20,    21,     1,    18,     3,     4,     5,     6,
       7,     3,     4,    10,    -1,     7,    13,    -1,    10,    16,
      17,    18,    -1,    20,    21,     1,    18,     3,     4,     5,
       6,     7,     3,     4,    10,    -1,     7,    13,    -1,    -1,
      16,    17,    18,    -1,    20,    21,     1,    18,     3,     4,
       5,     6,     7,    -1,    -1,    10,    -1,    -1,    13,    -1,
      -1,    16,    17,    18,    -1,    20,    21,     1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    10,    -1,    -1,    13,
      -1,    -1,    16,    17,    18,    -1,    20,    21,     1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    10,    -1,    -1,
      13,    -1,    -1,    16,    17,    18,    -1,    20,    21,     1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    10,    -1,
      -1,    13,    -1,    -1,    16,    17,    18,    -1,    20,    21,
       1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    10,
      -1,    -1,    13,    -1,    -1,    16,    17,    18,    -1,    20,
      21,     1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      10,    -1,    -1,    13,    -1,    -1,    16,    17,    18,    -1,
      20,    21,     1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    10,    -1,    -1,    13,    -1,    -1,    16,    17,    18,
      -1,    20,    21,     1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    10,    -1,    -1,    13,    -1,    -1,    16,    17,
      18,    -1,    20,    21,     1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    10,    -1,     9,    13,    11,    12,    16,
      17,    18,     1,    20,     3,     4,     5,     6,     7,    -1,
      24,    10,    -1,    -1,    13,    -1,    -1,    16,    17,    18,
      -1,    20,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,    18,    19,    -1,     7,     8,     9,    24,
      11,    12,    -1,    -1,     7,     8,     9,    18,    11,    12,
      -1,    22,    -1,    24,    -1,    18,    -1,    -1,     7,     8,
       9,    24,    11,    12,     7,     8,     9,    -1,    11,    12,
      19,    -1,    -1,    -1,    -1,    24,    19,    -1,     7,     8,
       9,    24,    11,    12,     7,     8,     9,    -1,    11,    12,
      19,    -1,    -1,    -1,    -1,    24,    19,    -1,     7,     8,
       9,    24,    11,    12,     7,     8,     9,    -1,    11,    12,
      19,    -1,    -1,    -1,    -1,    24,    19,    -1,     7,     8,
       9,    24,    11,    12,     7,     8,     9,    -1,    11,    12,
      19,    -1,    -1,    -1,    -1,    24,    19,    -1,     7,     8,
       9,    24,    11,    12,     7,     8,     9,    -1,    11,    12,
      19,    -1,    -1,    -1,    -1,    24,    19,    -1,     7,     8,
       9,    24,    11,    12,     7,     8,     9,    -1,    11,    12,
      19,    -1,    -1,    -1,    -1,    24,    19,    -1,     7,     8,
       9,    24,    11,    12,     7,     8,     9,    -1,    11,    12,
      -1,    -1,     7,     8,     9,    24,    11,    12,     7,     8,
       9,    24,    11,    12,    -1,    -1,     7,     8,     9,    24,
      11,    12,     7,     8,     9,    24,    11,    12,    -1,    -1,
       7,     8,     9,    24,    11,    12,     7,     8,     9,    24,
      11,    12,    -1,    -1,     7,     8,     9,    24,    11,    12,
       7,     8,     9,    24,    11,    12,     3,     4,     3,     4,
       7,    24,     7,    10,    -1,    10,     9,    24,    11,    12,
      -1,    18,    19,    18,    19,     9,    19,    11,    12,    -1,
      -1,    24,     7,     8,     9,    19,    11,    12,    -1,    -1,
      24,    -1,    -1,    18,    19,     7,     8,     9,    -1,    11,
      12,     7,     8,     9,    -1,    11,    12,    19,    -1,    -1,
       7,     8,     9,    19,    11,    12,     7,     8,     9,    -1,
      11,    12,    19,    -1,    -1,     7,     8,     9,    19,    11,
      12,     7,     8,     9,    -1,    11,    12,    19,    -1,    -1,
       7,     8,     9,    19,    11,    12,     7,     8,     9,    -1,
      11,    12,    19,    -1,    -1,     7,     8,     9,    19,    11,
      12,     7,     8,     9,    -1,    11,    12,    19,    -1,    -1,
       7,     8,     9,    19,    11,    12,     7,     8,     9,    -1,
      11,    12,    19,    -1,    -1,     7,    -1,     9,    19,    11,
      12,     7,    -1,     9,    -1,    11,    12,    19,     9,    -1,
      11,    12,    -1,    19,     0,     1,     0,     1,    19,     5,
       6,     5,     6,     0,     1,     0,     1,    -1,     5,     6,
       5,     6,     0,     1,     0,     1,    -1,     5,     6,     5,
       6,     0,     1,     0,     1,    -1,     5,     6,     5,     6,
       0,     1,    -1,    -1,    -1,     5,     6
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     5,     6,    26,    27,    28,    29,    30,    31,
       0,    29,     3,    18,    24,    28,    32,     3,    19,    23,
       1,    20,    33,    32,     3,     4,     7,    10,    13,    16,
      17,    18,    28,    30,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      18,    22,     3,    45,    39,    18,    18,    24,    39,    39,
       3,    21,    34,    24,     9,    11,    12,     7,     8,    19,
      39,    36,    36,    39,    39,    24,    19,    41,    41,    42,
      43,    45,    19,    19,    19,    19,    35,    35,    35,    14,
      35,     1,    20,     3,     4,     7,    10,    18,    40,    41,
      42,    43,    44,    45,    46,    48,     3,     4,     7,    10,
      18,    40,    41,    42,    43,    44,    45,    46,    48,    24,
      24,     1,     3,    13,    16,    17,    20,    28,    30,    33,
      36,    37,    38,    39,    47,    34,    18,    45,    39,    39,
       9,    11,    12,     7,     8,    18,    22,     3,    45,    39,
      39,     9,    11,    12,     7,     8,    22,    18,    18,    24,
      39,    34,     3,    24,    21,    19,    39,    19,    41,    41,
      42,    43,    45,    19,    39,     3,    36,    39,    19,    41,
      41,    42,    43,    45,    36,    36,    39,    39,    24,    21,
      24,    19,    19,    19,    19,    19,    35,    35,    35,    14,
      35
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    25,    26,    27,    27,    28,    28,    29,    29,    29,
      30,    31,    32,    32,    32,    33,    33,    34,    34,    35,
      35,    35,    35,    35,    35,    36,    36,    37,    38,    38,
      39,    39,    40,    40,    40,    41,    41,    42,    42,    43,
      43,    44,    44,    45,    45,    45,    45,    46,    46,    47,
      47,    48
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       3,     6,     4,     2,     0,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     5,     5,     7,
       1,     2,     3,     3,     1,     1,     3,     1,     3,     3,
       1,     1,     2,     1,     1,     3,     1,     4,     3,     3,
       2,     1
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
#line 93 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("programa");
        (yyval.ast)->pai = (yyvsp[0].ast);
        raiz = (yyval.ast);
    }
#line 1599 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 101 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("lista De Declaracoes");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        (yyvsp[-1].ast)->filho = (yyvsp[0].ast);
    }
#line 1609 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 106 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1617 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 112 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("INT");
        strcpy((yyval.ast)->tipo, "INT");
        tipo = 0;
    }
#line 1627 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 117 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("VOID");
        strcpy((yyval.ast)->tipo, "VOID");
        printf("dentro do void =+++++++++");
        tipo = 1;
    }
#line 1638 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 126 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1646 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 129 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1654 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 132 "sintatico.y" /* yacc.c:1646  */
    {
        erros++;
    }
#line 1662 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 138 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("Declaracao de Variavel");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        id = insereSimbolo(id, (yyvsp[-1].token).escopo, (yyvsp[-1].token).id, "Variavel", (yyvsp[-2].ast)->tipo, (yyvsp[-1].token).linha, (yyvsp[-1].token).coluna, 0);
        strcpy((yyvsp[-2].ast)->simbolo, (yyvsp[-1].token).id);
        sprintf((yyval.ast)->tableTac, "\t%s %s%d", tiposTac[tipo], (yyvsp[-1].token).id, (yyvsp[-1].token).escopo);
        tipo = 0;
    }
#line 1675 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 149 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("Declaracao de funcao");
        (yyval.ast)->pai = (yyvsp[-5].ast);
        (yyvsp[-5].ast)->filho = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        id = insereSimbolo(id, (yyvsp[-4].token).escopo, (yyvsp[-4].token).id, "Funcao", (yyvsp[-5].ast)->tipo, (yyvsp[-4].token).linha, (yyvsp[-4].token).coluna, 0);
        // printf("\n---tipo = %s linha = %d --- %d\n", $1->tipo, $2.linha, tipo );
        strcpy((yyvsp[-5].ast)->simbolo, (yyvsp[-4].token).id);
        tipo = 0;
    }
#line 1690 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 162 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("Lista de Parametros");
        (yyval.ast)->pai = (yyvsp[-3].ast);
        (yyvsp[-3].ast)->filho = (yyvsp[0].ast);
        id = insereSimbolo(id, (yyvsp[-2].token).escopo, (yyvsp[-2].token).id, "Variavel", tipos[tipo], (yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, 1);
        sprintf((yyval.ast)->tableTac,"\t%s %s%d", tiposTac[tipo], (yyvsp[-2].token).id, (yyvsp[-2].token).escopo+1);
        tipo = 0;
        strcpy((yyvsp[-3].ast)->simbolo, (yyvsp[-2].token).id);
    }
#line 1704 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 171 "sintatico.y" /* yacc.c:1646  */
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
#line 1720 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 182 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("Lista de Parametros vazia");
    }
#line 1728 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 188 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("dentro das chaves");
        (yyval.ast)->pai = (yyvsp[-1].ast);
    }
#line 1737 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 192 "sintatico.y" /* yacc.c:1646  */
    {
        erros++;
    }
#line 1745 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 198 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("declaracoes");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        (yyval.ast)->filho = (yyvsp[0].ast);
    }
#line 1755 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 203 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("declaracoes");
        (yyval.ast)->pai = (yyvsp[0].ast);
    }
#line 1764 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 210 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1772 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 213 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1780 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 216 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1788 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 219 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1796 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 222 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1804 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 225 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1812 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 231 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("expressao");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-1].ast)->tipo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[-1].ast));
        strcpy((yyval.ast)->simbolo, (yyvsp[-1].ast)->simbolo);
    }
#line 1824 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 238 "sintatico.y" /* yacc.c:1646  */
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
#line 1841 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 254 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("while");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
    }
#line 1851 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 262 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("IF");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);

        // sprintf($$->codeTac, "saidaIf%d:\n", qtdIf);
        // sprintf($$->codeTac, "\tbrz ");
        // qtdIf++;
    }
#line 1865 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 271 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("IF-ELSE");
        (yyval.ast)->pai = (yyvsp[-4].ast);
        (yyvsp[-4].ast)->filho = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
    }
#line 1876 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 280 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("exp");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 1887 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 286 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("exp");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 1898 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 294 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("expressaoLogica");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        //strcpy($$->tipo, "INT");
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));        
    }
#line 1910 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 301 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("expressaoLogica");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        //strcpy($$->tipo, "INT");
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
    }
#line 1922 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 308 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("expressaoLogica");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1933 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 317 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("expressaoRelacional");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1944 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 323 "sintatico.y" /* yacc.c:1646  */
    {
        printf("Teste ----");
        (yyval.ast) = criaNo("expressaoRelacional");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-2].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-2].ast)->simbolo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
    }
#line 1958 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 335 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("Operando SomaSub");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1969 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 341 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("Operando SomaSub");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-2].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-2].ast)->simbolo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
        sprintf((yyval.ast)->codeTac, "\tadd %s, %s", (yyvsp[-2].ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 1983 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 353 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("Operando MultDiv");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-2].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-2].ast)->simbolo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
    }
#line 1996 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 361 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2004 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 367 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("expUnaria");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2014 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 372 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("expUnaria");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2024 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 379 "sintatico.y" /* yacc.c:1646  */
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
#line 2039 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 389 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("argumento");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2050 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 395 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("argumento");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-1].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-1].ast)->simbolo);
    }
#line 2061 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 401 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("argumento");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
    }
#line 2071 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 409 "sintatico.y" /* yacc.c:1646  */
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
#line 2086 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 419 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("chamada de funcao");
        TabelaSimbolo* c = procuraVariavel(id, (yyvsp[-2].token).id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Funcao nao declarada!!!\n", (yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).id);
        }else{
            strcpy((yyval.ast)->tipo, c->tipo);
        }
    }
#line 2100 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 432 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("retorno");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        char tipoRetornoC[20] = "";
        strcpy(tipoRetornoC, (yyvsp[-1].ast)->tipo);
    }
#line 2111 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 438 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("retorno");
    }
#line 2119 "sintatico.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 445 "sintatico.y" /* yacc.c:1646  */
    {
        (yyval.ast) = criaNo("Numero");
        strcpy((yyval.ast)->tipo, "INT");
        strcpy((yyval.ast)->simbolo, (yyvsp[0].token).id);
    }
#line 2129 "sintatico.tab.c" /* yacc.c:1646  */
    break;


#line 2133 "sintatico.tab.c" /* yacc.c:1646  */
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
#line 453 "sintatico.y" /* yacc.c:1906  */


// IMPLEMENTAR VOID QUE DEU RUIM
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
