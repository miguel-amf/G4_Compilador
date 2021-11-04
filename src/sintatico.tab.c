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
    int tipo = 0;
    extern int escopoL[1000];
    extern int escopoAtual;
    extern int escopo;
    extern char type_symbol[20];

#line 92 "sintatico.tab.c"

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
  YYSYMBOL_argumento = 56,                 /* argumento  */
  YYSYMBOL_chamadaDeFuncao = 57,           /* chamadaDeFuncao  */
  YYSYMBOL_entrada = 58,                   /* entrada  */
  YYSYMBOL_saida = 59,                     /* saida  */
  YYSYMBOL_retorno = 60,                   /* retorno  */
  YYSYMBOL_nil = 61,                       /* nil  */
  YYSYMBOL_numero = 62                     /* numero  */
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
#define YYLAST   3490

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  357

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
       0,   100,   100,   108,   113,   119,   124,   129,   134,   142,
     145,   148,   154,   164,   176,   184,   194,   200,   204,   210,
     215,   222,   225,   228,   231,   234,   237,   240,   243,   249,
     256,   261,   273,   288,   294,   300,   307,   316,   321,   330,
     336,   345,   349,   354,   362,   370,   377,   385,   390,   401,
     406,   414,   426,   431,   442,   452,   458,   464,   472,   482,
     494,   506,   510,   517,   521,   527,   533,   539,   544,   552,
     557
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
  "expressao_relacional", "opSomaSub", "opMultDiv", "argumento",
  "chamadaDeFuncao", "entrada", "saida", "retorno", "nil", "numero", YY_NULLPTR
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

#define YYPACT_NINF (-163)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-71)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     574,  3413,    43,    79,    80,    84,     6,  3425,    91,  3429,
    3439,  3443,  -163,  3453,    78,   394,  3457,    92,    16,   -24,
       1,   394,  3467,  2776,  3471,    82,  2931,  3062,  3083,   239,
      81,    96,     9,   102,   109,   114,   758,   138,  1753,  1784,
     112,  1815,  1846,  1877,  1908,   110,  1939,   296,   459,  3224,
    3089,  3110,  3116,  1970,  2001,  2032,  3137,    68,   135,  3056,
     130,   758,   232,  2063,   113,   151,   427,   127,   128,   133,
    3481,   137,   182,   183,  2094,    20,    20,    20,    36,    20,
    3143,   169,   177,   173,  2125,  2156,   184,   516,  2187,   186,
    2881,   213,   199,   200,  2218,  3164,   205,   207,  3212,  3296,
    3230,    20,  3170,  3191,  3197,  2249,  2280,  2804,   246,   217,
     219,   140,   220,   227,  2311,  2342,  3218,   666,   233,  2373,
    2404,   240,  2435,  2466,  2776,    17,  2497,  2528,    45,   272,
      65,  2776,   251,   255,   264,  2559,  2776,  2776,  2776,  2590,
    2621,  2652,  2683,  2776,  3251,   348,  2913,  2872,   758,    64,
       4,   760,  2938,  2963,  2988,  3013,   606,  3317,  3323,   758,
     758,    89,   276,   473,  3329,  3339,  3345,  3351,  2956,   292,
     185,   519,   291,   265,  2714,  2981,   297,   402,   303,   190,
     697,  3006,   281,   284,    31,   290,   300,   321,  2776,   332,
     736,   792,   823,   854,   885,   551,   916,   947,   978,  1009,
     307,   311,   318,   248,    87,   314,   338,    23,    23,    23,
     118,    23,   123,   339,   343,   222,   222,   222,   168,   222,
     196,   340,   372,   382,   549,   383,   393,   378,   411,   377,
     410,   414,   416,  3031,   401,   417,   387,   404,   408,   476,
     758,   232,  1040,   407,   447,   502,   422,   439,   452,   491,
     492,  1071,  2745,  3257,   467,  3263,   430,   647,  2868,    23,
    3272,  3278,  3361,   479,  3367,   434,   463,  2893,   222,  3373,
    3383,   486,   493,   609,  2826,  2832,   497,   504,   505,   508,
     487,   514,   522,   533,   546,   517,   523,   521,   530,   527,
     538,   537,  1102,  1133,   543,   516,  1164,   550,  2906,   581,
     557,   560,  1195,  1226,  1257,   544,   558,  3284,  3290,  3389,
    3395,  2838,  2844,  2860,  2866,   577,   579,   612,   620,   622,
     626,  1288,  1319,  2804,   627,   597,   604,   141,   607,   608,
    1350,  1381,  1412,   611,  1443,  1474,   619,  1505,  1536,  2804,
      39,  1567,  1598,    57,   643,   229,  2804,   580,   629,   631,
    1629,  2804,  2804,  2804,  1660,  1691,  1722
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
       0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -163,  -163,  -163,     0,   656,     3,  -163,   644,   -19,   -30,
     -75,    27,   -54,   -50,    18,    42,   480,   575,   440,   351,
     250,   386,    -8,    38,    53,  -162,   -28
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     6,     7,    37,     9,    38,    11,    18,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    85,    56
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       8,    24,    22,    10,   155,   -15,    12,     8,   167,    21,
      10,    71,   144,   145,   146,    17,   -46,   238,   -46,   209,
     128,    17,   147,    59,    27,    28,   144,   145,   146,   167,
     129,    23,   117,   167,   144,   145,   146,   148,   -46,    59,
      27,    28,   343,    63,   147,    20,    -5,    60,    36,   127,
      64,   148,   344,   193,    68,   130,   135,   194,   274,   148,
     101,   139,   140,   141,    36,   242,   283,   345,   133,   201,
     202,   156,   157,   158,   131,    81,   207,   293,   208,    86,
     170,   159,    -6,    -7,   172,    84,   346,    -8,   191,    87,
     156,   157,   158,    93,    14,    19,   160,    80,   -39,   197,
     159,   215,   134,   216,   171,   177,    15,   189,   173,    61,
     190,   -14,    16,   203,   108,   160,   253,    67,   -39,   155,
     167,   144,   145,   146,    62,   195,   156,   157,   158,   178,
      65,   167,   167,    72,   192,    73,   159,    66,    26,    27,
      28,    69,   259,    70,    74,   198,   148,    88,    29,   196,
      82,   160,   262,   -40,    89,   -40,   155,    95,   247,    35,
     199,    94,    83,    36,   -40,   205,   206,   174,   -19,   121,
     336,   156,   157,   158,   200,   200,   167,   213,   214,   155,
     155,   155,   155,   155,   167,    96,    97,   167,   167,   167,
     167,   167,   268,   233,    27,    28,   160,   172,   104,   168,
      27,    28,   243,    29,   105,   234,   237,   106,   222,    29,
     223,   271,   167,   107,   235,   109,   111,   236,    36,   224,
     169,   173,   254,   272,    36,   156,   157,   158,   112,   113,
     263,   155,   348,   201,   202,   168,    27,    28,   170,   114,
     167,   115,    59,    27,    28,    29,   177,   273,   332,   118,
     160,   119,    29,   120,   122,   282,   169,   195,   294,   170,
      36,   123,   171,   172,   342,   125,   292,    36,   295,   193,
     178,   350,   301,   194,   126,   132,   354,   355,   356,   252,
     136,   196,   153,   171,   137,   193,   165,   173,   -46,   194,
     -46,   217,   193,   138,   -30,   221,   194,   193,   193,   193,
     229,   194,   194,   194,   191,   -46,   -30,   165,    75,   240,
      76,   165,   241,   177,   225,   197,   226,   349,   244,   -39,
     191,   -39,   324,   189,   246,   227,   190,   191,   245,   103,
     -39,   197,   191,   191,   191,   248,   -41,   178,   197,   189,
     -69,   195,   190,   197,   197,   197,   189,   -70,   -40,   190,
     192,   189,   189,   189,   190,   190,   190,   195,   -69,   -69,
     -69,   198,   -69,   -69,   195,   196,   192,   255,   -40,   195,
     195,   195,   264,   192,   275,   276,   199,   198,   192,   192,
     192,   196,   -69,   152,   198,   277,   278,   164,   196,   198,
     198,   198,   199,   196,   196,   196,   279,   153,   165,   199,
       2,     3,     4,     5,   199,   199,   199,   -29,   164,   165,
     165,   284,   164,   285,   175,    27,    28,   286,   154,   -29,
     288,   289,   166,   -16,    29,   230,   280,   231,   287,   102,
      90,    27,    28,   -31,   153,   176,   232,   -32,   281,    36,
      29,   296,   -45,   166,   -45,   209,   -45,   166,   -45,   217,
     297,    91,   116,    92,   165,    36,   302,   153,   153,   153,
     153,   261,   165,   -45,   -45,   165,   165,   165,   165,   270,
     303,   -46,   151,   -46,    77,   -44,   163,   -44,   217,   181,
      27,    28,   -46,   218,   -46,   -47,   304,   -47,   -47,    29,
     165,   290,   -44,   -46,   305,   306,   307,   163,   152,   164,
     187,   163,   -47,   291,    36,   298,    27,    28,   309,   153,
     164,   164,   149,   311,   317,    29,   161,   100,   165,   175,
      27,    28,   -30,   -30,   -30,   -31,   299,   312,   300,    29,
      36,   313,   -30,   154,   166,   152,   -32,   161,   314,   315,
     176,   161,   316,   -30,    36,   166,   166,   -30,   318,   -41,
     -68,   319,   -29,   -29,   -29,   164,   -67,   320,   152,   152,
     152,   260,   -29,   164,   200,   321,   164,   164,   164,   269,
     154,   322,   323,   -29,   249,     1,   250,   -29,   330,   325,
       2,     3,     4,     5,   327,   251,   328,   151,   163,   329,
     166,   164,   331,   154,   154,   154,   154,   154,   166,   163,
     163,   166,   166,   166,   166,   166,   -42,   150,   -43,   351,
     308,   162,   -31,   -31,   -31,   -68,   -54,   -54,   -54,   310,
     -54,   -54,   -31,   -67,   151,   -42,   166,   149,   161,   -43,
     333,   334,   162,   -31,   212,   -54,   162,   -31,   335,   161,
     161,   337,   338,   340,   163,   154,   347,   151,   151,   258,
      98,    99,   163,   341,   166,   163,   163,   267,   352,   -44,
     353,   -44,   209,    13,   149,    25,     0,   -37,     0,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,   -37,
     163,   -44,   -37,   124,   161,   -37,   -37,   -37,   -37,     0,
     -37,     0,   161,     0,   -37,     0,   -37,   -37,   -18,     0,
     -18,   -18,   -18,   -18,   -18,   -18,   -18,     0,     0,     0,
     -18,     0,     0,   -18,   -18,     0,   -18,   -18,   -18,   -18,
     161,   -18,   150,   162,     0,   -18,     0,   -18,   -18,     0,
       0,     0,     0,     0,   162,   162,     0,   -22,     0,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,     0,     0,     0,   -22,
       0,     0,   -22,   -22,     0,   -22,   -22,   -22,   -22,   150,
     -22,   156,   157,   158,   -22,     0,   -22,   -22,     0,     0,
     210,   159,   -47,     0,   -47,   -47,     0,     0,     0,   162,
       0,     0,   256,   257,     0,     0,   160,   162,     0,     0,
     265,   266,     0,   -21,   -47,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,     0,     0,     0,   -21,     0,     0,   -21,   -21,
       0,   -21,   -21,   -21,   -21,   162,   -21,     0,     0,     0,
     -21,     0,   -21,   -21,   -23,     0,   -23,   -23,   -23,   -23,
     -23,   -23,   -23,     0,     0,     0,   -23,     0,     0,   -23,
     -23,     0,   -23,   -23,   -23,   -23,     0,   -23,     0,     0,
       0,   -23,     0,   -23,   -23,   -27,     0,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,     0,     0,     0,   -27,     0,     0,
     -27,   -27,     0,   -27,   -27,   -27,   -27,     0,   -27,     0,
       0,     0,   -27,     0,   -27,   -27,   -28,     0,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,     0,     0,     0,   -28,     0,
       0,   -28,   -28,     0,   -28,   -28,   -28,   -28,     0,   -28,
       0,     0,     0,   -28,     0,   -28,   -28,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,     0,     0,     0,   -30,
       0,     0,   -30,   -30,     0,   -30,   -30,   -30,   -30,     0,
     -30,     0,     0,     0,   -30,     0,   -30,   -30,   -24,     0,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,     0,
     -24,     0,     0,   -24,   -24,     0,   -24,   -24,   -24,   -24,
       0,   -24,     0,     0,     0,   -24,     0,   -24,   -24,   -26,
       0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,     0,
       0,   -26,     0,     0,   -26,   -26,     0,   -26,   -26,   -26,
     -26,     0,   -26,     0,     0,     0,   -26,     0,   -26,   -26,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,     0,
       0,     0,   -25,     0,     0,   -25,   -25,     0,   -25,   -25,
     -25,   -25,     0,   -25,     0,     0,     0,   -25,     0,   -25,
     -25,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,     0,     0,   -66,     0,     0,   -66,   -66,     0,   -66,
     -66,   -66,   -66,     0,   -66,     0,     0,     0,   -66,     0,
     -66,   -66,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,     0,     0,     0,   -29,     0,     0,   -29,   -29,     0,
     -29,   -29,   -29,   -29,     0,   -29,     0,     0,     0,   -29,
       0,   -29,   -29,   -31,     0,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,     0,     0,     0,   -31,     0,     0,   -31,   -31,
       0,   -31,   -31,   -31,   -31,     0,   -31,     0,     0,     0,
     -31,     0,   -31,   -31,   -32,     0,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,     0,     0,     0,   -32,     0,     0,   -32,
     -32,     0,   -32,   -32,   -32,   -32,     0,   -32,     0,     0,
       0,   -32,     0,   -32,   -32,   -65,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,     0,     0,     0,   -65,     0,     0,
     -65,   -65,     0,   -65,   -65,   -65,   -65,     0,   -65,     0,
       0,     0,   -65,     0,   -65,   -65,   -41,     0,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,     0,     0,     0,   -41,     0,
       0,   -41,   -41,     0,   -41,   -41,   -41,   -41,     0,   -41,
       0,     0,     0,   -41,     0,   -41,   -41,   -17,     0,   -17,
     -17,   -17,   -17,   -17,   -17,   -17,     0,     0,     0,   -17,
       0,     0,   -17,   -17,     0,   -17,   -17,   -17,   -17,     0,
     -17,     0,     0,     0,   -17,     0,   -17,   -17,   -12,     0,
     -12,   -12,   -12,   -12,   -12,   -12,   -12,     0,     0,     0,
     -12,     0,     0,   -12,   -12,     0,   -12,   -12,   -12,   -12,
       0,   -12,     0,     0,     0,   -12,     0,   -12,   -12,   -68,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,
       0,   -68,     0,     0,   -68,   -68,     0,   -68,   -68,   -68,
     -68,     0,   -68,     0,     0,     0,   -68,     0,   -68,   -68,
     -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,
       0,     0,   -67,     0,     0,   -67,   -67,     0,   -67,   -67,
     -67,   -67,     0,   -67,     0,     0,     0,   -67,     0,   -67,
     -67,   -42,     0,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
       0,     0,     0,   -42,     0,     0,   -42,   -42,     0,   -42,
     -42,   -42,   -42,     0,   -42,     0,     0,     0,   -42,     0,
     -42,   -42,   -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,     0,     0,     0,   -43,     0,     0,   -43,   -43,     0,
     -43,   -43,   -43,   -43,     0,   -43,     0,     0,     0,   -43,
       0,   -43,   -43,   -37,     0,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,     0,     0,     0,   -37,     0,     0,   -37,   339,
       0,   -37,   -37,   -37,   -37,     0,   -37,     0,     0,     0,
     -37,     0,   -37,   -37,   -60,     0,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,     0,     0,     0,   -60,     0,     0,   -60,
     -60,     0,   -60,   -60,   -60,   -60,     0,   -60,     0,     0,
       0,   -60,     0,   -60,   -60,   -62,     0,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,     0,     0,     0,   -62,     0,     0,
     -62,   -62,     0,   -62,   -62,   -62,   -62,     0,   -62,     0,
       0,     0,   -62,     0,   -62,   -62,   -61,     0,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,     0,     0,     0,   -61,     0,
       0,   -61,   -61,     0,   -61,   -61,   -61,   -61,     0,   -61,
       0,     0,     0,   -61,     0,   -61,   -61,   -63,     0,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,   -63,
       0,     0,   -63,   -63,     0,   -63,   -63,   -63,   -63,     0,
     -63,     0,     0,     0,   -63,     0,   -63,   -63,   -64,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,
     -64,     0,     0,   -64,   -64,     0,   -64,   -64,   -64,   -64,
       0,   -64,     0,     0,     0,   -64,     0,   -64,   -64,   -38,
       0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,
       0,   -38,     0,     0,   -38,   -38,     0,   -38,   -38,   -38,
     -38,     0,   -38,     0,     0,     0,   -38,     0,   -38,   -38,
     -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,
       0,     0,   -33,     0,     0,   -33,   -33,     0,   -33,   -33,
     -33,   -33,     0,   -33,     0,     0,     0,   -33,     0,   -33,
     -33,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
       0,     0,     0,   -36,     0,     0,   -36,   -36,     0,   -36,
     -36,   -36,   -36,     0,   -36,     0,     0,     0,   -36,     0,
     -36,   -36,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,     0,     0,     0,   -34,     0,     0,   -34,   -34,     0,
     -34,   -34,   -34,   -34,     0,   -34,     0,     0,     0,   -34,
       0,   -34,   -34,   -35,     0,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,     0,     0,     0,   -35,     0,     0,   -35,   -35,
       0,   -35,   -35,   -35,   -35,     0,   -35,     0,     0,     0,
     -35,     0,   -35,   -35,   -22,     0,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,     0,     0,     0,   -22,     0,     0,   -22,
       0,     0,   -22,   -22,   -22,   -22,     0,   -22,     0,     0,
       0,   -22,     0,   -22,   -22,   -21,     0,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,     0,     0,     0,   -21,     0,     0,
     -21,     0,     0,   -21,   -21,   -21,   -21,     0,   -21,     0,
       0,     0,   -21,     0,   -21,   -21,   142,     0,    26,    27,
      28,     2,     3,     4,     5,     0,     0,     0,    29,     0,
       0,    30,     0,     0,    31,    32,    33,    34,     0,    35,
       0,     0,     0,    36,     0,   143,   -20,   -23,     0,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,     0,     0,     0,   -23,
       0,     0,   -23,     0,     0,   -23,   -23,   -23,   -23,     0,
     -23,     0,     0,     0,   -23,     0,   -23,   -23,   -27,     0,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,     0,
     -27,     0,     0,   -27,     0,     0,   -27,   -27,   -27,   -27,
       0,   -27,     0,     0,     0,   -27,     0,   -27,   -27,   -28,
       0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,
       0,   -28,     0,     0,   -28,     0,     0,   -28,   -28,   -28,
     -28,     0,   -28,     0,     0,     0,   -28,     0,   -28,   -28,
     -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,
       0,     0,   -30,     0,     0,   -30,     0,     0,   -30,   -30,
     -30,   -30,     0,   -30,     0,     0,     0,   -30,     0,   -30,
     -30,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
       0,     0,     0,   -24,     0,     0,   -24,     0,     0,   -24,
     -24,   -24,   -24,     0,   -24,     0,     0,     0,   -24,     0,
     -24,   -24,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,     0,     0,     0,   -26,     0,     0,   -26,     0,     0,
     -26,   -26,   -26,   -26,     0,   -26,     0,     0,     0,   -26,
       0,   -26,   -26,   -25,     0,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,     0,     0,     0,   -25,     0,     0,   -25,     0,
       0,   -25,   -25,   -25,   -25,     0,   -25,     0,     0,     0,
     -25,     0,   -25,   -25,   -66,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,   -66,     0,     0,   -66,
       0,     0,   -66,   -66,   -66,   -66,     0,   -66,     0,     0,
       0,   -66,     0,   -66,   -66,   -29,     0,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,     0,     0,     0,   -29,     0,     0,
     -29,     0,     0,   -29,   -29,   -29,   -29,     0,   -29,     0,
       0,     0,   -29,     0,   -29,   -29,   -31,     0,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,     0,     0,     0,   -31,     0,
       0,   -31,     0,     0,   -31,   -31,   -31,   -31,     0,   -31,
       0,     0,     0,   -31,     0,   -31,   -31,   -32,     0,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,     0,     0,     0,   -32,
       0,     0,   -32,     0,     0,   -32,   -32,   -32,   -32,     0,
     -32,     0,     0,     0,   -32,     0,   -32,   -32,   -65,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,
     -65,     0,     0,   -65,     0,     0,   -65,   -65,   -65,   -65,
       0,   -65,     0,     0,     0,   -65,     0,   -65,   -65,   -41,
       0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,     0,
       0,   -41,     0,     0,   -41,     0,     0,   -41,   -41,   -41,
     -41,     0,   -41,     0,     0,     0,   -41,     0,   -41,   -41,
     -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,
       0,     0,   -68,     0,     0,   -68,     0,     0,   -68,   -68,
     -68,   -68,     0,   -68,     0,     0,     0,   -68,     0,   -68,
     -68,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
       0,     0,     0,   -67,     0,     0,   -67,     0,     0,   -67,
     -67,   -67,   -67,     0,   -67,     0,     0,     0,   -67,     0,
     -67,   -67,   -42,     0,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,     0,     0,     0,   -42,     0,     0,   -42,     0,     0,
     -42,   -42,   -42,   -42,     0,   -42,     0,     0,     0,   -42,
       0,   -42,   -42,   -43,     0,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,     0,     0,     0,   -43,     0,     0,   -43,     0,
       0,   -43,   -43,   -43,   -43,     0,   -43,     0,     0,     0,
     -43,     0,   -43,   -43,   -60,     0,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,     0,     0,     0,   -60,     0,     0,   -60,
       0,     0,   -60,   -60,   -60,   -60,     0,   -60,     0,     0,
       0,   -60,     0,   -60,   -60,   -62,     0,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,     0,     0,     0,   -62,     0,     0,
     -62,     0,     0,   -62,   -62,   -62,   -62,     0,   -62,     0,
       0,     0,   -62,     0,   -62,   -62,   -61,     0,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,     0,     0,     0,   -61,     0,
       0,   -61,     0,     0,   -61,   -61,   -61,   -61,     0,   -61,
       0,     0,     0,   -61,     0,   -61,   -61,   -63,     0,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,   -63,
       0,     0,   -63,     0,     0,   -63,   -63,   -63,   -63,     0,
     -63,     0,     0,     0,   -63,     0,   -63,   -63,   -64,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,
     -64,     0,     0,   -64,     0,     0,   -64,   -64,   -64,   -64,
       0,   -64,     0,     0,     0,   -64,     0,   -64,   -64,   -38,
       0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,
       0,   -38,     0,     0,   -38,     0,     0,   -38,   -38,   -38,
     -38,     0,   -38,     0,     0,     0,   -38,     0,   -38,   -38,
     -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,
       0,     0,   -33,     0,     0,   -33,     0,     0,   -33,   -33,
     -33,   -33,     0,   -33,     0,     0,     0,   -33,     0,   -33,
     -33,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
       0,     0,     0,   -36,     0,     0,   -36,     0,     0,   -36,
     -36,   -36,   -36,     0,   -36,     0,     0,     0,   -36,     0,
     -36,   -36,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,     0,     0,     0,   -34,     0,     0,   -34,     0,     0,
     -34,   -34,   -34,   -34,     0,   -34,     0,     0,     0,   -34,
       0,   -34,   -34,   -35,     0,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,     0,     0,     0,   -35,     0,     0,   -35,     0,
       0,   -35,   -35,   -35,   -35,     0,   -35,     0,     0,     0,
     -35,     0,   -35,   -35,   -18,     0,   -18,   -18,   -18,   -18,
     -18,   -18,   -18,     0,     0,     0,   -18,     0,     0,   -18,
       0,     0,   -18,   -18,   -18,   -18,     0,   -18,     0,     0,
       0,   -18,     0,   -18,   -18,   -12,     0,   -12,   -12,   -12,
     -12,   -12,   -12,   -12,     0,     0,     0,   -12,     0,     0,
     -12,     0,     0,   -12,   -12,   -12,   -12,     0,   -12,     0,
       0,     0,   -12,     0,   -12,   -12,   -17,     0,   -17,   -17,
     -17,   -17,   -17,   -17,   -17,     0,     0,     0,   -17,     0,
       0,   -17,     0,     0,   -17,   -17,   -17,   -17,     0,   -17,
       0,     0,     0,   -17,     0,   -17,   -17,   142,     0,    26,
      27,    28,     2,     3,     4,     5,     0,     0,     0,    29,
       0,     0,    30,     0,     0,    31,    32,    33,    34,     0,
      35,     0,     0,     0,    36,   180,   143,   181,    27,    28,
       2,     3,     4,     5,     0,     0,     0,    29,     0,     0,
     182,     0,     0,   183,   184,   185,   186,     0,   187,   -32,
     -32,   -32,    36,     0,   188,   -41,   -41,   -41,     0,   -32,
       0,   -68,   -68,   -68,     0,   -41,     0,   -67,   -67,   -67,
     -32,   -68,     0,     0,   -32,     0,   -41,   -67,     0,     0,
     -41,     0,   -68,   -42,   -42,   -42,   -68,     0,   -67,   -43,
     -43,   -43,   -67,   -42,     0,   144,   145,   146,   210,   -43,
     -48,     0,   -48,   -48,   -42,   147,     0,     0,   -42,     0,
     -43,   -54,   -54,   -54,   -43,   -54,   -54,     0,     0,     0,
     148,     0,   -48,   218,   -54,   -48,   -54,   -48,   -48,    57,
     110,     0,     0,   179,     0,   -54,   -54,   -54,   -54,     0,
     -54,   -54,   -48,   -70,   -70,   -70,     0,   -70,   -70,   -54,
       0,   -54,     0,     0,    57,   326,     0,     0,   179,     0,
     -54,   -54,   -54,   -54,     0,   -54,   -54,   -70,   -49,   211,
     -49,     0,   -49,   -49,   -54,     0,   -54,     0,     0,    57,
       0,     0,     0,    58,     0,   -54,   -54,   -54,   -54,     0,
     -54,   -54,   -49,   -52,   -52,   -52,     0,   -52,   -52,   -54,
       0,   -54,     0,     0,    57,     0,     0,     0,   220,     0,
     -54,   -54,   -54,   -54,     0,   -54,   -54,   -52,   -57,   -57,
     -57,     0,   -57,   -57,   -54,     0,   -54,     0,     0,    57,
       0,     0,     0,   228,     0,   -54,   -54,   -54,   -54,     0,
     -54,   -54,   -57,   -55,   -55,   -55,     0,   -55,   -55,   -54,
       0,   -54,     0,     0,    57,     0,     0,     0,   239,     0,
     -54,   -54,   -54,   -54,     0,   -54,   -54,   -55,     0,     0,
       0,     0,     0,     0,   -54,     0,   -54,     0,     0,    57,
       0,     0,     0,   179,     0,   -54,   -54,   -54,   -54,     0,
     -54,   -54,   -69,   -69,   -69,     0,   -69,   -69,     0,   -54,
       0,   -54,     0,     0,    57,   -69,     0,   -69,     0,     0,
     -54,     0,     0,   -70,   -70,   -70,   -69,   -70,   -70,   -49,
      79,   -49,     0,   -49,   -49,     0,   -70,     0,   -70,     0,
       0,     0,   -49,     0,   -49,     0,     0,   -70,     0,     0,
     -52,   -52,   -52,   -49,   -52,   -52,   -57,   -57,   -57,     0,
     -57,   -57,     0,   -52,     0,   -52,     0,     0,     0,   -57,
       0,   -57,     0,     0,   -52,     0,     0,   -55,   -55,   -55,
     -57,   -55,   -55,   -59,   -59,   -59,     0,   -59,   -59,     0,
     -55,     0,   -55,     0,     0,     0,   -59,     0,   -59,     0,
       0,   -55,     0,     0,   -56,   -56,   -56,   -59,   -56,   -56,
     -50,    79,   -50,     0,   -50,   -50,     0,   -56,     0,   -56,
       0,     0,     0,   -50,     0,   -50,     0,     0,   -56,     0,
       0,   -53,   -53,   -53,   -50,   -53,   -53,   -58,   -58,   -58,
       0,   -58,   -58,     0,   -53,     0,   -53,     0,     0,     0,
     -58,     0,   -58,     0,   -45,   -53,   -45,    77,   -51,    79,
     -51,   -58,   -51,   -51,    78,   -45,   -47,   -45,   -47,   -47,
      78,   -51,   -48,   -51,   -48,   -48,   -45,   -47,     0,   -47,
       0,     0,   -51,   -48,     0,   -48,     0,     0,   -47,     0,
       0,   -54,   -54,   -54,   -48,   -54,   -54,   -59,   -59,   -59,
       0,   -59,   -59,   -56,   -56,   -56,     0,   -56,   -56,   204,
       0,     0,   -50,   211,   -50,   -54,   -50,   -50,   -53,   -53,
     -53,   -59,   -53,   -53,   -58,   -58,   -58,   -56,   -58,   -58,
     -51,   211,   -51,     0,   -51,   -51,   -50,     0,   -44,     0,
     -44,    77,   -53,     0,     0,     0,     0,     0,   -58,   -44,
       0,   -44,     0,     0,   -51,     0,     0,   -69,   -69,   -69,
     -44,   -69,   -69,   -70,   -70,   -70,     0,   -70,   -70,   -49,
     219,   -49,     0,   -49,   -49,     0,   -69,     0,     0,   -52,
     -52,   -52,   -70,   -52,   -52,   -57,   -57,   -57,   -49,   -57,
     -57,   -55,   -55,   -55,     0,   -55,   -55,     0,   -52,     0,
       0,   -59,   -59,   -59,   -57,   -59,   -59,   -56,   -56,   -56,
     -55,   -56,   -56,   -50,   219,   -50,     0,   -50,   -50,     0,
     -59,     0,     0,   -53,   -53,   -53,   -56,   -53,   -53,   -58,
     -58,   -58,   -50,   -58,   -58,   -51,   219,   -51,     0,   -51,
     -51,     0,   -53,   -11,   -11,     0,     0,     0,   -58,   -11,
     -11,   -11,   -11,     0,   -51,    -2,     1,     0,     0,    -4,
      -4,     2,     3,     4,     5,    -4,    -4,    -4,    -4,    -9,
      -9,     0,     0,   -10,   -10,    -9,    -9,    -9,    -9,   -10,
     -10,   -10,   -10,    -3,    -3,     0,     0,   -12,   -12,    -3,
      -3,    -3,    -3,   -12,   -12,   -12,   -12,   -18,   -18,     0,
       0,   -13,   -13,   -18,   -18,   -18,   -18,   -13,   -13,   -13,
     -13,   -17,   -17,     0,     0,     0,     0,   -17,   -17,   -17,
     -17
};

static const yytype_int16 yycheck[] =
{
       0,    20,     1,     0,    32,    29,     0,     7,    36,    33,
       7,    41,     3,     4,     5,    15,    12,   179,    14,    15,
       3,    21,    13,     3,     4,     5,     3,     4,     5,    57,
      13,    30,   107,    61,     3,     4,     5,    28,    34,     3,
       4,     5,     3,    34,    13,    29,     3,    29,    28,   124,
      32,    28,    13,   107,    36,    10,   131,   107,   220,    28,
      24,   136,   137,   138,    28,    34,   228,    10,     3,     4,
       5,     3,     4,     5,    29,    57,    12,   239,    14,    61,
      62,    13,     3,     3,    66,    58,    29,     3,   107,    62,
       3,     4,     5,    66,     3,     3,    28,    29,    34,   107,
      13,    12,   130,    14,    62,    87,    28,   107,    66,    28,
     107,    29,    34,   143,    87,    28,    29,     3,    29,   147,
     148,     3,     4,     5,    28,   107,     3,     4,     5,    87,
      28,   159,   160,    23,   107,    25,    13,    28,     3,     4,
       5,     3,    24,    31,    34,   107,    28,    34,    13,   107,
      15,    28,    29,    23,     3,    25,   184,    29,   188,    24,
     107,    34,    27,    28,    34,   147,   148,    34,    31,    29,
      29,     3,     4,     5,    34,    34,   204,   159,   160,   207,
     208,   209,   210,   211,   212,     3,     3,   215,   216,   217,
     218,   219,    24,     3,     4,     5,    28,   179,    29,     3,
       4,     5,   184,    13,    27,    15,   179,    34,    23,    13,
      25,    15,   240,    29,    24,    29,     3,    27,    28,    34,
      24,   179,   204,    27,    28,     3,     4,     5,    29,    29,
     212,   259,     3,     4,     5,     3,     4,     5,   220,    34,
     268,    34,     3,     4,     5,    13,   228,   220,   323,     3,
      28,    34,    13,    34,    34,   228,    24,   239,   240,   241,
      28,    34,   220,   245,   339,    32,   239,    28,   241,   323,
     228,   346,   245,   323,    34,     3,   351,   352,   353,    31,
      29,   239,    32,   241,    29,   339,    36,   245,    12,   339,
      14,    15,   346,    29,    29,     3,   346,   351,   352,   353,
       3,   351,   352,   353,   323,    29,     3,    57,    12,    28,
      14,    61,    28,   295,    23,   323,    25,   345,    28,    23,
     339,    25,   295,   323,     3,    34,   323,   346,    28,    79,
      34,   339,   351,   352,   353,     3,    29,   295,   346,   339,
      29,   323,   339,   351,   352,   353,   346,    29,    34,   346,
     323,   351,   352,   353,   351,   352,   353,   339,    10,    11,
      12,   323,    14,    15,   346,   323,   339,    29,    29,   351,
     352,   353,    29,   346,    34,     3,   323,   339,   351,   352,
     353,   339,    34,    32,   346,     3,     3,    36,   346,   351,
     352,   353,   339,   351,   352,   353,     3,   147,   148,   346,
       6,     7,     8,     9,   351,   352,   353,    29,    57,   159,
     160,    34,    61,     3,     3,     4,     5,     3,    32,     3,
       3,    34,    36,    29,    13,    23,    15,    25,    27,    78,
       3,     4,     5,    29,   184,    24,    34,    29,    27,    28,
      13,    34,    12,    57,    14,    15,    12,    61,    14,    15,
       3,    24,   101,    26,   204,    28,    34,   207,   208,   209,
     210,   211,   212,    29,    34,   215,   216,   217,   218,   219,
      31,    12,    32,    14,    15,    12,    36,    14,    15,     3,
       4,     5,    23,    10,    25,    12,    34,    14,    15,    13,
     240,    15,    29,    34,     3,     3,    29,    57,   147,   148,
      24,    61,    29,    27,    28,     3,     4,     5,    29,   259,
     159,   160,    32,    27,    27,    13,    36,    77,   268,     3,
       4,     5,     3,     4,     5,     3,    24,    34,    26,    13,
      28,    34,    13,   147,   148,   184,     3,    57,    34,    34,
      24,    61,    34,    24,    28,   159,   160,    28,    34,     3,
      29,    34,     3,     4,     5,   204,    29,    34,   207,   208,
     209,   210,    13,   212,    34,    27,   215,   216,   217,   218,
     184,    34,    29,    24,    23,     1,    25,    28,    34,    29,
       6,     7,     8,     9,     3,    34,    29,   147,   148,    29,
     204,   240,    34,   207,   208,   209,   210,   211,   212,   159,
     160,   215,   216,   217,   218,   219,    29,    32,    29,    29,
     259,    36,     3,     4,     5,     3,    10,    11,    12,   268,
      14,    15,    13,     3,   184,     3,   240,   147,   148,     3,
       3,    34,    57,    24,    28,    29,    61,    28,    34,   159,
     160,    34,    34,    32,   204,   259,     3,   207,   208,   209,
      75,    76,   212,    34,   268,   215,   216,   217,    29,    12,
      29,    14,    15,     7,   184,    21,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    13,
     240,    34,    16,    17,   204,    19,    20,    21,    22,    -1,
      24,    -1,   212,    -1,    28,    -1,    30,    31,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      13,    -1,    -1,    16,    17,    -1,    19,    20,    21,    22,
     240,    24,   147,   148,    -1,    28,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,   159,   160,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    13,
      -1,    -1,    16,    17,    -1,    19,    20,    21,    22,   184,
      24,     3,     4,     5,    28,    -1,    30,    31,    -1,    -1,
      10,    13,    12,    -1,    14,    15,    -1,    -1,    -1,   204,
      -1,    -1,   207,   208,    -1,    -1,    28,   212,    -1,    -1,
     215,   216,    -1,     1,    34,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,    17,
      -1,    19,    20,    21,    22,   240,    24,    -1,    -1,    -1,
      28,    -1,    30,    31,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,
      17,    -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,
      -1,    28,    -1,    30,    31,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,
      16,    17,    -1,    19,    20,    21,    22,    -1,    24,    -1,
      -1,    -1,    28,    -1,    30,    31,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    17,    -1,    19,    20,    21,    22,    -1,    24,
      -1,    -1,    -1,    28,    -1,    30,    31,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    13,
      -1,    -1,    16,    17,    -1,    19,    20,    21,    22,    -1,
      24,    -1,    -1,    -1,    28,    -1,    30,    31,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      13,    -1,    -1,    16,    17,    -1,    19,    20,    21,    22,
      -1,    24,    -1,    -1,    -1,    28,    -1,    30,    31,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    13,    -1,    -1,    16,    17,    -1,    19,    20,    21,
      22,    -1,    24,    -1,    -1,    -1,    28,    -1,    30,    31,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    17,    -1,    19,    20,
      21,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,    30,
      31,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    13,    -1,    -1,    16,    17,    -1,    19,
      20,    21,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,
      30,    31,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    13,    -1,    -1,    16,    17,    -1,
      19,    20,    21,    22,    -1,    24,    -1,    -1,    -1,    28,
      -1,    30,    31,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,    17,
      -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,    -1,
      28,    -1,    30,    31,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,
      17,    -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,
      -1,    28,    -1,    30,    31,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,
      16,    17,    -1,    19,    20,    21,    22,    -1,    24,    -1,
      -1,    -1,    28,    -1,    30,    31,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    17,    -1,    19,    20,    21,    22,    -1,    24,
      -1,    -1,    -1,    28,    -1,    30,    31,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    13,
      -1,    -1,    16,    17,    -1,    19,    20,    21,    22,    -1,
      24,    -1,    -1,    -1,    28,    -1,    30,    31,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      13,    -1,    -1,    16,    17,    -1,    19,    20,    21,    22,
      -1,    24,    -1,    -1,    -1,    28,    -1,    30,    31,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    13,    -1,    -1,    16,    17,    -1,    19,    20,    21,
      22,    -1,    24,    -1,    -1,    -1,    28,    -1,    30,    31,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    17,    -1,    19,    20,
      21,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,    30,
      31,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    13,    -1,    -1,    16,    17,    -1,    19,
      20,    21,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,
      30,    31,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    13,    -1,    -1,    16,    17,    -1,
      19,    20,    21,    22,    -1,    24,    -1,    -1,    -1,    28,
      -1,    30,    31,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,    17,
      -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,    -1,
      28,    -1,    30,    31,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,
      17,    -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,
      -1,    28,    -1,    30,    31,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,
      16,    17,    -1,    19,    20,    21,    22,    -1,    24,    -1,
      -1,    -1,    28,    -1,    30,    31,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    17,    -1,    19,    20,    21,    22,    -1,    24,
      -1,    -1,    -1,    28,    -1,    30,    31,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    13,
      -1,    -1,    16,    17,    -1,    19,    20,    21,    22,    -1,
      24,    -1,    -1,    -1,    28,    -1,    30,    31,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      13,    -1,    -1,    16,    17,    -1,    19,    20,    21,    22,
      -1,    24,    -1,    -1,    -1,    28,    -1,    30,    31,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    13,    -1,    -1,    16,    17,    -1,    19,    20,    21,
      22,    -1,    24,    -1,    -1,    -1,    28,    -1,    30,    31,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    17,    -1,    19,    20,
      21,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,    30,
      31,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    13,    -1,    -1,    16,    17,    -1,    19,
      20,    21,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,
      30,    31,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    13,    -1,    -1,    16,    17,    -1,
      19,    20,    21,    22,    -1,    24,    -1,    -1,    -1,    28,
      -1,    30,    31,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,    17,
      -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,    -1,
      28,    -1,    30,    31,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,
      -1,    -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,
      -1,    28,    -1,    30,    31,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,
      16,    -1,    -1,    19,    20,    21,    22,    -1,    24,    -1,
      -1,    -1,    28,    -1,    30,    31,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    -1,    19,    20,    21,    22,    -1,    24,
      -1,    -1,    -1,    28,    -1,    30,    31,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    13,
      -1,    -1,    16,    -1,    -1,    19,    20,    21,    22,    -1,
      24,    -1,    -1,    -1,    28,    -1,    30,    31,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      13,    -1,    -1,    16,    -1,    -1,    19,    20,    21,    22,
      -1,    24,    -1,    -1,    -1,    28,    -1,    30,    31,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    13,    -1,    -1,    16,    -1,    -1,    19,    20,    21,
      22,    -1,    24,    -1,    -1,    -1,    28,    -1,    30,    31,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    -1,    19,    20,
      21,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,    30,
      31,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    13,    -1,    -1,    16,    -1,    -1,    19,
      20,    21,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,
      30,    31,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    13,    -1,    -1,    16,    -1,    -1,
      19,    20,    21,    22,    -1,    24,    -1,    -1,    -1,    28,
      -1,    30,    31,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,    -1,
      -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,    -1,
      28,    -1,    30,    31,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,
      -1,    -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,
      -1,    28,    -1,    30,    31,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,
      16,    -1,    -1,    19,    20,    21,    22,    -1,    24,    -1,
      -1,    -1,    28,    -1,    30,    31,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    -1,    19,    20,    21,    22,    -1,    24,
      -1,    -1,    -1,    28,    -1,    30,    31,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    13,
      -1,    -1,    16,    -1,    -1,    19,    20,    21,    22,    -1,
      24,    -1,    -1,    -1,    28,    -1,    30,    31,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      13,    -1,    -1,    16,    -1,    -1,    19,    20,    21,    22,
      -1,    24,    -1,    -1,    -1,    28,    -1,    30,    31,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    13,    -1,    -1,    16,    -1,    -1,    19,    20,    21,
      22,    -1,    24,    -1,    -1,    -1,    28,    -1,    30,    31,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    -1,    19,    20,
      21,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,    30,
      31,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    13,    -1,    -1,    16,    -1,    -1,    19,
      20,    21,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,
      30,    31,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    13,    -1,    -1,    16,    -1,    -1,
      19,    20,    21,    22,    -1,    24,    -1,    -1,    -1,    28,
      -1,    30,    31,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,    -1,
      -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,    -1,
      28,    -1,    30,    31,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,
      -1,    -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,
      -1,    28,    -1,    30,    31,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,
      16,    -1,    -1,    19,    20,    21,    22,    -1,    24,    -1,
      -1,    -1,    28,    -1,    30,    31,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    -1,    19,    20,    21,    22,    -1,    24,
      -1,    -1,    -1,    28,    -1,    30,    31,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    13,
      -1,    -1,    16,    -1,    -1,    19,    20,    21,    22,    -1,
      24,    -1,    -1,    -1,    28,    -1,    30,    31,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      13,    -1,    -1,    16,    -1,    -1,    19,    20,    21,    22,
      -1,    24,    -1,    -1,    -1,    28,    -1,    30,    31,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    13,    -1,    -1,    16,    -1,    -1,    19,    20,    21,
      22,    -1,    24,    -1,    -1,    -1,    28,    -1,    30,    31,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    -1,    19,    20,
      21,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,    30,
      31,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    13,    -1,    -1,    16,    -1,    -1,    19,
      20,    21,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,
      30,    31,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    13,    -1,    -1,    16,    -1,    -1,
      19,    20,    21,    22,    -1,    24,    -1,    -1,    -1,    28,
      -1,    30,    31,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,    -1,
      -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,    -1,
      28,    -1,    30,    31,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,
      -1,    -1,    19,    20,    21,    22,    -1,    24,    -1,    -1,
      -1,    28,    -1,    30,    31,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,
      16,    -1,    -1,    19,    20,    21,    22,    -1,    24,    -1,
      -1,    -1,    28,    -1,    30,    31,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    -1,    19,    20,    21,    22,    -1,    24,
      -1,    -1,    -1,    28,    -1,    30,    31,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    13,
      -1,    -1,    16,    -1,    -1,    19,    20,    21,    22,    -1,
      24,    -1,    -1,    -1,    28,     1,    30,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,
      16,    -1,    -1,    19,    20,    21,    22,    -1,    24,     3,
       4,     5,    28,    -1,    30,     3,     4,     5,    -1,    13,
      -1,     3,     4,     5,    -1,    13,    -1,     3,     4,     5,
      24,    13,    -1,    -1,    28,    -1,    24,    13,    -1,    -1,
      28,    -1,    24,     3,     4,     5,    28,    -1,    24,     3,
       4,     5,    28,    13,    -1,     3,     4,     5,    10,    13,
      12,    -1,    14,    15,    24,    13,    -1,    -1,    28,    -1,
      24,    10,    11,    12,    28,    14,    15,    -1,    -1,    -1,
      28,    -1,    34,    10,    23,    12,    25,    14,    15,    28,
      29,    -1,    -1,    32,    -1,    34,    10,    11,    12,    -1,
      14,    15,    29,    10,    11,    12,    -1,    14,    15,    23,
      -1,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    -1,
      34,    10,    11,    12,    -1,    14,    15,    34,    10,    11,
      12,    -1,    14,    15,    23,    -1,    25,    -1,    -1,    28,
      -1,    -1,    -1,    32,    -1,    34,    10,    11,    12,    -1,
      14,    15,    34,    10,    11,    12,    -1,    14,    15,    23,
      -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    32,    -1,
      34,    10,    11,    12,    -1,    14,    15,    34,    10,    11,
      12,    -1,    14,    15,    23,    -1,    25,    -1,    -1,    28,
      -1,    -1,    -1,    32,    -1,    34,    10,    11,    12,    -1,
      14,    15,    34,    10,    11,    12,    -1,    14,    15,    23,
      -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    32,    -1,
      34,    10,    11,    12,    -1,    14,    15,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    25,    -1,    -1,    28,
      -1,    -1,    -1,    32,    -1,    34,    10,    11,    12,    -1,
      14,    15,    10,    11,    12,    -1,    14,    15,    -1,    23,
      -1,    25,    -1,    -1,    28,    23,    -1,    25,    -1,    -1,
      34,    -1,    -1,    10,    11,    12,    34,    14,    15,    10,
      11,    12,    -1,    14,    15,    -1,    23,    -1,    25,    -1,
      -1,    -1,    23,    -1,    25,    -1,    -1,    34,    -1,    -1,
      10,    11,    12,    34,    14,    15,    10,    11,    12,    -1,
      14,    15,    -1,    23,    -1,    25,    -1,    -1,    -1,    23,
      -1,    25,    -1,    -1,    34,    -1,    -1,    10,    11,    12,
      34,    14,    15,    10,    11,    12,    -1,    14,    15,    -1,
      23,    -1,    25,    -1,    -1,    -1,    23,    -1,    25,    -1,
      -1,    34,    -1,    -1,    10,    11,    12,    34,    14,    15,
      10,    11,    12,    -1,    14,    15,    -1,    23,    -1,    25,
      -1,    -1,    -1,    23,    -1,    25,    -1,    -1,    34,    -1,
      -1,    10,    11,    12,    34,    14,    15,    10,    11,    12,
      -1,    14,    15,    -1,    23,    -1,    25,    -1,    -1,    -1,
      23,    -1,    25,    -1,    12,    34,    14,    15,    10,    11,
      12,    34,    14,    15,    10,    23,    12,    25,    14,    15,
      10,    23,    12,    25,    14,    15,    34,    23,    -1,    25,
      -1,    -1,    34,    23,    -1,    25,    -1,    -1,    34,    -1,
      -1,    10,    11,    12,    34,    14,    15,    10,    11,    12,
      -1,    14,    15,    10,    11,    12,    -1,    14,    15,    28,
      -1,    -1,    10,    11,    12,    34,    14,    15,    10,    11,
      12,    34,    14,    15,    10,    11,    12,    34,    14,    15,
      10,    11,    12,    -1,    14,    15,    34,    -1,    12,    -1,
      14,    15,    34,    -1,    -1,    -1,    -1,    -1,    34,    23,
      -1,    25,    -1,    -1,    34,    -1,    -1,    10,    11,    12,
      34,    14,    15,    10,    11,    12,    -1,    14,    15,    10,
      11,    12,    -1,    14,    15,    -1,    29,    -1,    -1,    10,
      11,    12,    29,    14,    15,    10,    11,    12,    29,    14,
      15,    10,    11,    12,    -1,    14,    15,    -1,    29,    -1,
      -1,    10,    11,    12,    29,    14,    15,    10,    11,    12,
      29,    14,    15,    10,    11,    12,    -1,    14,    15,    -1,
      29,    -1,    -1,    10,    11,    12,    29,    14,    15,    10,
      11,    12,    29,    14,    15,    10,    11,    12,    -1,    14,
      15,    -1,    29,     0,     1,    -1,    -1,    -1,    29,     6,
       7,     8,     9,    -1,    29,     0,     1,    -1,    -1,     0,
       1,     6,     7,     8,     9,     6,     7,     8,     9,     0,
       1,    -1,    -1,     0,     1,     6,     7,     8,     9,     6,
       7,     8,     9,     0,     1,    -1,    -1,     0,     1,     6,
       7,     8,     9,     6,     7,     8,     9,     0,     1,    -1,
      -1,     0,     1,     6,     7,     8,     9,     6,     7,     8,
       9,     0,     1,    -1,    -1,    -1,    -1,     6,     7,     8,
       9
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     6,     7,     8,     9,    37,    38,    39,    40,
      41,    42,     0,    40,     3,    28,    34,    39,    43,     3,
      29,    33,     1,    30,    44,    43,     3,     4,     5,    13,
      16,    19,    20,    21,    22,    24,    28,    39,    41,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    62,    28,    32,     3,
      50,    28,    28,    34,    50,    28,    28,     3,    50,     3,
      31,    45,    23,    25,    34,    12,    14,    15,    10,    11,
      29,    50,    15,    27,    47,    61,    50,    47,    34,     3,
       3,    24,    26,    47,    34,    29,     3,     3,    53,    53,
      54,    24,    55,    56,    29,    27,    34,    29,    47,    29,
      29,     3,    29,    29,    34,    34,    55,    46,     3,    34,
      34,    29,    34,    34,    17,    32,    34,    46,     3,    13,
      10,    29,     3,     3,    62,    46,    29,    29,    29,    46,
      46,    46,     1,    30,     3,     4,     5,    13,    28,    52,
      53,    54,    55,    56,    57,    62,     3,     4,     5,    13,
      28,    52,    53,    54,    55,    56,    57,    62,     3,    24,
      50,    51,    50,    51,    34,     3,    24,    50,    51,    32,
       1,     3,    16,    19,    20,    21,    22,    24,    30,    39,
      41,    44,    47,    48,    49,    50,    51,    58,    59,    60,
      34,     4,     5,    45,    28,    50,    50,    12,    14,    15,
      10,    11,    28,    50,    50,    12,    14,    15,    10,    11,
      32,     3,    23,    25,    34,    23,    25,    34,    32,     3,
      23,    25,    34,     3,    15,    24,    27,    47,    61,    32,
      28,    28,    34,    50,    28,    28,     3,    45,     3,    23,
      25,    34,    31,    29,    50,    29,    53,    53,    54,    24,
      55,    56,    29,    50,    29,    53,    53,    54,    24,    55,
      56,    15,    27,    47,    61,    34,     3,     3,     3,     3,
      15,    27,    47,    61,    34,     3,     3,    27,     3,    34,
      15,    27,    47,    61,    50,    47,    34,     3,     3,    24,
      26,    47,    34,    31,    34,     3,     3,    29,    55,    29,
      55,    27,    34,    34,    34,    34,    34,    27,    34,    34,
      34,    27,    34,    29,    47,    29,    29,     3,    29,    29,
      34,    34,    46,     3,    34,    34,    29,    34,    34,    17,
      32,    34,    46,     3,    13,    10,    29,     3,     3,    62,
      46,    29,    29,    29,    46,    46,    46
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    39,    39,    40,
      40,    40,    41,    42,    43,    43,    43,    44,    44,    45,
      45,    46,    46,    46,    46,    46,    46,    46,    46,    47,
      47,    47,    47,    48,    48,    48,    48,    49,    49,    50,
      50,    51,    51,    51,    52,    52,    52,    53,    53,    54,
      54,    54,    55,    55,    56,    56,    56,    56,    57,    57,
      58,    59,    59,    59,    59,    60,    60,    61,    61,    62,
      62
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     6,     4,     2,     0,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     3,     3,     9,    11,    11,    10,     5,     7,     1,
       2,     3,     4,     4,     3,     3,     1,     1,     3,     1,
       3,     4,     1,     3,     1,     1,     3,     1,     4,     3,
       5,     5,     5,     5,     6,     3,     2,     2,     2,     1,
       1
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
#line 100 "sintatico.y"
                       {
        (yyval.ast) = criaNo("programa");
        (yyval.ast)->pai = (yyvsp[0].ast);
        raiz = (yyval.ast);
    }
#line 2242 "sintatico.tab.c"
    break;

  case 3: /* listaDeDeclaracoes: listaDeDeclaracoes declaracao  */
#line 108 "sintatico.y"
                                  {
        (yyval.ast) = criaNo("lista De Declaracoes");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        (yyvsp[-1].ast)->filho = (yyvsp[0].ast);
    }
#line 2252 "sintatico.tab.c"
    break;

  case 4: /* listaDeDeclaracoes: declaracao  */
#line 113 "sintatico.y"
                 {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2260 "sintatico.tab.c"
    break;

  case 5: /* TIPO: TIPO_INT  */
#line 119 "sintatico.y"
             {
        (yyval.ast) = criaNo("INT");
        strcpy((yyval.ast)->tipo, "INT");
        tipo += 0;
    }
#line 2270 "sintatico.tab.c"
    break;

  case 6: /* TIPO: TIPO_FLOAT  */
#line 124 "sintatico.y"
                 {
        (yyval.ast) = criaNo("FLOAT");
        strcpy((yyval.ast)->tipo, "FLOAT");
        tipo += 1;
    }
#line 2280 "sintatico.tab.c"
    break;

  case 7: /* TIPO: TIPO_LIST_INT  */
#line 129 "sintatico.y"
                    {
        (yyval.ast) = criaNo("INT LIST");
        strcpy((yyval.ast)->tipo, "INT LIST");
        tipo += 2;
    }
#line 2290 "sintatico.tab.c"
    break;

  case 8: /* TIPO: TIPO_LIST_FLOAT  */
#line 134 "sintatico.y"
                      {
        (yyval.ast) = criaNo("FLOAT LIST");
        strcpy((yyval.ast)->tipo, "FLOAT LIST");
        tipo += 3;
    }
#line 2300 "sintatico.tab.c"
    break;

  case 9: /* declaracao: declaracaoVariavel  */
#line 142 "sintatico.y"
                       {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2308 "sintatico.tab.c"
    break;

  case 10: /* declaracao: declaracaoFuncao  */
#line 145 "sintatico.y"
                       {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2316 "sintatico.tab.c"
    break;

  case 11: /* declaracao: error  */
#line 148 "sintatico.y"
            {
        erros++;
    }
#line 2324 "sintatico.tab.c"
    break;

  case 12: /* declaracaoVariavel: TIPO ID PONTOVIRGULA  */
#line 154 "sintatico.y"
                         {
        (yyval.ast) = criaNo("Declaracao de Variavel");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        id = insereSimbolo(id, (yyvsp[-1].token).escopo, (yyvsp[-1].token).id, "Variavel", tipos[tipo], (yyvsp[-1].token).linha, (yyvsp[-1].token).coluna, 0);
        strcpy((yyvsp[-2].ast)->simbolo, (yyvsp[-1].token).id);
        tipo = 0;
    }
#line 2336 "sintatico.tab.c"
    break;

  case 13: /* declaracaoFuncao: TIPO ID ABRE_PARENTESES listaDeParametros FECHA_PARENTESES corpo  */
#line 164 "sintatico.y"
                                                                     {
        (yyval.ast) = criaNo("Declaracao de funcao");
        (yyval.ast)->pai = (yyvsp[-5].ast);
        (yyvsp[-5].ast)->filho = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        id = insereSimbolo(id, (yyvsp[-4].token).escopo, (yyvsp[-4].token).id, "Funcao", tipos[tipo], (yyvsp[-4].token).linha, (yyvsp[-4].token).coluna, 0);
        strcpy((yyvsp[-5].ast)->simbolo, (yyvsp[-4].token).id);
        tipo = 0;
    }
#line 2350 "sintatico.tab.c"
    break;

  case 14: /* listaDeParametros: TIPO ID VIRGULA listaDeParametros  */
#line 176 "sintatico.y"
                                      {
        (yyval.ast) = criaNo("Lista de Parametros");
        (yyval.ast)->pai = (yyvsp[-3].ast);
        (yyvsp[-3].ast)->filho = (yyvsp[0].ast);
        id = insereSimbolo(id, (yyvsp[-2].token).escopo, (yyvsp[-2].token).id, "Variavel", tipos[tipo], (yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, 1);
        tipo = 0;
        strcpy((yyvsp[-3].ast)->simbolo, (yyvsp[-2].token).id);
    }
#line 2363 "sintatico.tab.c"
    break;

  case 15: /* listaDeParametros: TIPO ID  */
#line 184 "sintatico.y"
              {
        (yyval.ast) = criaNo("Lista de Parametros");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        escopoL[++escopoAtual] = escopo++;
        id = insereSimbolo(id, escopoL[escopoAtual], (yyvsp[0].token).id, "Variavel", tipos[tipo], (yyvsp[0].token).linha, (yyvsp[0].token).coluna, 1);
        strcpy((yyvsp[-1].ast)->simbolo, (yyvsp[0].token).id);
        tipo = 0;
        escopoAtual--;
        escopo--;
    }
#line 2378 "sintatico.tab.c"
    break;

  case 16: /* listaDeParametros: %empty  */
#line 194 "sintatico.y"
       {
        (yyval.ast) = criaNo("Lista de Parametros vazia");
    }
#line 2386 "sintatico.tab.c"
    break;

  case 17: /* corpo: ABRE_CHAVES dentroCorpo FECHA_CHAVES  */
#line 200 "sintatico.y"
                                         {
        (yyval.ast) = criaNo("dentro das chaves");
        (yyval.ast)->pai = (yyvsp[-1].ast);
    }
#line 2395 "sintatico.tab.c"
    break;

  case 18: /* corpo: error  */
#line 204 "sintatico.y"
            {
        erros++;
    }
#line 2403 "sintatico.tab.c"
    break;

  case 19: /* dentroCorpo: declaracoes dentroCorpo  */
#line 210 "sintatico.y"
                            {
        (yyval.ast) = criaNo("declaracoes");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        (yyval.ast)->filho = (yyvsp[0].ast);
    }
#line 2413 "sintatico.tab.c"
    break;

  case 20: /* dentroCorpo: declaracoes  */
#line 215 "sintatico.y"
                  {
        (yyval.ast) = criaNo("declaracoes");
        (yyval.ast)->pai = (yyvsp[0].ast);
    }
#line 2422 "sintatico.tab.c"
    break;

  case 21: /* declaracoes: corpo  */
#line 222 "sintatico.y"
          {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2430 "sintatico.tab.c"
    break;

  case 22: /* declaracoes: declaracaoVariavel  */
#line 225 "sintatico.y"
                         {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2438 "sintatico.tab.c"
    break;

  case 23: /* declaracoes: expressao  */
#line 228 "sintatico.y"
                {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2446 "sintatico.tab.c"
    break;

  case 24: /* declaracoes: entrada  */
#line 231 "sintatico.y"
              {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2454 "sintatico.tab.c"
    break;

  case 25: /* declaracoes: retorno  */
#line 234 "sintatico.y"
              {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2462 "sintatico.tab.c"
    break;

  case 26: /* declaracoes: saida  */
#line 237 "sintatico.y"
            {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2470 "sintatico.tab.c"
    break;

  case 27: /* declaracoes: for  */
#line 240 "sintatico.y"
          {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2478 "sintatico.tab.c"
    break;

  case 28: /* declaracoes: condicional  */
#line 243 "sintatico.y"
                  {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2486 "sintatico.tab.c"
    break;

  case 29: /* expressao: exp PONTOVIRGULA  */
#line 249 "sintatico.y"
                     {
        (yyval.ast) = criaNo("expressao");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-1].ast)->tipo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[-1].ast));
        strcpy((yyval.ast)->simbolo, (yyvsp[-1].ast)->simbolo);
    }
#line 2498 "sintatico.tab.c"
    break;

  case 30: /* expressao: expressaoList  */
#line 256 "sintatico.y"
                    {
        (yyval.ast) = criaNo("expressao");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
    }
#line 2508 "sintatico.tab.c"
    break;

  case 31: /* expressao: ID ATRIBUICAO expressao  */
#line 261 "sintatico.y"
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
#line 2525 "sintatico.tab.c"
    break;

  case 32: /* expressao: ID ATRIBUICAO nil  */
#line 273 "sintatico.y"
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
#line 2541 "sintatico.tab.c"
    break;

  case 33: /* for: FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO ID FECHA_PARENTESES declaracoes  */
#line 288 "sintatico.y"
                                                                                          {
        (yyval.ast) = criaNo("for");
        (yyval.ast)->pai = (yyvsp[-6].ast);
        (yyvsp[-6].ast)->filho = (yyvsp[-5].ast);
        (yyvsp[-5].ast)->filho = (yyvsp[0].ast);
    }
#line 2552 "sintatico.tab.c"
    break;

  case 34: /* for: FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO ID OP_B_SOMA_SUB ID FECHA_PARENTESES declaracoes  */
#line 294 "sintatico.y"
                                                                                                             {
        (yyval.ast) = criaNo("for");
        (yyval.ast)->pai = (yyvsp[-8].ast);
        (yyvsp[-8].ast)->filho = (yyvsp[-7].ast);
        (yyvsp[-7].ast)->filho = (yyvsp[0].ast);
    }
#line 2563 "sintatico.tab.c"
    break;

  case 35: /* for: FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO ID OP_B_SOMA_SUB numero FECHA_PARENTESES declaracoes  */
#line 300 "sintatico.y"
                                                                                                                 {
        (yyval.ast) = criaNo("for");
        (yyval.ast)->pai = (yyvsp[-8].ast);
        (yyvsp[-8].ast)->filho = (yyvsp[-7].ast);
        (yyvsp[-7].ast)->filho = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
    }
#line 2575 "sintatico.tab.c"
    break;

  case 36: /* for: FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO OP_LOGICA_NEG ID FECHA_PARENTESES declaracoes  */
#line 307 "sintatico.y"
                                                                                                          {
        (yyval.ast) = criaNo("for");
        (yyval.ast)->pai = (yyvsp[-7].ast);
        (yyvsp[-7].ast)->filho = (yyvsp[-6].ast);
        (yyvsp[-6].ast)->filho = (yyvsp[0].ast);
    }
#line 2586 "sintatico.tab.c"
    break;

  case 37: /* condicional: IF ABRE_PARENTESES exp FECHA_PARENTESES declaracoes  */
#line 316 "sintatico.y"
                                                                   {
        (yyval.ast) = criaNo("IF");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
    }
#line 2596 "sintatico.tab.c"
    break;

  case 38: /* condicional: IF ABRE_PARENTESES exp FECHA_PARENTESES declaracoes ELSE declaracoes  */
#line 321 "sintatico.y"
                                                                           {
        (yyval.ast) = criaNo("IF-ELSE");
        (yyval.ast)->pai = (yyvsp[-4].ast);
        (yyvsp[-4].ast)->filho = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
    }
#line 2607 "sintatico.tab.c"
    break;

  case 39: /* exp: expressao_logica  */
#line 330 "sintatico.y"
                     {
        (yyval.ast) = criaNo("exp");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2618 "sintatico.tab.c"
    break;

  case 40: /* exp: OP_LOGICA_NEG exp  */
#line 336 "sintatico.y"
                        {
        (yyval.ast) = criaNo("exp");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2629 "sintatico.tab.c"
    break;

  case 41: /* expressaoList: OP_LISTA ID PONTOVIRGULA  */
#line 345 "sintatico.y"
                             {
        (yyval.ast) = criaNo("expressaoList");
        strcpy((yyval.ast)->tipo, "OPERACAOLISTA");
    }
#line 2638 "sintatico.tab.c"
    break;

  case 42: /* expressaoList: exp CONSTRUTOR_LISTA ID PONTOVIRGULA  */
#line 349 "sintatico.y"
                                           {
        (yyval.ast) = criaNo("expressaoList");
        (yyval.ast)->pai = (yyvsp[-3].ast);
        strcpy((yyval.ast)->tipo, "CONSTRUTORLISTA");
    }
#line 2648 "sintatico.tab.c"
    break;

  case 43: /* expressaoList: exp FUNCOES_LISTA ID PONTOVIRGULA  */
#line 354 "sintatico.y"
                                        {
        (yyval.ast) = criaNo("expressaoList");
        (yyval.ast)->pai = (yyvsp[-3].ast);
        strcpy((yyval.ast)->tipo, "FUNCAOLISTA");
    }
#line 2658 "sintatico.tab.c"
    break;

  case 44: /* expressao_logica: expressao_logica OP_LOGICA_OR expressao_relacional  */
#line 362 "sintatico.y"
                                                       {
        (yyval.ast) = criaNo("expressaoLogica");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        //strcpy($$->tipo, "INT");
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
        
    }
#line 2671 "sintatico.tab.c"
    break;

  case 45: /* expressao_logica: expressao_logica OP_LOGICA_AND expressao_relacional  */
#line 370 "sintatico.y"
                                                          {
        (yyval.ast) = criaNo("expressaoLogica");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        //strcpy($$->tipo, "INT");
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
    }
#line 2683 "sintatico.tab.c"
    break;

  case 46: /* expressao_logica: expressao_relacional  */
#line 377 "sintatico.y"
                           {
        (yyval.ast) = criaNo("expressaoLogica");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2693 "sintatico.tab.c"
    break;

  case 47: /* expressao_relacional: opSomaSub  */
#line 385 "sintatico.y"
              {
        (yyval.ast) = criaNo("expressaoRelacional");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2703 "sintatico.tab.c"
    break;

  case 48: /* expressao_relacional: expressao_relacional OP_B_RELACIONAIS opSomaSub  */
#line 390 "sintatico.y"
                                                      {
        (yyval.ast) = criaNo("expressaoRelacional");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-2].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-2].ast)->simbolo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
    }
#line 2716 "sintatico.tab.c"
    break;

  case 49: /* opSomaSub: opMultDiv  */
#line 401 "sintatico.y"
              {
        (yyval.ast) = criaNo("Operando SomaSub");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2726 "sintatico.tab.c"
    break;

  case 50: /* opSomaSub: opSomaSub OP_B_SOMA_SUB opMultDiv  */
#line 406 "sintatico.y"
                                        {
        (yyval.ast) = criaNo("Operando SomaSub");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-2].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-2].ast)->simbolo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
    }
#line 2739 "sintatico.tab.c"
    break;

  case 51: /* opSomaSub: opSomaSub OP_B_SOMA_SUB OP_LISTA opMultDiv  */
#line 414 "sintatico.y"
                                                 {
        (yyval.ast) = criaNo("Operando SomaSub");
        (yyval.ast)->pai = (yyvsp[-3].ast);
        (yyvsp[-3].ast)->filho = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-3].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-3].ast)->simbolo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
    }
#line 2752 "sintatico.tab.c"
    break;

  case 52: /* opMultDiv: argumento  */
#line 426 "sintatico.y"
              {
        (yyval.ast) = criaNo("Operando MultDiv");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2762 "sintatico.tab.c"
    break;

  case 53: /* opMultDiv: opMultDiv OP_B_MULT_DIV argumento  */
#line 431 "sintatico.y"
                                        {
        (yyval.ast) = criaNo("Operando MultDiv");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-2].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-2].ast)->simbolo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
    }
#line 2775 "sintatico.tab.c"
    break;

  case 54: /* argumento: ID  */
#line 442 "sintatico.y"
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
#line 2790 "sintatico.tab.c"
    break;

  case 55: /* argumento: numero  */
#line 452 "sintatico.y"
             {
        (yyval.ast) = criaNo("argumento");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2801 "sintatico.tab.c"
    break;

  case 56: /* argumento: ABRE_PARENTESES exp FECHA_PARENTESES  */
#line 458 "sintatico.y"
                                           {
        (yyval.ast) = criaNo("argumento");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-1].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-1].ast)->simbolo);
    }
#line 2812 "sintatico.tab.c"
    break;

  case 57: /* argumento: chamadaDeFuncao  */
#line 464 "sintatico.y"
                      {
        (yyval.ast) = criaNo("argumento");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
    }
#line 2822 "sintatico.tab.c"
    break;

  case 58: /* chamadaDeFuncao: ID ABRE_PARENTESES exp FECHA_PARENTESES  */
#line 472 "sintatico.y"
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
#line 2837 "sintatico.tab.c"
    break;

  case 59: /* chamadaDeFuncao: ID ABRE_PARENTESES FECHA_PARENTESES  */
#line 482 "sintatico.y"
                                          {
        (yyval.ast) = criaNo("chamada de funcao");
        TabelaSimbolo* c = procuraVariavel(id, (yyvsp[-2].token).id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Funcao nao declarada!!!\n", (yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).id);
        }else{
            strcpy((yyval.ast)->tipo, c->tipo);
        }
    }
#line 2851 "sintatico.tab.c"
    break;

  case 60: /* entrada: ENTRADA ABRE_PARENTESES ID FECHA_PARENTESES PONTOVIRGULA  */
#line 494 "sintatico.y"
                                                             {
        (yyval.ast) = criaNo("entrada");
        TabelaSimbolo* c = procuraVariavel(id, (yyvsp[-2].token).id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Variavel nao declarada!!!\n", (yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).id);
        }else{
            strcpy((yyval.ast)->tipo, c->tipo);
        }
    }
#line 2865 "sintatico.tab.c"
    break;

  case 61: /* saida: SAIDA ABRE_PARENTESES STRING FECHA_PARENTESES PONTOVIRGULA  */
#line 506 "sintatico.y"
                                                               {
        (yyval.ast) = criaNo("saida");
        strcpy((yyval.ast)->simbolo, (yyvsp[-2].token).id);
    }
#line 2874 "sintatico.tab.c"
    break;

  case 62: /* saida: SAIDA ABRE_PARENTESES ID FECHA_PARENTESES PONTOVIRGULA  */
#line 510 "sintatico.y"
                                                             {
        (yyval.ast) = criaNo("saida");
        TabelaSimbolo* c = procuraVariavel(id, (yyvsp[-2].token).id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Variavel nao declarada!!!\n", (yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).id);
        }
    }
#line 2886 "sintatico.tab.c"
    break;

  case 63: /* saida: SAIDA ABRE_PARENTESES expressao FECHA_PARENTESES PONTOVIRGULA  */
#line 517 "sintatico.y"
                                                                    {
        (yyval.ast) = criaNo("saida");
        (yyval.ast)->pai = (yyvsp[-2].ast);
    }
#line 2895 "sintatico.tab.c"
    break;

  case 64: /* saida: SAIDA ABRE_PARENTESES OP_LISTA ID FECHA_PARENTESES PONTOVIRGULA  */
#line 521 "sintatico.y"
                                                                      {
        (yyval.ast) = criaNo("saida");
    }
#line 2903 "sintatico.tab.c"
    break;

  case 65: /* retorno: RETORNO exp PONTOVIRGULA  */
#line 527 "sintatico.y"
                             {
        (yyval.ast) = criaNo("retorno");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        char tipoRetornoC[20] = "";
        strcpy(tipoRetornoC, (yyvsp[-1].ast)->tipo);
    }
#line 2914 "sintatico.tab.c"
    break;

  case 66: /* retorno: RETORNO PONTOVIRGULA  */
#line 533 "sintatico.y"
                           {
        (yyval.ast) = criaNo("retorno");
    }
#line 2922 "sintatico.tab.c"
    break;

  case 67: /* nil: NIL PONTOVIRGULA  */
#line 539 "sintatico.y"
                     {
        (yyval.ast) = criaNo("NULO");
        strcpy((yyval.ast)->tipo, "NULO");
        strcpy((yyval.ast)->simbolo, (yyvsp[-1].token).id);
    }
#line 2932 "sintatico.tab.c"
    break;

  case 68: /* nil: OP_B_RELACIONAIS NIL  */
#line 544 "sintatico.y"
                           {
        (yyval.ast) = criaNo("NULO");
        strcpy((yyval.ast)->tipo, "NULO");
        strcpy((yyval.ast)->simbolo, (yyvsp[0].token).id);
    }
#line 2942 "sintatico.tab.c"
    break;

  case 69: /* numero: INT  */
#line 552 "sintatico.y"
        {
        (yyval.ast) = criaNo("Numero");
        strcpy((yyval.ast)->tipo, "INT");
        strcpy((yyval.ast)->simbolo, (yyvsp[0].token).id);
    }
#line 2952 "sintatico.tab.c"
    break;

  case 70: /* numero: FLOAT  */
#line 557 "sintatico.y"
            {
        (yyval.ast) = criaNo("Numero");
        strcpy((yyval.ast)->tipo, "FLOAT");
        strcpy((yyval.ast)->simbolo, (yyvsp[0].token).id);
    }
#line 2962 "sintatico.tab.c"
    break;


#line 2966 "sintatico.tab.c"

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

#line 565 "sintatico.y"


void yyerror(const char* s){
    fprintf(stderr, "Linha: %d - Coluna: %d - Token: %s - Erro: %s\n", yylval.token.linha, yylval.token.coluna, yylval.token.id, s);
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
    limpaTabela(id);
    liberaAST();
    fclose(yyin);
    yylex_destroy();
    printf("\n\n");
    return 0;
}
