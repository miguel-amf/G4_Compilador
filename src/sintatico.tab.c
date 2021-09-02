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
    extern int yylex();
    extern int yylex_destroy();
    extern void yyerror(const char* s);
    extern FILE *yyin;

#line 81 "sintatico.tab.c"

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
  YYSYMBOL_FOR = 18,                       /* FOR  */
  YYSYMBOL_RETORNO = 19,                   /* RETORNO  */
  YYSYMBOL_ENTRADA = 20,                   /* ENTRADA  */
  YYSYMBOL_SAIDA = 21,                     /* SAIDA  */
  YYSYMBOL_CONSTRUTOR_LISTA = 22,          /* CONSTRUTOR_LISTA  */
  YYSYMBOL_OP_LISTA = 23,                  /* OP_LISTA  */
  YYSYMBOL_FUNCOES_LISTA = 24,             /* FUNCOES_LISTA  */
  YYSYMBOL_STRING = 25,                    /* STRING  */
  YYSYMBOL_NIL = 26,                       /* NIL  */
  YYSYMBOL_ABRE_PARENTESES = 27,           /* ABRE_PARENTESES  */
  YYSYMBOL_FECHA_PARENTESES = 28,          /* FECHA_PARENTESES  */
  YYSYMBOL_ABRE_CHAVES = 29,               /* ABRE_CHAVES  */
  YYSYMBOL_FECHA_CHAVES = 30,              /* FECHA_CHAVES  */
  YYSYMBOL_ATRIBUICAO = 31,                /* ATRIBUICAO  */
  YYSYMBOL_VIRGULA = 32,                   /* VIRGULA  */
  YYSYMBOL_PONTOVIRGULA = 33,              /* PONTOVIRGULA  */
  YYSYMBOL_COLCHETES = 34,                 /* COLCHETES  */
  YYSYMBOL_YYACCEPT = 35,                  /* $accept  */
  YYSYMBOL_programa = 36,                  /* programa  */
  YYSYMBOL_listaDeDeclaracoes = 37,        /* listaDeDeclaracoes  */
  YYSYMBOL_TIPO = 38,                      /* TIPO  */
  YYSYMBOL_declaracao = 39,                /* declaracao  */
  YYSYMBOL_declaracaoVariavel = 40,        /* declaracaoVariavel  */
  YYSYMBOL_declaracaoFuncao = 41,          /* declaracaoFuncao  */
  YYSYMBOL_listaDeParametros = 42,         /* listaDeParametros  */
  YYSYMBOL_corpo = 43,                     /* corpo  */
  YYSYMBOL_dentroCorpo = 44,               /* dentroCorpo  */
  YYSYMBOL_declaracoes = 45,               /* declaracoes  */
  YYSYMBOL_expressao = 46,                 /* expressao  */
  YYSYMBOL_for = 47,                       /* for  */
  YYSYMBOL_condicional = 48,               /* condicional  */
  YYSYMBOL_exp = 49,                       /* exp  */
  YYSYMBOL_expressaoList = 50,             /* expressaoList  */
  YYSYMBOL_expressao_logica = 51,          /* expressao_logica  */
  YYSYMBOL_expressao_relacional = 52,      /* expressao_relacional  */
  YYSYMBOL_opSomaSub = 53,                 /* opSomaSub  */
  YYSYMBOL_opMultDiv = 54,                 /* opMultDiv  */
  YYSYMBOL_argumento = 55,                 /* argumento  */
  YYSYMBOL_chamadaDeFuncao = 56,           /* chamadaDeFuncao  */
  YYSYMBOL_entrada = 57,                   /* entrada  */
  YYSYMBOL_saida = 58,                     /* saida  */
  YYSYMBOL_retorno = 59,                   /* retorno  */
  YYSYMBOL_nil = 60,                       /* nil  */
  YYSYMBOL_numero = 61                     /* numero  */
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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2518

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  383

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   289


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    50,    50,    56,    59,    65,    68,    71,    74,    80,
      83,    89,    95,   101,   104,   107,   111,   117,   120,   126,
     129,   132,   135,   138,   141,   144,   147,   153,   156,   159,
     162,   169,   172,   175,   178,   184,   187,   193,   196,   202,
     205,   208,   214,   217,   220,   226,   229,   235,   238,   245,
     248,   254,   257,   260,   263,   269,   275,   281,   284,   287,
     290,   293,   299,   300,   304,   307,   313,   316
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
  "OP_LOGICA_OR", "OP_B_RELACIONAIS", "IF", "ELSE", "FOR", "RETORNO",
  "ENTRADA", "SAIDA", "CONSTRUTOR_LISTA", "OP_LISTA", "FUNCOES_LISTA",
  "STRING", "NIL", "ABRE_PARENTESES", "FECHA_PARENTESES", "ABRE_CHAVES",
  "FECHA_CHAVES", "ATRIBUICAO", "VIRGULA", "PONTOVIRGULA", "COLCHETES",
  "$accept", "programa", "listaDeDeclaracoes", "TIPO", "declaracao",
  "declaracaoVariavel", "declaracaoFuncao", "listaDeParametros", "corpo",
  "dentroCorpo", "declaracoes", "expressao", "for", "condicional", "exp",
  "expressaoList", "expressao_logica", "expressao_relacional", "opSomaSub",
  "opMultDiv", "argumento", "chamadaDeFuncao", "entrada", "saida",
  "retorno", "nil", "numero", YY_NULLPTR
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
     285,   286,   287,   288,   289
};
#endif

#define YYPACT_NINF (-182)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-68)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1816,    19,    21,    22,    42,    57,  2455,    69,  2467,  2471,
    2481,  -182,  2485,    34,   345,  2495,    89,    65,   103,    84,
     345,  1677,  2499,    75,  1854,  2155,  2170,    39,    98,   112,
      14,   113,   120,   145,    51,   148,   423,   653,   126,   741,
     809,   837,   865,   292,   893,  1765,   166,  2318,  2185,  2200,
    2215,   921,   949,   977,  2230,    51,   123,  1994,   646,   218,
     373,  1005,   132,   165,    46,   137,   154,   140,  2509,   147,
     184,   188,  1033,    78,    78,    78,    78,    78,   170,   183,
     182,  1061,  1089,   192,   496,   583,  1117,   198,  1782,   226,
     214,   216,   233,  1145,  2245,   232,   235,   400,  1930,  2331,
    2260,  2275,  2290,  1173,  1201,  1677,  1704,   267,   239,   250,
      32,   254,  1229,   255,  1257,  1285,  1313,   199,   253,  1341,
    1369,   262,  1397,  1425,  1677,    18,  1453,  1481,     6,   294,
     234,   271,   268,   274,   287,  1509,   271,   271,   271,  1537,
    1565,  1593,  1677,   265,   456,   604,   451,    51,   130,   213,
     293,   617,   725,   776,  1956,   768,   792,  2026,    51,    51,
     143,   245,  2438,  2381,  2387,  2396,  2402,  1806,  2000,  2020,
     532,   315,    51,   301,  1974,  1858,    74,  2035,  2050,  2065,
    2080,  1878,   327,   677,   594,   680,  1621,   330,   334,   311,
    1902,   338,   802,   341,   149,  1926,   316,   318,    35,   328,
     329,   355,  1677,   363,   351,   364,   367,   374,   377,   830,
     384,   386,   394,   399,   344,   347,   406,   405,    51,   404,
     412,   107,   107,   107,   107,   107,    51,   417,   419,   156,
     156,   156,   156,   156,    51,  1950,   567,   415,   429,   181,
     181,   181,   181,   181,   286,   418,   459,   460,   771,   426,
     432,   356,   455,   492,   504,   508,  1970,   471,   481,   487,
     491,   528,   218,   373,   509,   501,   536,    72,   507,   514,
     513,   544,   546,   533,  1649,   525,  2346,   446,   634,   375,
    2355,  2361,   529,  2408,   390,   494,  2444,  2417,  2423,   539,
    2095,  1882,  1906,  2303,  2110,  2125,   534,   542,  1725,  1731,
    1736,   545,   552,   549,   562,   568,   560,   600,   601,   605,
     576,   578,   595,   606,   596,   602,   616,   624,   614,  1779,
     583,   626,   619,  1830,   650,   627,   621,   647,   660,   661,
     664,   652,   670,  2370,  2429,  2140,  1742,  1757,  1763,  1768,
     683,   690,   691,   706,   695,   703,  1704,  1704,   718,   692,
     693,    76,   698,   721,   709,   734,   735,   736,   739,   732,
     748,   749,   740,   750,   755,  1704,    33,   760,   764,    25,
     782,   498,   770,   780,   791,   793,   806,   770,   770,   770,
     814,   817,   820
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -182,  -182,  -182,     0,   841,     2,  -182,   828,   -15,   -28,
     -96,   -27,  -103,   -99,    60,    73,   358,   571,   493,   466,
     251,   340,   -94,   -91,   -83,  -181,   -29
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     5,     6,    35,     8,    36,    10,    17,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    82,    54
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,   154,     9,   207,    22,   166,     7,   208,     9,   116,
     117,    69,   211,   260,    16,   212,   130,   143,   144,   145,
      16,   128,    -5,   213,    -6,    -7,   166,   146,   127,    81,
     180,   129,    83,    85,   131,   371,   369,    92,   143,   144,
     145,   147,    57,    25,    26,    -8,   370,    61,   146,    88,
      25,    26,    27,   372,   155,   156,   157,    11,   107,    27,
     121,    14,   147,   299,   158,   214,    34,    15,   264,    89,
     308,    90,    13,    34,    91,   323,    25,    26,   159,   206,
     317,    57,    25,    26,   242,    27,   -45,    58,   -45,   -45,
      62,   205,    18,    19,    66,   324,   -45,   325,   -45,    34,
     326,   134,   -45,   -13,   362,    34,   203,   -45,   204,   214,
     143,   144,   145,    21,   217,    78,   135,   154,   166,    84,
     183,   139,   140,   141,   185,    59,    24,    25,    26,   166,
     166,   -14,   173,   184,   147,    20,    27,   173,    79,    60,
      63,   180,   221,   166,   222,   192,    33,    64,    65,    80,
      34,    67,   256,    25,    26,   229,    68,   230,   193,   155,
     156,   157,    27,   -37,   257,    86,   209,   259,    87,   154,
      93,   -37,   171,   186,   269,   258,    34,   -17,   -44,   210,
     -44,    75,    94,   159,   235,   168,   169,    95,   -44,   166,
     -44,    96,   154,   154,   154,   154,   154,   166,   102,   -44,
     166,   166,   166,   166,   166,   166,   219,   220,   172,   103,
     180,   180,   180,   180,   180,   104,   124,   298,   227,   228,
     105,   167,   168,   169,   307,   -44,   108,   -44,   223,   110,
     236,   170,   238,   180,   316,   318,   320,   133,   215,   216,
     327,   171,   111,   207,   207,   172,   -44,   208,   208,   112,
     357,   358,   211,   211,   185,   212,   212,   -44,   265,   -44,
     231,   113,   207,   213,   213,   114,   208,   173,   115,   368,
     118,   211,   119,   -44,   212,   -51,   -51,   -51,   275,   -51,
     -51,   152,   213,   120,   125,   164,   282,   122,   123,   181,
      25,    26,   218,   348,   289,   126,   136,   132,   -51,    27,
     142,   296,   137,   224,   183,   -45,   164,   -45,   -45,   182,
     178,   192,   297,    34,    70,   138,    71,   184,   237,   206,
     206,   209,   319,   183,   193,    72,   -45,   185,   101,   -28,
     245,   205,   205,   249,   210,   173,   184,   250,   206,   -27,
     173,   252,   375,   262,   -28,   263,   203,   203,   204,   204,
     205,     1,     2,     3,     4,   266,   267,   376,   268,   190,
      25,    26,   380,   381,   382,   203,   270,   204,   -20,    27,
     153,   305,   -39,   -15,   165,   -66,   181,    25,    26,   191,
     192,   -19,   306,    34,   -21,   224,    27,   -46,   148,   -46,
     -46,   -25,   160,   193,   -26,   165,   182,   152,   164,   179,
      34,   -28,   -43,   -22,   -43,   231,   209,   209,   -46,   164,
     164,   -24,   -43,   160,   -43,    75,   -23,   174,   -43,   210,
     210,   178,   -43,   164,   -43,   209,   -20,   -20,   -20,   -20,
     -20,   -20,   -20,   -43,   -67,   274,   -20,   -38,   210,   -20,
     276,   -20,   -20,   -20,   -20,   -38,   -20,   283,   214,   152,
     -20,   300,   -20,   -20,   143,   144,   145,   290,   -43,   303,
     -43,   223,   301,   302,   146,   304,   -66,   -66,   -66,   164,
     -66,   -66,   152,   152,   152,   152,   281,   164,   147,   -43,
     164,   164,   164,   164,   288,   164,   153,   165,   309,   -66,
     178,   178,   178,   178,   295,   310,   151,   312,   165,   165,
     163,   374,   215,   216,   148,   160,   -42,   311,   -42,   231,
     179,   -27,   165,   178,   313,   -29,   160,   160,   187,   -30,
     188,   163,   -42,   150,   106,   177,   -63,   162,   174,   189,
     160,   195,    25,    26,   321,   235,   168,   169,   153,   322,
     328,    27,   100,   314,   329,   170,   330,   331,   162,   332,
     -27,   201,   176,   333,   315,    34,   148,   334,   165,   172,
     336,   153,   153,   153,   153,   153,   165,   335,    99,   165,
     165,   165,   165,   165,   165,   337,   160,   -40,   338,   179,
     179,   179,   179,   179,   160,   339,   190,    25,    26,   -38,
     -41,   -38,   160,   341,   340,   -38,    27,   -28,   -28,   -28,
     -38,   149,   179,   -29,   -30,   161,   191,   -28,   -39,   342,
      34,   343,   151,   163,   -67,   -67,   -67,   -28,   -67,   -67,
     174,   -28,   344,   -65,   163,   163,   161,   -47,   225,   -47,
     175,   -47,   -47,   -29,   -64,   345,   177,   -67,   163,   150,
     162,   -30,   346,   -62,    97,    98,   -42,   349,   -42,   223,
     -47,   162,   162,   351,   353,   352,   -19,   -19,   -19,   -19,
     -19,   -19,   -19,   176,   151,   162,   -19,   -42,   -38,   -19,
     -38,   -19,   -19,   -19,   -19,   354,   -19,   -39,   -16,   -38,
     -19,   -11,   -19,   -19,   163,   355,   -65,   151,   151,   151,
     280,   150,   163,   -64,   -40,   163,   163,   163,   287,   246,
     163,   247,   187,   356,   188,   177,   177,   177,   294,   -41,
     248,   162,   -65,   189,   150,   150,   279,   149,   161,   162,
     -64,   359,   162,   162,   286,   360,   361,   162,   177,   161,
     161,   363,   176,   176,   293,   -49,   -49,   -49,   -60,   -49,
     -49,   175,   364,   161,    24,    25,    26,     1,     2,     3,
       4,   -40,   -41,   -35,    27,   176,   365,    28,   -49,    29,
      30,    31,    32,   366,    33,   -56,   -58,   -57,    34,   149,
     142,   -18,   -59,   367,   -27,   -27,   -27,   -61,   -51,   -51,
     -51,   -36,   -51,   -51,   -27,   373,   -54,   -54,   -54,   161,
     -54,   -54,   277,   278,   -27,   226,   -51,   161,   -27,   202,
     284,   285,   -66,   -66,   -66,   161,   -66,   -66,   377,   -54,
     291,   292,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   378,
     -66,   379,   -21,   -31,   253,   -21,   254,   -21,   -21,   -21,
     -21,   -34,   -21,   175,   -32,   255,   -21,   -33,   -21,   -21,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,    12,    23,     0,
     -25,     0,   271,   -25,   272,   -25,   -25,   -25,   -25,     0,
     -25,     0,     0,   273,   -25,     0,   -25,   -25,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,     0,     0,     0,   -26,     0,
       0,   -26,     0,   -26,   -26,   -26,   -26,     0,   -26,     0,
       0,     0,   -26,     0,   -26,   -26,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,     0,     0,     0,   -28,     0,     0,   -28,
       0,   -28,   -28,   -28,   -28,     0,   -28,     0,     0,     0,
     -28,     0,   -28,   -28,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,     0,     0,     0,   -22,     0,     0,   -22,     0,   -22,
     -22,   -22,   -22,     0,   -22,     0,     0,     0,   -22,     0,
     -22,   -22,   -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,
       0,     0,   -24,     0,     0,   -24,     0,   -24,   -24,   -24,
     -24,     0,   -24,     0,     0,     0,   -24,     0,   -24,   -24,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,     0,     0,     0,
     -23,     0,     0,   -23,     0,   -23,   -23,   -23,   -23,     0,
     -23,     0,     0,     0,   -23,     0,   -23,   -23,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,     0,     0,     0,   -63,     0,
       0,   -63,     0,   -63,   -63,   -63,   -63,     0,   -63,     0,
       0,     0,   -63,     0,   -63,   -63,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,     0,     0,     0,   -27,     0,     0,   -27,
       0,   -27,   -27,   -27,   -27,     0,   -27,     0,     0,     0,
     -27,     0,   -27,   -27,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,     0,     0,     0,   -29,     0,     0,   -29,     0,   -29,
     -29,   -29,   -29,     0,   -29,     0,     0,     0,   -29,     0,
     -29,   -29,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,
       0,     0,   -30,     0,     0,   -30,     0,   -30,   -30,   -30,
     -30,     0,   -30,     0,     0,     0,   -30,     0,   -30,   -30,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,     0,
     -62,     0,     0,   -62,     0,   -62,   -62,   -62,   -62,     0,
     -62,     0,     0,     0,   -62,     0,   -62,   -62,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,     0,     0,     0,   -39,     0,
       0,   -39,     0,   -39,   -39,   -39,   -39,     0,   -39,     0,
       0,     0,   -39,     0,   -39,   -39,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,   -65,     0,     0,   -65,
       0,   -65,   -65,   -65,   -65,     0,   -65,     0,     0,     0,
     -65,     0,   -65,   -65,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,     0,     0,     0,   -64,     0,     0,   -64,     0,   -64,
     -64,   -64,   -64,     0,   -64,     0,     0,     0,   -64,     0,
     -64,   -64,   -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,
       0,     0,   -60,     0,     0,   -60,     0,   -60,   -60,   -60,
     -60,     0,   -60,     0,     0,     0,   -60,     0,   -60,   -60,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,     0,     0,
     -40,     0,     0,   -40,     0,   -40,   -40,   -40,   -40,     0,
     -40,     0,     0,     0,   -40,     0,   -40,   -40,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,     0,     0,     0,   -41,     0,
       0,   -41,     0,   -41,   -41,   -41,   -41,     0,   -41,     0,
       0,     0,   -41,     0,   -41,   -41,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,     0,     0,     0,   -35,     0,     0,   -35,
       0,   -35,   -35,   -35,   -35,     0,   -35,     0,     0,     0,
     -35,     0,   -35,   -35,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,     0,     0,     0,   -56,     0,     0,   -56,     0,   -56,
     -56,   -56,   -56,     0,   -56,     0,     0,     0,   -56,     0,
     -56,   -56,   -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,
       0,     0,   -58,     0,     0,   -58,     0,   -58,   -58,   -58,
     -58,     0,   -58,     0,     0,     0,   -58,     0,   -58,   -58,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,     0,     0,
     -57,     0,     0,   -57,     0,   -57,   -57,   -57,   -57,     0,
     -57,     0,     0,     0,   -57,     0,   -57,   -57,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,     0,     0,     0,   -59,     0,
       0,   -59,     0,   -59,   -59,   -59,   -59,     0,   -59,     0,
       0,     0,   -59,     0,   -59,   -59,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,     0,     0,     0,   -61,     0,     0,   -61,
       0,   -61,   -61,   -61,   -61,     0,   -61,     0,     0,     0,
     -61,     0,   -61,   -61,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,     0,     0,     0,   -36,     0,     0,   -36,     0,   -36,
     -36,   -36,   -36,     0,   -36,     0,     0,     0,   -36,     0,
     -36,   -36,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,
       0,     0,   -31,     0,     0,   -31,     0,   -31,   -31,   -31,
     -31,     0,   -31,     0,     0,     0,   -31,     0,   -31,   -31,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,     0,     0,
     -34,     0,     0,   -34,     0,   -34,   -34,   -34,   -34,     0,
     -34,     0,     0,     0,   -34,     0,   -34,   -34,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,     0,     0,     0,   -32,     0,
       0,   -32,     0,   -32,   -32,   -32,   -32,     0,   -32,     0,
       0,     0,   -32,     0,   -32,   -32,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,     0,     0,     0,   -33,     0,     0,   -33,
       0,   -33,   -33,   -33,   -33,     0,   -33,     0,     0,     0,
     -33,     0,   -33,   -33,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,     0,     0,     0,   -11,     0,     0,   -11,     0,   -11,
     -11,   -11,   -11,     0,   -11,     0,     0,     0,   -11,     0,
     -11,   -11,   -16,   -16,   -16,   -16,   -16,   -16,   -16,     0,
       0,     0,   -16,     0,     0,   -16,     0,   -16,   -16,   -16,
     -16,     0,   -16,     0,     0,     0,   -16,     0,   -16,   -16,
      24,    25,    26,     1,     2,     3,     4,     0,     0,     0,
      27,     0,     0,    28,     0,    29,    30,    31,    32,     0,
      33,     0,     0,     0,    34,     0,   142,   195,    25,    26,
       1,     2,     3,     4,     0,     0,     0,    27,     0,     0,
     196,     0,   197,   198,   199,   200,     0,   201,   -29,   -29,
     -29,    34,     0,   202,   -30,   -30,   -30,     0,   -29,   -39,
     -39,   -39,     0,     0,   -30,   -65,   -65,   -65,   -29,   -39,
       0,     0,   -29,     0,   -30,   -65,     0,     0,   -30,   -39,
     -64,   -64,   -64,   -39,     0,   -65,   -40,   -40,   -40,   -65,
     -64,   -41,   -41,   -41,     0,     0,   -40,    73,     0,    74,
     -64,   -41,     0,     0,   -64,     0,   -40,   -37,     0,   -37,
     -40,   -41,   -51,   -51,   -51,   -41,   -51,   -51,   -37,     0,
       0,   187,     0,   188,   -51,     0,   -51,   347,     0,    55,
     109,     0,   189,   194,     0,   -51,   -51,   -51,   -51,     0,
     -51,   -51,     1,     2,     3,     4,     0,     0,   -51,     0,
     -51,     0,     0,   234,   -51,     0,     0,   194,     0,   -51,
     -51,   -51,   -51,     0,   -51,   -51,     0,     0,     0,     0,
       0,     0,   -51,     0,   -51,     0,     0,    55,   350,     0,
       0,   194,     0,   -51,   -51,   -51,   -51,     0,   -51,   -51,
     -44,     0,   -44,   241,     0,     0,   -51,     0,   -51,     0,
     -44,    55,   -44,     0,     0,    56,   -44,   -51,   -51,   -51,
     -51,   -44,   -51,   -51,   -43,     0,   -43,   241,     0,     0,
     -51,     0,   -51,     0,   -43,    55,   -43,     0,     0,   244,
     -43,   -51,   -51,   -51,   -51,   -43,   -51,   -51,   -42,     0,
     -42,   241,     0,     0,   -51,     0,   -51,     0,   -42,    55,
     -42,     0,     0,   251,   -42,   -51,   -51,   -51,   -51,   -42,
     -51,   -51,   -42,     0,   -42,    75,     0,     0,   -51,     0,
     -51,     0,   -42,    55,   -42,     0,     0,   261,     0,   -51,
     -51,   -51,   -51,   -42,   -51,   -51,   -52,   -52,   -52,     0,
     -52,   -52,   -51,     0,   -51,     0,     0,   234,   -51,     0,
     -51,   -51,   -51,   -51,   -51,   -51,   239,     0,   240,   -52,
       0,     0,   -51,     0,   -51,     0,   -37,    55,   -37,     0,
       0,   194,   -37,   -51,   -51,   -51,   -51,   -37,   -51,   -51,
     -66,   -66,   -66,     0,   -66,   -66,   -51,     0,   -51,     0,
       0,    55,   -66,     0,   -66,     0,     0,   -51,   -66,     0,
     -67,   -67,   -67,   -66,   -67,   -67,   -67,   -67,   -67,     0,
     -67,   -67,   -67,     0,   -67,   -47,   243,   -47,   -67,   -47,
     -47,     0,     0,   -67,   -67,     0,     0,   -47,     0,   -47,
     -49,   -49,   -49,   -47,   -49,   -49,     0,     0,   -47,     0,
       0,     0,   -49,     0,   -49,   -54,   -54,   -54,   -49,   -54,
     -54,     0,     0,   -49,     0,     0,     0,   -54,     0,   -54,
     -52,   -52,   -52,   -54,   -52,   -52,     0,     0,   -54,     0,
       0,     0,   -52,     0,   -52,   -53,   -53,   -53,   -52,   -53,
     -53,     0,     0,   -52,     0,     0,     0,   -53,     0,   -53,
     -48,   243,   -48,   -53,   -48,   -48,     0,     0,   -53,     0,
       0,     0,   -48,     0,   -48,   -50,   -50,   -50,   -48,   -50,
     -50,     0,     0,   -48,     0,     0,     0,   -50,     0,   -50,
     -55,   -55,   -55,   -50,   -55,   -55,     0,     0,   -50,     0,
       0,     0,   -55,     0,   -55,   -66,   -66,   -66,   -55,   -66,
     -66,     0,     0,   -55,     0,     0,     0,   -66,     0,   -66,
     -67,   -67,   -67,     0,   -67,   -67,     0,     0,   -66,     0,
       0,     0,   -67,     0,   -67,   -47,    77,   -47,     0,   -47,
     -47,     0,     0,   -67,     0,     0,     0,   -47,     0,   -47,
     -49,   -49,   -49,     0,   -49,   -49,     0,     0,   -47,     0,
       0,     0,   -49,     0,   -49,   -54,   -54,   -54,     0,   -54,
     -54,     0,     0,   -49,     0,     0,     0,   -54,     0,   -54,
     -52,   -52,   -52,     0,   -52,   -52,     0,     0,   -54,     0,
       0,     0,   -52,     0,   -52,   -53,   -53,   -53,     0,   -53,
     -53,     0,     0,   -52,     0,     0,     0,   -53,     0,   -53,
     -48,    77,   -48,     0,   -48,   -48,     0,     0,   -53,     0,
       0,     0,   -48,     0,   -48,   -50,   -50,   -50,     0,   -50,
     -50,     0,     0,   -48,     0,     0,     0,   -50,     0,   -50,
     -55,   -55,   -55,     0,   -55,   -55,     0,     0,   -50,     0,
       0,     0,   -55,   242,   -55,   -46,     0,   -46,   -46,     0,
       0,     0,     0,   -55,     0,   -46,     0,   -46,    76,     0,
     -45,   -46,   -45,   -45,     0,     0,   -46,     0,     0,     0,
     -45,    76,   -45,   -46,     0,   -46,   -46,     0,     0,     0,
       0,   -45,     0,   -46,     0,   -46,   -53,   -53,   -53,     0,
     -53,   -53,     0,     0,   -46,   -48,   225,   -48,     0,   -48,
     -48,   -50,   -50,   -50,     0,   -50,   -50,     0,     0,   -53,
     -55,   -55,   -55,     0,   -55,   -55,     0,     0,   -48,     0,
       0,   -47,   233,   -47,   -50,   -47,   -47,   -49,   -49,   -49,
       0,   -49,   -49,   -55,     0,     0,   -54,   -54,   -54,   -47,
     -54,   -54,   -52,   -52,   -52,   -49,   -52,   -52,   -53,   -53,
     -53,     0,   -53,   -53,   -54,     0,     0,   -48,   233,   -48,
     -52,   -48,   -48,   -50,   -50,   -50,   -53,   -50,   -50,   -55,
     -55,   -55,     0,   -55,   -55,   -48,     0,     0,   232,     0,
     -45,   -50,   -45,   -45,   232,    -2,   -46,   -55,   -46,   -46,
       0,     1,     2,     3,     4,     0,   -45,    -4,     0,     0,
       0,    -9,   -46,    -4,    -4,    -4,    -4,    -9,    -9,    -9,
      -9,   -10,     0,     0,     0,    -3,     0,   -10,   -10,   -10,
     -10,    -3,    -3,    -3,    -3,   -11,     0,     0,     0,   -12,
       0,   -11,   -11,   -11,   -11,   -12,   -12,   -12,   -12,   -16,
       0,     0,     0,     0,     0,   -16,   -16,   -16,   -16
};

static const yytype_int16 yycheck[] =
{
       0,    30,     0,   106,    19,    34,     6,   106,     6,   105,
     106,    39,   106,   194,    14,   106,    10,     3,     4,     5,
      20,     3,     3,   106,     3,     3,    55,    13,   124,    56,
      59,    13,    59,    60,    28,    10,     3,    64,     3,     4,
       5,    27,     3,     4,     5,     3,    13,    33,    13,     3,
       4,     5,    13,    28,     3,     4,     5,     0,    85,    13,
      28,    27,    27,   244,    13,    33,    27,    33,    33,    23,
     251,    25,     3,    27,    28,     3,     4,     5,    27,   106,
     261,     3,     4,     5,    10,    13,    12,    27,    14,    15,
      30,   106,     3,    28,    34,    23,    22,    25,    24,    27,
      28,   130,    28,    28,    28,    27,   106,    33,   106,    33,
       3,     4,     5,    29,   142,    55,   131,   146,   147,    59,
      60,   136,   137,   138,    64,    27,     3,     4,     5,   158,
     159,    28,    59,    60,    27,    32,    13,    64,    15,    27,
      27,   170,    12,   172,    14,    85,    23,    27,     3,    26,
      27,     3,     3,     4,     5,    12,    30,    14,    85,     3,
       4,     5,    13,    33,    15,    33,   106,   194,     3,   198,
      33,    28,    23,    33,   202,    26,    27,    30,    12,   106,
      14,    15,    28,    27,     3,     4,     5,     3,    22,   218,
      24,     3,   221,   222,   223,   224,   225,   226,    28,    33,
     229,   230,   231,   232,   233,   234,   146,   147,    27,    26,
     239,   240,   241,   242,   243,    33,    17,   244,   158,   159,
      28,     3,     4,     5,   251,    12,    28,    14,    15,     3,
     170,    13,   172,   262,   261,   262,   263,     3,     4,     5,
     267,    23,    28,   346,   347,    27,    33,   346,   347,    33,
     346,   347,   346,   347,   194,   346,   347,    12,   198,    14,
      15,    28,   365,   346,   347,    33,   365,   194,    33,   365,
       3,   365,    33,    28,   365,    10,    11,    12,   218,    14,
      15,    30,   365,    33,    31,    34,   226,    33,    33,     3,
       4,     5,    27,   320,   234,    33,    28,     3,    33,    13,
      29,    15,    28,    10,   244,    12,    55,    14,    15,    23,
      59,   251,    26,    27,    22,    28,    24,   244,     3,   346,
     347,   261,   262,   263,   251,    33,    33,   267,    77,    28,
       3,   346,   347,     3,   261,   262,   263,     3,   365,    28,
     267,     3,   371,    27,     3,    27,   346,   347,   346,   347,
     365,     6,     7,     8,     9,    27,    27,   372,     3,     3,
       4,     5,   377,   378,   379,   365,     3,   365,    17,    13,
      30,    15,    28,    28,    34,    28,     3,     4,     5,    23,
     320,    17,    26,    27,    17,    10,    13,    12,    30,    14,
      15,    17,    34,   320,    17,    55,    23,   146,   147,    59,
      27,    17,    12,    17,    14,    15,   346,   347,    33,   158,
     159,    17,    12,    55,    14,    15,    17,    59,    28,   346,
     347,   170,    22,   172,    24,   365,     3,     4,     5,     6,
       7,     8,     9,    33,    28,    30,    13,    33,   365,    16,
      28,    18,    19,    20,    21,    28,    23,    28,    33,   198,
      27,    33,    29,    30,     3,     4,     5,    28,    12,    33,
      14,    15,     3,     3,    13,    33,    10,    11,    12,   218,
      14,    15,   221,   222,   223,   224,   225,   226,    27,    33,
     229,   230,   231,   232,   233,   234,   146,   147,    33,    33,
     239,   240,   241,   242,   243,     3,    30,    26,   158,   159,
      34,     3,     4,     5,   146,   147,    12,     3,    14,    15,
     170,     3,   172,   262,    33,    28,   158,   159,    22,    28,
      24,    55,    28,    30,    28,    59,    17,    34,   170,    33,
     172,     3,     4,     5,    33,     3,     4,     5,   198,     3,
      33,    13,    76,    15,    30,    13,    33,     3,    55,     3,
      17,    23,    59,    28,    26,    27,   198,    28,   218,    27,
      26,   221,   222,   223,   224,   225,   226,    28,    75,   229,
     230,   231,   232,   233,   234,    33,   218,    28,    33,   239,
     240,   241,   242,   243,   226,    33,     3,     4,     5,    22,
      28,    24,   234,    33,    26,    28,    13,     3,     4,     5,
      33,    30,   262,     3,     3,    34,    23,    13,     3,    33,
      27,    33,   146,   147,    10,    11,    12,    23,    14,    15,
     262,    27,    26,    28,   158,   159,    55,    10,    11,    12,
      59,    14,    15,    17,    28,    33,   170,    33,   172,   146,
     147,    17,    28,    17,    73,    74,    12,    28,    14,    15,
      33,   158,   159,     3,    33,    28,     3,     4,     5,     6,
       7,     8,     9,   170,   198,   172,    13,    33,    22,    16,
      24,    18,    19,    20,    21,    28,    23,    17,    17,    33,
      27,    17,    29,    30,   218,    33,     3,   221,   222,   223,
     224,   198,   226,     3,     3,   229,   230,   231,   232,    22,
     234,    24,    22,    33,    24,   239,   240,   241,   242,     3,
      33,   218,    17,    33,   221,   222,   223,   146,   147,   226,
      17,     3,   229,   230,   231,    33,    33,   234,   262,   158,
     159,    33,   239,   240,   241,    10,    11,    12,    17,    14,
      15,   170,    33,   172,     3,     4,     5,     6,     7,     8,
       9,    17,    17,    17,    13,   262,    17,    16,    33,    18,
      19,    20,    21,    31,    23,    17,    17,    17,    27,   198,
      29,    30,    17,    33,     3,     4,     5,    17,    10,    11,
      12,    17,    14,    15,    13,     3,    10,    11,    12,   218,
      14,    15,   221,   222,    23,    27,    28,   226,    27,    29,
     229,   230,    10,    11,    12,   234,    14,    15,    28,    33,
     239,   240,     3,     4,     5,     6,     7,     8,     9,    28,
      28,    28,    13,    17,    22,    16,    24,    18,    19,    20,
      21,    17,    23,   262,    17,    33,    27,    17,    29,    30,
       3,     4,     5,     6,     7,     8,     9,     6,    20,    -1,
      13,    -1,    22,    16,    24,    18,    19,    20,    21,    -1,
      23,    -1,    -1,    33,    27,    -1,    29,    30,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,
      -1,    18,    19,    20,    21,    -1,    23,    -1,    -1,    -1,
      27,    -1,    29,    30,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    13,    -1,    -1,    16,    -1,    18,
      19,    20,    21,    -1,    23,    -1,    -1,    -1,    27,    -1,
      29,    30,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      13,    -1,    -1,    16,    -1,    18,    19,    20,    21,    -1,
      23,    -1,    -1,    -1,    27,    -1,    29,    30,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,
      -1,    18,    19,    20,    21,    -1,    23,    -1,    -1,    -1,
      27,    -1,    29,    30,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    13,    -1,    -1,    16,    -1,    18,
      19,    20,    21,    -1,    23,    -1,    -1,    -1,    27,    -1,
      29,    30,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      13,    -1,    -1,    16,    -1,    18,    19,    20,    21,    -1,
      23,    -1,    -1,    -1,    27,    -1,    29,    30,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,
      -1,    18,    19,    20,    21,    -1,    23,    -1,    -1,    -1,
      27,    -1,    29,    30,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    13,    -1,    -1,    16,    -1,    18,
      19,    20,    21,    -1,    23,    -1,    -1,    -1,    27,    -1,
      29,    30,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      13,    -1,    -1,    16,    -1,    18,    19,    20,    21,    -1,
      23,    -1,    -1,    -1,    27,    -1,    29,    30,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,
      -1,    18,    19,    20,    21,    -1,    23,    -1,    -1,    -1,
      27,    -1,    29,    30,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    13,    -1,    -1,    16,    -1,    18,
      19,    20,    21,    -1,    23,    -1,    -1,    -1,    27,    -1,
      29,    30,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      13,    -1,    -1,    16,    -1,    18,    19,    20,    21,    -1,
      23,    -1,    -1,    -1,    27,    -1,    29,    30,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,
      -1,    18,    19,    20,    21,    -1,    23,    -1,    -1,    -1,
      27,    -1,    29,    30,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    13,    -1,    -1,    16,    -1,    18,
      19,    20,    21,    -1,    23,    -1,    -1,    -1,    27,    -1,
      29,    30,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      13,    -1,    -1,    16,    -1,    18,    19,    20,    21,    -1,
      23,    -1,    -1,    -1,    27,    -1,    29,    30,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,
      -1,    18,    19,    20,    21,    -1,    23,    -1,    -1,    -1,
      27,    -1,    29,    30,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    13,    -1,    -1,    16,    -1,    18,
      19,    20,    21,    -1,    23,    -1,    -1,    -1,    27,    -1,
      29,    30,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      13,    -1,    -1,    16,    -1,    18,    19,    20,    21,    -1,
      23,    -1,    -1,    -1,    27,    -1,    29,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,
      16,    -1,    18,    19,    20,    21,    -1,    23,     3,     4,
       5,    27,    -1,    29,     3,     4,     5,    -1,    13,     3,
       4,     5,    -1,    -1,    13,     3,     4,     5,    23,    13,
      -1,    -1,    27,    -1,    23,    13,    -1,    -1,    27,    23,
       3,     4,     5,    27,    -1,    23,     3,     4,     5,    27,
      13,     3,     4,     5,    -1,    -1,    13,    12,    -1,    14,
      23,    13,    -1,    -1,    27,    -1,    23,    22,    -1,    24,
      27,    23,    10,    11,    12,    27,    14,    15,    33,    -1,
      -1,    22,    -1,    24,    22,    -1,    24,    28,    -1,    27,
      28,    -1,    33,    31,    -1,    33,    10,    11,    12,    -1,
      14,    15,     6,     7,     8,     9,    -1,    -1,    22,    -1,
      24,    -1,    -1,    27,    28,    -1,    -1,    31,    -1,    33,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,    -1,    33,    10,    11,    12,    -1,    14,    15,
      12,    -1,    14,    15,    -1,    -1,    22,    -1,    24,    -1,
      22,    27,    24,    -1,    -1,    31,    28,    33,    10,    11,
      12,    33,    14,    15,    12,    -1,    14,    15,    -1,    -1,
      22,    -1,    24,    -1,    22,    27,    24,    -1,    -1,    31,
      28,    33,    10,    11,    12,    33,    14,    15,    12,    -1,
      14,    15,    -1,    -1,    22,    -1,    24,    -1,    22,    27,
      24,    -1,    -1,    31,    28,    33,    10,    11,    12,    33,
      14,    15,    12,    -1,    14,    15,    -1,    -1,    22,    -1,
      24,    -1,    22,    27,    24,    -1,    -1,    31,    -1,    33,
      10,    11,    12,    33,    14,    15,    10,    11,    12,    -1,
      14,    15,    22,    -1,    24,    -1,    -1,    27,    28,    -1,
      10,    11,    12,    33,    14,    15,    12,    -1,    14,    33,
      -1,    -1,    22,    -1,    24,    -1,    22,    27,    24,    -1,
      -1,    31,    28,    33,    10,    11,    12,    33,    14,    15,
      10,    11,    12,    -1,    14,    15,    22,    -1,    24,    -1,
      -1,    27,    22,    -1,    24,    -1,    -1,    33,    28,    -1,
      10,    11,    12,    33,    14,    15,    10,    11,    12,    -1,
      14,    15,    22,    -1,    24,    10,    11,    12,    28,    14,
      15,    -1,    -1,    33,    28,    -1,    -1,    22,    -1,    24,
      10,    11,    12,    28,    14,    15,    -1,    -1,    33,    -1,
      -1,    -1,    22,    -1,    24,    10,    11,    12,    28,    14,
      15,    -1,    -1,    33,    -1,    -1,    -1,    22,    -1,    24,
      10,    11,    12,    28,    14,    15,    -1,    -1,    33,    -1,
      -1,    -1,    22,    -1,    24,    10,    11,    12,    28,    14,
      15,    -1,    -1,    33,    -1,    -1,    -1,    22,    -1,    24,
      10,    11,    12,    28,    14,    15,    -1,    -1,    33,    -1,
      -1,    -1,    22,    -1,    24,    10,    11,    12,    28,    14,
      15,    -1,    -1,    33,    -1,    -1,    -1,    22,    -1,    24,
      10,    11,    12,    28,    14,    15,    -1,    -1,    33,    -1,
      -1,    -1,    22,    -1,    24,    10,    11,    12,    28,    14,
      15,    -1,    -1,    33,    -1,    -1,    -1,    22,    -1,    24,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    33,    -1,
      -1,    -1,    22,    -1,    24,    10,    11,    12,    -1,    14,
      15,    -1,    -1,    33,    -1,    -1,    -1,    22,    -1,    24,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    33,    -1,
      -1,    -1,    22,    -1,    24,    10,    11,    12,    -1,    14,
      15,    -1,    -1,    33,    -1,    -1,    -1,    22,    -1,    24,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    33,    -1,
      -1,    -1,    22,    -1,    24,    10,    11,    12,    -1,    14,
      15,    -1,    -1,    33,    -1,    -1,    -1,    22,    -1,    24,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    33,    -1,
      -1,    -1,    22,    -1,    24,    10,    11,    12,    -1,    14,
      15,    -1,    -1,    33,    -1,    -1,    -1,    22,    -1,    24,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    33,    -1,
      -1,    -1,    22,    10,    24,    12,    -1,    14,    15,    -1,
      -1,    -1,    -1,    33,    -1,    22,    -1,    24,    10,    -1,
      12,    28,    14,    15,    -1,    -1,    33,    -1,    -1,    -1,
      22,    10,    24,    12,    -1,    14,    15,    -1,    -1,    -1,
      -1,    33,    -1,    22,    -1,    24,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    33,    10,    11,    12,    -1,    14,
      15,    10,    11,    12,    -1,    14,    15,    -1,    -1,    33,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    33,    -1,
      -1,    10,    11,    12,    33,    14,    15,    10,    11,    12,
      -1,    14,    15,    33,    -1,    -1,    10,    11,    12,    28,
      14,    15,    10,    11,    12,    28,    14,    15,    10,    11,
      12,    -1,    14,    15,    28,    -1,    -1,    10,    11,    12,
      28,    14,    15,    10,    11,    12,    28,    14,    15,    10,
      11,    12,    -1,    14,    15,    28,    -1,    -1,    10,    -1,
      12,    28,    14,    15,    10,     0,    12,    28,    14,    15,
      -1,     6,     7,     8,     9,    -1,    28,     0,    -1,    -1,
      -1,     0,    28,     6,     7,     8,     9,     6,     7,     8,
       9,     0,    -1,    -1,    -1,     0,    -1,     6,     7,     8,
       9,     6,     7,     8,     9,     0,    -1,    -1,    -1,     0,
      -1,     6,     7,     8,     9,     6,     7,     8,     9,     0,
      -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,     7,     8,     9,    36,    37,    38,    39,    40,
      41,     0,    39,     3,    27,    33,    38,    42,     3,    28,
      32,    29,    43,    42,     3,     4,     5,    13,    16,    18,
      19,    20,    21,    23,    27,    38,    40,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    61,    27,    31,     3,    49,    27,
      27,    33,    49,    27,    27,     3,    49,     3,    30,    44,
      22,    24,    33,    12,    14,    15,    10,    11,    49,    15,
      26,    46,    60,    46,    49,    46,    33,     3,     3,    23,
      25,    28,    46,    33,    28,     3,     3,    52,    52,    53,
      54,    55,    28,    26,    33,    28,    28,    46,    28,    28,
       3,    28,    33,    28,    33,    33,    45,    45,     3,    33,
      33,    28,    33,    33,    17,    31,    33,    45,     3,    13,
      10,    28,     3,     3,    61,    43,    28,    28,    28,    43,
      43,    43,    29,     3,     4,     5,    13,    27,    51,    52,
      53,    54,    55,    56,    61,     3,     4,     5,    13,    27,
      51,    52,    53,    54,    55,    56,    61,     3,     4,     5,
      13,    23,    27,    50,    51,    52,    53,    54,    55,    56,
      61,     3,    23,    49,    50,    49,    33,    22,    24,    33,
       3,    23,    49,    50,    31,     3,    16,    18,    19,    20,
      21,    23,    29,    38,    40,    43,    46,    47,    48,    49,
      50,    57,    58,    59,    33,     4,     5,    44,    27,    49,
      49,    12,    14,    15,    10,    11,    27,    49,    49,    12,
      14,    15,    10,    11,    27,     3,    49,     3,    49,    12,
      14,    15,    10,    11,    31,     3,    22,    24,    33,     3,
       3,    31,     3,    22,    24,    33,     3,    15,    26,    46,
      60,    31,    27,    27,    33,    49,    27,    27,     3,    44,
       3,    22,    24,    33,    30,    49,    28,    52,    52,    53,
      54,    55,    49,    28,    52,    52,    53,    54,    55,    49,
      28,    52,    52,    53,    54,    55,    15,    26,    46,    60,
      33,     3,     3,    33,    33,    15,    26,    46,    60,    33,
       3,     3,    26,    33,    15,    26,    46,    60,    46,    49,
      46,    33,     3,     3,    23,    25,    28,    46,    33,    30,
      33,     3,     3,    28,    28,    28,    26,    33,    33,    33,
      26,    33,    33,    33,    26,    33,    28,    28,    46,    28,
      28,     3,    28,    33,    28,    33,    33,    45,    45,     3,
      33,    33,    28,    33,    33,    17,    31,    33,    45,     3,
      13,    10,    28,     3,     3,    61,    43,    28,    28,    28,
      43,    43,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    38,    38,    39,
      39,    40,    41,    42,    42,    42,    43,    44,    44,    45,
      45,    45,    45,    45,    45,    45,    45,    46,    46,    46,
      46,    47,    47,    47,    47,    48,    48,    49,    49,    50,
      50,    50,    51,    51,    51,    52,    52,    53,    53,    54,
      54,    55,    55,    55,    55,    56,    57,    58,    58,    58,
      58,    58,    59,    59,    60,    60,    61,    61
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     6,     4,     2,     0,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     3,
       3,     9,    11,    11,    10,     5,     7,     1,     2,     3,
       4,     4,     3,     3,     1,     1,     3,     1,     3,     1,
       3,     1,     1,     3,     1,     4,     5,     5,     5,     5,
       4,     6,     3,     2,     2,     2,     1,     1
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
#line 50 "sintatico.y"
                       {
        
    }
#line 2037 "sintatico.tab.c"
    break;

  case 3: /* listaDeDeclaracoes: listaDeDeclaracoes declaracao  */
#line 56 "sintatico.y"
                                  {
        
    }
#line 2045 "sintatico.tab.c"
    break;

  case 4: /* listaDeDeclaracoes: declaracao  */
#line 59 "sintatico.y"
                 {
        
    }
#line 2053 "sintatico.tab.c"
    break;

  case 5: /* TIPO: TIPO_INT  */
#line 65 "sintatico.y"
             {
        
    }
#line 2061 "sintatico.tab.c"
    break;

  case 6: /* TIPO: TIPO_FLOAT  */
#line 68 "sintatico.y"
                 {
        
    }
#line 2069 "sintatico.tab.c"
    break;

  case 7: /* TIPO: TIPO_LIST_INT  */
#line 71 "sintatico.y"
                    {
        
    }
#line 2077 "sintatico.tab.c"
    break;

  case 8: /* TIPO: TIPO_LIST_FLOAT  */
#line 74 "sintatico.y"
                      {
        
    }
#line 2085 "sintatico.tab.c"
    break;

  case 9: /* declaracao: declaracaoVariavel  */
#line 80 "sintatico.y"
                       {
        
    }
#line 2093 "sintatico.tab.c"
    break;

  case 10: /* declaracao: declaracaoFuncao  */
#line 83 "sintatico.y"
                       {
        
    }
#line 2101 "sintatico.tab.c"
    break;

  case 11: /* declaracaoVariavel: TIPO ID PONTOVIRGULA  */
#line 89 "sintatico.y"
                         {
        
    }
#line 2109 "sintatico.tab.c"
    break;

  case 12: /* declaracaoFuncao: TIPO ID ABRE_PARENTESES listaDeParametros FECHA_PARENTESES corpo  */
#line 95 "sintatico.y"
                                                                     {
        
    }
#line 2117 "sintatico.tab.c"
    break;

  case 13: /* listaDeParametros: TIPO ID VIRGULA listaDeParametros  */
#line 101 "sintatico.y"
                                      {
        
    }
#line 2125 "sintatico.tab.c"
    break;

  case 14: /* listaDeParametros: TIPO ID  */
#line 104 "sintatico.y"
              {
        
    }
#line 2133 "sintatico.tab.c"
    break;

  case 15: /* listaDeParametros: %empty  */
#line 107 "sintatico.y"
      {}
#line 2139 "sintatico.tab.c"
    break;

  case 16: /* corpo: ABRE_CHAVES dentroCorpo FECHA_CHAVES  */
#line 111 "sintatico.y"
                                         {
        
    }
#line 2147 "sintatico.tab.c"
    break;

  case 17: /* dentroCorpo: declaracoes dentroCorpo  */
#line 117 "sintatico.y"
                            {
      
    }
#line 2155 "sintatico.tab.c"
    break;

  case 18: /* dentroCorpo: declaracoes  */
#line 120 "sintatico.y"
                  {
        
    }
#line 2163 "sintatico.tab.c"
    break;

  case 19: /* declaracoes: corpo  */
#line 126 "sintatico.y"
          {
        
    }
#line 2171 "sintatico.tab.c"
    break;

  case 20: /* declaracoes: declaracaoVariavel  */
#line 129 "sintatico.y"
                         {
        
    }
#line 2179 "sintatico.tab.c"
    break;

  case 21: /* declaracoes: expressao  */
#line 132 "sintatico.y"
                {
        
    }
#line 2187 "sintatico.tab.c"
    break;

  case 22: /* declaracoes: entrada  */
#line 135 "sintatico.y"
              {
        
    }
#line 2195 "sintatico.tab.c"
    break;

  case 23: /* declaracoes: retorno  */
#line 138 "sintatico.y"
              {
        
    }
#line 2203 "sintatico.tab.c"
    break;

  case 24: /* declaracoes: saida  */
#line 141 "sintatico.y"
            {

    }
#line 2211 "sintatico.tab.c"
    break;

  case 25: /* declaracoes: for  */
#line 144 "sintatico.y"
          {
    
    }
#line 2219 "sintatico.tab.c"
    break;

  case 26: /* declaracoes: condicional  */
#line 147 "sintatico.y"
                  {

    }
#line 2227 "sintatico.tab.c"
    break;

  case 27: /* expressao: exp PONTOVIRGULA  */
#line 153 "sintatico.y"
                     {

    }
#line 2235 "sintatico.tab.c"
    break;

  case 28: /* expressao: expressaoList  */
#line 156 "sintatico.y"
                    {

    }
#line 2243 "sintatico.tab.c"
    break;

  case 29: /* expressao: ID ATRIBUICAO expressao  */
#line 159 "sintatico.y"
                              {

    }
#line 2251 "sintatico.tab.c"
    break;

  case 30: /* expressao: ID ATRIBUICAO nil  */
#line 162 "sintatico.y"
                        {
        
    }
#line 2259 "sintatico.tab.c"
    break;

  case 31: /* for: FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO ID FECHA_PARENTESES corpo  */
#line 169 "sintatico.y"
                                                                                    {
        
    }
#line 2267 "sintatico.tab.c"
    break;

  case 32: /* for: FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO ID OP_B_SOMA_SUB ID FECHA_PARENTESES corpo  */
#line 172 "sintatico.y"
                                                                                                       {
        
    }
#line 2275 "sintatico.tab.c"
    break;

  case 33: /* for: FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO ID OP_B_SOMA_SUB numero FECHA_PARENTESES corpo  */
#line 175 "sintatico.y"
                                                                                                           {
        
    }
#line 2283 "sintatico.tab.c"
    break;

  case 34: /* for: FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO OP_LOGICA_NEG ID FECHA_PARENTESES corpo  */
#line 178 "sintatico.y"
                                                                                                    {
        
    }
#line 2291 "sintatico.tab.c"
    break;

  case 35: /* condicional: IF ABRE_PARENTESES expressao FECHA_PARENTESES declaracoes  */
#line 184 "sintatico.y"
                                                              {
        
    }
#line 2299 "sintatico.tab.c"
    break;

  case 36: /* condicional: IF ABRE_PARENTESES exp FECHA_PARENTESES declaracoes ELSE declaracoes  */
#line 187 "sintatico.y"
                                                                           {
        
    }
#line 2307 "sintatico.tab.c"
    break;

  case 37: /* exp: expressao_logica  */
#line 193 "sintatico.y"
                     {

    }
#line 2315 "sintatico.tab.c"
    break;

  case 38: /* exp: OP_LOGICA_NEG exp  */
#line 196 "sintatico.y"
                        {

    }
#line 2323 "sintatico.tab.c"
    break;

  case 39: /* expressaoList: OP_LISTA ID PONTOVIRGULA  */
#line 202 "sintatico.y"
                             {

    }
#line 2331 "sintatico.tab.c"
    break;

  case 40: /* expressaoList: exp CONSTRUTOR_LISTA ID PONTOVIRGULA  */
#line 205 "sintatico.y"
                                           {

    }
#line 2339 "sintatico.tab.c"
    break;

  case 41: /* expressaoList: exp FUNCOES_LISTA ID PONTOVIRGULA  */
#line 208 "sintatico.y"
                                        {

    }
#line 2347 "sintatico.tab.c"
    break;

  case 42: /* expressao_logica: expressao_logica OP_LOGICA_OR expressao_relacional  */
#line 214 "sintatico.y"
                                                       {

    }
#line 2355 "sintatico.tab.c"
    break;

  case 43: /* expressao_logica: expressao_logica OP_LOGICA_AND expressao_relacional  */
#line 217 "sintatico.y"
                                                          {

    }
#line 2363 "sintatico.tab.c"
    break;

  case 44: /* expressao_logica: expressao_relacional  */
#line 220 "sintatico.y"
                           {

    }
#line 2371 "sintatico.tab.c"
    break;

  case 45: /* expressao_relacional: opSomaSub  */
#line 226 "sintatico.y"
              {

    }
#line 2379 "sintatico.tab.c"
    break;

  case 46: /* expressao_relacional: expressao_relacional OP_B_RELACIONAIS opSomaSub  */
#line 229 "sintatico.y"
                                                      {

    }
#line 2387 "sintatico.tab.c"
    break;

  case 47: /* opSomaSub: opMultDiv  */
#line 235 "sintatico.y"
              {

    }
#line 2395 "sintatico.tab.c"
    break;

  case 48: /* opSomaSub: opSomaSub OP_B_SOMA_SUB opMultDiv  */
#line 238 "sintatico.y"
                                        {

    }
#line 2403 "sintatico.tab.c"
    break;

  case 49: /* opMultDiv: argumento  */
#line 245 "sintatico.y"
              {

    }
#line 2411 "sintatico.tab.c"
    break;

  case 50: /* opMultDiv: opMultDiv OP_B_MULT_DIV argumento  */
#line 248 "sintatico.y"
                                        {

    }
#line 2419 "sintatico.tab.c"
    break;

  case 51: /* argumento: ID  */
#line 254 "sintatico.y"
       {

    }
#line 2427 "sintatico.tab.c"
    break;

  case 52: /* argumento: numero  */
#line 257 "sintatico.y"
             {

    }
#line 2435 "sintatico.tab.c"
    break;

  case 53: /* argumento: ABRE_PARENTESES exp FECHA_PARENTESES  */
#line 260 "sintatico.y"
                                           {

    }
#line 2443 "sintatico.tab.c"
    break;

  case 54: /* argumento: chamadaDeFuncao  */
#line 263 "sintatico.y"
                      {

    }
#line 2451 "sintatico.tab.c"
    break;

  case 55: /* chamadaDeFuncao: ID ABRE_PARENTESES exp FECHA_PARENTESES  */
#line 269 "sintatico.y"
                                            {

    }
#line 2459 "sintatico.tab.c"
    break;

  case 56: /* entrada: ENTRADA ABRE_PARENTESES ID FECHA_PARENTESES PONTOVIRGULA  */
#line 275 "sintatico.y"
                                                             {
        
    }
#line 2467 "sintatico.tab.c"
    break;

  case 57: /* saida: SAIDA ABRE_PARENTESES STRING FECHA_PARENTESES PONTOVIRGULA  */
#line 281 "sintatico.y"
                                                               {

    }
#line 2475 "sintatico.tab.c"
    break;

  case 58: /* saida: SAIDA ABRE_PARENTESES ID FECHA_PARENTESES PONTOVIRGULA  */
#line 284 "sintatico.y"
                                                             {

    }
#line 2483 "sintatico.tab.c"
    break;

  case 59: /* saida: SAIDA ABRE_PARENTESES expressao FECHA_PARENTESES PONTOVIRGULA  */
#line 287 "sintatico.y"
                                                                    {

    }
#line 2491 "sintatico.tab.c"
    break;

  case 60: /* saida: SAIDA ABRE_PARENTESES FECHA_PARENTESES PONTOVIRGULA  */
#line 290 "sintatico.y"
                                                          {

    }
#line 2499 "sintatico.tab.c"
    break;

  case 61: /* saida: SAIDA ABRE_PARENTESES OP_LISTA ID FECHA_PARENTESES PONTOVIRGULA  */
#line 293 "sintatico.y"
                                                                      {

    }
#line 2507 "sintatico.tab.c"
    break;

  case 64: /* nil: NIL PONTOVIRGULA  */
#line 304 "sintatico.y"
                     {
        
    }
#line 2515 "sintatico.tab.c"
    break;

  case 65: /* nil: OP_B_RELACIONAIS NIL  */
#line 307 "sintatico.y"
                           {

    }
#line 2523 "sintatico.tab.c"
    break;

  case 66: /* numero: INT  */
#line 313 "sintatico.y"
        {

    }
#line 2531 "sintatico.tab.c"
    break;

  case 67: /* numero: FLOAT  */
#line 316 "sintatico.y"
            {

    }
#line 2539 "sintatico.tab.c"
    break;


#line 2543 "sintatico.tab.c"

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

#line 322 "sintatico.y"


void yyerror(const char* s){
    fprintf(stderr, "%s\n", s);
}

int main(int argc, char ** argv) {
    yyin = fopen(argv[1], "r");
    
    yyparse();

    fclose(yyin);
    yylex_destroy();
    printf("\n\n");
    return 0;
}
