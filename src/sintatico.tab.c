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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2691

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  387

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
       0,    99,    99,   107,   112,   118,   123,   128,   133,   141,
     144,   147,   153,   163,   175,   183,   193,   199,   203,   209,
     214,   221,   224,   227,   230,   233,   236,   239,   242,   248,
     255,   260,   272,   287,   293,   299,   306,   315,   320,   329,
     335,   344,   348,   353,   361,   369,   376,   384,   389,   400,
     405,   417,   422,   433,   443,   449,   455,   463,   473,   485,
     497,   500,   507,   511,   517,   523,   529,   534,   542,   547
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

#define YYPACT_NINF (-189)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-70)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1904,  2614,    10,    27,    35,    43,    55,  2626,    79,  2630,
    2640,  2644,  -189,  2654,    65,   352,  2658,    80,    69,   -16,
      16,   352,  2668,  1765,  2672,    71,  1916,  2232,  2247,   508,
      31,    88,    23,    90,    97,   100,   549,   104,   422,   737,
     106,   805,   835,   865,   895,   274,   925,   515,   172,   220,
    2262,  2277,  2292,   955,   985,  1015,  2307,    57,   165,  2056,
     468,    68,   318,  1045,   112,   144,   158,   121,   129,   127,
    2682,   134,   162,   173,  1075,   139,   139,   139,   139,   139,
    2322,   149,   153,   156,  1105,  1135,   169,   469,   343,  1165,
     176,  1844,   187,   186,   199,  1195,  2337,   160,   182,  1992,
    2487,  2425,  2352,  2367,  2382,  1225,  1255,  1765,  1792,   234,
     226,   240,    47,   247,   254,  1285,  1315,  1345,   250,   257,
    1375,  1405,   270,  1435,  1465,  1765,    30,  1495,  1525,     9,
     268,   124,    22,   291,   297,   307,  1555,    22,    22,    22,
    1585,  1615,  1645,  1675,  1765,   585,   446,   554,   769,   549,
      20,    53,   650,   691,   718,  2018,  2440,  2507,  2088,  2513,
     549,   549,    76,   125,  2591,  2528,  2534,  2540,  2549,  1868,
    2062,  2082,   776,   333,   549,   311,   367,  1920,  2395,  2097,
    2112,  2127,  2142,  1940,   339,   612,   603,   667,  1705,   340,
     341,   337,  1964,   364,   798,   365,   279,   355,  1988,   350,
     357,    36,   377,   378,   391,  1765,   403,   392,   394,   397,
     401,   407,   828,   415,   419,   420,   429,   380,   406,   425,
     418,    74,   414,   426,   273,   273,   273,   273,   273,   128,
     427,   440,   286,   286,   286,   286,   286,   146,  2012,   600,
     436,   459,   417,   417,   417,   417,   417,   370,   465,   447,
     505,   636,   476,   492,   473,   493,   530,   533,   535,  2032,
     517,   516,   513,   522,   519,    68,   318,   534,   523,   552,
     218,   525,   529,   528,   560,   581,   569,  1735,  2449,   575,
    2455,   214,   786,  1855,  2464,  2475,  2555,   576,  2561,   312,
     747,  2597,  2570,  2576,  2157,   577,  2172,  1944,  1968,  2410,
    2187,  2202,   583,   582,   643,   648,   765,   584,   587,   601,
     607,   616,   617,   655,   664,   665,   639,   640,   641,   653,
     666,   660,   593,   659,   671,  1817,   343,   677,   685,  1892,
     711,   693,   703,   702,   720,   722,   714,   716,  2481,  2582,
    2217,  1813,  1819,  1824,  1830,   732,   749,   751,   762,   754,
     759,  1792,  1792,   774,   752,   757,    81,   760,   764,   767,
     785,   790,   799,   784,   800,   812,   797,   816,   820,  1792,
      51,   829,   830,    14,   842,   305,    28,   821,   831,   832,
     840,    28,    28,    28,   846,   850,   858
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -189,  -189,  -189,     0,   869,     2,  -189,   856,   -19,   -38,
    -103,   -14,   -97,   -94,    64,    50,   356,   562,   483,   453,
     238,   346,   -90,   -88,   -83,  -188,   -26
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
       8,    24,    10,    71,   117,   118,   156,     8,   263,    10,
     168,   210,   -15,    -5,   211,    17,    21,    22,   214,   131,
     215,    17,   128,   143,   375,   216,   145,   146,   147,   197,
      -6,   168,   224,   129,   225,   182,   148,   132,    -7,   145,
     146,   147,   376,   130,    84,    23,    -8,    86,    88,   148,
     149,   144,    94,   -39,   373,    12,    63,   205,    61,   305,
     157,   158,   159,   149,   374,   -46,   314,   -46,   226,   267,
     160,   169,   170,   171,   109,   122,   323,   157,   158,   159,
     217,   172,    14,    19,   161,    80,   -46,   160,   232,   208,
     233,   173,    15,    60,   209,   174,    64,    20,    16,   -14,
      68,   161,   278,    67,   -39,   135,   220,    69,   206,   366,
     207,   175,   186,   136,   217,    62,   175,    65,   140,   141,
     142,    81,   156,   168,    66,    87,   185,   134,   218,   219,
     187,   157,   158,   159,   168,   168,    70,   -46,   195,   -46,
     234,   160,    59,    27,    28,    89,   182,    90,   168,   157,
     158,   159,   194,   -46,    95,   161,   286,    96,   213,   160,
     188,    91,    27,    28,   -19,    97,    36,   272,    26,    27,
      28,    29,   212,   161,   294,   156,    98,   104,    29,   105,
      82,    92,   262,    93,   -46,    36,   -46,    77,    35,   106,
     112,    83,    36,   115,   -46,   168,   -46,   107,   156,   156,
     156,   156,   156,   168,   110,   -46,   168,   168,   168,   168,
     168,   168,   222,   223,   113,   116,   182,   182,   182,   182,
     182,   329,    27,    28,   230,   231,   -45,   114,   -45,   226,
      78,    29,   -47,   304,   -47,   -47,   239,   119,   241,   182,
     313,   330,   -47,   331,   -47,    36,   175,   -45,   361,   362,
     322,   324,   326,   -47,   210,   210,   332,   211,   211,   120,
     187,   214,   214,   215,   215,   268,   372,   125,   216,   216,
     154,   133,   210,   121,   166,   211,   145,   146,   147,   214,
     123,   215,   259,    27,    28,   279,   216,   124,   126,   157,
     158,   159,    29,   287,   260,   166,    72,   186,    73,   180,
     149,   295,   173,   127,   195,   261,    36,    74,   378,   218,
     219,   185,   353,   161,   213,   175,   186,   103,   194,   137,
     175,   183,    27,    28,   -45,   138,   -45,   234,   212,   325,
     185,    29,   208,   208,   187,   139,   240,   209,   209,   -30,
     -45,   184,   248,   252,   253,    36,   192,    27,    28,   379,
     208,   206,   206,   207,   207,   209,    29,   380,     2,     3,
       4,     5,   384,   385,   386,   -29,   193,   255,   -30,   206,
      36,   207,   -18,   183,    27,    28,   195,   265,   155,   242,
     -16,   243,   167,    29,   266,   302,   154,   166,   150,   -39,
     194,   -39,   162,   184,   271,   -39,   303,    36,   166,   166,
     -39,   213,   213,   167,   269,   270,   273,   181,   -41,   -22,
     180,   -21,   166,   162,   -23,   212,   212,   176,   -27,   213,
     238,   170,   171,   -22,   -28,   -22,   -22,   -22,   -22,   -22,
     -22,   -22,   -30,   212,   -68,   -22,   -24,   -26,   -22,   154,
     -22,   -22,   -22,   -22,   174,   -22,   -25,   -40,   277,   -22,
     307,   -22,   -22,   -69,   280,   -40,   -68,   -68,   -68,   166,
     -68,   -68,   154,   154,   154,   154,   285,   166,   288,   217,
     166,   166,   166,   166,   293,   166,   192,    27,    28,   -68,
     180,   180,   180,   180,   301,   153,    29,   296,   311,   165,
     -40,   189,   -40,   190,   155,   167,   193,   108,   306,   312,
      36,   -40,   191,   180,   150,   162,   167,   167,   308,   309,
     165,    59,    27,    28,   179,   152,   162,   162,   181,   164,
     167,    29,   198,    27,    28,   310,   315,    75,   176,    76,
     162,   102,    29,   316,   320,    36,   317,   -39,   -29,   -39,
     164,   -31,   204,   318,   178,   321,    36,   155,   -39,   319,
     -32,   -65,   157,   158,   159,   328,   327,   150,   333,   334,
     101,   335,   160,   336,   -69,   -69,   -69,   167,   -69,   -69,
     155,   155,   155,   155,   155,   167,   161,   162,   167,   167,
     167,   167,   167,   167,   337,   162,   -29,   -69,   181,   181,
     181,   181,   181,   162,   151,   -53,   -53,   -53,   163,   -53,
     -53,   153,   165,   338,   339,   340,   -30,   -30,   -30,   341,
     -31,   181,   221,   165,   165,   342,   -30,   343,   -53,   163,
     344,   176,   -40,   177,   -40,   179,   -30,   165,   -40,   -42,
     -30,   152,   164,   -40,   249,   -43,   250,    99,   100,   -29,
     -29,   -29,   345,   164,   164,   251,   -31,   -31,   -31,   -29,
     346,   -32,   -32,   -32,   153,   178,   -31,   164,   -31,   -29,
     227,   -32,   -47,   -29,   -47,   -47,   -31,   -32,   -41,   -67,
     -31,   -32,   347,   348,   165,   -32,   -32,   153,   153,   153,
     284,   -66,   165,   -47,   152,   165,   165,   165,   292,   189,
     165,   190,   349,   350,   -64,   179,   179,   179,   300,   351,
     191,   -49,   228,   -49,   164,   -49,   -49,   152,   152,   283,
     151,   163,   164,   354,   356,   164,   164,   291,   179,   -41,
     164,   357,   163,   163,   -49,   178,   178,   299,   -51,   -51,
     -51,   358,   -51,   -51,   177,   -67,   163,   -17,   -21,   -12,
     -21,   -21,   -21,   -21,   -21,   -21,   -21,   359,   178,   360,
     -21,   -51,   -66,   -21,   -42,   -21,   -21,   -21,   -21,   -44,
     -21,   -44,   234,   151,   -21,   -43,   -21,   -21,   -41,   -41,
     -41,   -67,   145,   146,   147,   -44,   -66,   363,   -41,   238,
     170,   171,   148,   163,   -42,   364,   281,   282,   -41,   172,
     365,   163,   -41,   367,   289,   290,   149,   368,   -44,   163,
     -44,   226,   -43,   174,   297,   298,   143,   -37,    26,    27,
      28,     2,     3,     4,     5,   370,   369,   -59,    29,   -44,
     256,    30,   257,    31,    32,    33,    34,   177,    35,   -61,
     371,   258,    36,   -60,   144,   -20,   -23,   -62,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,   377,   -63,   -38,   -23,   381,
     274,   -23,   275,   -23,   -23,   -23,   -23,   -33,   -23,   382,
     383,   276,   -23,   -36,   -23,   -23,   -27,   -34,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,   -35,    13,    25,   -27,     0,
       0,   -27,     0,   -27,   -27,   -27,   -27,     0,   -27,     0,
       0,     0,   -27,     0,   -27,   -27,   -28,     0,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,     0,     0,     0,   -28,     0,
       0,   -28,     0,   -28,   -28,   -28,   -28,     0,   -28,     0,
       0,     0,   -28,     0,   -28,   -28,   -30,     0,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,     0,     0,     0,   -30,     0,
       0,   -30,     0,   -30,   -30,   -30,   -30,     0,   -30,     0,
       0,     0,   -30,     0,   -30,   -30,   -24,     0,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,     0,     0,     0,   -24,     0,
       0,   -24,     0,   -24,   -24,   -24,   -24,     0,   -24,     0,
       0,     0,   -24,     0,   -24,   -24,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,     0,     0,     0,   -26,     0,
       0,   -26,     0,   -26,   -26,   -26,   -26,     0,   -26,     0,
       0,     0,   -26,     0,   -26,   -26,   -25,     0,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,     0,     0,     0,   -25,     0,
       0,   -25,     0,   -25,   -25,   -25,   -25,     0,   -25,     0,
       0,     0,   -25,     0,   -25,   -25,   -65,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,     0,     0,     0,   -65,     0,
       0,   -65,     0,   -65,   -65,   -65,   -65,     0,   -65,     0,
       0,     0,   -65,     0,   -65,   -65,   -29,     0,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,     0,     0,     0,   -29,     0,
       0,   -29,     0,   -29,   -29,   -29,   -29,     0,   -29,     0,
       0,     0,   -29,     0,   -29,   -29,   -31,     0,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,     0,     0,     0,   -31,     0,
       0,   -31,     0,   -31,   -31,   -31,   -31,     0,   -31,     0,
       0,     0,   -31,     0,   -31,   -31,   -32,     0,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,     0,     0,     0,   -32,     0,
       0,   -32,     0,   -32,   -32,   -32,   -32,     0,   -32,     0,
       0,     0,   -32,     0,   -32,   -32,   -64,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,     0,     0,     0,   -64,     0,
       0,   -64,     0,   -64,   -64,   -64,   -64,     0,   -64,     0,
       0,     0,   -64,     0,   -64,   -64,   -41,     0,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,     0,     0,     0,   -41,     0,
       0,   -41,     0,   -41,   -41,   -41,   -41,     0,   -41,     0,
       0,     0,   -41,     0,   -41,   -41,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,     0,     0,     0,   -67,     0,
       0,   -67,     0,   -67,   -67,   -67,   -67,     0,   -67,     0,
       0,     0,   -67,     0,   -67,   -67,   -66,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,     0,     0,     0,   -66,     0,
       0,   -66,     0,   -66,   -66,   -66,   -66,     0,   -66,     0,
       0,     0,   -66,     0,   -66,   -66,   -42,     0,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,     0,     0,     0,   -42,     0,
       0,   -42,     0,   -42,   -42,   -42,   -42,     0,   -42,     0,
       0,     0,   -42,     0,   -42,   -42,   -43,     0,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,     0,     0,     0,   -43,     0,
       0,   -43,     0,   -43,   -43,   -43,   -43,     0,   -43,     0,
       0,     0,   -43,     0,   -43,   -43,   -37,     0,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,     0,     0,     0,   -37,     0,
       0,   -37,     0,   -37,   -37,   -37,   -37,     0,   -37,     0,
       0,     0,   -37,     0,   -37,   -37,   -59,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,     0,     0,     0,   -59,     0,
       0,   -59,     0,   -59,   -59,   -59,   -59,     0,   -59,     0,
       0,     0,   -59,     0,   -59,   -59,   -61,     0,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,     0,     0,     0,   -61,     0,
       0,   -61,     0,   -61,   -61,   -61,   -61,     0,   -61,     0,
       0,     0,   -61,     0,   -61,   -61,   -60,     0,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,     0,     0,     0,   -60,     0,
       0,   -60,     0,   -60,   -60,   -60,   -60,     0,   -60,     0,
       0,     0,   -60,     0,   -60,   -60,   -62,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,     0,     0,     0,   -62,     0,
       0,   -62,     0,   -62,   -62,   -62,   -62,     0,   -62,     0,
       0,     0,   -62,     0,   -62,   -62,   -63,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,     0,     0,     0,   -63,     0,
       0,   -63,     0,   -63,   -63,   -63,   -63,     0,   -63,     0,
       0,     0,   -63,     0,   -63,   -63,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,     0,     0,     0,   -38,     0,
       0,   -38,     0,   -38,   -38,   -38,   -38,     0,   -38,     0,
       0,     0,   -38,     0,   -38,   -38,   -33,     0,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,     0,     0,     0,   -33,     0,
       0,   -33,     0,   -33,   -33,   -33,   -33,     0,   -33,     0,
       0,     0,   -33,     0,   -33,   -33,   -36,     0,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,     0,     0,     0,   -36,     0,
       0,   -36,     0,   -36,   -36,   -36,   -36,     0,   -36,     0,
       0,     0,   -36,     0,   -36,   -36,   -34,     0,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,     0,     0,     0,   -34,     0,
       0,   -34,     0,   -34,   -34,   -34,   -34,     0,   -34,     0,
       0,     0,   -34,     0,   -34,   -34,   -35,     0,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,     0,     0,     0,   -35,     0,
       0,   -35,     0,   -35,   -35,   -35,   -35,     0,   -35,     0,
       0,     0,   -35,     0,   -35,   -35,   -18,     0,   -18,   -18,
     -18,   -18,   -18,   -18,   -18,     0,     0,     0,   -18,     0,
       0,   -18,     0,   -18,   -18,   -18,   -18,     0,   -18,     0,
       0,     0,   -18,     0,   -18,   -18,   -12,     0,   -12,   -12,
     -12,   -12,   -12,   -12,   -12,     0,     0,     0,   -12,     0,
       0,   -12,     0,   -12,   -12,   -12,   -12,     0,   -12,     0,
       0,     0,   -12,     0,   -12,   -12,   -17,     0,   -17,   -17,
     -17,   -17,   -17,   -17,   -17,     0,     0,     0,   -17,     0,
       0,   -17,     0,   -17,   -17,   -17,   -17,     0,   -17,     0,
       0,     0,   -17,     0,   -17,   -17,   143,     0,    26,    27,
      28,     2,     3,     4,     5,     0,     0,     0,    29,     0,
       0,    30,     0,    31,    32,    33,    34,     0,    35,     0,
       0,     0,    36,   197,   144,   198,    27,    28,     2,     3,
       4,     5,     0,     0,     0,    29,     0,     0,   199,     0,
     200,   201,   202,   203,     0,   204,   -67,   -67,   -67,    36,
       0,   205,   -66,   -66,   -66,     0,   -67,   -42,   -42,   -42,
       0,     0,   -66,   -43,   -43,   -43,   -67,   -42,     0,   189,
     -67,   190,   -66,   -43,     0,   352,   -66,   -42,     0,     0,
     191,   -42,     0,   -43,   -53,   -53,   -53,   -43,   -53,   -53,
       0,     0,     0,     0,     0,   227,   -53,   -48,   -53,   -48,
     -48,    57,   111,     0,     0,   196,     0,   -53,   -53,   -53,
     -53,     0,   -53,   -53,     0,     0,     0,     0,   -48,     0,
     -53,     0,   -53,     0,     0,   237,   -53,     0,     0,   196,
       0,   -53,   -53,   -53,   -53,     1,   -53,   -53,     0,     0,
       2,     3,     4,     5,   -53,     0,   -53,     0,     0,    57,
     355,     0,     0,   196,     0,   -53,   -53,   -53,   -53,     0,
     -53,   -53,   -46,     0,   -46,   244,     0,     0,   -53,     0,
     -53,     0,   -46,    57,   -46,     0,     0,    58,   -46,   -53,
     -53,   -53,   -53,   -46,   -53,   -53,   -45,     0,   -45,   244,
       0,     0,   -53,     0,   -53,     0,   -45,    57,   -45,     0,
       0,   247,   -45,   -53,   -53,   -53,   -53,   -45,   -53,   -53,
     -44,     0,   -44,   244,     0,     0,   -53,     0,   -53,     0,
     -44,    57,   -44,     0,     0,   254,   -44,   -53,   -53,   -53,
     -53,   -44,   -53,   -53,   -45,     0,   -45,    77,     0,     0,
     -53,     0,   -53,     0,   -45,    57,   -45,     0,     0,   264,
       0,   -53,   -53,   -53,   -53,   -45,   -53,   -53,   -56,   -56,
     -56,     0,   -56,   -56,   -53,     0,   -53,     0,     0,   237,
     -53,     0,   -53,   -53,   -53,   -53,   -53,   -53,     0,     0,
       0,   -56,     0,     0,   -53,     0,   -53,     0,     0,    57,
       0,     0,     0,   196,     0,   -53,   -53,   -53,   -53,     0,
     -53,   -53,   -68,   -68,   -68,     0,   -68,   -68,   -53,     0,
     -53,     0,     0,    57,   -68,     0,   -68,     0,     0,   -53,
     -68,     0,   -69,   -69,   -69,   -68,   -69,   -69,   -68,   -68,
     -68,     0,   -68,   -68,   -69,     0,   -69,   -49,   246,   -49,
     -69,   -49,   -49,     0,     0,   -69,   -68,     0,     0,   -49,
       0,   -49,   -51,   -51,   -51,   -49,   -51,   -51,     0,     0,
     -49,     0,     0,     0,   -51,     0,   -51,   -56,   -56,   -56,
     -51,   -56,   -56,     0,     0,   -51,     0,     0,     0,   -56,
       0,   -56,   -54,   -54,   -54,   -56,   -54,   -54,     0,     0,
     -56,     0,     0,     0,   -54,     0,   -54,   -58,   -58,   -58,
     -54,   -58,   -58,     0,     0,   -54,     0,     0,     0,   -58,
       0,   -58,   -55,   -55,   -55,   -58,   -55,   -55,     0,     0,
     -58,     0,     0,     0,   -55,     0,   -55,   -50,   246,   -50,
     -55,   -50,   -50,     0,     0,   -55,     0,     0,     0,   -50,
       0,   -50,   -52,   -52,   -52,   -50,   -52,   -52,     0,     0,
     -50,     0,     0,     0,   -52,     0,   -52,   -57,   -57,   -57,
     -52,   -57,   -57,     0,     0,   -52,     0,     0,     0,   -57,
       0,   -57,   -68,   -68,   -68,   -57,   -68,   -68,     0,     0,
     -57,     0,     0,     0,   -68,     0,   -68,   -69,   -69,   -69,
       0,   -69,   -69,     0,     0,   -68,     0,     0,     0,   -69,
       0,   -69,   -49,    79,   -49,     0,   -49,   -49,     0,     0,
     -69,     0,     0,     0,   -49,     0,   -49,   -51,   -51,   -51,
       0,   -51,   -51,     0,     0,   -49,     0,     0,     0,   -51,
       0,   -51,   -56,   -56,   -56,     0,   -56,   -56,     0,     0,
     -51,     0,     0,     0,   -56,     0,   -56,   -54,   -54,   -54,
       0,   -54,   -54,     0,     0,   -56,     0,     0,     0,   -54,
       0,   -54,   -58,   -58,   -58,     0,   -58,   -58,     0,     0,
     -54,     0,     0,     0,   -58,     0,   -58,   -55,   -55,   -55,
       0,   -55,   -55,     0,     0,   -58,     0,     0,     0,   -55,
       0,   -55,   -50,    79,   -50,     0,   -50,   -50,     0,     0,
     -55,     0,     0,     0,   -50,     0,   -50,   -52,   -52,   -52,
       0,   -52,   -52,     0,     0,   -50,     0,     0,     0,   -52,
       0,   -52,   -57,   -57,   -57,     0,   -57,   -57,     0,     0,
     -52,     0,     0,     0,   -57,   245,   -57,   -47,     0,   -47,
     -47,     0,     0,     0,     0,   -57,     0,   -47,     0,   -47,
     245,     0,   -48,   -47,   -48,   -48,     0,     0,   -47,     0,
       0,     0,   -48,     0,   -48,    78,     0,   -48,   -48,   -48,
     -48,     0,     0,   -48,     0,     0,     0,   -48,     0,   -48,
     -54,   -54,   -54,     0,   -54,   -54,     0,     0,   -48,   -58,
     -58,   -58,     0,   -58,   -58,   -55,   -55,   -55,     0,   -55,
     -55,     0,     0,   -54,   -50,   228,   -50,     0,   -50,   -50,
       0,     0,   -58,     0,     0,   -52,   -52,   -52,   -55,   -52,
     -52,   -57,   -57,   -57,     0,   -57,   -57,   -50,     0,   -44,
       0,   -44,    77,     0,     0,     0,     0,     0,   -52,   -44,
       0,   -44,     0,     0,   -57,     0,     0,   -53,   -53,   -53,
     -44,   -53,   -53,   -69,   -69,   -69,     0,   -69,   -69,     0,
       0,     0,     0,     0,   229,   -53,     0,     0,   -49,   236,
     -49,   -69,   -49,   -49,   -51,   -51,   -51,     0,   -51,   -51,
     -56,   -56,   -56,     0,   -56,   -56,   -49,     0,     0,   -54,
     -54,   -54,   -51,   -54,   -54,   -58,   -58,   -58,   -56,   -58,
     -58,   -55,   -55,   -55,     0,   -55,   -55,   -54,     0,     0,
     -50,   236,   -50,   -58,   -50,   -50,   -52,   -52,   -52,   -55,
     -52,   -52,   -57,   -57,   -57,     0,   -57,   -57,   -50,     0,
       0,   235,     0,   -47,   -52,   -47,   -47,   235,     0,   -48,
     -57,   -48,   -48,     0,   -11,   -11,     0,     0,     0,   -47,
     -11,   -11,   -11,   -11,     0,   -48,    -2,     1,     0,     0,
      -4,    -4,     2,     3,     4,     5,    -4,    -4,    -4,    -4,
      -9,    -9,     0,     0,   -10,   -10,    -9,    -9,    -9,    -9,
     -10,   -10,   -10,   -10,    -3,    -3,     0,     0,   -12,   -12,
      -3,    -3,    -3,    -3,   -12,   -12,   -12,   -12,   -18,   -18,
       0,     0,   -13,   -13,   -18,   -18,   -18,   -18,   -13,   -13,
     -13,   -13,   -17,   -17,     0,     0,     0,     0,   -17,   -17,
     -17,   -17
};

static const yytype_int16 yycheck[] =
{
       0,    20,     0,    41,   107,   108,    32,     7,   196,     7,
      36,   108,    28,     3,   108,    15,    32,     1,   108,    10,
     108,    21,   125,     1,    10,   108,     3,     4,     5,     1,
       3,    57,    12,     3,    14,    61,    13,    28,     3,     3,
       4,     5,    28,    13,    58,    29,     3,    61,    62,    13,
      27,    29,    66,    33,     3,     0,    33,    29,    27,   247,
       3,     4,     5,    27,    13,    12,   254,    14,    15,    33,
      13,     3,     4,     5,    88,    28,   264,     3,     4,     5,
      33,    13,     3,     3,    27,    28,    33,    13,    12,   108,
      14,    23,    27,    29,   108,    27,    32,    28,    33,    28,
      36,    27,    28,     3,    28,   131,   144,     3,   108,    28,
     108,    61,    62,   132,    33,    27,    66,    27,   137,   138,
     139,    57,   148,   149,    27,    61,    62,     3,     4,     5,
      66,     3,     4,     5,   160,   161,    30,    12,    88,    14,
      15,    13,     3,     4,     5,    33,   172,     3,   174,     3,
       4,     5,    88,    28,    33,    27,    28,    28,   108,    13,
      33,     3,     4,     5,    30,     3,    27,   205,     3,     4,
       5,    13,   108,    27,    28,   201,     3,    28,    13,    26,
      15,    23,   196,    25,    12,    27,    14,    15,    23,    33,
       3,    26,    27,    33,    22,   221,    24,    28,   224,   225,
     226,   227,   228,   229,    28,    33,   232,   233,   234,   235,
     236,   237,   148,   149,    28,    33,   242,   243,   244,   245,
     246,     3,     4,     5,   160,   161,    12,    28,    14,    15,
      10,    13,    12,   247,    14,    15,   172,     3,   174,   265,
     254,    23,    22,    25,    24,    27,   196,    33,   351,   352,
     264,   265,   266,    33,   351,   352,   270,   351,   352,    33,
     196,   351,   352,   351,   352,   201,   369,    17,   351,   352,
      32,     3,   369,    33,    36,   369,     3,     4,     5,   369,
      33,   369,     3,     4,     5,   221,   369,    33,    31,     3,
       4,     5,    13,   229,    15,    57,    22,   247,    24,    61,
      27,   237,    23,    33,   254,    26,    27,    33,     3,     4,
       5,   247,   326,    27,   264,   265,   266,    79,   254,    28,
     270,     3,     4,     5,    12,    28,    14,    15,   264,   265,
     266,    13,   351,   352,   270,    28,     3,   351,   352,    28,
      28,    23,     3,     3,     3,    27,     3,     4,     5,   375,
     369,   351,   352,   351,   352,   369,    13,   376,     6,     7,
       8,     9,   381,   382,   383,    28,    23,     3,     3,   369,
      27,   369,    17,     3,     4,     5,   326,    27,    32,    12,
      28,    14,    36,    13,    27,    15,   148,   149,    32,    22,
     326,    24,    36,    23,     3,    28,    26,    27,   160,   161,
      33,   351,   352,    57,    27,    27,     3,    61,    28,    17,
     172,    17,   174,    57,    17,   351,   352,    61,    17,   369,
       3,     4,     5,     1,    17,     3,     4,     5,     6,     7,
       8,     9,    17,   369,    28,    13,    17,    17,    16,   201,
      18,    19,    20,    21,    27,    23,    17,    33,    30,    27,
       3,    29,    30,    28,    28,    28,    10,    11,    12,   221,
      14,    15,   224,   225,   226,   227,   228,   229,    28,    33,
     232,   233,   234,   235,   236,   237,     3,     4,     5,    33,
     242,   243,   244,   245,   246,    32,    13,    28,    15,    36,
      22,    22,    24,    24,   148,   149,    23,    28,    33,    26,
      27,    33,    33,   265,   148,   149,   160,   161,     3,    33,
      57,     3,     4,     5,    61,    32,   160,   161,   172,    36,
     174,    13,     3,     4,     5,    33,    33,    12,   172,    14,
     174,    78,    13,     3,    15,    27,     3,    22,     3,    24,
      57,    28,    23,    26,    61,    26,    27,   201,    33,    33,
      28,    17,     3,     4,     5,     3,    33,   201,    33,    30,
      77,    33,    13,     3,    10,    11,    12,   221,    14,    15,
     224,   225,   226,   227,   228,   229,    27,   221,   232,   233,
     234,   235,   236,   237,     3,   229,    17,    33,   242,   243,
     244,   245,   246,   237,    32,    10,    11,    12,    36,    14,
      15,   148,   149,    28,    28,    28,     3,     4,     5,    26,
      17,   265,    27,   160,   161,    33,    13,    33,    33,    57,
      33,   265,    22,    61,    24,   172,    23,   174,    28,    28,
      27,   148,   149,    33,    22,    28,    24,    75,    76,     3,
       4,     5,    26,   160,   161,    33,     3,     4,     5,    13,
      33,     3,     4,     5,   201,   172,    13,   174,     3,    23,
      10,    13,    12,    27,    14,    15,    23,     3,     3,    28,
      27,    23,    33,    33,   221,    27,    17,   224,   225,   226,
     227,    28,   229,    33,   201,   232,   233,   234,   235,    22,
     237,    24,    26,    33,    17,   242,   243,   244,   245,    28,
      33,    10,    11,    12,   221,    14,    15,   224,   225,   226,
     148,   149,   229,    28,     3,   232,   233,   234,   265,    17,
     237,    28,   160,   161,    33,   242,   243,   244,    10,    11,
      12,    28,    14,    15,   172,     3,   174,    17,     1,    17,
       3,     4,     5,     6,     7,     8,     9,    33,   265,    33,
      13,    33,     3,    16,     3,    18,    19,    20,    21,    12,
      23,    14,    15,   201,    27,     3,    29,    30,     3,     4,
       5,    17,     3,     4,     5,    28,    17,     3,    13,     3,
       4,     5,    13,   221,    17,    33,   224,   225,    23,    13,
      33,   229,    27,    33,   232,   233,    27,    33,    12,   237,
      14,    15,    17,    27,   242,   243,     1,    17,     3,     4,
       5,     6,     7,     8,     9,    31,    17,    17,    13,    33,
      22,    16,    24,    18,    19,    20,    21,   265,    23,    17,
      33,    33,    27,    17,    29,    30,     1,    17,     3,     4,
       5,     6,     7,     8,     9,     3,    17,    17,    13,    28,
      22,    16,    24,    18,    19,    20,    21,    17,    23,    28,
      28,    33,    27,    17,    29,    30,     1,    17,     3,     4,
       5,     6,     7,     8,     9,    17,     7,    21,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,     1,    29,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,    -1,
      18,    19,    20,    21,    -1,    23,     3,     4,     5,    27,
      -1,    29,     3,     4,     5,    -1,    13,     3,     4,     5,
      -1,    -1,    13,     3,     4,     5,    23,    13,    -1,    22,
      27,    24,    23,    13,    -1,    28,    27,    23,    -1,    -1,
      33,    27,    -1,    23,    10,    11,    12,    27,    14,    15,
      -1,    -1,    -1,    -1,    -1,    10,    22,    12,    24,    14,
      15,    27,    28,    -1,    -1,    31,    -1,    33,    10,    11,
      12,    -1,    14,    15,    -1,    -1,    -1,    -1,    33,    -1,
      22,    -1,    24,    -1,    -1,    27,    28,    -1,    -1,    31,
      -1,    33,    10,    11,    12,     1,    14,    15,    -1,    -1,
       6,     7,     8,     9,    22,    -1,    24,    -1,    -1,    27,
      28,    -1,    -1,    31,    -1,    33,    10,    11,    12,    -1,
      14,    15,    12,    -1,    14,    15,    -1,    -1,    22,    -1,
      24,    -1,    22,    27,    24,    -1,    -1,    31,    28,    33,
      10,    11,    12,    33,    14,    15,    12,    -1,    14,    15,
      -1,    -1,    22,    -1,    24,    -1,    22,    27,    24,    -1,
      -1,    31,    28,    33,    10,    11,    12,    33,    14,    15,
      12,    -1,    14,    15,    -1,    -1,    22,    -1,    24,    -1,
      22,    27,    24,    -1,    -1,    31,    28,    33,    10,    11,
      12,    33,    14,    15,    12,    -1,    14,    15,    -1,    -1,
      22,    -1,    24,    -1,    22,    27,    24,    -1,    -1,    31,
      -1,    33,    10,    11,    12,    33,    14,    15,    10,    11,
      12,    -1,    14,    15,    22,    -1,    24,    -1,    -1,    27,
      28,    -1,    10,    11,    12,    33,    14,    15,    -1,    -1,
      -1,    33,    -1,    -1,    22,    -1,    24,    -1,    -1,    27,
      -1,    -1,    -1,    31,    -1,    33,    10,    11,    12,    -1,
      14,    15,    10,    11,    12,    -1,    14,    15,    22,    -1,
      24,    -1,    -1,    27,    22,    -1,    24,    -1,    -1,    33,
      28,    -1,    10,    11,    12,    33,    14,    15,    10,    11,
      12,    -1,    14,    15,    22,    -1,    24,    10,    11,    12,
      28,    14,    15,    -1,    -1,    33,    28,    -1,    -1,    22,
      -1,    24,    10,    11,    12,    28,    14,    15,    -1,    -1,
      33,    -1,    -1,    -1,    22,    -1,    24,    10,    11,    12,
      28,    14,    15,    -1,    -1,    33,    -1,    -1,    -1,    22,
      -1,    24,    10,    11,    12,    28,    14,    15,    -1,    -1,
      33,    -1,    -1,    -1,    22,    -1,    24,    10,    11,    12,
      28,    14,    15,    -1,    -1,    33,    -1,    -1,    -1,    22,
      -1,    24,    10,    11,    12,    28,    14,    15,    -1,    -1,
      33,    -1,    -1,    -1,    22,    -1,    24,    10,    11,    12,
      28,    14,    15,    -1,    -1,    33,    -1,    -1,    -1,    22,
      -1,    24,    10,    11,    12,    28,    14,    15,    -1,    -1,
      33,    -1,    -1,    -1,    22,    -1,    24,    10,    11,    12,
      28,    14,    15,    -1,    -1,    33,    -1,    -1,    -1,    22,
      -1,    24,    10,    11,    12,    28,    14,    15,    -1,    -1,
      33,    -1,    -1,    -1,    22,    -1,    24,    10,    11,    12,
      -1,    14,    15,    -1,    -1,    33,    -1,    -1,    -1,    22,
      -1,    24,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      33,    -1,    -1,    -1,    22,    -1,    24,    10,    11,    12,
      -1,    14,    15,    -1,    -1,    33,    -1,    -1,    -1,    22,
      -1,    24,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      33,    -1,    -1,    -1,    22,    -1,    24,    10,    11,    12,
      -1,    14,    15,    -1,    -1,    33,    -1,    -1,    -1,    22,
      -1,    24,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      33,    -1,    -1,    -1,    22,    -1,    24,    10,    11,    12,
      -1,    14,    15,    -1,    -1,    33,    -1,    -1,    -1,    22,
      -1,    24,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      33,    -1,    -1,    -1,    22,    -1,    24,    10,    11,    12,
      -1,    14,    15,    -1,    -1,    33,    -1,    -1,    -1,    22,
      -1,    24,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      33,    -1,    -1,    -1,    22,    10,    24,    12,    -1,    14,
      15,    -1,    -1,    -1,    -1,    33,    -1,    22,    -1,    24,
      10,    -1,    12,    28,    14,    15,    -1,    -1,    33,    -1,
      -1,    -1,    22,    -1,    24,    10,    -1,    12,    28,    14,
      15,    -1,    -1,    33,    -1,    -1,    -1,    22,    -1,    24,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    33,    10,
      11,    12,    -1,    14,    15,    10,    11,    12,    -1,    14,
      15,    -1,    -1,    33,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    33,    -1,    -1,    10,    11,    12,    33,    14,
      15,    10,    11,    12,    -1,    14,    15,    33,    -1,    12,
      -1,    14,    15,    -1,    -1,    -1,    -1,    -1,    33,    22,
      -1,    24,    -1,    -1,    33,    -1,    -1,    10,    11,    12,
      33,    14,    15,    10,    11,    12,    -1,    14,    15,    -1,
      -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    10,    11,
      12,    28,    14,    15,    10,    11,    12,    -1,    14,    15,
      10,    11,    12,    -1,    14,    15,    28,    -1,    -1,    10,
      11,    12,    28,    14,    15,    10,    11,    12,    28,    14,
      15,    10,    11,    12,    -1,    14,    15,    28,    -1,    -1,
      10,    11,    12,    28,    14,    15,    10,    11,    12,    28,
      14,    15,    10,    11,    12,    -1,    14,    15,    28,    -1,
      -1,    10,    -1,    12,    28,    14,    15,    10,    -1,    12,
      28,    14,    15,    -1,     0,     1,    -1,    -1,    -1,    28,
       6,     7,     8,     9,    -1,    28,     0,     1,    -1,    -1,
       0,     1,     6,     7,     8,     9,     6,     7,     8,     9,
       0,     1,    -1,    -1,     0,     1,     6,     7,     8,     9,
       6,     7,     8,     9,     0,     1,    -1,    -1,     0,     1,
       6,     7,     8,     9,     6,     7,     8,     9,     0,     1,
      -1,    -1,     0,     1,     6,     7,     8,     9,     6,     7,
       8,     9,     0,     1,    -1,    -1,    -1,    -1,     6,     7,
       8,     9
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     6,     7,     8,     9,    36,    37,    38,    39,
      40,    41,     0,    39,     3,    27,    33,    38,    42,     3,
      28,    32,     1,    29,    43,    42,     3,     4,     5,    13,
      16,    18,    19,    20,    21,    23,    27,    38,    40,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    61,    27,    31,     3,
      49,    27,    27,    33,    49,    27,    27,     3,    49,     3,
      30,    44,    22,    24,    33,    12,    14,    15,    10,    11,
      28,    49,    15,    26,    46,    60,    46,    49,    46,    33,
       3,     3,    23,    25,    46,    33,    28,     3,     3,    52,
      52,    53,    54,    55,    28,    26,    33,    28,    28,    46,
      28,    28,     3,    28,    28,    33,    33,    45,    45,     3,
      33,    33,    28,    33,    33,    17,    31,    33,    45,     3,
      13,    10,    28,     3,     3,    61,    43,    28,    28,    28,
      43,    43,    43,     1,    29,     3,     4,     5,    13,    27,
      51,    52,    53,    54,    55,    56,    61,     3,     4,     5,
      13,    27,    51,    52,    53,    54,    55,    56,    61,     3,
       4,     5,    13,    23,    27,    50,    51,    52,    53,    54,
      55,    56,    61,     3,    23,    49,    50,    49,    33,    22,
      24,    33,     3,    23,    49,    50,    31,     1,     3,    16,
      18,    19,    20,    21,    23,    29,    38,    40,    43,    46,
      47,    48,    49,    50,    57,    58,    59,    33,     4,     5,
      44,    27,    49,    49,    12,    14,    15,    10,    11,    27,
      49,    49,    12,    14,    15,    10,    11,    27,     3,    49,
       3,    49,    12,    14,    15,    10,    11,    31,     3,    22,
      24,    33,     3,     3,    31,     3,    22,    24,    33,     3,
      15,    26,    46,    60,    31,    27,    27,    33,    49,    27,
      27,     3,    44,     3,    22,    24,    33,    30,    28,    49,
      28,    52,    52,    53,    54,    55,    28,    49,    28,    52,
      52,    53,    54,    55,    28,    49,    28,    52,    52,    53,
      54,    55,    15,    26,    46,    60,    33,     3,     3,    33,
      33,    15,    26,    46,    60,    33,     3,     3,    26,    33,
      15,    26,    46,    60,    46,    49,    46,    33,     3,     3,
      23,    25,    46,    33,    30,    33,     3,     3,    28,    28,
      28,    26,    33,    33,    33,    26,    33,    33,    33,    26,
      33,    28,    28,    46,    28,    28,     3,    28,    28,    33,
      33,    45,    45,     3,    33,    33,    28,    33,    33,    17,
      31,    33,    45,     3,    13,    10,    28,     3,     3,    61,
      43,    28,    28,    28,    43,    43,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    38,    38,    39,
      39,    39,    40,    41,    42,    42,    42,    43,    43,    44,
      44,    45,    45,    45,    45,    45,    45,    45,    45,    46,
      46,    46,    46,    47,    47,    47,    47,    48,    48,    49,
      49,    50,    50,    50,    51,    51,    51,    52,    52,    53,
      53,    54,    54,    55,    55,    55,    55,    56,    56,    57,
      58,    58,    58,    58,    59,    59,    60,    60,    61,    61
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     6,     4,     2,     0,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     3,     3,     9,    11,    11,    10,     5,     7,     1,
       2,     3,     4,     4,     3,     3,     1,     1,     3,     1,
       3,     1,     3,     1,     1,     3,     1,     4,     3,     5,
       5,     5,     5,     6,     3,     2,     2,     2,     1,     1
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
#line 99 "sintatico.y"
                       {
        (yyval.ast) = criaNo("programa");
        (yyval.ast)->pai = (yyvsp[0].ast);
        raiz = (yyval.ast);
    }
#line 2086 "sintatico.tab.c"
    break;

  case 3: /* listaDeDeclaracoes: listaDeDeclaracoes declaracao  */
#line 107 "sintatico.y"
                                  {
        (yyval.ast) = criaNo("lista De Declaracoes");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        (yyvsp[-1].ast)->filho = (yyvsp[0].ast);
    }
#line 2096 "sintatico.tab.c"
    break;

  case 4: /* listaDeDeclaracoes: declaracao  */
#line 112 "sintatico.y"
                 {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2104 "sintatico.tab.c"
    break;

  case 5: /* TIPO: TIPO_INT  */
#line 118 "sintatico.y"
             {
        (yyval.ast) = criaNo("INT");
        strcpy((yyval.ast)->tipo, "INT");
        tipo += 0;
    }
#line 2114 "sintatico.tab.c"
    break;

  case 6: /* TIPO: TIPO_FLOAT  */
#line 123 "sintatico.y"
                 {
        (yyval.ast) = criaNo("FLOAT");
        strcpy((yyval.ast)->tipo, "FLOAT");
        tipo += 1;
    }
#line 2124 "sintatico.tab.c"
    break;

  case 7: /* TIPO: TIPO_LIST_INT  */
#line 128 "sintatico.y"
                    {
        (yyval.ast) = criaNo("INT LIST");
        strcpy((yyval.ast)->tipo, "INT LIST");
        tipo += 2;
    }
#line 2134 "sintatico.tab.c"
    break;

  case 8: /* TIPO: TIPO_LIST_FLOAT  */
#line 133 "sintatico.y"
                      {
        (yyval.ast) = criaNo("FLOAT LIST");
        strcpy((yyval.ast)->tipo, "FLOAT LIST");
        tipo += 3;
    }
#line 2144 "sintatico.tab.c"
    break;

  case 9: /* declaracao: declaracaoVariavel  */
#line 141 "sintatico.y"
                       {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2152 "sintatico.tab.c"
    break;

  case 10: /* declaracao: declaracaoFuncao  */
#line 144 "sintatico.y"
                       {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2160 "sintatico.tab.c"
    break;

  case 11: /* declaracao: error  */
#line 147 "sintatico.y"
            {
        erros++;
    }
#line 2168 "sintatico.tab.c"
    break;

  case 12: /* declaracaoVariavel: TIPO ID PONTOVIRGULA  */
#line 153 "sintatico.y"
                         {
        (yyval.ast) = criaNo("Declaracao de Variavel");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        id = insereSimbolo(id, (yyvsp[-1].token).escopo, (yyvsp[-1].token).id, "Variavel", tipos[tipo], (yyvsp[-1].token).linha, (yyvsp[-1].token).coluna, 0);
        strcpy((yyvsp[-2].ast)->simbolo, (yyvsp[-1].token).id);
        tipo = 0;
    }
#line 2180 "sintatico.tab.c"
    break;

  case 13: /* declaracaoFuncao: TIPO ID ABRE_PARENTESES listaDeParametros FECHA_PARENTESES corpo  */
#line 163 "sintatico.y"
                                                                     {
        (yyval.ast) = criaNo("Declaracao de funcao");
        (yyval.ast)->pai = (yyvsp[-5].ast);
        (yyvsp[-5].ast)->filho = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        id = insereSimbolo(id, (yyvsp[-4].token).escopo, (yyvsp[-4].token).id, "Funcao", tipos[tipo], (yyvsp[-4].token).linha, (yyvsp[-4].token).coluna, 0);
        strcpy((yyvsp[-5].ast)->simbolo, (yyvsp[-4].token).id);
        tipo = 0;
    }
#line 2194 "sintatico.tab.c"
    break;

  case 14: /* listaDeParametros: TIPO ID VIRGULA listaDeParametros  */
#line 175 "sintatico.y"
                                      {
        (yyval.ast) = criaNo("Lista de Parametros");
        (yyval.ast)->pai = (yyvsp[-3].ast);
        (yyvsp[-3].ast)->filho = (yyvsp[0].ast);
        id = insereSimbolo(id, (yyvsp[-2].token).escopo, (yyvsp[-2].token).id, "Variavel", tipos[tipo], (yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, 1);
        tipo = 0;
        strcpy((yyvsp[-3].ast)->simbolo, (yyvsp[-2].token).id);
    }
#line 2207 "sintatico.tab.c"
    break;

  case 15: /* listaDeParametros: TIPO ID  */
#line 183 "sintatico.y"
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
#line 2222 "sintatico.tab.c"
    break;

  case 16: /* listaDeParametros: %empty  */
#line 193 "sintatico.y"
       {
        (yyval.ast) = criaNo("Lista de Parametros vazia");
    }
#line 2230 "sintatico.tab.c"
    break;

  case 17: /* corpo: ABRE_CHAVES dentroCorpo FECHA_CHAVES  */
#line 199 "sintatico.y"
                                         {
        (yyval.ast) = criaNo("dentro das chaves");
        (yyval.ast)->pai = (yyvsp[-1].ast);
    }
#line 2239 "sintatico.tab.c"
    break;

  case 18: /* corpo: error  */
#line 203 "sintatico.y"
            {
        erros++;
    }
#line 2247 "sintatico.tab.c"
    break;

  case 19: /* dentroCorpo: declaracoes dentroCorpo  */
#line 209 "sintatico.y"
                            {
        (yyval.ast) = criaNo("declaracoes");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        (yyval.ast)->filho = (yyvsp[0].ast);
    }
#line 2257 "sintatico.tab.c"
    break;

  case 20: /* dentroCorpo: declaracoes  */
#line 214 "sintatico.y"
                  {
        (yyval.ast) = criaNo("declaracoes");
        (yyval.ast)->pai = (yyvsp[0].ast);
    }
#line 2266 "sintatico.tab.c"
    break;

  case 21: /* declaracoes: corpo  */
#line 221 "sintatico.y"
          {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2274 "sintatico.tab.c"
    break;

  case 22: /* declaracoes: declaracaoVariavel  */
#line 224 "sintatico.y"
                         {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2282 "sintatico.tab.c"
    break;

  case 23: /* declaracoes: expressao  */
#line 227 "sintatico.y"
                {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2290 "sintatico.tab.c"
    break;

  case 24: /* declaracoes: entrada  */
#line 230 "sintatico.y"
              {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2298 "sintatico.tab.c"
    break;

  case 25: /* declaracoes: retorno  */
#line 233 "sintatico.y"
              {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2306 "sintatico.tab.c"
    break;

  case 26: /* declaracoes: saida  */
#line 236 "sintatico.y"
            {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2314 "sintatico.tab.c"
    break;

  case 27: /* declaracoes: for  */
#line 239 "sintatico.y"
          {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2322 "sintatico.tab.c"
    break;

  case 28: /* declaracoes: condicional  */
#line 242 "sintatico.y"
                  {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2330 "sintatico.tab.c"
    break;

  case 29: /* expressao: exp PONTOVIRGULA  */
#line 248 "sintatico.y"
                     {
        (yyval.ast) = criaNo("expressao");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-1].ast)->tipo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[-1].ast));
        strcpy((yyval.ast)->simbolo, (yyvsp[-1].ast)->simbolo);
    }
#line 2342 "sintatico.tab.c"
    break;

  case 30: /* expressao: expressaoList  */
#line 255 "sintatico.y"
                    {
        (yyval.ast) = criaNo("expressao");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
    }
#line 2352 "sintatico.tab.c"
    break;

  case 31: /* expressao: ID ATRIBUICAO expressao  */
#line 260 "sintatico.y"
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
#line 2369 "sintatico.tab.c"
    break;

  case 32: /* expressao: ID ATRIBUICAO nil  */
#line 272 "sintatico.y"
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
#line 2385 "sintatico.tab.c"
    break;

  case 33: /* for: FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO ID FECHA_PARENTESES corpo  */
#line 287 "sintatico.y"
                                                                                    {
        (yyval.ast) = criaNo("for");
        (yyval.ast)->pai = (yyvsp[-6].ast);
        (yyvsp[-6].ast)->filho = (yyvsp[-5].ast);
        (yyvsp[-5].ast)->filho = (yyvsp[0].ast);
    }
#line 2396 "sintatico.tab.c"
    break;

  case 34: /* for: FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO ID OP_B_SOMA_SUB ID FECHA_PARENTESES corpo  */
#line 293 "sintatico.y"
                                                                                                       {
        (yyval.ast) = criaNo("for");
        (yyval.ast)->pai = (yyvsp[-8].ast);
        (yyvsp[-8].ast)->filho = (yyvsp[-7].ast);
        (yyvsp[-7].ast)->filho = (yyvsp[0].ast);
    }
#line 2407 "sintatico.tab.c"
    break;

  case 35: /* for: FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO ID OP_B_SOMA_SUB numero FECHA_PARENTESES corpo  */
#line 299 "sintatico.y"
                                                                                                           {
        (yyval.ast) = criaNo("for");
        (yyval.ast)->pai = (yyvsp[-8].ast);
        (yyvsp[-8].ast)->filho = (yyvsp[-7].ast);
        (yyvsp[-7].ast)->filho = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
    }
#line 2419 "sintatico.tab.c"
    break;

  case 36: /* for: FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO OP_LOGICA_NEG ID FECHA_PARENTESES corpo  */
#line 306 "sintatico.y"
                                                                                                    {
        (yyval.ast) = criaNo("for");
        (yyval.ast)->pai = (yyvsp[-7].ast);
        (yyvsp[-7].ast)->filho = (yyvsp[-6].ast);
        (yyvsp[-6].ast)->filho = (yyvsp[0].ast);
    }
#line 2430 "sintatico.tab.c"
    break;

  case 37: /* condicional: IF ABRE_PARENTESES expressao FECHA_PARENTESES declaracoes  */
#line 315 "sintatico.y"
                                                              {
        (yyval.ast) = criaNo("IF");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
    }
#line 2440 "sintatico.tab.c"
    break;

  case 38: /* condicional: IF ABRE_PARENTESES exp FECHA_PARENTESES declaracoes ELSE declaracoes  */
#line 320 "sintatico.y"
                                                                           {
        (yyval.ast) = criaNo("IF-ELSE");
        (yyval.ast)->pai = (yyvsp[-4].ast);
        (yyvsp[-4].ast)->filho = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
    }
#line 2451 "sintatico.tab.c"
    break;

  case 39: /* exp: expressao_logica  */
#line 329 "sintatico.y"
                     {
        (yyval.ast) = criaNo("exp");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2462 "sintatico.tab.c"
    break;

  case 40: /* exp: OP_LOGICA_NEG exp  */
#line 335 "sintatico.y"
                        {
        (yyval.ast) = criaNo("exp");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2473 "sintatico.tab.c"
    break;

  case 41: /* expressaoList: OP_LISTA ID PONTOVIRGULA  */
#line 344 "sintatico.y"
                             {
        (yyval.ast) = criaNo("expressaoList");
        strcpy((yyval.ast)->tipo, "OPERACAOLISTA");
    }
#line 2482 "sintatico.tab.c"
    break;

  case 42: /* expressaoList: exp CONSTRUTOR_LISTA ID PONTOVIRGULA  */
#line 348 "sintatico.y"
                                           {
        (yyval.ast) = criaNo("expressaoList");
        (yyval.ast)->pai = (yyvsp[-3].ast);
        strcpy((yyval.ast)->tipo, "CONSTRUTORLISTA");
    }
#line 2492 "sintatico.tab.c"
    break;

  case 43: /* expressaoList: exp FUNCOES_LISTA ID PONTOVIRGULA  */
#line 353 "sintatico.y"
                                        {
        (yyval.ast) = criaNo("expressaoList");
        (yyval.ast)->pai = (yyvsp[-3].ast);
        strcpy((yyval.ast)->tipo, "FUNCAOLISTA");
    }
#line 2502 "sintatico.tab.c"
    break;

  case 44: /* expressao_logica: expressao_logica OP_LOGICA_OR expressao_relacional  */
#line 361 "sintatico.y"
                                                       {
        (yyval.ast) = criaNo("expressaoLogica");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        //strcpy($$->tipo, "INT");
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
        
    }
#line 2515 "sintatico.tab.c"
    break;

  case 45: /* expressao_logica: expressao_logica OP_LOGICA_AND expressao_relacional  */
#line 369 "sintatico.y"
                                                          {
        (yyval.ast) = criaNo("expressaoLogica");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        //strcpy($$->tipo, "INT");
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
    }
#line 2527 "sintatico.tab.c"
    break;

  case 46: /* expressao_logica: expressao_relacional  */
#line 376 "sintatico.y"
                           {
        (yyval.ast) = criaNo("expressaoLogica");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2537 "sintatico.tab.c"
    break;

  case 47: /* expressao_relacional: opSomaSub  */
#line 384 "sintatico.y"
              {
        (yyval.ast) = criaNo("expressaoRelacional");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2547 "sintatico.tab.c"
    break;

  case 48: /* expressao_relacional: expressao_relacional OP_B_RELACIONAIS opSomaSub  */
#line 389 "sintatico.y"
                                                      {
        (yyval.ast) = criaNo("expressaoRelacional");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-2].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-2].ast)->simbolo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
    }
#line 2560 "sintatico.tab.c"
    break;

  case 49: /* opSomaSub: opMultDiv  */
#line 400 "sintatico.y"
              {
        (yyval.ast) = criaNo("Operando SomaSub");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2570 "sintatico.tab.c"
    break;

  case 50: /* opSomaSub: opSomaSub OP_B_SOMA_SUB opMultDiv  */
#line 405 "sintatico.y"
                                        {
        (yyval.ast) = criaNo("Operando SomaSub");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-2].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-2].ast)->simbolo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
    }
#line 2583 "sintatico.tab.c"
    break;

  case 51: /* opMultDiv: argumento  */
#line 417 "sintatico.y"
              {
        (yyval.ast) = criaNo("Operando MultDiv");
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2593 "sintatico.tab.c"
    break;

  case 52: /* opMultDiv: opMultDiv OP_B_MULT_DIV argumento  */
#line 422 "sintatico.y"
                                        {
        (yyval.ast) = criaNo("Operando MultDiv");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-2].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-2].ast)->simbolo);
        castDeTudo((yyval.ast)->tipo, (yyval.ast), (yyvsp[0].ast));
    }
#line 2606 "sintatico.tab.c"
    break;

  case 53: /* argumento: ID  */
#line 433 "sintatico.y"
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
#line 2621 "sintatico.tab.c"
    break;

  case 54: /* argumento: numero  */
#line 443 "sintatico.y"
             {
        (yyval.ast) = criaNo("argumento");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[0].ast)->simbolo);
    }
#line 2632 "sintatico.tab.c"
    break;

  case 55: /* argumento: ABRE_PARENTESES exp FECHA_PARENTESES  */
#line 449 "sintatico.y"
                                           {
        (yyval.ast) = criaNo("argumento");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[-1].ast)->tipo);
        strcpy((yyval.ast)->simbolo, (yyvsp[-1].ast)->simbolo);
    }
#line 2643 "sintatico.tab.c"
    break;

  case 56: /* argumento: chamadaDeFuncao  */
#line 455 "sintatico.y"
                      {
        (yyval.ast) = criaNo("argumento");
        (yyval.ast)->pai = (yyvsp[0].ast);
        strcpy((yyval.ast)->tipo, (yyvsp[0].ast)->tipo);
    }
#line 2653 "sintatico.tab.c"
    break;

  case 57: /* chamadaDeFuncao: ID ABRE_PARENTESES exp FECHA_PARENTESES  */
#line 463 "sintatico.y"
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
#line 2668 "sintatico.tab.c"
    break;

  case 58: /* chamadaDeFuncao: ID ABRE_PARENTESES FECHA_PARENTESES  */
#line 473 "sintatico.y"
                                          {
        (yyval.ast) = criaNo("chamada de funcao");
        TabelaSimbolo* c = procuraVariavel(id, (yyvsp[-2].token).id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Funcao nao declarada!!!\n", (yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).id);
        }else{
            strcpy((yyval.ast)->tipo, c->tipo);
        }
    }
#line 2682 "sintatico.tab.c"
    break;

  case 59: /* entrada: ENTRADA ABRE_PARENTESES ID FECHA_PARENTESES PONTOVIRGULA  */
#line 485 "sintatico.y"
                                                             {
        (yyval.ast) = criaNo("entrada");
        TabelaSimbolo* c = procuraVariavel(id, (yyvsp[-2].token).id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Variavel nao declarada!!!\n", (yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).id);
        }else{
            strcpy((yyval.ast)->tipo, c->tipo);
        }
    }
#line 2696 "sintatico.tab.c"
    break;

  case 60: /* saida: SAIDA ABRE_PARENTESES STRING FECHA_PARENTESES PONTOVIRGULA  */
#line 497 "sintatico.y"
                                                               {
        (yyval.ast) = criaNo("saida");
    }
#line 2704 "sintatico.tab.c"
    break;

  case 61: /* saida: SAIDA ABRE_PARENTESES ID FECHA_PARENTESES PONTOVIRGULA  */
#line 500 "sintatico.y"
                                                             {
        (yyval.ast) = criaNo("saida");
        TabelaSimbolo* c = procuraVariavel(id, (yyvsp[-2].token).id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Variavel nao declarada!!!\n", (yyvsp[-2].token).linha, (yyvsp[-2].token).coluna, (yyvsp[-2].token).id);
        }
    }
#line 2716 "sintatico.tab.c"
    break;

  case 62: /* saida: SAIDA ABRE_PARENTESES expressao FECHA_PARENTESES PONTOVIRGULA  */
#line 507 "sintatico.y"
                                                                    {
        (yyval.ast) = criaNo("saida");
        (yyval.ast)->pai = (yyvsp[-2].ast);
    }
#line 2725 "sintatico.tab.c"
    break;

  case 63: /* saida: SAIDA ABRE_PARENTESES OP_LISTA ID FECHA_PARENTESES PONTOVIRGULA  */
#line 511 "sintatico.y"
                                                                      {
        (yyval.ast) = criaNo("saida");
    }
#line 2733 "sintatico.tab.c"
    break;

  case 64: /* retorno: RETORNO exp PONTOVIRGULA  */
#line 517 "sintatico.y"
                             {
        (yyval.ast) = criaNo("retorno");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        char tipoRetornoC[20] = "";
        strcpy(tipoRetornoC, (yyvsp[-1].ast)->tipo);
    }
#line 2744 "sintatico.tab.c"
    break;

  case 65: /* retorno: RETORNO PONTOVIRGULA  */
#line 523 "sintatico.y"
                           {
        (yyval.ast) = criaNo("retorno");
    }
#line 2752 "sintatico.tab.c"
    break;

  case 66: /* nil: NIL PONTOVIRGULA  */
#line 529 "sintatico.y"
                     {
        (yyval.ast) = criaNo("NULO");
        strcpy((yyval.ast)->tipo, "NULO");
        strcpy((yyval.ast)->simbolo, (yyvsp[-1].token).id);
    }
#line 2762 "sintatico.tab.c"
    break;

  case 67: /* nil: OP_B_RELACIONAIS NIL  */
#line 534 "sintatico.y"
                           {
        (yyval.ast) = criaNo("NULO");
        strcpy((yyval.ast)->tipo, "NULO");
        strcpy((yyval.ast)->simbolo, (yyvsp[0].token).id);
    }
#line 2772 "sintatico.tab.c"
    break;

  case 68: /* numero: INT  */
#line 542 "sintatico.y"
        {
        (yyval.ast) = criaNo("Numero");
        strcpy((yyval.ast)->tipo, "INT");
        strcpy((yyval.ast)->simbolo, (yyvsp[0].token).id);
    }
#line 2782 "sintatico.tab.c"
    break;

  case 69: /* numero: FLOAT  */
#line 547 "sintatico.y"
            {
        (yyval.ast) = criaNo("Numero");
        strcpy((yyval.ast)->tipo, "FLOAT");
        strcpy((yyval.ast)->simbolo, (yyvsp[0].token).id);
    }
#line 2792 "sintatico.tab.c"
    break;


#line 2796 "sintatico.tab.c"

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

#line 555 "sintatico.y"


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
