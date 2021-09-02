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
#define YYLAST   2479

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  346

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
     166,   171,   174,   181,   184,   187,   193,   196,   199,   205,
     208,   211,   217,   220,   226,   229,   236,   239,   245,   248,
     251,   254,   260,   266,   272,   275,   278,   281,   284,   290,
     291,   295,   298,   304,   307
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

#define YYPACT_NINF (-94)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-65)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     918,    10,    24,    47,    51,     3,  2418,    59,  2428,  2432,
    2442,   -94,  2446,    37,   618,  2456,    62,    41,    14,   -24,
     618,   777,  2460,    46,  1743,  2044,  2059,   385,    44,    50,
      40,    63,    64,    89,   466,    91,   357,   445,    75,   561,
     662,   849,   927,   -12,   955,   278,  1819,   470,  2074,  2089,
    2104,   983,  1011,  1039,  2119,   466,   119,  1767,   306,   161,
     188,  1067,    74,   108,    76,    94,   102,    98,  2470,   106,
     132,   135,  1095,    13,    13,    13,    13,    13,   114,   117,
     111,   370,  1123,   385,   122,   277,   485,  1151,   134,  1647,
     157,   139,   130,   140,  1179,  2134,   142,   145,  1883,  1843,
    2312,  2234,  2149,  2164,  2179,  1207,  1235,   777,  1627,   146,
     149,   150,     5,   152,  1263,   153,  1291,  1319,  1347,   156,
     345,  1375,  1403,   164,  1431,  1459,   777,   166,  1487,  1515,
     171,  1543,   777,  2194,   641,   831,   485,   466,    43,   521,
     529,  1869,  2249,  2258,  2264,  2304,   427,  1915,   466,   466,
     105,   218,   141,  2349,  2359,  2368,  2374,  1671,  1889,  1909,
     518,   199,   466,   175,  2325,  1747,  2204,  1924,  1939,  1954,
    1969,  1791,   203,   524,   589,   565,  1571,   206,   207,   189,
     144,  1815,   194,   195,    55,   198,   210,   213,   777,   223,
     224,   231,   232,   241,   242,   621,   243,   245,   247,   261,
     251,  1839,   254,   466,   485,   248,   259,    82,    82,    82,
      82,    82,   466,   466,   275,   280,   314,   314,   314,   314,
     314,   466,   262,  1695,   369,   279,   288,   548,   548,   548,
     548,   548,   267,   287,   292,   333,   637,   310,   311,   321,
     320,   326,   417,   161,   188,   338,   334,   366,    93,   341,
     349,   352,   368,   379,   378,  1599,   371,   363,  2273,   879,
     815,   886,   722,  2284,  2290,   383,   395,  2380,  2340,   323,
     687,  2328,  2389,  2395,   408,   573,   518,  1984,  1863,  1771,
    1795,  2219,  1999,  2014,   403,   414,   693,   720,   429,   434,
     448,   449,   450,   455,   460,   458,   478,   469,   737,   485,
     482,   474,  1719,   508,   492,   496,   504,   525,   530,   539,
     527,   538,  2297,  2401,  2029,   741,   745,   870,   883,   541,
     555,  1627,  1627,   545,   550,   566,    33,   567,   586,   574,
     598,   616,   622,   630,   345,   640,   644,   602,   655,   656,
    1627,   648,   669,   670,   629,   671
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
       0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -94,   -94,   -94,     0,   688,     2,   -94,   673,   -15,   -30,
     -77,   -36,   -93,   -83,    -8,   -25,   -23,   701,   604,   500,
     197,   297,   -79,   -71,   -67,   -55,   401
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,    35,     8,    36,    10,    17,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   241,    54
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    82,     9,    11,    22,    21,     7,   138,     9,    69,
      70,   150,    71,    -5,    16,   193,    98,    25,    26,    58,
      16,    72,    62,    84,    86,   194,    66,    -6,    93,   197,
     118,   119,   150,   123,   163,   174,   164,   198,   200,   163,
      34,   199,   -14,   133,   134,   135,    20,    78,    81,   129,
      -7,    85,   173,   136,    -8,   207,   175,   208,   133,   134,
     135,   337,    13,   138,    14,    18,   200,   137,   136,    19,
      15,    59,   192,    61,   -13,    81,   -33,    60,   109,    89,
      25,    26,   137,   196,   127,   259,   134,   135,   245,    27,
      63,    64,    65,   191,    67,   163,   302,    25,    26,    90,
     195,    91,   202,    34,    92,    68,    27,    87,   189,   137,
     190,    88,   175,   138,   150,   131,   303,   216,   304,   217,
      34,   305,    57,    25,    26,   150,   150,    94,   205,   206,
      95,   176,    27,   -33,    79,    96,   -17,   164,    97,   150,
     214,   215,   104,   105,   106,    80,    34,    57,    25,    26,
     107,   219,   224,   -42,   226,   -42,   -42,    27,   250,   239,
     112,   138,   110,   114,   157,   158,   159,   113,   115,   -42,
     240,    34,    81,   126,   160,   116,   246,   286,   117,   120,
     150,   138,   121,   122,   161,   124,   125,   296,   162,   150,
     150,   171,    25,    26,   130,   256,   257,   128,   150,   164,
     132,    27,   225,   -29,   265,   266,   233,   297,   299,   237,
     238,   172,   306,   274,   275,    34,   249,   -27,   163,   174,
     164,   243,   244,   163,    81,   247,   251,   142,   193,   193,
     -41,   154,   -41,   218,    81,   298,   173,   248,   194,   194,
     175,   -20,   197,   197,   332,   333,   -41,   193,   -19,   -21,
     198,   198,   154,   164,   199,   199,   168,   194,   -25,   -26,
     -29,   197,   -22,   343,   -24,   223,   158,   159,   275,   198,
      57,    25,    26,   199,   103,   160,   138,   239,   -23,   -36,
      27,   -35,   284,   142,   255,   192,   192,   258,   240,   162,
      73,   323,    74,   285,    34,   288,   196,   196,   341,   177,
     -33,   178,   -33,   -35,   192,   108,   191,   191,   267,   163,
     179,   -33,   200,   195,   195,   196,   277,   268,   146,   147,
     287,   189,   189,   190,   190,   191,   175,   143,   -35,   345,
     -35,   155,   195,   142,   154,   -40,   289,   -40,   218,   -35,
     189,   149,   190,   290,   291,   154,   154,   292,   201,    25,
      26,   -40,   155,   293,   -28,   -60,   169,   168,    27,   154,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,   300,   161,   301,
     -20,   310,    34,   -20,   307,   -20,   -20,   -20,   -20,   308,
     -20,   142,   311,   143,   -20,   309,   -20,   -20,    57,    25,
      26,   -35,   -34,   -35,   -34,   -27,   -34,   -35,    27,   312,
     154,   142,   -35,   -34,   142,   142,   142,   142,   264,   154,
     154,   313,    34,   154,   154,   154,   154,   273,   154,   168,
      57,    25,    26,   -34,   168,   168,   168,   168,   283,   315,
      27,   144,   294,   143,   155,   156,   314,   -63,   -63,   -63,
     168,   -63,   -63,   295,    34,   155,   155,   316,   -19,   -19,
     -19,   -19,   -19,   -19,   -19,   -63,   156,   169,   -19,   155,
     170,   -19,   317,   -19,   -19,   -19,   -19,   318,   -19,   145,
     146,   147,   -19,   168,   -19,   -19,   -37,   -38,   -62,   148,
      76,   143,   -42,   -61,   -42,   -42,   319,   144,   133,   134,
     135,   320,   -42,   149,   -42,   -28,   142,   321,   136,   -59,
     155,   143,   324,   -42,   143,   143,   143,   143,   143,   155,
     155,   326,   137,   155,   155,   155,   155,   155,   155,   169,
     327,   223,   158,   159,   169,   169,   169,   169,   169,   328,
     141,   160,   329,   -41,   153,   -41,   209,   144,   156,   210,
     169,   -42,   -36,   -42,   -42,   162,   234,   -16,   235,   156,
     156,   278,   158,   159,   -41,   153,   -11,   236,   -62,   167,
     330,   170,   -42,   156,    24,    25,    26,     1,     2,     3,
       4,   331,   -61,   169,    27,   162,   102,    28,   334,    29,
      30,    31,    32,   335,    33,   144,   141,   177,    34,   178,
     132,   -18,   -29,   -29,   -29,   -34,   143,   -34,   179,   336,
     338,   -34,   -29,   -57,   156,   144,   -34,   339,   144,   144,
     144,   144,   144,   156,   156,   -37,   -29,   156,   156,   156,
     156,   156,   156,   170,     1,     2,     3,     4,   170,   170,
     170,   170,   170,   -38,   140,   342,   141,   153,   152,   -31,
     -27,   -27,   -27,   252,   170,   253,   -15,   340,   153,   153,
     -27,   -63,   -63,   -63,   254,   -63,   -63,   -53,   188,   152,
     167,   -55,   153,   166,   -27,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,   -54,   -56,   -63,   -21,   344,   170,   -21,   101,
     -21,   -21,   -21,   -21,   141,   -21,   -58,   -32,   -30,   -21,
     140,   -21,   -21,    23,    12,     0,   -28,   -28,   -28,   -39,
     144,   -39,   218,   153,   141,     0,   -28,   141,   141,   141,
     263,     0,   153,   153,     0,   -39,   153,   153,   153,   272,
     -28,   153,   167,   -36,   -36,   -36,     0,   167,   167,   167,
     282,   139,   210,   -36,   -43,   151,   -43,   -43,     0,     0,
     140,   152,     0,   167,   -62,   -62,   -62,   -36,   -61,   -61,
     -61,     0,   152,   152,   -62,   -43,   151,     0,   -61,   177,
     165,   178,     0,     0,   166,   322,   152,     0,   -62,     0,
     179,     0,   -61,     0,    99,   100,   167,     0,     0,     0,
      24,    25,    26,     1,     2,     3,     4,   139,   140,     0,
      27,     0,     0,    28,     0,    29,    30,    31,    32,   141,
      33,     0,     0,     0,    34,     0,   132,   152,   140,     0,
       0,   140,   140,   262,     0,     0,   152,   152,     0,     0,
     152,   152,   271,     0,     0,   152,   166,   -40,     0,   -40,
     209,   166,   166,   281,     0,     0,     0,   139,   151,     0,
       0,   -64,   -64,   -64,     0,   -64,   -64,   166,   -40,   151,
     151,     0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,     0,
       0,   165,   -25,   151,   -64,   -25,     0,   -25,   -25,   -25,
     -25,     0,   -25,   -37,   -37,   -37,   -25,     0,   -25,   -25,
     166,     0,     0,   -37,     0,   139,   -38,   -38,   -38,   -48,
     -48,   -48,     0,   -48,   -48,     0,   -38,   -37,   -39,     0,
     -39,   209,     0,   140,   151,   139,   203,     0,   260,   261,
     -38,     0,   -48,   151,   151,     0,     0,   269,   270,   -39,
       0,     0,   151,   165,     1,     2,     3,     4,   279,   280,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,     0,     0,
     -26,     0,     0,   -26,   165,   -26,   -26,   -26,   -26,     0,
     -26,     0,     0,     0,   -26,     0,   -26,   -26,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,     0,     0,     0,   -29,     0,
       0,   -29,     0,   -29,   -29,   -29,   -29,   165,   -29,     0,
       0,     0,   -29,     0,   -29,   -29,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,     0,     0,     0,   -22,     0,     0,   -22,
     139,   -22,   -22,   -22,   -22,     0,   -22,     0,     0,     0,
     -22,     0,   -22,   -22,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,     0,     0,     0,   -24,     0,     0,   -24,     0,   -24,
     -24,   -24,   -24,     0,   -24,     0,     0,     0,   -24,     0,
     -24,   -24,   -23,   -23,   -23,   -23,   -23,   -23,   -23,     0,
       0,     0,   -23,     0,     0,   -23,     0,   -23,   -23,   -23,
     -23,     0,   -23,     0,     0,     0,   -23,     0,   -23,   -23,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,     0,
     -60,     0,     0,   -60,     0,   -60,   -60,   -60,   -60,     0,
     -60,     0,     0,     0,   -60,     0,   -60,   -60,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,     0,     0,     0,   -27,     0,
       0,   -27,     0,   -27,   -27,   -27,   -27,     0,   -27,     0,
       0,     0,   -27,     0,   -27,   -27,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,     0,     0,     0,   -28,     0,     0,   -28,
       0,   -28,   -28,   -28,   -28,     0,   -28,     0,     0,     0,
     -28,     0,   -28,   -28,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,     0,     0,     0,   -59,     0,     0,   -59,     0,   -59,
     -59,   -59,   -59,     0,   -59,     0,     0,     0,   -59,     0,
     -59,   -59,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,
       0,     0,   -36,     0,     0,   -36,     0,   -36,   -36,   -36,
     -36,     0,   -36,     0,     0,     0,   -36,     0,   -36,   -36,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,     0,
     -62,     0,     0,   -62,     0,   -62,   -62,   -62,   -62,     0,
     -62,     0,     0,     0,   -62,     0,   -62,   -62,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,     0,     0,     0,   -61,     0,
       0,   -61,     0,   -61,   -61,   -61,   -61,     0,   -61,     0,
       0,     0,   -61,     0,   -61,   -61,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,     0,     0,     0,   -57,     0,     0,   -57,
       0,   -57,   -57,   -57,   -57,     0,   -57,     0,     0,     0,
     -57,     0,   -57,   -57,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,     0,     0,     0,   -37,     0,     0,   -37,     0,   -37,
     -37,   -37,   -37,     0,   -37,     0,     0,     0,   -37,     0,
     -37,   -37,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,
       0,     0,   -38,     0,     0,   -38,     0,   -38,   -38,   -38,
     -38,     0,   -38,     0,     0,     0,   -38,     0,   -38,   -38,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,     0,
     -31,     0,     0,   -31,     0,   -31,   -31,   -31,   -31,     0,
     -31,     0,     0,     0,   -31,     0,   -31,   -31,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,     0,     0,     0,   -53,     0,
       0,   -53,     0,   -53,   -53,   -53,   -53,     0,   -53,     0,
       0,     0,   -53,     0,   -53,   -53,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,     0,     0,     0,   -55,     0,     0,   -55,
       0,   -55,   -55,   -55,   -55,     0,   -55,     0,     0,     0,
     -55,     0,   -55,   -55,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,     0,     0,     0,   -54,     0,     0,   -54,     0,   -54,
     -54,   -54,   -54,     0,   -54,     0,     0,     0,   -54,     0,
     -54,   -54,   -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,
       0,     0,   -56,     0,     0,   -56,     0,   -56,   -56,   -56,
     -56,     0,   -56,     0,     0,     0,   -56,     0,   -56,   -56,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,     0,     0,
     -58,     0,     0,   -58,     0,   -58,   -58,   -58,   -58,     0,
     -58,     0,     0,     0,   -58,     0,   -58,   -58,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,     0,     0,     0,   -32,     0,
       0,   -32,     0,   -32,   -32,   -32,   -32,     0,   -32,     0,
       0,     0,   -32,     0,   -32,   -32,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,     0,     0,     0,   -30,     0,     0,   -30,
       0,   -30,   -30,   -30,   -30,     0,   -30,     0,     0,     0,
     -30,     0,   -30,   -30,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,     0,     0,     0,   -11,     0,     0,   -11,     0,   -11,
     -11,   -11,   -11,     0,   -11,     0,     0,     0,   -11,     0,
     -11,   -11,   -16,   -16,   -16,   -16,   -16,   -16,   -16,     0,
       0,     0,   -16,     0,     0,   -16,     0,   -16,   -16,   -16,
     -16,     0,   -16,     0,     0,     0,   -16,     0,   -16,   -16,
     181,    25,    26,     1,     2,     3,     4,     0,     0,     0,
      27,     0,     0,   182,     0,   183,   184,   185,   186,     0,
     187,     0,     0,     0,    34,     0,   188,   -48,   -48,   -48,
       0,   -48,   -48,     0,     0,     0,     0,     0,     0,   -48,
       0,   -48,     0,     0,    55,   111,     0,     0,   180,     0,
     -48,   -48,   -48,   -48,     0,   -48,   -48,     0,     0,     0,
       0,     0,     0,   -48,     0,   -48,     0,     0,   221,   -48,
       0,     0,   222,     0,   -48,   -48,   -48,   -48,     0,   -48,
     -48,     0,     0,     0,     0,     0,     0,   -48,     0,   -48,
       0,     0,   221,   -48,     0,     0,   276,     0,   -48,   -48,
     -48,   -48,     0,   -48,   -48,     0,     0,     0,     0,     0,
       0,   -48,     0,   -48,     0,     0,    55,   325,     0,     0,
     180,     0,   -48,   -48,   -48,   -48,     0,   -48,   -48,   -41,
       0,   -41,   229,     0,     0,   -48,     0,   -48,     0,   -41,
      55,   -41,     0,     0,    56,   -41,   -48,   -48,   -48,   -48,
     -41,   -48,   -48,   -40,     0,   -40,   229,     0,     0,   -48,
       0,   -48,     0,   -40,    55,   -40,     0,     0,    83,   -40,
     -48,   -48,   -48,   -48,   -40,   -48,   -48,   -39,     0,   -39,
     229,     0,     0,   -48,     0,   -48,     0,   -39,    55,   -39,
       0,     0,   232,   -39,   -48,   -48,   -48,   -48,   -39,   -48,
     -48,   -41,     0,   -41,    75,     0,     0,   -48,     0,   -48,
       0,   -41,    55,   -41,     0,     0,   242,     0,   -48,   -48,
     -48,   -48,   -41,   -48,   -48,   -40,     0,   -40,    75,     0,
       0,   -48,     0,   -48,     0,   -40,    55,   -40,     0,     0,
     180,     0,   -48,   -48,   -48,   -48,   -40,   -48,   -48,   -44,
     211,   -44,     0,   -44,   -44,   -48,     0,   -48,     0,     0,
     221,   -48,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -63,
     -63,   -63,   -44,   -63,   -63,   -48,     0,   -48,     0,     0,
      55,   -63,     0,   -63,     0,     0,   -48,   -63,     0,   -64,
     -64,   -64,   -63,   -64,   -64,   -64,   -64,   -64,     0,   -64,
     -64,   -64,     0,   -64,   -44,   231,   -44,   -64,   -44,   -44,
       0,     0,   -64,   -64,     0,     0,   -44,     0,   -44,   -46,
     -46,   -46,   -44,   -46,   -46,     0,     0,   -44,     0,     0,
       0,   -46,     0,   -46,   -51,   -51,   -51,   -46,   -51,   -51,
       0,     0,   -46,     0,     0,     0,   -51,     0,   -51,   -49,
     -49,   -49,   -51,   -49,   -49,     0,     0,   -51,     0,     0,
       0,   -49,     0,   -49,   -50,   -50,   -50,   -49,   -50,   -50,
       0,     0,   -49,     0,     0,     0,   -50,     0,   -50,   -45,
     231,   -45,   -50,   -45,   -45,     0,     0,   -50,     0,     0,
       0,   -45,     0,   -45,   -47,   -47,   -47,   -45,   -47,   -47,
       0,     0,   -45,     0,     0,     0,   -47,     0,   -47,   -52,
     -52,   -52,   -47,   -52,   -52,     0,     0,   -47,     0,     0,
       0,   -52,     0,   -52,   -63,   -63,   -63,   -52,   -63,   -63,
       0,     0,   -52,     0,     0,     0,   -63,     0,   -63,   -64,
     -64,   -64,     0,   -64,   -64,     0,     0,   -63,     0,     0,
       0,   -64,     0,   -64,   -44,    77,   -44,     0,   -44,   -44,
       0,     0,   -64,     0,     0,     0,   -44,     0,   -44,   -46,
     -46,   -46,     0,   -46,   -46,     0,     0,   -44,     0,     0,
       0,   -46,     0,   -46,   -51,   -51,   -51,     0,   -51,   -51,
       0,     0,   -46,     0,     0,     0,   -51,     0,   -51,   -49,
     -49,   -49,     0,   -49,   -49,     0,     0,   -51,     0,     0,
       0,   -49,     0,   -49,   -50,   -50,   -50,     0,   -50,   -50,
       0,     0,   -49,     0,     0,     0,   -50,     0,   -50,   -45,
      77,   -45,     0,   -45,   -45,     0,     0,   -50,     0,     0,
       0,   -45,     0,   -45,   -47,   -47,   -47,     0,   -47,   -47,
       0,     0,   -45,     0,     0,     0,   -47,     0,   -47,   -52,
     -52,   -52,     0,   -52,   -52,     0,     0,   -47,     0,     0,
       0,   -52,     0,   -52,   -48,   -48,   -48,     0,   -48,   -48,
       0,     0,   -52,     0,   230,     0,   -42,     0,   -42,   -42,
       0,   203,     0,     0,     0,   204,   -42,   -48,   -42,   230,
       0,   -43,   -42,   -43,   -43,     0,     0,   -42,     0,     0,
       0,   -43,     0,   -43,    76,     0,   -43,   -43,   -43,   -43,
       0,     0,   -43,     0,     0,     0,   -43,     0,   -43,   -46,
     -46,   -46,     0,   -46,   -46,     0,     0,   -43,   -51,   -51,
     -51,     0,   -51,   -51,   -49,   -49,   -49,     0,   -49,   -49,
       0,     0,   -46,   -50,   -50,   -50,     0,   -50,   -50,     0,
       0,   -51,     0,     0,   -45,   211,   -45,   -49,   -45,   -45,
     -47,   -47,   -47,     0,   -47,   -47,   -50,   -52,   -52,   -52,
       0,   -52,   -52,     0,   -48,   -48,   -48,   -45,   -48,   -48,
       0,     0,     0,   -47,   -39,     0,   -39,    75,     0,     0,
     -52,   212,   -48,     0,   -39,   213,   -39,   227,   219,   228,
     -43,     0,   -43,   -43,     0,   -39,     0,   -33,     0,   -33,
     -48,   -48,   -48,   -33,   -48,   -48,   -43,     0,   -33,   -44,
     220,   -44,     0,   -44,   -44,     0,     0,   212,   -48,   -46,
     -46,   -46,     0,   -46,   -46,     0,     0,   -44,   -51,   -51,
     -51,     0,   -51,   -51,   -49,   -49,   -49,   -46,   -49,   -49,
     -50,   -50,   -50,     0,   -50,   -50,   -51,     0,     0,   -45,
     220,   -45,   -49,   -45,   -45,   -47,   -47,   -47,   -50,   -47,
     -47,   -52,   -52,   -52,     0,   -52,   -52,   -45,    -2,     0,
       0,     0,     0,   -47,     1,     2,     3,     4,    -4,   -52,
       0,     0,    -9,     0,    -4,    -4,    -4,    -4,    -9,    -9,
      -9,    -9,   -10,     0,     0,     0,    -3,     0,   -10,   -10,
     -10,   -10,    -3,    -3,    -3,    -3,   -11,     0,     0,     0,
     -12,     0,   -11,   -11,   -11,   -11,   -12,   -12,   -12,   -12,
     -16,     0,     0,     0,     0,     0,   -16,   -16,   -16,   -16
};

static const yytype_int16 yycheck[] =
{
       0,    56,     0,     0,    19,    29,     6,    30,     6,    39,
      22,    34,    24,     3,    14,   108,     3,     4,     5,    27,
      20,    33,    30,    59,    60,   108,    34,     3,    64,   108,
     107,   108,    55,    28,    59,    60,    59,   108,    33,    64,
      27,   108,    28,     3,     4,     5,    32,    55,    56,   126,
       3,    59,    60,    13,     3,    12,    64,    14,     3,     4,
       5,    28,     3,    86,    27,     3,    33,    27,    13,    28,
      33,    27,   108,    33,    28,    83,    33,    27,    86,     3,
       4,     5,    27,   108,   120,     3,     4,     5,    33,    13,
      27,    27,     3,   108,     3,   120,     3,     4,     5,    23,
     108,    25,   132,    27,    28,    30,    13,    33,   108,    27,
     108,     3,   120,   136,   137,   130,    23,    12,    25,    14,
      27,    28,     3,     4,     5,   148,   149,    33,   136,   137,
      28,    33,    13,    28,    15,     3,    30,   160,     3,   162,
     148,   149,    28,    26,    33,    26,    27,     3,     4,     5,
      28,    10,   160,    12,   162,    14,    15,    13,   188,    15,
       3,   184,    28,    33,     3,     4,     5,    28,    28,    28,
      26,    27,   180,    17,    13,    33,   184,   232,    33,    33,
     203,   204,    33,    33,    23,    33,    33,   242,    27,   212,
     213,     3,     4,     5,    28,   203,   204,    33,   221,   222,
      29,    13,     3,    28,   212,   213,     3,   243,   244,     3,
       3,    23,   248,   221,   222,    27,     3,    28,   243,   244,
     243,    27,    27,   248,   232,    27,     3,    30,   321,   322,
      12,    34,    14,    15,   242,   243,   244,    27,   321,   322,
     248,    17,   321,   322,   321,   322,    28,   340,    17,    17,
     321,   322,    55,   276,   321,   322,    59,   340,    17,    17,
      17,   340,    17,   340,    17,     3,     4,     5,   276,   340,
       3,     4,     5,   340,    77,    13,   299,    15,    17,    28,
      13,    33,    15,    86,    30,   321,   322,    28,    26,    27,
      12,   299,    14,    26,    27,     3,   321,   322,   334,    22,
      22,    24,    24,    28,   340,    28,   321,   322,    28,   334,
      33,    33,    33,   321,   322,   340,    28,     3,     4,     5,
      33,   321,   322,   321,   322,   340,   334,    30,    22,   344,
      24,    34,   340,   136,   137,    12,     3,    14,    15,    33,
     340,    27,   340,    33,    33,   148,   149,    26,     3,     4,
       5,    28,    55,    33,    28,    17,    59,   160,    13,   162,
       3,     4,     5,     6,     7,     8,     9,    33,    23,     3,
      13,     3,    27,    16,    33,    18,    19,    20,    21,    30,
      23,   184,     3,    86,    27,    33,    29,    30,     3,     4,
       5,    22,    22,    24,    24,    17,    33,    28,    13,    28,
     203,   204,    33,    33,   207,   208,   209,   210,   211,   212,
     213,    28,    27,   216,   217,   218,   219,   220,   221,   222,
       3,     4,     5,    28,   227,   228,   229,   230,   231,    26,
      13,    30,    15,   136,   137,    34,    28,    10,    11,    12,
     243,    14,    15,    26,    27,   148,   149,    33,     3,     4,
       5,     6,     7,     8,     9,    28,    55,   160,    13,   162,
      59,    16,    33,    18,    19,    20,    21,    33,    23,     3,
       4,     5,    27,   276,    29,    30,    28,    28,    28,    13,
      10,   184,    12,    28,    14,    15,    26,    86,     3,     4,
       5,    33,    22,    27,    24,    17,   299,    28,    13,    17,
     203,   204,    28,    33,   207,   208,   209,   210,   211,   212,
     213,     3,    27,   216,   217,   218,   219,   220,   221,   222,
      28,     3,     4,     5,   227,   228,   229,   230,   231,    33,
      30,    13,    28,    12,    34,    14,    15,   136,   137,    10,
     243,    12,    17,    14,    15,    27,    22,    17,    24,   148,
     149,     3,     4,     5,    33,    55,    17,    33,    17,    59,
      33,   160,    33,   162,     3,     4,     5,     6,     7,     8,
       9,    33,    17,   276,    13,    27,    76,    16,    33,    18,
      19,    20,    21,    33,    23,   184,    86,    22,    27,    24,
      29,    30,     3,     4,     5,    22,   299,    24,    33,    33,
      33,    28,    13,    17,   203,   204,    33,    33,   207,   208,
     209,   210,   211,   212,   213,    17,    27,   216,   217,   218,
     219,   220,   221,   222,     6,     7,     8,     9,   227,   228,
     229,   230,   231,    17,    30,    33,   136,   137,    34,    17,
       3,     4,     5,    22,   243,    24,    28,    17,   148,   149,
      13,    10,    11,    12,    33,    14,    15,    17,    29,    55,
     160,    17,   162,    59,    27,     3,     4,     5,     6,     7,
       8,     9,    17,    17,    33,    13,    28,   276,    16,    75,
      18,    19,    20,    21,   184,    23,    17,    17,    17,    27,
      86,    29,    30,    20,     6,    -1,     3,     4,     5,    12,
     299,    14,    15,   203,   204,    -1,    13,   207,   208,   209,
     210,    -1,   212,   213,    -1,    28,   216,   217,   218,   219,
      27,   221,   222,     3,     4,     5,    -1,   227,   228,   229,
     230,    30,    10,    13,    12,    34,    14,    15,    -1,    -1,
     136,   137,    -1,   243,     3,     4,     5,    27,     3,     4,
       5,    -1,   148,   149,    13,    33,    55,    -1,    13,    22,
      59,    24,    -1,    -1,   160,    28,   162,    -1,    27,    -1,
      33,    -1,    27,    -1,    73,    74,   276,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    86,   184,    -1,
      13,    -1,    -1,    16,    -1,    18,    19,    20,    21,   299,
      23,    -1,    -1,    -1,    27,    -1,    29,   203,   204,    -1,
      -1,   207,   208,   209,    -1,    -1,   212,   213,    -1,    -1,
     216,   217,   218,    -1,    -1,   221,   222,    12,    -1,    14,
      15,   227,   228,   229,    -1,    -1,    -1,   136,   137,    -1,
      -1,    10,    11,    12,    -1,    14,    15,   243,    33,   148,
     149,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,   160,    13,   162,    33,    16,    -1,    18,    19,    20,
      21,    -1,    23,     3,     4,     5,    27,    -1,    29,    30,
     276,    -1,    -1,    13,    -1,   184,     3,     4,     5,    10,
      11,    12,    -1,    14,    15,    -1,    13,    27,    12,    -1,
      14,    15,    -1,   299,   203,   204,    27,    -1,   207,   208,
      27,    -1,    33,   212,   213,    -1,    -1,   216,   217,    33,
      -1,    -1,   221,   222,     6,     7,     8,     9,   227,   228,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      13,    -1,    -1,    16,   243,    18,    19,    20,    21,    -1,
      23,    -1,    -1,    -1,    27,    -1,    29,    30,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,   276,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,
     299,    18,    19,    20,    21,    -1,    23,    -1,    -1,    -1,
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
      23,    -1,    -1,    -1,    27,    -1,    29,    10,    11,    12,
      -1,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      -1,    24,    -1,    -1,    27,    28,    -1,    -1,    31,    -1,
      33,    10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    -1,    24,    -1,    -1,    27,    28,
      -1,    -1,    31,    -1,    33,    10,    11,    12,    -1,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    24,
      -1,    -1,    27,    28,    -1,    -1,    31,    -1,    33,    10,
      11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    -1,    24,    -1,    -1,    27,    28,    -1,    -1,
      31,    -1,    33,    10,    11,    12,    -1,    14,    15,    12,
      -1,    14,    15,    -1,    -1,    22,    -1,    24,    -1,    22,
      27,    24,    -1,    -1,    31,    28,    33,    10,    11,    12,
      33,    14,    15,    12,    -1,    14,    15,    -1,    -1,    22,
      -1,    24,    -1,    22,    27,    24,    -1,    -1,    31,    28,
      33,    10,    11,    12,    33,    14,    15,    12,    -1,    14,
      15,    -1,    -1,    22,    -1,    24,    -1,    22,    27,    24,
      -1,    -1,    31,    28,    33,    10,    11,    12,    33,    14,
      15,    12,    -1,    14,    15,    -1,    -1,    22,    -1,    24,
      -1,    22,    27,    24,    -1,    -1,    31,    -1,    33,    10,
      11,    12,    33,    14,    15,    12,    -1,    14,    15,    -1,
      -1,    22,    -1,    24,    -1,    22,    27,    24,    -1,    -1,
      31,    -1,    33,    10,    11,    12,    33,    14,    15,    10,
      11,    12,    -1,    14,    15,    22,    -1,    24,    -1,    -1,
      27,    28,    -1,    10,    11,    12,    33,    14,    15,    10,
      11,    12,    33,    14,    15,    22,    -1,    24,    -1,    -1,
      27,    22,    -1,    24,    -1,    -1,    33,    28,    -1,    10,
      11,    12,    33,    14,    15,    10,    11,    12,    -1,    14,
      15,    22,    -1,    24,    10,    11,    12,    28,    14,    15,
      -1,    -1,    33,    28,    -1,    -1,    22,    -1,    24,    10,
      11,    12,    28,    14,    15,    -1,    -1,    33,    -1,    -1,
      -1,    22,    -1,    24,    10,    11,    12,    28,    14,    15,
      -1,    -1,    33,    -1,    -1,    -1,    22,    -1,    24,    10,
      11,    12,    28,    14,    15,    -1,    -1,    33,    -1,    -1,
      -1,    22,    -1,    24,    10,    11,    12,    28,    14,    15,
      -1,    -1,    33,    -1,    -1,    -1,    22,    -1,    24,    10,
      11,    12,    28,    14,    15,    -1,    -1,    33,    -1,    -1,
      -1,    22,    -1,    24,    10,    11,    12,    28,    14,    15,
      -1,    -1,    33,    -1,    -1,    -1,    22,    -1,    24,    10,
      11,    12,    28,    14,    15,    -1,    -1,    33,    -1,    -1,
      -1,    22,    -1,    24,    10,    11,    12,    28,    14,    15,
      -1,    -1,    33,    -1,    -1,    -1,    22,    -1,    24,    10,
      11,    12,    -1,    14,    15,    -1,    -1,    33,    -1,    -1,
      -1,    22,    -1,    24,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    33,    -1,    -1,    -1,    22,    -1,    24,    10,
      11,    12,    -1,    14,    15,    -1,    -1,    33,    -1,    -1,
      -1,    22,    -1,    24,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    33,    -1,    -1,    -1,    22,    -1,    24,    10,
      11,    12,    -1,    14,    15,    -1,    -1,    33,    -1,    -1,
      -1,    22,    -1,    24,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    33,    -1,    -1,    -1,    22,    -1,    24,    10,
      11,    12,    -1,    14,    15,    -1,    -1,    33,    -1,    -1,
      -1,    22,    -1,    24,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    33,    -1,    -1,    -1,    22,    -1,    24,    10,
      11,    12,    -1,    14,    15,    -1,    -1,    33,    -1,    -1,
      -1,    22,    -1,    24,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    33,    -1,    10,    -1,    12,    -1,    14,    15,
      -1,    27,    -1,    -1,    -1,    31,    22,    33,    24,    10,
      -1,    12,    28,    14,    15,    -1,    -1,    33,    -1,    -1,
      -1,    22,    -1,    24,    10,    -1,    12,    28,    14,    15,
      -1,    -1,    33,    -1,    -1,    -1,    22,    -1,    24,    10,
      11,    12,    -1,    14,    15,    -1,    -1,    33,    10,    11,
      12,    -1,    14,    15,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    33,    10,    11,    12,    -1,    14,    15,    -1,
      -1,    33,    -1,    -1,    10,    11,    12,    33,    14,    15,
      10,    11,    12,    -1,    14,    15,    33,    10,    11,    12,
      -1,    14,    15,    -1,    10,    11,    12,    33,    14,    15,
      -1,    -1,    -1,    33,    12,    -1,    14,    15,    -1,    -1,
      33,    27,    28,    -1,    22,    31,    24,    12,    10,    14,
      12,    -1,    14,    15,    -1,    33,    -1,    22,    -1,    24,
      10,    11,    12,    28,    14,    15,    28,    -1,    33,    10,
      11,    12,    -1,    14,    15,    -1,    -1,    27,    28,    10,
      11,    12,    -1,    14,    15,    -1,    -1,    28,    10,    11,
      12,    -1,    14,    15,    10,    11,    12,    28,    14,    15,
      10,    11,    12,    -1,    14,    15,    28,    -1,    -1,    10,
      11,    12,    28,    14,    15,    10,    11,    12,    28,    14,
      15,    10,    11,    12,    -1,    14,    15,    28,     0,    -1,
      -1,    -1,    -1,    28,     6,     7,     8,     9,     0,    28,
      -1,    -1,     0,    -1,     6,     7,     8,     9,     6,     7,
       8,     9,     0,    -1,    -1,    -1,     0,    -1,     6,     7,
       8,     9,     6,     7,     8,     9,     0,    -1,    -1,    -1,
       0,    -1,     6,     7,     8,     9,     6,     7,     8,     9,
       0,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9
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
      26,    49,    60,    31,    46,    49,    46,    33,     3,     3,
      23,    25,    28,    46,    33,    28,     3,     3,     3,    52,
      52,    53,    54,    55,    28,    26,    33,    28,    28,    49,
      28,    28,     3,    28,    33,    28,    33,    33,    45,    45,
      33,    33,    33,    28,    33,    33,    17,    46,    33,    45,
      28,    43,    29,     3,     4,     5,    13,    27,    51,    52,
      53,    54,    55,    56,    61,     3,     4,     5,    13,    27,
      51,    52,    53,    54,    55,    56,    61,     3,     4,     5,
      13,    23,    27,    50,    51,    52,    53,    54,    55,    56,
      61,     3,    23,    49,    50,    49,    33,    22,    24,    33,
      31,     3,    16,    18,    19,    20,    21,    23,    29,    38,
      40,    43,    46,    47,    48,    49,    50,    57,    58,    59,
      33,     3,    44,    27,    31,    49,    49,    12,    14,    15,
      10,    11,    27,    31,    49,    49,    12,    14,    15,    10,
      11,    27,    31,     3,    49,     3,    49,    12,    14,    15,
      10,    11,    31,     3,    22,    24,    33,     3,     3,    15,
      26,    60,    31,    27,    27,    33,    49,    27,    27,     3,
      44,     3,    22,    24,    33,    30,    49,    49,    28,     3,
      52,    52,    53,    54,    55,    49,    49,    28,     3,    52,
      52,    53,    54,    55,    49,    49,    31,    28,     3,    52,
      52,    53,    54,    55,    15,    26,    60,    33,     3,     3,
      33,    33,    26,    33,    15,    26,    60,    46,    49,    46,
      33,     3,     3,    23,    25,    28,    46,    33,    30,    33,
       3,     3,    28,    28,    28,    26,    33,    33,    33,    26,
      33,    28,    28,    49,    28,    28,     3,    28,    33,    28,
      33,    33,    45,    45,    33,    33,    33,    28,    33,    33,
      17,    46,    33,    45,    28,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    38,    38,    39,
      39,    40,    41,    42,    42,    42,    43,    44,    44,    45,
      45,    45,    45,    45,    45,    45,    45,    46,    46,    46,
      47,    48,    48,    49,    49,    49,    50,    50,    50,    51,
      51,    51,    52,    52,    53,    53,    54,    54,    55,    55,
      55,    55,    56,    57,    58,    58,    58,    58,    58,    59,
      59,    60,    60,    61,    61
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     6,     4,     2,     0,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     1,
       8,     5,     7,     1,     3,     2,     3,     4,     4,     3,
       3,     1,     1,     3,     1,     3,     1,     3,     1,     1,
       3,     1,     4,     5,     5,     5,     5,     4,     6,     3,
       2,     2,     2,     1,     1
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
#line 2017 "sintatico.tab.c"
    break;

  case 3: /* listaDeDeclaracoes: listaDeDeclaracoes declaracao  */
#line 56 "sintatico.y"
                                  {
        
    }
#line 2025 "sintatico.tab.c"
    break;

  case 4: /* listaDeDeclaracoes: declaracao  */
#line 59 "sintatico.y"
                 {
        
    }
#line 2033 "sintatico.tab.c"
    break;

  case 5: /* TIPO: TIPO_INT  */
#line 65 "sintatico.y"
             {
        
    }
#line 2041 "sintatico.tab.c"
    break;

  case 6: /* TIPO: TIPO_FLOAT  */
#line 68 "sintatico.y"
                 {
        
    }
#line 2049 "sintatico.tab.c"
    break;

  case 7: /* TIPO: TIPO_LIST_INT  */
#line 71 "sintatico.y"
                    {
        
    }
#line 2057 "sintatico.tab.c"
    break;

  case 8: /* TIPO: TIPO_LIST_FLOAT  */
#line 74 "sintatico.y"
                      {
        
    }
#line 2065 "sintatico.tab.c"
    break;

  case 9: /* declaracao: declaracaoVariavel  */
#line 80 "sintatico.y"
                       {
        
    }
#line 2073 "sintatico.tab.c"
    break;

  case 10: /* declaracao: declaracaoFuncao  */
#line 83 "sintatico.y"
                       {
        
    }
#line 2081 "sintatico.tab.c"
    break;

  case 11: /* declaracaoVariavel: TIPO ID PONTOVIRGULA  */
#line 89 "sintatico.y"
                         {
        
    }
#line 2089 "sintatico.tab.c"
    break;

  case 12: /* declaracaoFuncao: TIPO ID ABRE_PARENTESES listaDeParametros FECHA_PARENTESES corpo  */
#line 95 "sintatico.y"
                                                                     {
        
    }
#line 2097 "sintatico.tab.c"
    break;

  case 13: /* listaDeParametros: TIPO ID VIRGULA listaDeParametros  */
#line 101 "sintatico.y"
                                      {
        
    }
#line 2105 "sintatico.tab.c"
    break;

  case 14: /* listaDeParametros: TIPO ID  */
#line 104 "sintatico.y"
              {
        
    }
#line 2113 "sintatico.tab.c"
    break;

  case 15: /* listaDeParametros: %empty  */
#line 107 "sintatico.y"
      {}
#line 2119 "sintatico.tab.c"
    break;

  case 16: /* corpo: ABRE_CHAVES dentroCorpo FECHA_CHAVES  */
#line 111 "sintatico.y"
                                         {
        
    }
#line 2127 "sintatico.tab.c"
    break;

  case 17: /* dentroCorpo: declaracoes dentroCorpo  */
#line 117 "sintatico.y"
                            {
      
    }
#line 2135 "sintatico.tab.c"
    break;

  case 18: /* dentroCorpo: declaracoes  */
#line 120 "sintatico.y"
                  {
        
    }
#line 2143 "sintatico.tab.c"
    break;

  case 19: /* declaracoes: corpo  */
#line 126 "sintatico.y"
          {
        
    }
#line 2151 "sintatico.tab.c"
    break;

  case 20: /* declaracoes: declaracaoVariavel  */
#line 129 "sintatico.y"
                         {
        
    }
#line 2159 "sintatico.tab.c"
    break;

  case 21: /* declaracoes: expressao  */
#line 132 "sintatico.y"
                {
        
    }
#line 2167 "sintatico.tab.c"
    break;

  case 22: /* declaracoes: entrada  */
#line 135 "sintatico.y"
              {
        
    }
#line 2175 "sintatico.tab.c"
    break;

  case 23: /* declaracoes: retorno  */
#line 138 "sintatico.y"
              {
        
    }
#line 2183 "sintatico.tab.c"
    break;

  case 24: /* declaracoes: saida  */
#line 141 "sintatico.y"
            {

    }
#line 2191 "sintatico.tab.c"
    break;

  case 25: /* declaracoes: for  */
#line 144 "sintatico.y"
          {
    
    }
#line 2199 "sintatico.tab.c"
    break;

  case 26: /* declaracoes: condicional  */
#line 147 "sintatico.y"
                  {

    }
#line 2207 "sintatico.tab.c"
    break;

  case 27: /* expressao: exp PONTOVIRGULA  */
#line 153 "sintatico.y"
                     {

    }
#line 2215 "sintatico.tab.c"
    break;

  case 28: /* expressao: ID ATRIBUICAO nil  */
#line 156 "sintatico.y"
                        {
        
    }
#line 2223 "sintatico.tab.c"
    break;

  case 29: /* expressao: expressaoList  */
#line 159 "sintatico.y"
                    {

    }
#line 2231 "sintatico.tab.c"
    break;

  case 30: /* for: FOR ABRE_PARENTESES expressao exp PONTOVIRGULA expressao FECHA_PARENTESES corpo  */
#line 166 "sintatico.y"
                                                                                    {
    }
#line 2238 "sintatico.tab.c"
    break;

  case 31: /* condicional: IF ABRE_PARENTESES expressao FECHA_PARENTESES declaracoes  */
#line 171 "sintatico.y"
                                                              {
        
    }
#line 2246 "sintatico.tab.c"
    break;

  case 32: /* condicional: IF ABRE_PARENTESES exp FECHA_PARENTESES declaracoes ELSE declaracoes  */
#line 174 "sintatico.y"
                                                                           {
        
    }
#line 2254 "sintatico.tab.c"
    break;

  case 33: /* exp: expressao_logica  */
#line 181 "sintatico.y"
                     {

    }
#line 2262 "sintatico.tab.c"
    break;

  case 34: /* exp: ID ATRIBUICAO exp  */
#line 184 "sintatico.y"
                        {

    }
#line 2270 "sintatico.tab.c"
    break;

  case 35: /* exp: OP_LOGICA_NEG exp  */
#line 187 "sintatico.y"
                        {

    }
#line 2278 "sintatico.tab.c"
    break;

  case 36: /* expressaoList: OP_LISTA ID PONTOVIRGULA  */
#line 193 "sintatico.y"
                             {

    }
#line 2286 "sintatico.tab.c"
    break;

  case 37: /* expressaoList: exp CONSTRUTOR_LISTA ID PONTOVIRGULA  */
#line 196 "sintatico.y"
                                           {

    }
#line 2294 "sintatico.tab.c"
    break;

  case 38: /* expressaoList: exp FUNCOES_LISTA ID PONTOVIRGULA  */
#line 199 "sintatico.y"
                                        {

    }
#line 2302 "sintatico.tab.c"
    break;

  case 39: /* expressao_logica: expressao_logica OP_LOGICA_OR expressao_relacional  */
#line 205 "sintatico.y"
                                                       {

    }
#line 2310 "sintatico.tab.c"
    break;

  case 40: /* expressao_logica: expressao_logica OP_LOGICA_AND expressao_relacional  */
#line 208 "sintatico.y"
                                                          {

    }
#line 2318 "sintatico.tab.c"
    break;

  case 41: /* expressao_logica: expressao_relacional  */
#line 211 "sintatico.y"
                           {

    }
#line 2326 "sintatico.tab.c"
    break;

  case 42: /* expressao_relacional: opSomaSub  */
#line 217 "sintatico.y"
              {

    }
#line 2334 "sintatico.tab.c"
    break;

  case 43: /* expressao_relacional: expressao_relacional OP_B_RELACIONAIS opSomaSub  */
#line 220 "sintatico.y"
                                                      {

    }
#line 2342 "sintatico.tab.c"
    break;

  case 44: /* opSomaSub: opMultDiv  */
#line 226 "sintatico.y"
              {

    }
#line 2350 "sintatico.tab.c"
    break;

  case 45: /* opSomaSub: opSomaSub OP_B_SOMA_SUB opMultDiv  */
#line 229 "sintatico.y"
                                        {

    }
#line 2358 "sintatico.tab.c"
    break;

  case 46: /* opMultDiv: argumento  */
#line 236 "sintatico.y"
              {

    }
#line 2366 "sintatico.tab.c"
    break;

  case 47: /* opMultDiv: opMultDiv OP_B_MULT_DIV argumento  */
#line 239 "sintatico.y"
                                        {

    }
#line 2374 "sintatico.tab.c"
    break;

  case 48: /* argumento: ID  */
#line 245 "sintatico.y"
       {

    }
#line 2382 "sintatico.tab.c"
    break;

  case 49: /* argumento: numero  */
#line 248 "sintatico.y"
             {

    }
#line 2390 "sintatico.tab.c"
    break;

  case 50: /* argumento: ABRE_PARENTESES exp FECHA_PARENTESES  */
#line 251 "sintatico.y"
                                           {

    }
#line 2398 "sintatico.tab.c"
    break;

  case 51: /* argumento: chamadaDeFuncao  */
#line 254 "sintatico.y"
                      {

    }
#line 2406 "sintatico.tab.c"
    break;

  case 52: /* chamadaDeFuncao: ID ABRE_PARENTESES exp FECHA_PARENTESES  */
#line 260 "sintatico.y"
                                            {

    }
#line 2414 "sintatico.tab.c"
    break;

  case 53: /* entrada: ENTRADA ABRE_PARENTESES ID FECHA_PARENTESES PONTOVIRGULA  */
#line 266 "sintatico.y"
                                                             {
        
    }
#line 2422 "sintatico.tab.c"
    break;

  case 54: /* saida: SAIDA ABRE_PARENTESES STRING FECHA_PARENTESES PONTOVIRGULA  */
#line 272 "sintatico.y"
                                                               {

    }
#line 2430 "sintatico.tab.c"
    break;

  case 55: /* saida: SAIDA ABRE_PARENTESES ID FECHA_PARENTESES PONTOVIRGULA  */
#line 275 "sintatico.y"
                                                             {

    }
#line 2438 "sintatico.tab.c"
    break;

  case 56: /* saida: SAIDA ABRE_PARENTESES expressao FECHA_PARENTESES PONTOVIRGULA  */
#line 278 "sintatico.y"
                                                                    {

    }
#line 2446 "sintatico.tab.c"
    break;

  case 57: /* saida: SAIDA ABRE_PARENTESES FECHA_PARENTESES PONTOVIRGULA  */
#line 281 "sintatico.y"
                                                          {

    }
#line 2454 "sintatico.tab.c"
    break;

  case 58: /* saida: SAIDA ABRE_PARENTESES OP_LISTA ID FECHA_PARENTESES PONTOVIRGULA  */
#line 284 "sintatico.y"
                                                                      {

    }
#line 2462 "sintatico.tab.c"
    break;

  case 61: /* nil: NIL PONTOVIRGULA  */
#line 295 "sintatico.y"
                     {
        
    }
#line 2470 "sintatico.tab.c"
    break;

  case 62: /* nil: OP_B_RELACIONAIS NIL  */
#line 298 "sintatico.y"
                           {

    }
#line 2478 "sintatico.tab.c"
    break;

  case 63: /* numero: INT  */
#line 304 "sintatico.y"
        {

    }
#line 2486 "sintatico.tab.c"
    break;

  case 64: /* numero: FLOAT  */
#line 307 "sintatico.y"
            {

    }
#line 2494 "sintatico.tab.c"
    break;


#line 2498 "sintatico.tab.c"

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

#line 313 "sintatico.y"


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
