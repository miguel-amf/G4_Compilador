/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30704

/* Bison version string.  */
#define YYBISON_VERSION "3.7.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 5 "sintatico.y"

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
    char tipos[4][10] = {"INT", "FLOAT", "INT LIST", "FLOAT LIST"};
    char tiposTac[4][10] = {"int", "float", "int list", "float list"};
    int tipo = 0;
    extern int escopoL[1000];
    extern int escopoAtual;
    extern int escopo;
    extern char type_symbol[20];
    int qtdString = 0;
    int qtdIf = 0;
    int qtdReg = 0;
    char* intrucaoOp(char* op);

#line 97 "sintatico.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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

#include "sintatico.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_FLOAT = 5,                      /* FLOAT  */
  YYSYMBOL_TIPO_INT = 6,                   /* TIPO_INT  */
  YYSYMBOL_TIPO_FLOAT = 7,                 /* TIPO_FLOAT  */
  YYSYMBOL_TIPO_LIST_INT = 8,              /* TIPO_LIST_INT  */
  YYSYMBOL_TIPO_LIST_FLOAT = 9,            /* TIPO_LIST_FLOAT  */
  YYSYMBOL_OP_B_SOMA_SUB = 10,             /* OP_B_SOMA_SUB  */
  YYSYMBOL_OP_B_MULT_DIV = 11,             /* OP_B_MULT_DIV  */
  YYSYMBOL_OP_LOGICA_AND = 12,             /* OP_LOGICA_AND  */
  YYSYMBOL_OP_LOGICA_NEG = 13,             /* OP_LOGICA_NEG  */
  YYSYMBOL_OP_LOGICA_OR = 14,              /* OP_LOGICA_OR  */
  YYSYMBOL_OP_B_RELACIONAIS = 15,          /* OP_B_RELACIONAIS  */
  YYSYMBOL_IF = 16,                        /* IF  */
  YYSYMBOL_ELSE = 17,                      /* ELSE  */
  YYSYMBOL_THEN = 18,                      /* THEN  */
  YYSYMBOL_FOR = 19,                       /* FOR  */
  YYSYMBOL_RETORNO = 20,                   /* RETORNO  */
  YYSYMBOL_ENTRADA = 21,                   /* ENTRADA  */
  YYSYMBOL_SAIDA = 22,                     /* SAIDA  */
  YYSYMBOL_CONSTRUTOR_LISTA = 23,          /* CONSTRUTOR_LISTA  */
  YYSYMBOL_OP_LISTA = 24,                  /* OP_LISTA  */
  YYSYMBOL_FUNCOES_LISTA = 25,             /* FUNCOES_LISTA  */
  YYSYMBOL_STRING = 26,                    /* STRING  */
  YYSYMBOL_NIL = 27,                       /* NIL  */
  YYSYMBOL_ABRE_PARENTESES = 28,           /* ABRE_PARENTESES  */
  YYSYMBOL_FECHA_PARENTESES = 29,          /* FECHA_PARENTESES  */
  YYSYMBOL_ABRE_CHAVES = 30,               /* ABRE_CHAVES  */
  YYSYMBOL_FECHA_CHAVES = 31,              /* FECHA_CHAVES  */
  YYSYMBOL_ATRIBUICAO = 32,                /* ATRIBUICAO  */
  YYSYMBOL_VIRGULA = 33,                   /* VIRGULA  */
  YYSYMBOL_PONTOVIRGULA = 34,              /* PONTOVIRGULA  */
  YYSYMBOL_COLCHETES = 35,                 /* COLCHETES  */
  YYSYMBOL_YYACCEPT = 36,                  /* $accept  */
  YYSYMBOL_programa = 37,                  /* programa  */
  YYSYMBOL_listaDeDeclaracoes = 38,        /* listaDeDeclaracoes  */
  YYSYMBOL_TIPO = 39,                      /* TIPO  */
  YYSYMBOL_declaracao = 40,                /* declaracao  */
  YYSYMBOL_declaracaoVariavel = 41,        /* declaracaoVariavel  */
  YYSYMBOL_declaracaoFuncao = 42,          /* declaracaoFuncao  */
  YYSYMBOL_listaDeParametros = 43,         /* listaDeParametros  */
  YYSYMBOL_corpo = 44,                     /* corpo  */
  YYSYMBOL_dentroCorpo = 45,               /* dentroCorpo  */
  YYSYMBOL_declaracoes = 46,               /* declaracoes  */
  YYSYMBOL_expressao = 47,                 /* expressao  */
  YYSYMBOL_for = 48,                       /* for  */
  YYSYMBOL_condicional = 49,               /* condicional  */
  YYSYMBOL_exp = 50,                       /* exp  */
  YYSYMBOL_expressaoList = 51,             /* expressaoList  */
  YYSYMBOL_expressao_logica = 52,          /* expressao_logica  */
  YYSYMBOL_expressao_relacional = 53,      /* expressao_relacional  */
  YYSYMBOL_opSomaSub = 54,                 /* opSomaSub  */
  YYSYMBOL_opMultDiv = 55,                 /* opMultDiv  */
  YYSYMBOL_expressao_unaria = 56,          /* expressao_unaria  */
  YYSYMBOL_argumento = 57,                 /* argumento  */
  YYSYMBOL_chamadaDeFuncao = 58,           /* chamadaDeFuncao  */
  YYSYMBOL_entrada = 59,                   /* entrada  */
  YYSYMBOL_saida = 60,                     /* saida  */
  YYSYMBOL_retorno = 61,                   /* retorno  */
  YYSYMBOL_nil = 62,                       /* nil  */
  YYSYMBOL_numero = 63                     /* numero  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3686

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  366

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   290


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   106,   106,   114,   119,   125,   130,   135,   140,   148,
     151,   154,   160,   171,   183,   192,   203,   209,   213,   219,
     224,   231,   234,   237,   240,   243,   246,   249,   252,   258,
     265,   270,   282,   297,   303,   309,   316,   325,   334,   343,
     349,   358,   362,   367,   375,   382,   399,   408,   414,   425,
     431,   440,   452,   460,   466,   471,   478,   488,   494,   500,
     508,   518,   530,   548,   565,   572,   576,   582,   588,   594,
     599,   607,   612
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "INT", "FLOAT",
  "TIPO_INT", "TIPO_FLOAT", "TIPO_LIST_INT", "TIPO_LIST_FLOAT",
  "OP_B_SOMA_SUB", "OP_B_MULT_DIV", "OP_LOGICA_AND", "OP_LOGICA_NEG",
  "OP_LOGICA_OR", "OP_B_RELACIONAIS", "IF", "ELSE", "THEN", "FOR",
  "RETORNO", "ENTRADA", "SAIDA", "CONSTRUTOR_LISTA", "OP_LISTA",
  "FUNCOES_LISTA", "STRING", "NIL", "ABRE_PARENTESES", "FECHA_PARENTESES",
  "ABRE_CHAVES", "FECHA_CHAVES", "ATRIBUICAO", "VIRGULA", "PONTOVIRGULA",
  "COLCHETES", "$accept", "programa", "listaDeDeclaracoes", "TIPO",
  "declaracao", "declaracaoVariavel", "declaracaoFuncao",
  "listaDeParametros", "corpo", "dentroCorpo", "declaracoes", "expressao",
  "for", "condicional", "exp", "expressaoList", "expressao_logica",
  "expressao_relacional", "opSomaSub", "opMultDiv", "expressao_unaria",
  "argumento", "chamadaDeFuncao", "entrada", "saida", "retorno", "nil",
  "numero", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290
};
#endif

#define YYPACT_NINF (-176)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-73)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     673,  3609,    17,    20,    29,    41,    52,  3621,    43,  3625,
    3635,  3639,  -176,  3649,    15,   216,  3653,    44,    45,    87,
       4,   216,  3663,  2840,  3667,    60,  3113,  3244,  3265,     9,
     257,    53,    64,    14,    69,    71,   108,   837,   114,  1817,
    1848,    88,  1879,  1910,  1941,  1972,    73,  2003,   762,   592,
      54,  3271,  3292,  3298,  3319,  2034,  2065,  2096,  3325,   135,
     444,  3238,  3346,   177,   837,   703,  2127,    95,   138,   595,
     113,   120,   131,  3677,   111,   151,   164,  2158,    35,    35,
      35,   366,     9,  3352,   139,   146,   143,  2189,  2220,   163,
    2920,  2251,   172,  3063,   190,   180,   181,  2282,  3373,   171,
     183,  2887,  3486,   599,    35,  3379,  3400,  3406,  2313,  2344,
    2868,   211,   184,   185,    46,   193,   196,  2375,  2406,  3427,
     412,   204,  2437,  2468,   209,  2499,  2530,  2840,    13,  2561,
    2592,    -1,   212,   122,  2840,   220,   221,   224,  2623,  2840,
    2840,  2840,  2654,  2685,  2716,  2747,  2840,  3434,   160,   493,
     128,  3048,   837,    19,   100,   261,  3070,  3095,  3120,  3145,
    3170,  3493,   223,   394,   148,   837,   837,    72,   461,  3418,
    3503,  3513,  3519,  3525,  3535,  3138,   251,   401,  2932,   416,
     230,  2778,  3163,   262,   430,   271,   482,   516,  3188,   236,
     256,    90,   259,   272,   296,  2840,   298,   749,   815,   887,
     918,   949,   520,   980,  1011,  1042,  1073,   274,   277,   278,
     284,   156,  3195,   282,   279,   662,   662,   662,   441,   128,
     203,  3541,   291,   294,   718,   718,   718,  3059,   148,   778,
     297,   327,   330,  2948,   331,   334,   309,   856,   305,   342,
     343,   346,  3213,   329,   354,   325,   338,   345,  2890,   837,
     703,  1104,   341,   379,  2903,   349,   355,   353,   386,   389,
    1135,  2809,  3443,   364,  3455,   446,   578,   268,   662,  3461,
    3468,  3547,   370,  3557,   644,   785,  3591,   718,  3563,  3569,
     376,   377,  2960,  2976,  2988,   380,   393,   403,   404,   383,
     433,   460,   474,   476,   447,   448,   455,   457,   465,   462,
     468,  1166,  1197,   486,  2920,  1228,   487,  3088,   508,   499,
     501,  1259,  1290,  1321,   497,   500,  3476,  3482,  3579,  3585,
    3004,  3016,  3032,  3044,   513,   519,   546,   547,   549,   550,
    1352,  1383,  2868,   553,   523,   524,    56,   526,   527,  1414,
    1445,  1476,   530,  1507,  1538,   544,  1569,  1600,  2868,    47,
    1631,  1662,    26,   576,   176,  2868,   557,   558,   562,  1693,
    2868,  2868,  2868,  1724,  1755,  1786
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -176,  -176,  -176,     0,   589,     3,  -176,   580,   -19,   -40,
     -69,    18,  -104,   -51,    -8,    40,   429,   661,   638,   437,
     518,   348,   419,   -43,   -34,    36,  -175,   -29
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     6,     7,    38,     9,    39,    11,    18,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    88,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       8,    24,    74,    10,   160,    22,   200,     8,   174,   133,
      10,   247,    61,    27,    28,    17,   131,   147,   148,   149,
      -5,    17,    63,    -6,   150,    67,   132,   151,   134,    71,
     174,   215,    -7,   216,    23,   174,   354,    37,    61,    27,
      28,   120,   152,    15,    -8,    29,    14,    19,    66,    16,
     352,    84,    12,   -39,   283,   355,    89,   177,   130,   201,
     353,   179,   292,    37,    81,   138,   -47,   204,   -47,   -47,
     142,   143,   144,   302,    20,   124,   205,   -47,    87,   -47,
     207,    64,   184,    90,   224,   345,   225,    96,   -47,   -14,
     207,   198,    65,   147,   148,   149,    75,    68,    76,    69,
     150,   -39,   202,   151,   137,   178,   210,    77,   111,   180,
     196,    70,   -46,   197,   -46,   217,   -15,    72,   152,    73,
      21,   160,   160,   174,   251,   136,   208,   209,   199,    91,
     185,   147,   148,   149,   -46,   174,   174,   174,   161,   162,
     163,    92,   -19,   213,   214,   164,   206,    97,   165,    98,
     203,   161,   162,   163,    99,   256,   152,   222,   223,   161,
     162,   163,   160,   166,    83,   181,   164,   100,   107,   165,
     -71,   -71,   -71,   108,   -71,   -71,   166,   109,   179,   357,
     208,   209,   174,   252,   166,   262,   160,   160,   160,   160,
     160,   174,   110,   114,   -71,   174,   174,   174,   174,   174,
     -40,   112,   -40,   263,   246,   117,   161,   162,   163,   115,
     116,   -40,   272,   164,   121,   135,   165,   118,   122,   123,
     174,   177,     2,     3,     4,     5,   180,   125,   200,   184,
     126,   166,   271,   -71,   -71,   -71,   128,   -71,   -71,   160,
     202,   303,   177,   129,   200,   -16,   179,   282,   174,   139,
     140,   200,   -71,   141,   230,   291,   200,   200,   200,   -30,
      61,    27,    28,   341,   249,   238,   301,    29,   304,   178,
      30,   218,   310,   -47,   -30,   -47,   -47,   185,   218,   351,
     -48,   201,   -48,   -48,   250,    37,   359,   253,   203,   204,
     178,   363,   364,   365,   180,   -47,   184,   201,   205,   255,
     254,   257,   -48,   -41,   201,   204,   -71,   -72,   264,   201,
     201,   201,   204,   198,   205,   261,   -40,   204,   204,   204,
     -40,   205,   333,   273,   202,   358,   205,   205,   205,   198,
     285,   284,   196,   286,   287,   197,   198,   288,   -29,   293,
     202,   198,   198,   198,   185,   294,   295,   202,   196,   -29,
     199,   197,   202,   202,   202,   196,   296,   297,   197,   298,
     196,   196,   196,   197,   197,   197,   199,   -31,   206,    61,
      27,    28,   203,   199,   -32,   305,    29,    62,   199,   199,
     199,   158,   306,   311,   206,   172,   312,   313,   203,   314,
     104,   206,   315,   316,    37,   203,   206,   206,   206,   318,
     203,   203,   203,   320,   -72,   -72,   -72,   172,   -72,   -72,
     326,   321,   172,   -37,   322,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -72,   231,   -37,   232,   323,   -37,   127,
     106,   -37,   -37,   -37,   -37,   233,   -37,   324,   325,   234,
     -37,   235,   -37,   -37,   147,   148,   149,    26,    27,    28,
     236,   150,   159,   239,    29,   240,   173,    30,   -45,    85,
     -45,   217,   153,   -31,   241,   268,   167,   327,    36,   152,
     156,    86,    37,   -46,   170,   -46,   226,   -32,   173,   -41,
     -45,   328,   329,   173,   -70,   242,    27,    28,   167,   330,
     -46,   207,    29,   167,   -69,    30,   170,   243,   212,   158,
     172,   170,   331,   -72,   -72,   -72,   244,   -72,   -72,   245,
      37,   336,   221,   172,   172,   332,   334,   -18,   105,   -18,
     -18,   -18,   -18,   -18,   -18,   -18,   -18,   -72,   337,   -18,
     338,   339,   -18,   -18,   340,   -18,   -18,   -18,   -18,   158,
     -18,   119,   -42,   258,   -18,   259,   -18,   -18,   -43,   -70,
     -69,   157,   -42,   -43,   260,   171,   342,   343,   344,   172,
     346,   347,   349,   158,   158,   158,   158,   270,   172,   159,
     159,   173,   172,   172,   172,   172,   279,   171,   350,   356,
     153,   167,   171,   173,   173,   173,   360,   361,   156,   170,
     -44,   362,   -44,   217,   167,   167,    13,   172,    93,    27,
      28,    25,   170,   170,   -46,    29,   -46,    80,    30,    81,
     159,   -48,   -44,   -48,   -48,   -46,   158,   -46,     0,    94,
     153,    95,   -48,    37,   -48,   172,   -46,     0,   156,     0,
     173,     0,     0,   -48,   159,   159,   159,   159,   159,   173,
     167,     0,     0,   173,   173,   173,   173,   173,   170,   167,
       0,     0,   156,   156,   156,   269,   -45,   170,   -45,   226,
       0,   170,   170,   170,   278,   147,   148,   149,   173,   157,
     171,   155,   150,   -45,     1,   169,     0,     0,   167,     2,
       3,     4,     5,   171,   171,     0,   170,   159,     0,     0,
     152,     0,     0,     0,   154,     0,   173,   169,   168,     0,
       0,     0,   169,     0,     0,   317,   175,    27,    28,   157,
       0,     0,     0,    29,   319,     0,    30,     0,   103,     0,
     168,   161,   162,   163,     0,   168,     0,   176,   164,   171,
       0,    37,     0,   157,   157,   157,   157,     0,   171,   101,
     102,     0,   171,   171,   171,   171,   166,     0,     0,     0,
     -22,     0,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
       0,     0,   -22,     0,     0,   -22,   -22,   171,   -22,   -22,
     -22,   -22,     0,   -22,    78,     0,    79,   -22,     0,   -22,
     -22,   175,    27,    28,     0,   -39,   157,   -39,    29,   155,
     169,    30,     0,   280,     0,   171,   -39,   -44,     0,   -44,
     226,     0,   176,   169,   169,   281,    37,     0,     0,     0,
       0,     0,   154,   168,   -44,     0,   -21,     0,   -21,   -21,
     -21,   -21,   -21,   -21,   -21,   -21,   168,   168,   -21,   155,
       0,   -21,   -21,     0,   -21,   -21,   -21,   -21,     0,   -21,
     161,   162,   163,   -21,     0,   -21,   -21,   164,     0,   169,
     165,     0,   154,   155,   155,   267,     0,     0,   169,   182,
      27,    28,   169,   169,   276,   166,    29,     0,     0,    30,
       0,   289,   168,     0,     0,     0,   265,   266,     0,     0,
     183,   168,     0,   290,    37,   274,   275,   169,   -23,     0,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,     0,     0,
     -23,     0,     0,   -23,   -23,     0,   -23,   -23,   -23,   -23,
     168,   -23,     0,     0,     0,   -23,     0,   -23,   -23,   -27,
       0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,
       0,   -27,     0,     0,   -27,   -27,     0,   -27,   -27,   -27,
     -27,     0,   -27,     0,     0,     0,   -27,     0,   -27,   -27,
     -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
       0,     0,   -28,     0,     0,   -28,   -28,     0,   -28,   -28,
     -28,   -28,     0,   -28,     0,     0,     0,   -28,     0,   -28,
     -28,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,     0,     0,   -30,     0,     0,   -30,   -30,     0,   -30,
     -30,   -30,   -30,     0,   -30,     0,     0,     0,   -30,     0,
     -30,   -30,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,     0,     0,   -24,     0,     0,   -24,   -24,     0,
     -24,   -24,   -24,   -24,     0,   -24,     0,     0,     0,   -24,
       0,   -24,   -24,   -26,     0,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,     0,     0,   -26,     0,     0,   -26,   -26,
       0,   -26,   -26,   -26,   -26,     0,   -26,     0,     0,     0,
     -26,     0,   -26,   -26,   -25,     0,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,     0,     0,   -25,     0,     0,   -25,
     -25,     0,   -25,   -25,   -25,   -25,     0,   -25,     0,     0,
       0,   -25,     0,   -25,   -25,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,     0,     0,   -68,     0,     0,
     -68,   -68,     0,   -68,   -68,   -68,   -68,     0,   -68,     0,
       0,     0,   -68,     0,   -68,   -68,   -29,     0,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,     0,     0,   -29,     0,
       0,   -29,   -29,     0,   -29,   -29,   -29,   -29,     0,   -29,
       0,     0,     0,   -29,     0,   -29,   -29,   -31,     0,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,   -31,
       0,     0,   -31,   -31,     0,   -31,   -31,   -31,   -31,     0,
     -31,     0,     0,     0,   -31,     0,   -31,   -31,   -32,     0,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,
     -32,     0,     0,   -32,   -32,     0,   -32,   -32,   -32,   -32,
       0,   -32,     0,     0,     0,   -32,     0,   -32,   -32,   -67,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,
       0,   -67,     0,     0,   -67,   -67,     0,   -67,   -67,   -67,
     -67,     0,   -67,     0,     0,     0,   -67,     0,   -67,   -67,
     -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
       0,     0,   -41,     0,     0,   -41,   -41,     0,   -41,   -41,
     -41,   -41,     0,   -41,     0,     0,     0,   -41,     0,   -41,
     -41,   -17,     0,   -17,   -17,   -17,   -17,   -17,   -17,   -17,
     -17,     0,     0,   -17,     0,     0,   -17,   -17,     0,   -17,
     -17,   -17,   -17,     0,   -17,     0,     0,     0,   -17,     0,
     -17,   -17,   -12,     0,   -12,   -12,   -12,   -12,   -12,   -12,
     -12,   -12,     0,     0,   -12,     0,     0,   -12,   -12,     0,
     -12,   -12,   -12,   -12,     0,   -12,     0,     0,     0,   -12,
       0,   -12,   -12,   -70,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,   -70,     0,     0,   -70,   -70,
       0,   -70,   -70,   -70,   -70,     0,   -70,     0,     0,     0,
     -70,     0,   -70,   -70,   -69,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,     0,     0,   -69,     0,     0,   -69,
     -69,     0,   -69,   -69,   -69,   -69,     0,   -69,     0,     0,
       0,   -69,     0,   -69,   -69,   -42,     0,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,     0,     0,   -42,     0,     0,
     -42,   -42,     0,   -42,   -42,   -42,   -42,     0,   -42,     0,
       0,     0,   -42,     0,   -42,   -42,   -43,     0,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,     0,     0,   -43,     0,
       0,   -43,   -43,     0,   -43,   -43,   -43,   -43,     0,   -43,
       0,     0,     0,   -43,     0,   -43,   -43,   -37,     0,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,   -37,
       0,     0,   -37,   348,     0,   -37,   -37,   -37,   -37,     0,
     -37,     0,     0,     0,   -37,     0,   -37,   -37,   -62,     0,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,
     -62,     0,     0,   -62,   -62,     0,   -62,   -62,   -62,   -62,
       0,   -62,     0,     0,     0,   -62,     0,   -62,   -62,   -64,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
       0,   -64,     0,     0,   -64,   -64,     0,   -64,   -64,   -64,
     -64,     0,   -64,     0,     0,     0,   -64,     0,   -64,   -64,
     -63,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
       0,     0,   -63,     0,     0,   -63,   -63,     0,   -63,   -63,
     -63,   -63,     0,   -63,     0,     0,     0,   -63,     0,   -63,
     -63,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,     0,     0,   -65,     0,     0,   -65,   -65,     0,   -65,
     -65,   -65,   -65,     0,   -65,     0,     0,     0,   -65,     0,
     -65,   -65,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,     0,   -66,     0,     0,   -66,   -66,     0,
     -66,   -66,   -66,   -66,     0,   -66,     0,     0,     0,   -66,
       0,   -66,   -66,   -38,     0,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,     0,     0,   -38,     0,     0,   -38,   -38,
       0,   -38,   -38,   -38,   -38,     0,   -38,     0,     0,     0,
     -38,     0,   -38,   -38,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,     0,     0,   -33,     0,     0,   -33,
     -33,     0,   -33,   -33,   -33,   -33,     0,   -33,     0,     0,
       0,   -33,     0,   -33,   -33,   -36,     0,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,     0,     0,   -36,     0,     0,
     -36,   -36,     0,   -36,   -36,   -36,   -36,     0,   -36,     0,
       0,     0,   -36,     0,   -36,   -36,   -34,     0,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,     0,     0,   -34,     0,
       0,   -34,   -34,     0,   -34,   -34,   -34,   -34,     0,   -34,
       0,     0,     0,   -34,     0,   -34,   -34,   -35,     0,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,   -35,
       0,     0,   -35,   -35,     0,   -35,   -35,   -35,   -35,     0,
     -35,     0,     0,     0,   -35,     0,   -35,   -35,   -22,     0,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,
     -22,     0,     0,   -22,     0,     0,   -22,   -22,   -22,   -22,
       0,   -22,     0,     0,     0,   -22,     0,   -22,   -22,   -21,
       0,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,     0,
       0,   -21,     0,     0,   -21,     0,     0,   -21,   -21,   -21,
     -21,     0,   -21,     0,     0,     0,   -21,     0,   -21,   -21,
     145,     0,    26,    27,    28,     2,     3,     4,     5,    29,
       0,     0,    30,     0,     0,    31,     0,     0,    32,    33,
      34,    35,     0,    36,     0,     0,     0,    37,     0,   146,
     -20,   -23,     0,   -23,   -23,   -23,   -23,   -23,   -23,   -23,
     -23,     0,     0,   -23,     0,     0,   -23,     0,     0,   -23,
     -23,   -23,   -23,     0,   -23,     0,     0,     0,   -23,     0,
     -23,   -23,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,     0,     0,   -27,     0,     0,   -27,     0,     0,
     -27,   -27,   -27,   -27,     0,   -27,     0,     0,     0,   -27,
       0,   -27,   -27,   -28,     0,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,     0,     0,   -28,     0,     0,   -28,     0,
       0,   -28,   -28,   -28,   -28,     0,   -28,     0,     0,     0,
     -28,     0,   -28,   -28,   -30,     0,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,     0,     0,   -30,     0,     0,   -30,
       0,     0,   -30,   -30,   -30,   -30,     0,   -30,     0,     0,
       0,   -30,     0,   -30,   -30,   -24,     0,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,     0,     0,   -24,     0,     0,
     -24,     0,     0,   -24,   -24,   -24,   -24,     0,   -24,     0,
       0,     0,   -24,     0,   -24,   -24,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,     0,     0,   -26,     0,
       0,   -26,     0,     0,   -26,   -26,   -26,   -26,     0,   -26,
       0,     0,     0,   -26,     0,   -26,   -26,   -25,     0,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,     0,     0,   -25,
       0,     0,   -25,     0,     0,   -25,   -25,   -25,   -25,     0,
     -25,     0,     0,     0,   -25,     0,   -25,   -25,   -68,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,
     -68,     0,     0,   -68,     0,     0,   -68,   -68,   -68,   -68,
       0,   -68,     0,     0,     0,   -68,     0,   -68,   -68,   -29,
       0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,
       0,   -29,     0,     0,   -29,     0,     0,   -29,   -29,   -29,
     -29,     0,   -29,     0,     0,     0,   -29,     0,   -29,   -29,
     -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
       0,     0,   -31,     0,     0,   -31,     0,     0,   -31,   -31,
     -31,   -31,     0,   -31,     0,     0,     0,   -31,     0,   -31,
     -31,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,     0,     0,   -32,     0,     0,   -32,     0,     0,   -32,
     -32,   -32,   -32,     0,   -32,     0,     0,     0,   -32,     0,
     -32,   -32,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,   -67,     0,     0,   -67,     0,     0,
     -67,   -67,   -67,   -67,     0,   -67,     0,     0,     0,   -67,
       0,   -67,   -67,   -41,     0,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,     0,     0,   -41,     0,     0,   -41,     0,
       0,   -41,   -41,   -41,   -41,     0,   -41,     0,     0,     0,
     -41,     0,   -41,   -41,   -70,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,     0,     0,   -70,     0,     0,   -70,
       0,     0,   -70,   -70,   -70,   -70,     0,   -70,     0,     0,
       0,   -70,     0,   -70,   -70,   -69,     0,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,     0,     0,   -69,     0,     0,
     -69,     0,     0,   -69,   -69,   -69,   -69,     0,   -69,     0,
       0,     0,   -69,     0,   -69,   -69,   -42,     0,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,     0,     0,   -42,     0,
       0,   -42,     0,     0,   -42,   -42,   -42,   -42,     0,   -42,
       0,     0,     0,   -42,     0,   -42,   -42,   -43,     0,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,     0,   -43,
       0,     0,   -43,     0,     0,   -43,   -43,   -43,   -43,     0,
     -43,     0,     0,     0,   -43,     0,   -43,   -43,   -62,     0,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,
     -62,     0,     0,   -62,     0,     0,   -62,   -62,   -62,   -62,
       0,   -62,     0,     0,     0,   -62,     0,   -62,   -62,   -64,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
       0,   -64,     0,     0,   -64,     0,     0,   -64,   -64,   -64,
     -64,     0,   -64,     0,     0,     0,   -64,     0,   -64,   -64,
     -63,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
       0,     0,   -63,     0,     0,   -63,     0,     0,   -63,   -63,
     -63,   -63,     0,   -63,     0,     0,     0,   -63,     0,   -63,
     -63,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,     0,     0,   -65,     0,     0,   -65,     0,     0,   -65,
     -65,   -65,   -65,     0,   -65,     0,     0,     0,   -65,     0,
     -65,   -65,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,     0,   -66,     0,     0,   -66,     0,     0,
     -66,   -66,   -66,   -66,     0,   -66,     0,     0,     0,   -66,
       0,   -66,   -66,   -38,     0,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,     0,     0,   -38,     0,     0,   -38,     0,
       0,   -38,   -38,   -38,   -38,     0,   -38,     0,     0,     0,
     -38,     0,   -38,   -38,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,     0,     0,   -33,     0,     0,   -33,
       0,     0,   -33,   -33,   -33,   -33,     0,   -33,     0,     0,
       0,   -33,     0,   -33,   -33,   -36,     0,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,     0,     0,   -36,     0,     0,
     -36,     0,     0,   -36,   -36,   -36,   -36,     0,   -36,     0,
       0,     0,   -36,     0,   -36,   -36,   -34,     0,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,     0,     0,   -34,     0,
       0,   -34,     0,     0,   -34,   -34,   -34,   -34,     0,   -34,
       0,     0,     0,   -34,     0,   -34,   -34,   -35,     0,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,   -35,
       0,     0,   -35,     0,     0,   -35,   -35,   -35,   -35,     0,
     -35,     0,     0,     0,   -35,     0,   -35,   -35,   -18,     0,
     -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,     0,     0,
     -18,     0,     0,   -18,     0,     0,   -18,   -18,   -18,   -18,
       0,   -18,     0,     0,     0,   -18,     0,   -18,   -18,   -12,
       0,   -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,     0,
       0,   -12,     0,     0,   -12,     0,     0,   -12,   -12,   -12,
     -12,     0,   -12,     0,     0,     0,   -12,     0,   -12,   -12,
     -17,     0,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,
       0,     0,   -17,     0,     0,   -17,     0,     0,   -17,   -17,
     -17,   -17,     0,   -17,     0,     0,     0,   -17,     0,   -17,
     -17,   145,     0,    26,    27,    28,     2,     3,     4,     5,
      29,     0,     0,    30,     0,     0,    31,     0,     0,    32,
      33,    34,    35,     0,    36,     0,     0,     0,    37,   187,
     146,   188,    27,    28,     2,     3,     4,     5,    29,     0,
       0,    30,     0,     0,   189,     0,     0,   190,   191,   192,
     193,     0,   194,   188,    27,    28,    37,     0,   195,   -45,
      29,   -45,    80,    30,     0,   299,   307,    27,    28,     0,
     -45,     0,   -45,    29,   194,     0,    30,   300,    37,     0,
       0,   -45,     0,   182,    27,    28,     0,   308,     0,   309,
      29,    37,     0,    30,     0,   -30,   -30,   -30,     0,     0,
       0,     0,   -30,     0,   183,   -30,     0,     0,    37,     0,
       0,   -29,   -29,   -29,     0,     0,   -30,     0,   -29,     0,
     -30,   -29,     0,   -31,   -31,   -31,     0,     0,     0,     0,
     -31,     0,   -29,   -31,     0,     0,   -29,     0,     0,   -32,
     -32,   -32,     0,     0,   -31,     0,   -32,     0,   -31,   -32,
       0,   -41,   -41,   -41,     0,     0,     0,     0,   -41,     0,
     -32,   -41,     0,     0,   -32,     0,     0,   -70,   -70,   -70,
       0,     0,   -41,     0,   -70,     0,   -41,   -70,     0,   -69,
     -69,   -69,     0,     0,     0,     0,   -69,     0,   -70,   -69,
       0,     0,   -70,     0,     0,   -42,   -42,   -42,     0,     0,
     -69,     0,   -42,     0,   -69,   -42,     0,   -43,   -43,   -43,
       0,   147,   148,   149,   -43,     0,   -42,   -43,   150,     0,
     -42,   151,   161,   162,   163,     0,     0,     0,   -43,   164,
       0,     0,   -43,   -56,   -56,   -56,   152,   -56,   -56,     0,
     -49,   219,   -49,   277,   -49,   -49,   -56,   166,   -56,     0,
       0,    59,   113,     0,     0,   186,     0,   -56,   -56,   -56,
     -56,     0,   -56,   -56,   -49,   -53,   -53,   -53,     0,   -53,
     -53,   -56,     0,   -56,     0,     0,    59,   335,     0,     0,
     186,     0,   -56,   -56,   -56,   -56,     0,   -56,   -56,   -53,
     -54,   -54,   -54,     0,   -54,   -54,   -56,     0,   -56,     0,
       0,    59,     0,     0,     0,    60,     0,   -56,   -56,   -56,
     -56,     0,   -56,   -56,   -54,   -59,   -59,   -59,     0,   -59,
     -59,   -56,     0,   -56,     0,     0,    59,     0,     0,     0,
     229,     0,   -56,   -56,   -56,   -56,     0,   -56,   -56,   -59,
     -57,   -57,   -57,     0,   -57,   -57,   -56,     0,   -56,     0,
       0,    59,     0,     0,     0,   237,     0,   -56,   -56,   -56,
     -56,     0,   -56,   -56,   -57,   -55,   -55,   -55,     0,   -55,
     -55,   -56,     0,   -56,     0,     0,    59,     0,     0,     0,
     248,     0,   -56,   -56,   -56,   -56,     0,   -56,   -56,   -55,
       0,     0,     0,     0,     0,     0,   -56,     0,   -56,     0,
       0,    59,     0,     0,     0,   186,     0,   -56,   -56,   -56,
     -56,     0,   -56,   -56,   -71,   -71,   -71,     0,   -71,   -71,
       0,   -56,     0,   -56,     0,     0,    59,   -71,     0,   -71,
       0,     0,   -56,     0,     0,   -72,   -72,   -72,   -71,   -72,
     -72,   -49,    82,   -49,     0,   -49,   -49,     0,   -72,     0,
     -72,     0,     0,     0,   -49,     0,   -49,     0,     0,   -72,
       0,     0,   -53,   -53,   -53,   -49,   -53,   -53,   -54,   -54,
     -54,     0,   -54,   -54,     0,   -53,     0,   -53,     0,     0,
       0,   -54,     0,   -54,     0,     0,   -53,     0,     0,   -59,
     -59,   -59,   -54,   -59,   -59,   -57,   -57,   -57,     0,   -57,
     -57,     0,   -59,     0,   -59,     0,     0,     0,   -57,     0,
     -57,     0,     0,   -59,     0,     0,   -55,   -55,   -55,   -57,
     -55,   -55,   -61,   -61,   -61,     0,   -61,   -61,     0,   -55,
       0,   -55,     0,     0,     0,   -61,     0,   -61,     0,     0,
     -55,     0,     0,   -58,   -58,   -58,   -61,   -58,   -58,   -50,
      82,   -50,     0,   -50,   -50,     0,   -58,     0,   -58,     0,
       0,     0,   -50,     0,   -50,     0,     0,   -58,     0,     0,
     -52,   -52,   -52,   -50,   -52,   -52,   -60,   -60,   -60,     0,
     -60,   -60,     0,   -52,     0,   -52,     0,     0,   227,   -60,
     -47,   -60,   -47,   -47,   -52,     0,     0,   -51,    82,   -51,
     -60,   -51,   -51,     0,   -56,   -56,   -56,   -47,   -56,   -56,
     -51,     0,   -51,   -61,   -61,   -61,     0,   -61,   -61,     0,
       0,   -51,   211,     0,     0,   -58,   -58,   -58,   -56,   -58,
     -58,   -50,   219,   -50,     0,   -50,   -50,   -61,   -52,   -52,
     -52,     0,   -52,   -52,     0,     0,   -60,   -60,   -60,   -58,
     -60,   -60,   -51,   219,   -51,   -50,   -51,   -51,   -44,     0,
     -44,    80,   -52,   -56,   -56,   -56,     0,   -56,   -56,   -44,
     -60,   -44,     0,   -49,   228,   -49,   -51,   -49,   -49,     0,
     -44,   220,   -56,   -53,   -53,   -53,     0,   -53,   -53,   -54,
     -54,   -54,   -49,   -54,   -54,   -59,   -59,   -59,     0,   -59,
     -59,     0,   -53,     0,     0,   -57,   -57,   -57,   -54,   -57,
     -57,   -55,   -55,   -55,   -59,   -55,   -55,   -61,   -61,   -61,
       0,   -61,   -61,     0,   -57,     0,     0,   -58,   -58,   -58,
     -55,   -58,   -58,   -50,   228,   -50,   -61,   -50,   -50,   -52,
     -52,   -52,     0,   -52,   -52,     0,   -58,     0,     0,   -60,
     -60,   -60,   -50,   -60,   -60,   -51,   228,   -51,   -52,   -51,
     -51,   227,     0,   -48,     0,   -48,   -48,     0,   -60,   -11,
     -11,     0,     0,     0,   -51,   -11,   -11,   -11,   -11,     0,
     -48,    -2,     1,     0,     0,    -4,    -4,     2,     3,     4,
       5,    -4,    -4,    -4,    -4,    -9,    -9,     0,     0,   -10,
     -10,    -9,    -9,    -9,    -9,   -10,   -10,   -10,   -10,    -3,
      -3,     0,     0,   -12,   -12,    -3,    -3,    -3,    -3,   -12,
     -12,   -12,   -12,   -18,   -18,     0,     0,   -13,   -13,   -18,
     -18,   -18,   -18,   -13,   -13,   -13,   -13,   -17,   -17,     0,
       0,     0,     0,   -17,   -17,   -17,   -17
};

static const yytype_int16 yycheck[] =
{
       0,    20,    42,     0,    33,     1,   110,     7,    37,    10,
       7,   186,     3,     4,     5,    15,     3,     3,     4,     5,
       3,    21,    30,     3,    10,    33,    13,    13,    29,    37,
      59,    12,     3,    14,    30,    64,    10,    28,     3,     4,
       5,   110,    28,    28,     3,    10,     3,     3,    34,    34,
       3,    59,     0,    34,   229,    29,    64,    65,   127,   110,
      13,    69,   237,    28,    10,   134,    12,   110,    14,    15,
     139,   140,   141,   248,    29,    29,   110,    23,    60,    25,
      34,    28,    90,    65,    12,    29,    14,    69,    34,    29,
      34,   110,    28,     3,     4,     5,    23,    28,    25,    28,
      10,    29,   110,    13,   133,    65,   146,    34,    90,    69,
     110,     3,    12,   110,    14,    15,    29,     3,    28,    31,
      33,   150,   151,   152,    34,     3,     4,     5,   110,    34,
      90,     3,     4,     5,    34,   164,   165,   166,     3,     4,
       5,     3,    31,   151,   152,    10,   110,    34,    13,    29,
     110,     3,     4,     5,     3,   195,    28,   165,   166,     3,
       4,     5,   191,    28,    29,    34,    10,     3,    29,    13,
      10,    11,    12,    27,    14,    15,    28,    34,   186,     3,
       4,     5,   211,   191,    28,    29,   215,   216,   217,   218,
     219,   220,    29,     3,    34,   224,   225,   226,   227,   228,
      23,    29,    25,   211,   186,    34,     3,     4,     5,    29,
      29,    34,   220,    10,     3,     3,    13,    34,    34,    34,
     249,   229,     6,     7,     8,     9,   186,    34,   332,   237,
      34,    28,    29,    10,    11,    12,    32,    14,    15,   268,
     248,   249,   250,    34,   348,    29,   254,   229,   277,    29,
      29,   355,    29,    29,     3,   237,   360,   361,   362,    29,
       3,     4,     5,   332,    28,     3,   248,    10,   250,   229,
      13,    10,   254,    12,     3,    14,    15,   237,    10,   348,
      12,   332,    14,    15,    28,    28,   355,    28,   248,   332,
     250,   360,   361,   362,   254,    34,   304,   348,   332,     3,
      28,     3,    34,    29,   355,   348,    29,    29,    29,   360,
     361,   362,   355,   332,   348,    31,    34,   360,   361,   362,
      29,   355,   304,    29,   332,   354,   360,   361,   362,   348,
       3,    34,   332,     3,     3,   332,   355,     3,    29,    34,
     348,   360,   361,   362,   304,     3,     3,   355,   348,     3,
     332,   348,   360,   361,   362,   355,    27,     3,   355,    34,
     360,   361,   362,   360,   361,   362,   348,    29,   332,     3,
       4,     5,   332,   355,    29,    34,    10,    29,   360,   361,
     362,    33,     3,    34,   348,    37,    31,    34,   348,     3,
      24,   355,     3,    29,    28,   355,   360,   361,   362,    29,
     360,   361,   362,    27,    10,    11,    12,    59,    14,    15,
      27,    34,    64,     1,    34,     3,     4,     5,     6,     7,
       8,     9,    10,    29,    23,    13,    25,    34,    16,    17,
      82,    19,    20,    21,    22,    34,    24,    34,    34,    23,
      28,    25,    30,    31,     3,     4,     5,     3,     4,     5,
      34,    10,    33,    23,    10,    25,    37,    13,    12,    15,
      14,    15,    33,     3,    34,    24,    37,    34,    24,    28,
      33,    27,    28,    12,    37,    14,    15,     3,    59,     3,
      34,    34,    34,    64,    29,     3,     4,     5,    59,    27,
      29,    34,    10,    64,    29,    13,    59,    15,   150,   151,
     152,    64,    34,    10,    11,    12,    24,    14,    15,    27,
      28,     3,   164,   165,   166,    29,    29,     1,    81,     3,
       4,     5,     6,     7,     8,     9,    10,    34,    29,    13,
      29,    34,    16,    17,    34,    19,    20,    21,    22,   191,
      24,   104,    29,    23,    28,    25,    30,    31,    29,     3,
       3,    33,     3,     3,    34,    37,     3,    34,    34,   211,
      34,    34,    32,   215,   216,   217,   218,   219,   220,   150,
     151,   152,   224,   225,   226,   227,   228,    59,    34,     3,
     151,   152,    64,   164,   165,   166,    29,    29,   151,   152,
      12,    29,    14,    15,   165,   166,     7,   249,     3,     4,
       5,    21,   165,   166,    12,    10,    14,    15,    13,    10,
     191,    12,    34,    14,    15,    23,   268,    25,    -1,    24,
     191,    26,    23,    28,    25,   277,    34,    -1,   191,    -1,
     211,    -1,    -1,    34,   215,   216,   217,   218,   219,   220,
     211,    -1,    -1,   224,   225,   226,   227,   228,   211,   220,
      -1,    -1,   215,   216,   217,   218,    12,   220,    14,    15,
      -1,   224,   225,   226,   227,     3,     4,     5,   249,   151,
     152,    33,    10,    29,     1,    37,    -1,    -1,   249,     6,
       7,     8,     9,   165,   166,    -1,   249,   268,    -1,    -1,
      28,    -1,    -1,    -1,    33,    -1,   277,    59,    37,    -1,
      -1,    -1,    64,    -1,    -1,   268,     3,     4,     5,   191,
      -1,    -1,    -1,    10,   277,    -1,    13,    -1,    80,    -1,
      59,     3,     4,     5,    -1,    64,    -1,    24,    10,   211,
      -1,    28,    -1,   215,   216,   217,   218,    -1,   220,    78,
      79,    -1,   224,   225,   226,   227,    28,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    13,    -1,    -1,    16,    17,   249,    19,    20,
      21,    22,    -1,    24,    12,    -1,    14,    28,    -1,    30,
      31,     3,     4,     5,    -1,    23,   268,    25,    10,   151,
     152,    13,    -1,    15,    -1,   277,    34,    12,    -1,    14,
      15,    -1,    24,   165,   166,    27,    28,    -1,    -1,    -1,
      -1,    -1,   151,   152,    29,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,   165,   166,    13,   191,
      -1,    16,    17,    -1,    19,    20,    21,    22,    -1,    24,
       3,     4,     5,    28,    -1,    30,    31,    10,    -1,   211,
      13,    -1,   191,   215,   216,   217,    -1,    -1,   220,     3,
       4,     5,   224,   225,   226,    28,    10,    -1,    -1,    13,
      -1,    15,   211,    -1,    -1,    -1,   215,   216,    -1,    -1,
      24,   220,    -1,    27,    28,   224,   225,   249,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      13,    -1,    -1,    16,    17,    -1,    19,    20,    21,    22,
     249,    24,    -1,    -1,    -1,    28,    -1,    30,    31,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    13,    -1,    -1,    16,    17,    -1,    19,    20,    21,
      22,    -1,    24,    -1,    -1,    -1,    28,    -1,    30,    31,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    13,    -1,    -1,    16,    17,    -1,    19,    20,
      21,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,    30,
      31,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    13,    -1,    -1,    16,    17,    -1,    19,
      20,    21,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,
      30,    31,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    13,    -1,    -1,    16,    17,    -1,
      19,    20,    21,    22,    -1,    24,    -1,    -1,    -1,    28,
      -1,    30,    31,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    13,    -1,    -1,    16,    17,
      -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,    -1,
      28,    -1,    30,    31,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    13,    -1,    -1,    16,
      17,    -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,
      -1,    28,    -1,    30,    31,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    13,    -1,    -1,
      16,    17,    -1,    19,    20,    21,    22,    -1,    24,    -1,
      -1,    -1,    28,    -1,    30,    31,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    13,    -1,
      -1,    16,    17,    -1,    19,    20,    21,    22,    -1,    24,
      -1,    -1,    -1,    28,    -1,    30,    31,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    13,
      -1,    -1,    16,    17,    -1,    19,    20,    21,    22,    -1,
      24,    -1,    -1,    -1,    28,    -1,    30,    31,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      13,    -1,    -1,    16,    17,    -1,    19,    20,    21,    22,
      -1,    24,    -1,    -1,    -1,    28,    -1,    30,    31,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    13,    -1,    -1,    16,    17,    -1,    19,    20,    21,
      22,    -1,    24,    -1,    -1,    -1,    28,    -1,    30,    31,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    13,    -1,    -1,    16,    17,    -1,    19,    20,
      21,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,    30,
      31,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    13,    -1,    -1,    16,    17,    -1,    19,
      20,    21,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,
      30,    31,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    13,    -1,    -1,    16,    17,    -1,
      19,    20,    21,    22,    -1,    24,    -1,    -1,    -1,    28,
      -1,    30,    31,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    13,    -1,    -1,    16,    17,
      -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,    -1,
      28,    -1,    30,    31,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    13,    -1,    -1,    16,
      17,    -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,
      -1,    28,    -1,    30,    31,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    13,    -1,    -1,
      16,    17,    -1,    19,    20,    21,    22,    -1,    24,    -1,
      -1,    -1,    28,    -1,    30,    31,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    13,    -1,
      -1,    16,    17,    -1,    19,    20,    21,    22,    -1,    24,
      -1,    -1,    -1,    28,    -1,    30,    31,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    13,
      -1,    -1,    16,    17,    -1,    19,    20,    21,    22,    -1,
      24,    -1,    -1,    -1,    28,    -1,    30,    31,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      13,    -1,    -1,    16,    17,    -1,    19,    20,    21,    22,
      -1,    24,    -1,    -1,    -1,    28,    -1,    30,    31,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    13,    -1,    -1,    16,    17,    -1,    19,    20,    21,
      22,    -1,    24,    -1,    -1,    -1,    28,    -1,    30,    31,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    13,    -1,    -1,    16,    17,    -1,    19,    20,
      21,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,    30,
      31,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    13,    -1,    -1,    16,    17,    -1,    19,
      20,    21,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,
      30,    31,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    13,    -1,    -1,    16,    17,    -1,
      19,    20,    21,    22,    -1,    24,    -1,    -1,    -1,    28,
      -1,    30,    31,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    13,    -1,    -1,    16,    17,
      -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,    -1,
      28,    -1,    30,    31,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    13,    -1,    -1,    16,
      17,    -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,
      -1,    28,    -1,    30,    31,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    13,    -1,    -1,
      16,    17,    -1,    19,    20,    21,    22,    -1,    24,    -1,
      -1,    -1,    28,    -1,    30,    31,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    13,    -1,
      -1,    16,    17,    -1,    19,    20,    21,    22,    -1,    24,
      -1,    -1,    -1,    28,    -1,    30,    31,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    13,
      -1,    -1,    16,    17,    -1,    19,    20,    21,    22,    -1,
      24,    -1,    -1,    -1,    28,    -1,    30,    31,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      13,    -1,    -1,    16,    -1,    -1,    19,    20,    21,    22,
      -1,    24,    -1,    -1,    -1,    28,    -1,    30,    31,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    13,    -1,    -1,    16,    -1,    -1,    19,    20,    21,
      22,    -1,    24,    -1,    -1,    -1,    28,    -1,    30,    31,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    13,    -1,    -1,    16,    -1,    -1,    19,    20,
      21,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,    30,
      31,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    13,    -1,    -1,    16,    -1,    -1,    19,
      20,    21,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,
      30,    31,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    13,    -1,    -1,    16,    -1,    -1,
      19,    20,    21,    22,    -1,    24,    -1,    -1,    -1,    28,
      -1,    30,    31,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    13,    -1,    -1,    16,    -1,
      -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,    -1,
      28,    -1,    30,    31,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    13,    -1,    -1,    16,
      -1,    -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,
      -1,    28,    -1,    30,    31,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    13,    -1,    -1,
      16,    -1,    -1,    19,    20,    21,    22,    -1,    24,    -1,
      -1,    -1,    28,    -1,    30,    31,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    13,    -1,
      -1,    16,    -1,    -1,    19,    20,    21,    22,    -1,    24,
      -1,    -1,    -1,    28,    -1,    30,    31,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    13,
      -1,    -1,    16,    -1,    -1,    19,    20,    21,    22,    -1,
      24,    -1,    -1,    -1,    28,    -1,    30,    31,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      13,    -1,    -1,    16,    -1,    -1,    19,    20,    21,    22,
      -1,    24,    -1,    -1,    -1,    28,    -1,    30,    31,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    13,    -1,    -1,    16,    -1,    -1,    19,    20,    21,
      22,    -1,    24,    -1,    -1,    -1,    28,    -1,    30,    31,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    13,    -1,    -1,    16,    -1,    -1,    19,    20,
      21,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,    30,
      31,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    13,    -1,    -1,    16,    -1,    -1,    19,
      20,    21,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,
      30,    31,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    13,    -1,    -1,    16,    -1,    -1,
      19,    20,    21,    22,    -1,    24,    -1,    -1,    -1,    28,
      -1,    30,    31,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    13,    -1,    -1,    16,    -1,
      -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,    -1,
      28,    -1,    30,    31,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    13,    -1,    -1,    16,
      -1,    -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,
      -1,    28,    -1,    30,    31,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    13,    -1,    -1,
      16,    -1,    -1,    19,    20,    21,    22,    -1,    24,    -1,
      -1,    -1,    28,    -1,    30,    31,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    13,    -1,
      -1,    16,    -1,    -1,    19,    20,    21,    22,    -1,    24,
      -1,    -1,    -1,    28,    -1,    30,    31,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    13,
      -1,    -1,    16,    -1,    -1,    19,    20,    21,    22,    -1,
      24,    -1,    -1,    -1,    28,    -1,    30,    31,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      13,    -1,    -1,    16,    -1,    -1,    19,    20,    21,    22,
      -1,    24,    -1,    -1,    -1,    28,    -1,    30,    31,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    13,    -1,    -1,    16,    -1,    -1,    19,    20,    21,
      22,    -1,    24,    -1,    -1,    -1,    28,    -1,    30,    31,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    13,    -1,    -1,    16,    -1,    -1,    19,    20,
      21,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,    30,
      31,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    13,    -1,    -1,    16,    -1,    -1,    19,
      20,    21,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,
      30,    31,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    13,    -1,    -1,    16,    -1,    -1,
      19,    20,    21,    22,    -1,    24,    -1,    -1,    -1,    28,
      -1,    30,    31,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    13,    -1,    -1,    16,    -1,
      -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,    -1,
      28,    -1,    30,    31,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    13,    -1,    -1,    16,
      -1,    -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,
      -1,    28,    -1,    30,    31,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    13,    -1,    -1,
      16,    -1,    -1,    19,    20,    21,    22,    -1,    24,    -1,
      -1,    -1,    28,    -1,    30,    31,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    13,    -1,
      -1,    16,    -1,    -1,    19,    20,    21,    22,    -1,    24,
      -1,    -1,    -1,    28,    -1,    30,    31,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    13,
      -1,    -1,    16,    -1,    -1,    19,    20,    21,    22,    -1,
      24,    -1,    -1,    -1,    28,    -1,    30,    31,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      13,    -1,    -1,    16,    -1,    -1,    19,    20,    21,    22,
      -1,    24,    -1,    -1,    -1,    28,    -1,    30,    31,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    13,    -1,    -1,    16,    -1,    -1,    19,    20,    21,
      22,    -1,    24,    -1,    -1,    -1,    28,    -1,    30,    31,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    13,    -1,    -1,    16,    -1,    -1,    19,    20,
      21,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,    30,
      31,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    13,    -1,    -1,    16,    -1,    -1,    19,
      20,    21,    22,    -1,    24,    -1,    -1,    -1,    28,     1,
      30,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    13,    -1,    -1,    16,    -1,    -1,    19,    20,    21,
      22,    -1,    24,     3,     4,     5,    28,    -1,    30,    12,
      10,    14,    15,    13,    -1,    15,     3,     4,     5,    -1,
      23,    -1,    25,    10,    24,    -1,    13,    27,    28,    -1,
      -1,    34,    -1,     3,     4,     5,    -1,    24,    -1,    26,
      10,    28,    -1,    13,    -1,     3,     4,     5,    -1,    -1,
      -1,    -1,    10,    -1,    24,    13,    -1,    -1,    28,    -1,
      -1,     3,     4,     5,    -1,    -1,    24,    -1,    10,    -1,
      28,    13,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,
      10,    -1,    24,    13,    -1,    -1,    28,    -1,    -1,     3,
       4,     5,    -1,    -1,    24,    -1,    10,    -1,    28,    13,
      -1,     3,     4,     5,    -1,    -1,    -1,    -1,    10,    -1,
      24,    13,    -1,    -1,    28,    -1,    -1,     3,     4,     5,
      -1,    -1,    24,    -1,    10,    -1,    28,    13,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,    10,    -1,    24,    13,
      -1,    -1,    28,    -1,    -1,     3,     4,     5,    -1,    -1,
      24,    -1,    10,    -1,    28,    13,    -1,     3,     4,     5,
      -1,     3,     4,     5,    10,    -1,    24,    13,    10,    -1,
      28,    13,     3,     4,     5,    -1,    -1,    -1,    24,    10,
      -1,    -1,    28,    10,    11,    12,    28,    14,    15,    -1,
      10,    11,    12,    24,    14,    15,    23,    28,    25,    -1,
      -1,    28,    29,    -1,    -1,    32,    -1,    34,    10,    11,
      12,    -1,    14,    15,    34,    10,    11,    12,    -1,    14,
      15,    23,    -1,    25,    -1,    -1,    28,    29,    -1,    -1,
      32,    -1,    34,    10,    11,    12,    -1,    14,    15,    34,
      10,    11,    12,    -1,    14,    15,    23,    -1,    25,    -1,
      -1,    28,    -1,    -1,    -1,    32,    -1,    34,    10,    11,
      12,    -1,    14,    15,    34,    10,    11,    12,    -1,    14,
      15,    23,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,
      32,    -1,    34,    10,    11,    12,    -1,    14,    15,    34,
      10,    11,    12,    -1,    14,    15,    23,    -1,    25,    -1,
      -1,    28,    -1,    -1,    -1,    32,    -1,    34,    10,    11,
      12,    -1,    14,    15,    34,    10,    11,    12,    -1,    14,
      15,    23,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,
      32,    -1,    34,    10,    11,    12,    -1,    14,    15,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    25,    -1,
      -1,    28,    -1,    -1,    -1,    32,    -1,    34,    10,    11,
      12,    -1,    14,    15,    10,    11,    12,    -1,    14,    15,
      -1,    23,    -1,    25,    -1,    -1,    28,    23,    -1,    25,
      -1,    -1,    34,    -1,    -1,    10,    11,    12,    34,    14,
      15,    10,    11,    12,    -1,    14,    15,    -1,    23,    -1,
      25,    -1,    -1,    -1,    23,    -1,    25,    -1,    -1,    34,
      -1,    -1,    10,    11,    12,    34,    14,    15,    10,    11,
      12,    -1,    14,    15,    -1,    23,    -1,    25,    -1,    -1,
      -1,    23,    -1,    25,    -1,    -1,    34,    -1,    -1,    10,
      11,    12,    34,    14,    15,    10,    11,    12,    -1,    14,
      15,    -1,    23,    -1,    25,    -1,    -1,    -1,    23,    -1,
      25,    -1,    -1,    34,    -1,    -1,    10,    11,    12,    34,
      14,    15,    10,    11,    12,    -1,    14,    15,    -1,    23,
      -1,    25,    -1,    -1,    -1,    23,    -1,    25,    -1,    -1,
      34,    -1,    -1,    10,    11,    12,    34,    14,    15,    10,
      11,    12,    -1,    14,    15,    -1,    23,    -1,    25,    -1,
      -1,    -1,    23,    -1,    25,    -1,    -1,    34,    -1,    -1,
      10,    11,    12,    34,    14,    15,    10,    11,    12,    -1,
      14,    15,    -1,    23,    -1,    25,    -1,    -1,    10,    23,
      12,    25,    14,    15,    34,    -1,    -1,    10,    11,    12,
      34,    14,    15,    -1,    10,    11,    12,    29,    14,    15,
      23,    -1,    25,    10,    11,    12,    -1,    14,    15,    -1,
      -1,    34,    28,    -1,    -1,    10,    11,    12,    34,    14,
      15,    10,    11,    12,    -1,    14,    15,    34,    10,    11,
      12,    -1,    14,    15,    -1,    -1,    10,    11,    12,    34,
      14,    15,    10,    11,    12,    34,    14,    15,    12,    -1,
      14,    15,    34,    10,    11,    12,    -1,    14,    15,    23,
      34,    25,    -1,    10,    11,    12,    34,    14,    15,    -1,
      34,    28,    29,    10,    11,    12,    -1,    14,    15,    10,
      11,    12,    29,    14,    15,    10,    11,    12,    -1,    14,
      15,    -1,    29,    -1,    -1,    10,    11,    12,    29,    14,
      15,    10,    11,    12,    29,    14,    15,    10,    11,    12,
      -1,    14,    15,    -1,    29,    -1,    -1,    10,    11,    12,
      29,    14,    15,    10,    11,    12,    29,    14,    15,    10,
      11,    12,    -1,    14,    15,    -1,    29,    -1,    -1,    10,
      11,    12,    29,    14,    15,    10,    11,    12,    29,    14,
      15,    10,    -1,    12,    -1,    14,    15,    -1,    29,     0,
       1,    -1,    -1,    -1,    29,     6,     7,     8,     9,    -1,
      29,     0,     1,    -1,    -1,     0,     1,     6,     7,     8,
       9,     6,     7,     8,     9,     0,     1,    -1,    -1,     0,
       1,     6,     7,     8,     9,     6,     7,     8,     9,     0,
       1,    -1,    -1,     0,     1,     6,     7,     8,     9,     6,
       7,     8,     9,     0,     1,    -1,    -1,     0,     1,     6,
       7,     8,     9,     6,     7,     8,     9,     0,     1,    -1,
      -1,    -1,    -1,     6,     7,     8,     9
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     6,     7,     8,     9,    37,    38,    39,    40,
      41,    42,     0,    40,     3,    28,    34,    39,    43,     3,
      29,    33,     1,    30,    44,    43,     3,     4,     5,    10,
      13,    16,    19,    20,    21,    22,    24,    28,    39,    41,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    63,    28,
      32,     3,    57,    50,    28,    28,    34,    50,    28,    28,
       3,    50,     3,    31,    45,    23,    25,    34,    12,    14,
      15,    10,    11,    29,    50,    15,    27,    47,    62,    50,
      47,    34,     3,     3,    24,    26,    47,    34,    29,     3,
       3,    53,    53,    54,    24,    55,    57,    29,    27,    34,
      29,    47,    29,    29,     3,    29,    29,    34,    34,    55,
      46,     3,    34,    34,    29,    34,    34,    17,    32,    34,
      46,     3,    13,    10,    29,     3,     3,    63,    46,    29,
      29,    29,    46,    46,    46,     1,    30,     3,     4,     5,
      10,    13,    28,    52,    53,    54,    55,    56,    57,    58,
      63,     3,     4,     5,    10,    13,    28,    52,    53,    54,
      55,    56,    57,    58,    63,     3,    24,    50,    51,    50,
      51,    34,     3,    24,    50,    51,    32,     1,     3,    16,
      19,    20,    21,    22,    24,    30,    39,    41,    44,    47,
      48,    49,    50,    51,    59,    60,    61,    34,     4,     5,
      45,    28,    57,    50,    50,    12,    14,    15,    10,    11,
      28,    57,    50,    50,    12,    14,    15,    10,    11,    32,
       3,    23,    25,    34,    23,    25,    34,    32,     3,    23,
      25,    34,     3,    15,    24,    27,    47,    62,    32,    28,
      28,    34,    50,    28,    28,     3,    45,     3,    23,    25,
      34,    31,    29,    50,    29,    53,    53,    54,    24,    55,
      57,    29,    50,    29,    53,    53,    54,    24,    55,    57,
      15,    27,    47,    62,    34,     3,     3,     3,     3,    15,
      27,    47,    62,    34,     3,     3,    27,     3,    34,    15,
      27,    47,    62,    50,    47,    34,     3,     3,    24,    26,
      47,    34,    31,    34,     3,     3,    29,    55,    29,    55,
      27,    34,    34,    34,    34,    34,    27,    34,    34,    34,
      27,    34,    29,    47,    29,    29,     3,    29,    29,    34,
      34,    46,     3,    34,    34,    29,    34,    34,    17,    32,
      34,    46,     3,    13,    10,    29,     3,     3,    63,    46,
      29,    29,    29,    46,    46,    46
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    39,    39,    40,
      40,    40,    41,    42,    43,    43,    43,    44,    44,    45,
      45,    46,    46,    46,    46,    46,    46,    46,    46,    47,
      47,    47,    47,    48,    48,    48,    48,    49,    49,    50,
      50,    51,    51,    51,    52,    52,    52,    53,    53,    54,
      54,    54,    55,    55,    56,    56,    57,    57,    57,    57,
      58,    58,    59,    60,    60,    60,    60,    61,    61,    62,
      62,    63,    63
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     6,     4,     2,     0,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     3,     3,     9,    11,    11,    10,     5,     7,     1,
       2,     3,     4,     4,     3,     3,     1,     1,     3,     1,
       3,     4,     3,     1,     1,     2,     1,     1,     3,     1,
       4,     3,     5,     5,     5,     5,     6,     3,     2,     2,
       2,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
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
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
  case 2: /* programa: listaDeDeclaracoes  */
#line 106 "sintatico.y"
                       {
        (yyval.ast) = criaNo("programa");
        (yyval.ast)->pai = (yyvsp[0].ast);
        raiz = (yyval.ast);
    }
#line 2290 "sintatico.tab.c"
    break;

  case 3: /* listaDeDeclaracoes: listaDeDeclaracoes declaracao  */
#line 114 "sintatico.y"
                                  {
        (yyval.ast) = criaNo("lista De Declaracoes");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        (yyvsp[-1].ast)->filho = (yyvsp[0].ast);
    }
#line 2300 "sintatico.tab.c"
    break;

  case 4: /* listaDeDeclaracoes: declaracao  */
#line 119 "sintatico.y"
                 {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2308 "sintatico.tab.c"
    break;

  case 5: /* TIPO: TIPO_INT  */
#line 125 "sintatico.y"
             {
        (yyval.ast) = criaNo("INT");
        strcpy((yyval.ast)->tipo, "INT");
        tipo += 0;
    }
#line 2318 "sintatico.tab.c"
    break;

  case 6: /* TIPO: TIPO_FLOAT  */
#line 130 "sintatico.y"
                 {
        (yyval.ast) = criaNo("FLOAT");
        strcpy((yyval.ast)->tipo, "FLOAT");
        tipo += 1;
    }
#line 2328 "sintatico.tab.c"
    break;

  case 7: /* TIPO: TIPO_LIST_INT  */
#line 135 "sintatico.y"
                    {
        (yyval.ast) = criaNo("INT LIST");
        strcpy((yyval.ast)->tipo, "INT LIST");
        tipo += 2;
    }
#line 2338 "sintatico.tab.c"
    break;

  case 8: /* TIPO: TIPO_LIST_FLOAT  */
#line 140 "sintatico.y"
                      {
        (yyval.ast) = criaNo("FLOAT LIST");
        strcpy((yyval.ast)->tipo, "FLOAT LIST");
        tipo += 3;
    }
#line 2348 "sintatico.tab.c"
    break;

  case 9: /* declaracao: declaracaoVariavel  */
#line 148 "sintatico.y"
                       {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2356 "sintatico.tab.c"
    break;

  case 10: /* declaracao: declaracaoFuncao  */
#line 151 "sintatico.y"
                       {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2364 "sintatico.tab.c"
    break;

  case 11: /* declaracao: error  */
#line 154 "sintatico.y"
            {
        erros++;
    }
#line 2372 "sintatico.tab.c"
    break;

  case 12: /* declaracaoVariavel: TIPO ID PONTOVIRGULA  */
#line 160 "sintatico.y"
                         {
        (yyval.ast) = criaNo("Declaracao de Variavel");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        id = insereSimbolo(id, (yyvsp[-1].token).escopo, (yyvsp[-1].token).id, "Variavel", tipos[tipo], (yyvsp[-1].token).linha, (yyvsp[-1].token).coluna, 0);
        strcpy((yyvsp[-2].ast)->simbolo, (yyvsp[-1].token).id);
        sprintf((yyval.ast)->tableTac, "\t%s %s%d", tiposTac[tipo], (yyvsp[-1].token).id, (yyvsp[-1].token).escopo);
        tipo = 0;
    }
#line 2385 "sintatico.tab.c"
    break;

  case 13: /* declaracaoFuncao: TIPO ID ABRE_PARENTESES listaDeParametros FECHA_PARENTESES corpo  */
#line 171 "sintatico.y"
                                                                     {
        (yyval.ast) = criaNo("Declaracao de funcao");
        (yyval.ast)->pai = (yyvsp[-5].ast);
        (yyvsp[-5].ast)->filho = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        id = insereSimbolo(id, (yyvsp[-4].token).escopo, (yyvsp[-4].token).id, "Funcao", tipos[tipo], (yyvsp[-4].token).linha, (yyvsp[-4].token).coluna, 0);
        strcpy((yyvsp[-5].ast)->simbolo, (yyvsp[-4].token).id);
        tipo = 0;
    }
#line 2399 "sintatico.tab.c"
    break;

  case 14: /* listaDeParametros: TIPO ID VIRGULA listaDeParametros  */
#line 183 "sintatico.y"
                                      {
        (yyval.ast) = criaNo("Lista de Parametros");
        (yyval.ast)->pai = (yyvsp[-3].ast);
        (yyvsp[-3].ast)->filho = (yyvsp[0].ast);
        id = insereSimbolo(id, (yyvsp[-2].token).escopo, (yyvsp[-2].token).id, "Variavel", tipos[tipo], (yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, 1);
        sprintf((yyval.ast)->tableTac,"\t%s %s%d", tiposTac[tipo], (yyvsp[-2].token).id, (yyvsp[-2].token).escopo+1);
        tipo = 0;
        strcpy((yyvsp[-3].ast)->simbolo, (yyvsp[-2].token).id);
    }
#line 2413 "sintatico.tab.c"
    break;

  case 15: /* listaDeParametros: TIPO ID  */
#line 192 "sintatico.y"
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
#line 2429 "sintatico.tab.c"
    break;

  case 16: /* listaDeParametros: %empty  */
#line 203 "sintatico.y"
       {
        (yyval.ast) = criaNo("Lista de Parametros vazia");
    }
#line 2437 "sintatico.tab.c"
    break;

  case 17: /* corpo: ABRE_CHAVES dentroCorpo FECHA_CHAVES  */
#line 209 "sintatico.y"
                                         {
        (yyval.ast) = criaNo("dentro das chaves");
        (yyval.ast)->pai = (yyvsp[-1].ast);
    }
#line 2446 "sintatico.tab.c"
    break;

  case 18: /* corpo: error  */
#line 213 "sintatico.y"
            {
        erros++;
    }
#line 2454 "sintatico.tab.c"
    break;

  case 19: /* dentroCorpo: declaracoes dentroCorpo  */
#line 219 "sintatico.y"
                            {
        (yyval.ast) = criaNo("declaracoes");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        (yyval.ast)->filho = (yyvsp[0].ast);
    }
#line 2464 "sintatico.tab.c"
    break;

  case 20: /* dentroCorpo: declaracoes  */
#line 224 "sintatico.y"
                  {
        (yyval.ast) = criaNo("declaracoes");
        (yyval.ast)->pai = (yyvsp[0].ast);
    }
#line 2473 "sintatico.tab.c"
    break;

  case 21: /* declaracoes: corpo  */
#line 231 "sintatico.y"
          {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2481 "sintatico.tab.c"
    break;

  case 22: /* declaracoes: declaracaoVariavel  */
#line 234 "sintatico.y"
                         {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2489 "sintatico.tab.c"
    break;

  case 23: /* declaracoes: expressao  */
#line 237 "sintatico.y"
                {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2497 "sintatico.tab.c"
    break;

  case 24: /* declaracoes: entrada  */
#line 240 "sintatico.y"
              {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2505 "sintatico.tab.c"
    break;

  case 25: /* declaracoes: retorno  */
#line 243 "sintatico.y"
              {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2513 "sintatico.tab.c"
    break;

  case 26: /* declaracoes: saida  */
#line 246 "sintatico.y"
            {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2521 "sintatico.tab.c"
    break;

  case 27: /* declaracoes: for  */
#line 249 "sintatico.y"
          {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2529 "sintatico.tab.c"
    break;

  case 28: /* declaracoes: condicional  */
#line 252 "sintatico.y"
                  {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2537 "sintatico.tab.c"
    break;

  case 29: /* expressao: exp PONTOVIRGULA  */
#line 258 "sintatico.y"
                     {
        (yyval.ast) = criaNo("expressao");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-1].ast)->tipo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[-1].ast));
        strcpy((yyval.ast)->simbolo, (yyvsp[-1].ast)->simbolo);
    }
#line 2549 "sintatico.tab.c"
    break;

  case 30: /* expressao: expressaoList  */
#line 265 "sintatico.y"
                    {
        (yyval.ast) = criaNo("expressao");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
    }
#line 2559 "sintatico.tab.c"
    break;

  case 31: /* expressao: ID ATRIBUICAO expressao  */
#line 270 "sintatico.y"
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
#line 2576 "sintatico.tab.c"
    break;

  case 32: /* expressao: ID ATRIBUICAO nil  */
#line 282 "sintatico.y"
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
#line 2592 "sintatico.tab.c"
    break;

  case 33: /* for: FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO ID FECHA_PARENTESES declaracoes  */
#line 297 "sintatico.y"
                                                                                          {
        (yyval.ast) = criaNo("for");
        (yyval.ast)->pai = (yyvsp[-6].ast);
        (yyvsp[-6].ast)->filho = (yyvsp[-5].ast);
        (yyvsp[-5].ast)->filho = (yyvsp[0].ast);
    }
#line 2603 "sintatico.tab.c"
    break;

  case 34: /* for: FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO ID OP_B_SOMA_SUB ID FECHA_PARENTESES declaracoes  */
#line 303 "sintatico.y"
                                                                                                             {
        (yyval.ast) = criaNo("for");
        (yyval.ast)->pai = (yyvsp[-8].ast);
        (yyvsp[-8].ast)->filho = (yyvsp[-7].ast);
        (yyvsp[-7].ast)->filho = (yyvsp[0].ast);
    }
#line 2614 "sintatico.tab.c"
    break;

  case 35: /* for: FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO ID OP_B_SOMA_SUB numero FECHA_PARENTESES declaracoes  */
#line 309 "sintatico.y"
                                                                                                                 {
        (yyval.ast) = criaNo("for");
        (yyval.ast)->pai = (yyvsp[-8].ast);
        (yyvsp[-8].ast)->filho = (yyvsp[-7].ast);
        (yyvsp[-7].ast)->filho = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
    }
#line 2626 "sintatico.tab.c"
    break;

  case 36: /* for: FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO OP_LOGICA_NEG ID FECHA_PARENTESES declaracoes  */
#line 316 "sintatico.y"
                                                                                                          {
        (yyval.ast) = criaNo("for");
        (yyval.ast)->pai = (yyvsp[-7].ast);
        (yyvsp[-7].ast)->filho = (yyvsp[-6].ast);
        (yyvsp[-6].ast)->filho = (yyvsp[0].ast);
    }
#line 2637 "sintatico.tab.c"
    break;

  case 37: /* condicional: IF ABRE_PARENTESES exp FECHA_PARENTESES declaracoes  */
#line 325 "sintatico.y"
                                                                   {
        (yyval.ast) = criaNo("IF");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);

        // sprintf($$->codeTac, "saidaIf%d:\n", qtdIf);
        // sprintf($$->codeTac, "\tbrz ");
        // qtdIf++;
    }
#line 2651 "sintatico.tab.c"
    break;

  case 38: /* condicional: IF ABRE_PARENTESES exp FECHA_PARENTESES declaracoes ELSE declaracoes  */
#line 334 "sintatico.y"
                                                                           {
        (yyval.ast) = criaNo("IF-ELSE");
        (yyval.ast)->pai = (yyvsp[-4].ast);
        (yyvsp[-4].ast)->filho = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
    }
#line 2662 "sintatico.tab.c"
    break;

  case 39: /* exp: expressao_logica  */
#line 343 "sintatico.y"
                     {
        (yyval.ast) = criaNo("exp");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2673 "sintatico.tab.c"
    break;

  case 40: /* exp: OP_LOGICA_NEG exp  */
#line 349 "sintatico.y"
                        {
        (yyval.ast) = criaNo("exp");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2684 "sintatico.tab.c"
    break;

  case 41: /* expressaoList: OP_LISTA ID PONTOVIRGULA  */
#line 358 "sintatico.y"
                             {
        (yyval.ast) = criaNo("expressaoList");
        strcpy((yyval.ast)->tipo, "OPERACAOLISTA");
    }
#line 2693 "sintatico.tab.c"
    break;

  case 42: /* expressaoList: exp CONSTRUTOR_LISTA ID PONTOVIRGULA  */
#line 362 "sintatico.y"
                                           {
        (yyval.ast) = criaNo("expressaoList");
        (yyval.ast)->pai = (yyvsp[-3].ast);
        strcpy((yyval.ast)->tipo, "CONSTRUTORLISTA");
    }
#line 2703 "sintatico.tab.c"
    break;

  case 43: /* expressaoList: exp FUNCOES_LISTA ID PONTOVIRGULA  */
#line 367 "sintatico.y"
                                        {
        (yyval.ast) = criaNo("expressaoList");
        (yyval.ast)->pai = (yyvsp[-3].ast);
        strcpy((yyval.ast)->tipo, "FUNCAOLISTA");
    }
#line 2713 "sintatico.tab.c"
    break;

  case 44: /* expressao_logica: expressao_logica OP_LOGICA_OR expressao_relacional  */
#line 375 "sintatico.y"
                                                       {
        (yyval.ast) = criaNo("expressaoLogica");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        //strcpy($$->tipo, "INT");
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));        
    }
#line 2725 "sintatico.tab.c"
    break;

  case 45: /* expressao_logica: expressao_logica OP_LOGICA_AND expressao_relacional  */
#line 382 "sintatico.y"
                                                          {
        (yyval.ast) = criaNo("expressaoLogica");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        //strcpy($$->tipo, "INT");
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
        (yyval.ast)->regTac = qtdReg++;
        (yyval.ast)->auxTac = 1;
        char* res = "";
        printf("CHEGOU AQUI\n");
        //res = strcat(res, intrucaoOp($2.id));
        if((yyvsp[0].ast)->auxTac == 0){
            sprintf((yyval.ast)->codeTac, "%s $%d, $%d, %s", res, (yyval.ast)->regTac, (yyvsp[-2].ast)->regTac, (yyvsp[0].ast)->simbolo);
        }else{
            sprintf((yyval.ast)->codeTac, "%s $%d, $%d, $%d", res, (yyval.ast)->regTac, (yyvsp[-2].ast)->regTac, (yyvsp[0].ast)->regTac);
        }
    }
#line 2747 "sintatico.tab.c"
    break;

  case 46: /* expressao_logica: expressao_relacional  */
#line 399 "sintatico.y"
                           {
        (yyval.ast) = criaNo("expressaoLogica");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2758 "sintatico.tab.c"
    break;

  case 47: /* expressao_relacional: opSomaSub  */
#line 408 "sintatico.y"
              {
        (yyval.ast) = criaNo("expressaoRelacional");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2769 "sintatico.tab.c"
    break;

  case 48: /* expressao_relacional: expressao_relacional OP_B_RELACIONAIS opSomaSub  */
#line 414 "sintatico.y"
                                                      {
        (yyval.ast) = criaNo("expressaoRelacional");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-2].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-2].ast)->simbolo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
    }
#line 2782 "sintatico.tab.c"
    break;

  case 49: /* opSomaSub: opMultDiv  */
#line 425 "sintatico.y"
              {
        (yyval.ast) = criaNo("Operando SomaSub");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2793 "sintatico.tab.c"
    break;

  case 50: /* opSomaSub: opSomaSub OP_B_SOMA_SUB opMultDiv  */
#line 431 "sintatico.y"
                                        {
        (yyval.ast) = criaNo("Operando SomaSub");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-2].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-2].ast)->simbolo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
        sprintf((yyval.ast)->codeTac, "\tadd %s, %s", (yyvsp[-2].ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2807 "sintatico.tab.c"
    break;

  case 51: /* opSomaSub: opSomaSub OP_B_SOMA_SUB OP_LISTA opMultDiv  */
#line 440 "sintatico.y"
                                                 {
        (yyval.ast) = criaNo("Operando SomaSub");
        (yyval.ast)->pai = (yyvsp[-3].ast);
        (yyvsp[-3].ast)->filho = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-3].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-3].ast)->simbolo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
    }
#line 2820 "sintatico.tab.c"
    break;

  case 52: /* opMultDiv: opMultDiv OP_B_MULT_DIV argumento  */
#line 452 "sintatico.y"
                                     {
        (yyval.ast) = criaNo("Operando MultDiv");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-2].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-2].ast)->simbolo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
    }
#line 2833 "sintatico.tab.c"
    break;

  case 53: /* opMultDiv: expressao_unaria  */
#line 460 "sintatico.y"
                       {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2841 "sintatico.tab.c"
    break;

  case 54: /* expressao_unaria: argumento  */
#line 466 "sintatico.y"
              {
        (yyval.ast) = criaNo("expressao_unaria");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2851 "sintatico.tab.c"
    break;

  case 55: /* expressao_unaria: OP_B_SOMA_SUB argumento  */
#line 471 "sintatico.y"
                              {
        (yyval.ast) = criaNo("expressao_unaria");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2861 "sintatico.tab.c"
    break;

  case 56: /* argumento: ID  */
#line 478 "sintatico.y"
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
#line 2876 "sintatico.tab.c"
    break;

  case 57: /* argumento: numero  */
#line 488 "sintatico.y"
             {
        (yyval.ast) = criaNo("argumento");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2887 "sintatico.tab.c"
    break;

  case 58: /* argumento: ABRE_PARENTESES exp FECHA_PARENTESES  */
#line 494 "sintatico.y"
                                           {
        (yyval.ast) = criaNo("argumento");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-1].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-1].ast)->simbolo);
    }
#line 2898 "sintatico.tab.c"
    break;

  case 59: /* argumento: chamadaDeFuncao  */
#line 500 "sintatico.y"
                      {
        (yyval.ast) = criaNo("argumento");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
    }
#line 2908 "sintatico.tab.c"
    break;

  case 60: /* chamadaDeFuncao: ID ABRE_PARENTESES exp FECHA_PARENTESES  */
#line 508 "sintatico.y"
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
#line 2923 "sintatico.tab.c"
    break;

  case 61: /* chamadaDeFuncao: ID ABRE_PARENTESES FECHA_PARENTESES  */
#line 518 "sintatico.y"
                                          {
        (yyval.ast) = criaNo("chamada de funcao");
        TabelaSimbolo* c = procuraVariavel(id, (yyvsp[-2].token).id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Funcao nao declarada!!!\n", (yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).id);
        }else{
            strcpy((yyval.ast)->tipo, c->tipo);
        }
    }
#line 2937 "sintatico.tab.c"
    break;

  case 62: /* entrada: ENTRADA ABRE_PARENTESES ID FECHA_PARENTESES PONTOVIRGULA  */
#line 530 "sintatico.y"
                                                             {
        (yyval.ast) = criaNo("entrada");
        TabelaSimbolo* c = procuraVariavel(id, (yyvsp[-2].token).id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Variavel nao declarada!!!\n", (yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).id);
        }else{
            strcpy((yyval.ast)->tipo, c->tipo);
            if(strcmp((yyval.ast)->tipo, "FLOAT") == 0){
                sprintf((yyval.ast)->codeTac,"\tscanf %s%d",(yyvsp[-2].token).id, (yyvsp[-2].token).escopo);
            }
            if(strcmp((yyval.ast)->tipo, "INT") == 0){
                sprintf((yyval.ast)->codeTac,"\tscani %s%d",(yyvsp[-2].token).id, (yyvsp[-2].token).escopo);
            }
        }
    }
#line 2957 "sintatico.tab.c"
    break;

  case 63: /* saida: SAIDA ABRE_PARENTESES STRING FECHA_PARENTESES PONTOVIRGULA  */
#line 548 "sintatico.y"
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
#line 2979 "sintatico.tab.c"
    break;

  case 64: /* saida: SAIDA ABRE_PARENTESES ID FECHA_PARENTESES PONTOVIRGULA  */
#line 565 "sintatico.y"
                                                             {
        (yyval.ast) = criaNo("saida");
        TabelaSimbolo* c = procuraVariavel(id, (yyvsp[-2].token).id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Variavel nao declarada!!!\n", (yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).id);
        }
    }
#line 2991 "sintatico.tab.c"
    break;

  case 65: /* saida: SAIDA ABRE_PARENTESES expressao FECHA_PARENTESES PONTOVIRGULA  */
#line 572 "sintatico.y"
                                                                    {
        (yyval.ast) = criaNo("saida");
        (yyval.ast)->pai = (yyvsp[-2].ast);
    }
#line 3000 "sintatico.tab.c"
    break;

  case 66: /* saida: SAIDA ABRE_PARENTESES OP_LISTA ID FECHA_PARENTESES PONTOVIRGULA  */
#line 576 "sintatico.y"
                                                                      {
        (yyval.ast) = criaNo("saida");
    }
#line 3008 "sintatico.tab.c"
    break;

  case 67: /* retorno: RETORNO exp PONTOVIRGULA  */
#line 582 "sintatico.y"
                             {
        (yyval.ast) = criaNo("retorno");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        char tipoRetornoC[20] = "";
        strcpy(tipoRetornoC, (yyvsp[-1].ast)->tipo);
    }
#line 3019 "sintatico.tab.c"
    break;

  case 68: /* retorno: RETORNO PONTOVIRGULA  */
#line 588 "sintatico.y"
                           {
        (yyval.ast) = criaNo("retorno");
    }
#line 3027 "sintatico.tab.c"
    break;

  case 69: /* nil: NIL PONTOVIRGULA  */
#line 594 "sintatico.y"
                     {
        (yyval.ast) = criaNo("NULO");
        strcpy((yyval.ast)->tipo, "NULO");
        strcpy((yyval.ast)->simbolo, (yyvsp[-1].token).id);
    }
#line 3037 "sintatico.tab.c"
    break;

  case 70: /* nil: OP_B_RELACIONAIS NIL  */
#line 599 "sintatico.y"
                           {
        (yyval.ast) = criaNo("NULO");
        strcpy((yyval.ast)->tipo, "NULO");
        strcpy((yyval.ast)->simbolo, (yyvsp[0].token).id);
    }
#line 3047 "sintatico.tab.c"
    break;

  case 71: /* numero: INT  */
#line 607 "sintatico.y"
        {
        (yyval.ast) = criaNo("Numero");
        strcpy((yyval.ast)->tipo, "INT");
        strcpy((yyval.ast)->simbolo, (yyvsp[0].token).id);
    }
#line 3057 "sintatico.tab.c"
    break;

  case 72: /* numero: FLOAT  */
#line 612 "sintatico.y"
            {
        (yyval.ast) = criaNo("Numero");
        strcpy((yyval.ast)->tipo, "FLOAT");
        strcpy((yyval.ast)->simbolo, (yyvsp[0].token).id);
    }
#line 3067 "sintatico.tab.c"
    break;


#line 3071 "sintatico.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 620 "sintatico.y"


void yyerror(const char* s){
    fprintf(stderr, "Linha: %d - Coluna: %d - Token: %s - Erro: %s\n", yylval.token.linha, yylval.token.coluna, yylval.token.id, s);
}


char* intrucaoOp(char* op) {
  if(strcmp(op, "+") == 0) {
    return "add ";
  } else if(strcmp(op, "-") == 0) {
    return "sub ";
  } else if(strcmp(op, "*") == 0) {
    return "mul ";
  } else if(strcmp(op, "/") == 0) {
    return "div ";
  } else if(strcmp(op, "&&") == 0) {
    return "and ";
  } else if(strcmp(op, "||") == 0) {
    return "or ";
  } else if(strcmp(op, ">") == 0) {
    return "slt ";
  } else if(strcmp(op, "<") == 0) {
    return "slt ";
  } else if(strcmp(op, "==") == 0) {
    return "seq ";
  } else if(strcmp(op, ">=") == 0) {
    return "sleq ";
  } else if(strcmp(op, "<=") == 0) {
    return "sleq ";
  }
  return "";
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

void writeTable(AST* node, FILE *fp){
    if (!node)
        return;
    if(strcmp(node->tableTac, ""))
        fprintf (fp, "%s\n", node->tableTac);
    writeTable(node->pai, fp);
    writeTable(node->filho, fp);
}
int firstfunc = 0;
void writeCode(AST* node, FILE *fp){
    if (!node)
        return;
    
    if(strstr(node->nome_regra, "Declaracao de funcao")){
        if(firstfunc == 1){
            fprintf (fp, "\treturn 0\n");
        }
        firstfunc = 1;
        fprintf (fp, "\n%s:\n", node->pai->simbolo);
    }
    writeCode(node->pai, fp);
    writeCode(node->filho, fp);
    if(strcmp(node->codeTac, "")){
        fprintf (fp, "%s\n", node->codeTac);
    }
}

void writeFile(AST* raiz){
    FILE *fp = fopen("out.tac", "w+");
    if(fp){
        fprintf (fp, ".table\n");
        writeTable(raiz, fp);
        fprintf (fp, "\n.code\n");
        fprintf(fp, "\n%s\n", saida);
        writeCode(raiz, fp);
        // writeMainReturn(fp);
    }
    else{
        printf("Error, could not write TAC file.\n");
    }
    fclose(fp);
}


int main(int argc, char ** argv) {
    
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
        writeFile(raiz);
    }
    limpaTabela(id);
    liberaAST();
    fclose(yyin);
    yylex_destroy();
    printf("\n\n");
    return 0;
}
