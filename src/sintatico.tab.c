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
    node* head;

#line 85 "sintatico.tab.c"

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
#define YYLAST   2299

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  360

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
       0,    86,    86,    94,    99,   105,   108,   111,   114,   120,
     123,   126,   130,   138,   147,   152,   156,   162,   166,   170,
     175,   182,   185,   188,   191,   194,   197,   200,   203,   209,
     213,   217,   221,   229,   235,   241,   248,   257,   262,   271,
     275,   282,   285,   289,   296,   301,   306,   312,   315,   323,
     326,   335,   338,   346,   349,   353,   357,   364,   371,   377,
     380,   383,   387,   390,   396,   400,   406,   409,   415,   418
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

#define YYPACT_NINF (-169)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-70)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     534,  2224,    21,    58,    59,    66,    77,  2234,    75,  2238,
    2248,  2252,  -169,  2262,    -4,   120,  2266,    93,    69,    26,
      16,   120,  2276,  1619,  2280,    71,  1794,  1920,  1940,    67,
      76,    84,    46,    85,    87,   117,   258,   129,   581,   629,
     108,   659,   689,   719,   749,   143,   779,   330,   591,  2050,
    1946,  1966,  1972,   809,   839,   869,  1992,   258,    78,  1914,
     231,   258,   147,   899,   111,   151,   136,   124,   152,   146,
    2290,   158,   179,   200,   929,    81,    81,    81,    81,    81,
     184,   188,   182,   959,   989,   191,   470,  1019,   201,   360,
     232,   208,   216,   211,  1049,  1998,   221,   225,  1798,  1822,
    2066,  2018,  2024,  2044,  1079,  1109,   219,   257,   240,   253,
     125,   256,  1139,   266,  1169,  1199,  1646,   271,  1229,  1259,
     276,  1289,  1319,   282,    30,  1349,   274,    10,   312,   290,
     206,    17,   292,  1646,   299,   315,  1379,    17,   294,    17,
      17,  1409,  1439,  1469,  1499,  1529,  1619,   296,   255,   494,
     313,   258,    20,   171,   163,  1708,  1739,  2081,  2090,  2129,
    2136,  2148,   258,   258,   286,   505,  1669,  2155,  2163,  2170,
    2178,  1818,   338,   368,  1698,   399,   325,  1559,  1842,   344,
     423,   353,   544,   331,   332,  1866,   334,   340,    62,   341,
     352,   382,  1619,   383,   359,   374,   381,   389,   390,   468,
     394,   401,   413,   414,   384,   420,   425,   258,   424,   432,
     142,   142,   142,   142,   142,   258,   434,   440,   203,   203,
     203,   203,   203,   551,   439,   473,   475,  1701,   481,   486,
     466,  1667,   462,   493,   499,   500,  1890,   485,   509,   495,
     504,   508,  1673,   258,   147,   515,   517,   548,   436,   520,
     528,   530,   562,   565,   539,  1589,   547,  2096,   465,  1677,
     385,  2105,  2116,   553,  2185,  1629,  1846,  1957,  2193,  2200,
     550,   546,  1704,  1729,  1732,   558,   559,   560,   563,   557,
     574,   592,   606,   609,   583,   585,   586,   589,   595,   593,
     594,   596,   601,   611,   470,   610,   613,  1770,   640,   616,
     618,   626,   625,   627,   631,   636,   637,  2122,  2208,  1735,
    1760,  1763,  1766,   643,   645,   671,   673,   678,   680,   654,
     655,   617,   684,   658,   666,   138,   667,   674,   668,   676,
     681,  1646,   672,   683,   685,   688,   687,   699,   700,    89,
     701,    70,    29,   711,   704,   447,    18,   706,  1646,   708,
     713,   714,    18,   715,    18,    18,   717,   721,   729,   730
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -169,  -169,  -169,     0,   736,     1,  -169,   740,   -18,   -37,
    -111,   -10,  -107,  -105,   -26,     2,   337,   410,   319,   303,
     195,   215,  -103,   -91,   -89,  -168,   -20
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     6,     7,    37,     9,    38,    11,    18,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    84,    56
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       8,    10,    24,    60,    71,   123,    64,     8,    10,   197,
      68,   198,   158,   201,   241,    17,   170,    22,   145,   184,
     130,    17,   138,    15,    -5,   202,   197,   203,   198,    16,
     201,    80,   210,   127,   211,    85,   173,   170,   131,   345,
     175,   170,   202,   128,   203,    23,   146,   192,    83,   147,
     148,   149,    86,   -39,   -15,   273,    93,   346,    21,   150,
     180,    -6,    -7,   282,   174,   147,   148,   149,   176,    -8,
      59,    27,    28,   151,   292,   150,   107,    12,    14,    63,
      29,    26,    27,    28,    59,    27,    28,   344,   181,   151,
     199,    29,   342,    81,    36,   245,    19,    20,   195,   -14,
     -37,    35,   343,    61,    82,    36,   196,   199,    36,   206,
     135,    62,    65,   136,    66,   195,   193,   194,   200,   141,
      67,   143,   144,   196,   208,   209,     2,     3,     4,     5,
     158,   170,    69,   193,   194,   200,   216,   217,    70,    89,
      27,    28,   170,   170,    87,   147,   148,   149,   -16,    29,
     171,    27,    28,   120,    88,   250,   175,    94,   183,    90,
      29,    91,   246,    36,    92,    72,   335,    73,   158,   151,
     172,   183,   240,   213,    36,   -47,    74,   -47,   -47,   177,
      95,   256,    96,   -46,   176,   -46,   212,   170,   -19,   263,
     158,   158,   158,   158,   158,   170,   -47,   173,   170,   170,
     170,   170,   170,    97,   -46,   180,   159,   160,   161,   134,
     204,   205,   103,   272,   104,   105,   199,   293,   173,   106,
     338,   281,   175,   170,   197,   174,   198,   156,   201,   108,
     163,   168,   291,   181,   294,   110,   111,   353,   301,   113,
     202,   197,   203,   198,   200,   201,   174,   157,   116,   112,
     176,   169,   168,   -40,   114,   -40,   168,   202,   115,   203,
     117,   159,   160,   161,   -40,   -68,   -68,   -68,   180,   -68,
     -68,   162,   169,   118,   102,   -37,   169,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   322,   163,   119,   -37,   -68,   121,
     -37,   129,   -37,   -37,   -37,   -37,   181,   -37,   218,   122,
     219,   -37,   124,   -37,   -37,   199,   -53,   -53,   -53,   125,
     -53,   -53,   126,   195,   -39,   132,   147,   148,   149,   133,
     137,   196,   199,   207,   142,   350,   150,   139,   351,   -53,
     195,   193,   194,   200,   356,   155,   358,   359,   196,   167,
     151,   224,    75,   140,    76,   156,   168,   232,   193,   194,
     200,   154,   -39,   -30,   -39,   166,   -30,   168,   168,   -41,
     167,   243,   -18,   -39,   167,   157,   169,   244,   247,   152,
     -53,   -53,   -53,   164,   -53,   -53,   166,   169,   169,   248,
     166,   101,   -53,   156,   -53,   249,   251,    57,   109,   -22,
     225,   182,   226,   -53,   164,   213,   100,   -48,   164,   -48,
     -48,   227,   168,   157,   -21,   156,   156,   156,   156,   262,
     168,   -23,   -68,   168,   168,   168,   168,   269,   -48,   -27,
     -28,   228,   169,   229,   -30,   157,   157,   157,   157,   157,
     169,   -24,   230,   169,   169,   169,   169,   169,   168,   297,
      27,    28,   153,   -26,   -25,   233,   165,   234,   -69,    29,
     349,   204,   205,   155,   167,   255,   235,   -40,   169,   298,
     257,   299,   -40,    36,   300,   167,   167,   165,   264,   154,
     166,   165,   274,   178,    27,    28,   275,   -45,   276,   -45,
     212,   166,   166,    29,   277,    98,    99,   152,   164,   278,
     252,   155,   253,   179,   -29,   283,   284,    36,   -45,   164,
     164,   254,   285,   -29,   -69,   -69,   -69,   154,   -69,   -69,
     167,   286,   287,   155,   155,   155,   261,   -46,   167,   -46,
     220,   167,   167,   167,   268,   152,   166,   -69,   288,   154,
     154,   260,   -31,   -46,   166,     1,   -32,   166,   166,   267,
       2,     3,     4,     5,   164,   -65,   167,   236,    27,    28,
     295,   296,   164,   302,   171,    27,    28,    29,   303,   237,
     153,   165,   166,   304,    29,   305,   270,   238,   306,   -29,
     239,    36,   165,   165,   172,   307,   309,   271,    36,   310,
     164,   308,   -22,   315,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,   311,   312,   313,   -22,   -31,   314,   -22,   153,   -22,
     -22,   -22,   -22,   -46,   -22,   -46,    77,   316,   -22,   -32,
     -22,   -22,   -41,   -46,   -67,   -46,   317,   165,   318,   319,
     258,   259,   183,   -66,   -46,   165,   -31,   320,   265,   266,
     -21,   -32,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   321,
     -64,   323,   -21,   325,   326,   -21,   331,   -21,   -21,   -21,
     -21,   327,   -21,   165,   328,   -41,   -21,   -17,   -21,   -21,
     145,   -12,    26,    27,    28,     2,     3,     4,     5,   329,
     330,   -42,    29,   -43,   -67,    30,   -66,    31,    32,    33,
      34,   -42,    35,   -43,   -67,   -66,    36,   332,   146,   -20,
     -23,   333,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   334,
     336,   337,   -23,   339,   -62,   -23,   -42,   -23,   -23,   -23,
     -23,   -43,   -23,   -58,   347,   -60,   -23,   -59,   -23,   -23,
     -27,   340,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -61,
     341,   -63,   -27,   348,   352,   -27,   354,   -27,   -27,   -27,
     -27,   355,   -27,    13,   -33,   357,   -27,   -36,   -27,   -27,
     -28,   -38,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -34,
     -35,    25,   -28,     0,     0,   -28,     0,   -28,   -28,   -28,
     -28,     0,   -28,     0,     0,     0,   -28,     0,   -28,   -28,
     -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,
       0,     0,   -30,     0,     0,   -30,     0,   -30,   -30,   -30,
     -30,     0,   -30,     0,     0,     0,   -30,     0,   -30,   -30,
     -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,
       0,     0,   -24,     0,     0,   -24,     0,   -24,   -24,   -24,
     -24,     0,   -24,     0,     0,     0,   -24,     0,   -24,   -24,
     -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,
       0,     0,   -26,     0,     0,   -26,     0,   -26,   -26,   -26,
     -26,     0,   -26,     0,     0,     0,   -26,     0,   -26,   -26,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,     0,
       0,     0,   -25,     0,     0,   -25,     0,   -25,   -25,   -25,
     -25,     0,   -25,     0,     0,     0,   -25,     0,   -25,   -25,
     -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,
       0,     0,   -65,     0,     0,   -65,     0,   -65,   -65,   -65,
     -65,     0,   -65,     0,     0,     0,   -65,     0,   -65,   -65,
     -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,
       0,     0,   -29,     0,     0,   -29,     0,   -29,   -29,   -29,
     -29,     0,   -29,     0,     0,     0,   -29,     0,   -29,   -29,
     -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,
       0,     0,   -31,     0,     0,   -31,     0,   -31,   -31,   -31,
     -31,     0,   -31,     0,     0,     0,   -31,     0,   -31,   -31,
     -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,
       0,     0,   -32,     0,     0,   -32,     0,   -32,   -32,   -32,
     -32,     0,   -32,     0,     0,     0,   -32,     0,   -32,   -32,
     -64,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
       0,     0,   -64,     0,     0,   -64,     0,   -64,   -64,   -64,
     -64,     0,   -64,     0,     0,     0,   -64,     0,   -64,   -64,
     -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,
       0,     0,   -41,     0,     0,   -41,     0,   -41,   -41,   -41,
     -41,     0,   -41,     0,     0,     0,   -41,     0,   -41,   -41,
     -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,
       0,     0,   -67,     0,     0,   -67,     0,   -67,   -67,   -67,
     -67,     0,   -67,     0,     0,     0,   -67,     0,   -67,   -67,
     -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
       0,     0,   -66,     0,     0,   -66,     0,   -66,   -66,   -66,
     -66,     0,   -66,     0,     0,     0,   -66,     0,   -66,   -66,
     -62,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,
       0,     0,   -62,     0,     0,   -62,     0,   -62,   -62,   -62,
     -62,     0,   -62,     0,     0,     0,   -62,     0,   -62,   -62,
     -42,     0,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,
       0,     0,   -42,     0,     0,   -42,     0,   -42,   -42,   -42,
     -42,     0,   -42,     0,     0,     0,   -42,     0,   -42,   -42,
     -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,
       0,     0,   -43,     0,     0,   -43,     0,   -43,   -43,   -43,
     -43,     0,   -43,     0,     0,     0,   -43,     0,   -43,   -43,
     -58,     0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,
       0,     0,   -58,     0,     0,   -58,     0,   -58,   -58,   -58,
     -58,     0,   -58,     0,     0,     0,   -58,     0,   -58,   -58,
     -60,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,
       0,     0,   -60,     0,     0,   -60,     0,   -60,   -60,   -60,
     -60,     0,   -60,     0,     0,     0,   -60,     0,   -60,   -60,
     -59,     0,   -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,
       0,     0,   -59,     0,     0,   -59,     0,   -59,   -59,   -59,
     -59,     0,   -59,     0,     0,     0,   -59,     0,   -59,   -59,
     -61,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,
       0,     0,   -61,     0,     0,   -61,     0,   -61,   -61,   -61,
     -61,     0,   -61,     0,     0,     0,   -61,     0,   -61,   -61,
     -63,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,
       0,     0,   -63,     0,     0,   -63,     0,   -63,   -63,   -63,
     -63,     0,   -63,     0,     0,     0,   -63,     0,   -63,   -63,
     -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,
       0,     0,   -33,     0,     0,   -33,     0,   -33,   -33,   -33,
     -33,     0,   -33,     0,     0,     0,   -33,     0,   -33,   -33,
     -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,
       0,     0,   -36,     0,     0,   -36,     0,   -36,   -36,   -36,
     -36,     0,   -36,     0,     0,     0,   -36,     0,   -36,   -36,
     -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,
       0,     0,   -38,     0,     0,   -38,     0,   -38,   -38,   -38,
     -38,     0,   -38,     0,     0,     0,   -38,     0,   -38,   -38,
     -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,
       0,     0,   -34,     0,     0,   -34,     0,   -34,   -34,   -34,
     -34,     0,   -34,     0,     0,     0,   -34,     0,   -34,   -34,
     -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,
       0,     0,   -35,     0,     0,   -35,     0,   -35,   -35,   -35,
     -35,     0,   -35,     0,     0,     0,   -35,     0,   -35,   -35,
     -18,     0,   -18,   -18,   -18,   -18,   -18,   -18,   -18,     0,
       0,     0,   -18,     0,     0,   -18,     0,   -18,   -18,   -18,
     -18,     0,   -18,     0,     0,     0,   -18,     0,   -18,   -18,
     -12,     0,   -12,   -12,   -12,   -12,   -12,   -12,   -12,     0,
       0,     0,   -12,     0,     0,   -12,     0,   -12,   -12,   -12,
     -12,     0,   -12,     0,     0,     0,   -12,     0,   -12,   -12,
     -17,     0,   -17,   -17,   -17,   -17,   -17,   -17,   -17,     0,
       0,     0,   -17,     0,     0,   -17,     0,   -17,   -17,   -17,
     -17,     0,   -17,     0,     0,     0,   -17,     0,   -17,   -17,
     145,     0,    26,    27,    28,     2,     3,     4,     5,     0,
       0,     0,    29,     0,     0,    30,     0,    31,    32,    33,
      34,   -45,    35,   -45,   220,     0,    36,   184,   146,   185,
      27,    28,     2,     3,     4,     5,     0,   -45,     0,    29,
       0,     0,   186,     0,   187,   188,   189,   190,     0,   191,
     178,    27,    28,    36,     0,   192,   185,    27,    28,   221,
      29,   -47,   279,   -47,   -47,     0,    29,     0,   289,   -44,
     179,   -44,   212,   280,    36,     0,   191,   -47,     0,   290,
      36,   -30,   -30,   -30,   -29,   -29,   -29,   -31,   -31,   -31,
     -44,   -30,     0,     0,   -29,     0,     0,   -31,   -49,   214,
     -49,   -30,   -49,   -49,   -29,   -30,     0,   -31,   -29,     0,
       0,   -31,   -32,   -32,   -32,   -41,   -41,   -41,   -67,   -67,
     -67,   -49,   -32,     0,     0,   -41,     0,     0,   -67,   -51,
     -51,   -51,   -32,   -51,   -51,   -41,   -32,     0,   -67,   -41,
       0,     0,   -67,   -66,   -66,   -66,   -42,   -42,   -42,   -43,
     -43,   -43,   -51,   -66,     0,     0,   -42,     0,     0,   -43,
     -53,   -53,   -53,   -66,   -53,   -53,   -42,   -66,     0,   -43,
     -42,     0,   -53,   -43,   -53,     0,     0,    57,   324,     0,
       0,   182,     0,   -53,   -53,   -53,   -53,     0,   -53,   -53,
     -45,     0,   -45,    77,     0,     0,   -53,     0,   -53,     0,
     -45,    57,   -45,     0,     0,    58,     0,   -53,   -53,   -53,
     -53,   -45,   -53,   -53,   -44,     0,   -44,    77,     0,     0,
     -53,     0,   -53,     0,   -44,    57,   -44,     0,     0,   223,
       0,   -53,   -53,   -53,   -53,   -44,   -53,   -53,   -44,     0,
     -44,   220,     0,     0,   -53,     0,   -53,     0,     0,    57,
       0,     0,     0,   231,   -44,   -53,   -53,   -53,   -53,     0,
     -53,   -53,     0,     0,     0,     0,     0,     0,   -53,     0,
     -53,     0,     0,    57,     0,     0,     0,   242,     0,   -53,
     -53,   -53,   -53,     0,   -53,   -53,     0,     0,     0,     0,
       0,     0,   -53,     0,   -53,     0,     0,    57,     0,     0,
       0,   182,     0,   -53,   -53,   -53,   -53,     0,   -53,   -53,
     -68,   -68,   -68,     0,   -68,   -68,   -53,     0,   -53,     0,
       0,    57,   -68,     0,   -68,     0,     0,   -53,     0,     0,
     -69,   -69,   -69,   -68,   -69,   -69,   -49,    79,   -49,     0,
     -49,   -49,   -69,     0,   -69,     0,     0,   221,   -49,   -48,
     -49,   -48,   -48,   -69,     0,     0,   -51,   -51,   -51,   -49,
     -51,   -51,   -56,   -56,   -56,   -48,   -56,   -56,   -51,     0,
     -51,     0,     0,     0,   -56,     0,   -56,     0,     0,   -51,
       0,     0,   -54,   -54,   -54,   -56,   -54,   -54,   -55,   -55,
     -55,     0,   -55,   -55,   -54,     0,   -54,     0,     0,     0,
     -55,     0,   -55,     0,     0,   -54,     0,     0,   -50,    79,
     -50,   -55,   -50,   -50,   -52,   -52,   -52,     0,   -52,   -52,
     -50,     0,   -50,     0,     0,     0,   -52,     0,   -52,     0,
       0,   -50,     0,     0,   -57,   -57,   -57,   -52,   -57,   -57,
      78,     0,   -47,     0,   -47,   -47,   -57,     0,   -57,     0,
       0,     0,   -47,     0,   -47,     0,    78,   -57,   -48,     0,
     -48,   -48,     0,   -47,     0,     0,     0,     0,   -48,     0,
     -48,   -56,   -56,   -56,     0,   -56,   -56,     0,     0,   -48,
     -54,   -54,   -54,     0,   -54,   -54,   -55,   -55,   -55,     0,
     -55,   -55,     0,     0,   -56,   -50,   214,   -50,     0,   -50,
     -50,     0,     0,   -54,     0,     0,   -52,   -52,   -52,   -55,
     -52,   -52,   -57,   -57,   -57,     0,   -57,   -57,   -50,   -53,
     -53,   -53,     0,   -53,   -53,     0,   -68,   -68,   -68,   -52,
     -68,   -68,     0,     0,     0,   -57,   215,   -53,   -69,   -69,
     -69,     0,   -69,   -69,   -68,   -49,   222,   -49,     0,   -49,
     -49,     0,     0,   -51,   -51,   -51,   -69,   -51,   -51,     0,
     -56,   -56,   -56,   -49,   -56,   -56,     0,     0,   -54,   -54,
     -54,   -51,   -54,   -54,     0,   -55,   -55,   -55,   -56,   -55,
     -55,     0,     0,   -50,   222,   -50,   -54,   -50,   -50,     0,
     -52,   -52,   -52,   -55,   -52,   -52,     0,     0,   -57,   -57,
     -57,   -50,   -57,   -57,   -11,   -11,     0,     0,   -52,     0,
     -11,   -11,   -11,   -11,    -2,     1,   -57,     0,    -4,    -4,
       2,     3,     4,     5,    -4,    -4,    -4,    -4,    -9,    -9,
       0,     0,   -10,   -10,    -9,    -9,    -9,    -9,   -10,   -10,
     -10,   -10,    -3,    -3,     0,     0,   -12,   -12,    -3,    -3,
      -3,    -3,   -12,   -12,   -12,   -12,   -18,   -18,     0,     0,
     -13,   -13,   -18,   -18,   -18,   -18,   -13,   -13,   -13,   -13,
     -17,   -17,     0,     0,     0,     0,   -17,   -17,   -17,   -17
};

static const yytype_int16 yycheck[] =
{
       0,     0,    20,    29,    41,   116,    32,     7,     7,   116,
      36,   116,    32,   116,   182,    15,    36,     1,     1,     1,
      10,    21,   133,    27,     3,   116,   133,   116,   133,    33,
     133,    57,    12,     3,    14,    61,    62,    57,    28,    10,
      66,    61,   133,    13,   133,    29,    29,    29,    58,     3,
       4,     5,    62,    33,    28,   223,    66,    28,    32,    13,
      86,     3,     3,   231,    62,     3,     4,     5,    66,     3,
       3,     4,     5,    27,   242,    13,    86,     0,     3,    33,
      13,     3,     4,     5,     3,     4,     5,    17,    86,    27,
     116,    13,     3,    15,    27,    33,     3,    28,   116,    28,
      30,    23,    13,    27,    26,    27,   116,   133,    27,   146,
     130,    27,    27,   131,    27,   133,   116,   116,   116,   137,
       3,   139,   140,   133,   150,   151,     6,     7,     8,     9,
     150,   151,     3,   133,   133,   133,   162,   163,    30,     3,
       4,     5,   162,   163,    33,     3,     4,     5,    28,    13,
       3,     4,     5,    28,     3,   192,   182,    33,    33,    23,
      13,    25,   188,    27,    28,    22,    28,    24,   188,    27,
      23,    33,   182,    10,    27,    12,    33,    14,    15,    33,
      28,   207,     3,    12,   182,    14,    15,   207,    30,   215,
     210,   211,   212,   213,   214,   215,    33,   223,   218,   219,
     220,   221,   222,     3,    33,   231,     3,     4,     5,     3,
       4,     5,    28,   223,    26,    33,   242,   243,   244,    28,
     331,   231,   248,   243,   331,   223,   331,    32,   331,    28,
      27,    36,   242,   231,   244,     3,    28,   348,   248,    28,
     331,   348,   331,   348,   242,   348,   244,    32,    29,    33,
     248,    36,    57,    22,    33,    24,    61,   348,    33,   348,
       3,     3,     4,     5,    33,    10,    11,    12,   294,    14,
      15,    13,    57,    33,    79,     1,    61,     3,     4,     5,
       6,     7,     8,     9,   294,    27,    33,    13,    33,    33,
      16,    17,    18,    19,    20,    21,   294,    23,    12,    33,
      14,    27,    31,    29,    30,   331,    10,    11,    12,    33,
      14,    15,    30,   331,    28,     3,     3,     4,     5,    29,
      28,   331,   348,    27,    30,   345,    13,    28,   346,    33,
     348,   331,   331,   331,   352,    32,   354,   355,   348,    36,
      27,     3,    12,    28,    14,   150,   151,     3,   348,   348,
     348,    32,    22,    28,    24,    36,     3,   162,   163,    28,
      57,    27,    30,    33,    61,   150,   151,    27,    27,    32,
      10,    11,    12,    36,    14,    15,    57,   162,   163,    27,
      61,    78,    22,   188,    24,     3,     3,    27,    28,    30,
      22,    31,    24,    33,    57,    10,    77,    12,    61,    14,
      15,    33,   207,   188,    30,   210,   211,   212,   213,   214,
     215,    30,    28,   218,   219,   220,   221,   222,    33,    30,
      30,    22,   207,    24,    30,   210,   211,   212,   213,   214,
     215,    30,    33,   218,   219,   220,   221,   222,   243,     3,
       4,     5,    32,    30,    30,    22,    36,    24,    28,    13,
       3,     4,     5,   150,   151,    30,    33,    33,   243,    23,
      28,    25,    28,    27,    28,   162,   163,    57,    28,   150,
     151,    61,    33,     3,     4,     5,     3,    12,     3,    14,
      15,   162,   163,    13,     3,    75,    76,   150,   151,     3,
      22,   188,    24,    23,    28,    33,     3,    27,    33,   162,
     163,    33,     3,     3,    10,    11,    12,   188,    14,    15,
     207,    26,     3,   210,   211,   212,   213,    12,   215,    14,
      15,   218,   219,   220,   221,   188,   207,    33,    33,   210,
     211,   212,    28,    28,   215,     1,    28,   218,   219,   220,
       6,     7,     8,     9,   207,    30,   243,     3,     4,     5,
      33,     3,   215,    33,     3,     4,     5,    13,    30,    15,
     150,   151,   243,    33,    13,     3,    15,    23,     3,    30,
      26,    27,   162,   163,    23,    28,    26,    26,    27,    33,
     243,    28,     1,    26,     3,     4,     5,     6,     7,     8,
       9,    33,    33,    33,    13,     3,    33,    16,   188,    18,
      19,    20,    21,    12,    23,    14,    15,    33,    27,     3,
      29,    30,     3,    22,    28,    24,    33,   207,    33,    26,
     210,   211,    33,    28,    33,   215,    30,    33,   218,   219,
       1,    30,     3,     4,     5,     6,     7,     8,     9,    28,
      30,    28,    13,     3,    28,    16,    29,    18,    19,    20,
      21,    33,    23,   243,    28,    30,    27,    30,    29,    30,
       1,    30,     3,     4,     5,     6,     7,     8,     9,    33,
      33,    28,    13,    28,     3,    16,     3,    18,    19,    20,
      21,     3,    23,     3,    30,    30,    27,     3,    29,    30,
       1,    33,     3,     4,     5,     6,     7,     8,     9,    33,
      33,    33,    13,    31,    30,    16,    30,    18,    19,    20,
      21,    30,    23,    30,     3,    30,    27,    30,    29,    30,
       1,    33,     3,     4,     5,     6,     7,     8,     9,    30,
      30,    30,    13,    29,    28,    16,    28,    18,    19,    20,
      21,    28,    23,     7,    30,    30,    27,    30,    29,    30,
       1,    30,     3,     4,     5,     6,     7,     8,     9,    30,
      30,    21,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    12,    23,    14,    15,    -1,    27,     1,    29,     3,
       4,     5,     6,     7,     8,     9,    -1,    28,    -1,    13,
      -1,    -1,    16,    -1,    18,    19,    20,    21,    -1,    23,
       3,     4,     5,    27,    -1,    29,     3,     4,     5,    10,
      13,    12,    15,    14,    15,    -1,    13,    -1,    15,    12,
      23,    14,    15,    26,    27,    -1,    23,    28,    -1,    26,
      27,     3,     4,     5,     3,     4,     5,     3,     4,     5,
      33,    13,    -1,    -1,    13,    -1,    -1,    13,    10,    11,
      12,    23,    14,    15,    23,    27,    -1,    23,    27,    -1,
      -1,    27,     3,     4,     5,     3,     4,     5,     3,     4,
       5,    33,    13,    -1,    -1,    13,    -1,    -1,    13,    10,
      11,    12,    23,    14,    15,    23,    27,    -1,    23,    27,
      -1,    -1,    27,     3,     4,     5,     3,     4,     5,     3,
       4,     5,    33,    13,    -1,    -1,    13,    -1,    -1,    13,
      10,    11,    12,    23,    14,    15,    23,    27,    -1,    23,
      27,    -1,    22,    27,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,    -1,    33,    10,    11,    12,    -1,    14,    15,
      12,    -1,    14,    15,    -1,    -1,    22,    -1,    24,    -1,
      22,    27,    24,    -1,    -1,    31,    -1,    33,    10,    11,
      12,    33,    14,    15,    12,    -1,    14,    15,    -1,    -1,
      22,    -1,    24,    -1,    22,    27,    24,    -1,    -1,    31,
      -1,    33,    10,    11,    12,    33,    14,    15,    12,    -1,
      14,    15,    -1,    -1,    22,    -1,    24,    -1,    -1,    27,
      -1,    -1,    -1,    31,    28,    33,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,
      24,    -1,    -1,    27,    -1,    -1,    -1,    31,    -1,    33,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    31,    -1,    33,    10,    11,    12,    -1,    14,    15,
      10,    11,    12,    -1,    14,    15,    22,    -1,    24,    -1,
      -1,    27,    22,    -1,    24,    -1,    -1,    33,    -1,    -1,
      10,    11,    12,    33,    14,    15,    10,    11,    12,    -1,
      14,    15,    22,    -1,    24,    -1,    -1,    10,    22,    12,
      24,    14,    15,    33,    -1,    -1,    10,    11,    12,    33,
      14,    15,    10,    11,    12,    28,    14,    15,    22,    -1,
      24,    -1,    -1,    -1,    22,    -1,    24,    -1,    -1,    33,
      -1,    -1,    10,    11,    12,    33,    14,    15,    10,    11,
      12,    -1,    14,    15,    22,    -1,    24,    -1,    -1,    -1,
      22,    -1,    24,    -1,    -1,    33,    -1,    -1,    10,    11,
      12,    33,    14,    15,    10,    11,    12,    -1,    14,    15,
      22,    -1,    24,    -1,    -1,    -1,    22,    -1,    24,    -1,
      -1,    33,    -1,    -1,    10,    11,    12,    33,    14,    15,
      10,    -1,    12,    -1,    14,    15,    22,    -1,    24,    -1,
      -1,    -1,    22,    -1,    24,    -1,    10,    33,    12,    -1,
      14,    15,    -1,    33,    -1,    -1,    -1,    -1,    22,    -1,
      24,    10,    11,    12,    -1,    14,    15,    -1,    -1,    33,
      10,    11,    12,    -1,    14,    15,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    33,    10,    11,    12,    -1,    14,
      15,    -1,    -1,    33,    -1,    -1,    10,    11,    12,    33,
      14,    15,    10,    11,    12,    -1,    14,    15,    33,    10,
      11,    12,    -1,    14,    15,    -1,    10,    11,    12,    33,
      14,    15,    -1,    -1,    -1,    33,    27,    28,    10,    11,
      12,    -1,    14,    15,    28,    10,    11,    12,    -1,    14,
      15,    -1,    -1,    10,    11,    12,    28,    14,    15,    -1,
      10,    11,    12,    28,    14,    15,    -1,    -1,    10,    11,
      12,    28,    14,    15,    -1,    10,    11,    12,    28,    14,
      15,    -1,    -1,    10,    11,    12,    28,    14,    15,    -1,
      10,    11,    12,    28,    14,    15,    -1,    -1,    10,    11,
      12,    28,    14,    15,     0,     1,    -1,    -1,    28,    -1,
       6,     7,     8,     9,     0,     1,    28,    -1,     0,     1,
       6,     7,     8,     9,     6,     7,     8,     9,     0,     1,
      -1,    -1,     0,     1,     6,     7,     8,     9,     6,     7,
       8,     9,     0,     1,    -1,    -1,     0,     1,     6,     7,
       8,     9,     6,     7,     8,     9,     0,     1,    -1,    -1,
       0,     1,     6,     7,     8,     9,     6,     7,     8,     9,
       0,     1,    -1,    -1,    -1,    -1,     6,     7,     8,     9
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
      49,    15,    26,    46,    60,    49,    46,    33,     3,     3,
      23,    25,    28,    46,    33,    28,     3,     3,    52,    52,
      53,    54,    55,    28,    26,    33,    28,    46,    28,    28,
       3,    28,    33,    28,    33,    33,    29,     3,    33,    33,
      28,    33,    33,    45,    31,    33,    30,     3,    13,    17,
      10,    28,     3,    29,     3,    61,    43,    28,    45,    28,
      28,    43,    30,    43,    43,     1,    29,     3,     4,     5,
      13,    27,    51,    52,    53,    54,    55,    56,    61,     3,
       4,     5,    13,    27,    51,    52,    53,    54,    55,    56,
      61,     3,    23,    49,    50,    49,    50,    33,     3,    23,
      49,    50,    31,    33,     1,     3,    16,    18,    19,    20,
      21,    23,    29,    38,    40,    43,    46,    47,    48,    49,
      50,    57,    58,    59,     4,     5,    44,    27,    49,    49,
      12,    14,    15,    10,    11,    27,    49,    49,    12,    14,
      15,    10,    11,    31,     3,    22,    24,    33,    22,    24,
      33,    31,     3,    22,    24,    33,     3,    15,    23,    26,
      46,    60,    31,    27,    27,    33,    49,    27,    27,     3,
      44,     3,    22,    24,    33,    30,    49,    28,    52,    52,
      53,    54,    55,    49,    28,    52,    52,    53,    54,    55,
      15,    26,    46,    60,    33,     3,     3,     3,     3,    15,
      26,    46,    60,    33,     3,     3,    26,     3,    33,    15,
      26,    46,    60,    49,    46,    33,     3,     3,    23,    25,
      28,    46,    33,    30,    33,     3,     3,    28,    28,    26,
      33,    33,    33,    33,    33,    26,    33,    33,    33,    26,
      33,    28,    46,    28,    28,     3,    28,    33,    28,    33,
      33,    29,     3,    33,    33,    28,    33,    33,    45,    31,
      33,    30,     3,    13,    17,    10,    28,     3,    29,     3,
      61,    43,    28,    45,    28,    28,    43,    30,    43,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    38,    38,    39,
      39,    39,    40,    41,    42,    42,    42,    43,    43,    44,
      44,    45,    45,    45,    45,    45,    45,    45,    45,    46,
      46,    46,    46,    47,    47,    47,    47,    48,    48,    49,
      49,    50,    50,    50,    51,    51,    51,    52,    52,    53,
      53,    54,    54,    55,    55,    55,    55,    56,    57,    58,
      58,    58,    58,    58,    59,    59,    60,    60,    61,    61
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     6,     4,     2,     0,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     3,     3,     9,    11,    11,    10,     7,    11,     1,
       2,     3,     4,     4,     3,     3,     1,     1,     3,     1,
       3,     1,     3,     1,     1,     3,     1,     4,     5,     5,
       5,     5,     4,     6,     3,     2,     2,     2,     1,     1
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
#line 86 "sintatico.y"
                       {
        (yyval.ast) = criaNo("programa");
        (yyval.ast)->pai = (yyvsp[0].ast);
        raiz = (yyval.ast);
    }
#line 1990 "sintatico.tab.c"
    break;

  case 3: /* listaDeDeclaracoes: listaDeDeclaracoes declaracao  */
#line 94 "sintatico.y"
                                  {
        (yyval.ast) = criaNo("lista De Declaracoes");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        (yyvsp[-1].ast)->filho = (yyvsp[0].ast);
    }
#line 2000 "sintatico.tab.c"
    break;

  case 4: /* listaDeDeclaracoes: declaracao  */
#line 99 "sintatico.y"
                 {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2008 "sintatico.tab.c"
    break;

  case 5: /* TIPO: TIPO_INT  */
#line 105 "sintatico.y"
             {
        (yyval.ast) = criaNo("INT");
    }
#line 2016 "sintatico.tab.c"
    break;

  case 6: /* TIPO: TIPO_FLOAT  */
#line 108 "sintatico.y"
                 {
        (yyval.ast) = criaNo("FLOAT");
    }
#line 2024 "sintatico.tab.c"
    break;

  case 7: /* TIPO: TIPO_LIST_INT  */
#line 111 "sintatico.y"
                    {
        (yyval.ast) = criaNo("INT LIST");
    }
#line 2032 "sintatico.tab.c"
    break;

  case 8: /* TIPO: TIPO_LIST_FLOAT  */
#line 114 "sintatico.y"
                      {
        (yyval.ast) = criaNo("FLOAT LIST");
    }
#line 2040 "sintatico.tab.c"
    break;

  case 9: /* declaracao: declaracaoVariavel  */
#line 120 "sintatico.y"
                       {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2048 "sintatico.tab.c"
    break;

  case 10: /* declaracao: declaracaoFuncao  */
#line 123 "sintatico.y"
                       {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2056 "sintatico.tab.c"
    break;

  case 11: /* declaracao: error  */
#line 126 "sintatico.y"
            {}
#line 2062 "sintatico.tab.c"
    break;

  case 12: /* declaracaoVariavel: TIPO ID PONTOVIRGULA  */
#line 130 "sintatico.y"
                         {
        (yyval.ast) = criaNo("Declaracao de Variavel");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        head = InsertSymbol(head, 0, "aaaaaa", 0, 0);
    }
#line 2072 "sintatico.tab.c"
    break;

  case 13: /* declaracaoFuncao: TIPO ID ABRE_PARENTESES listaDeParametros FECHA_PARENTESES corpo  */
#line 138 "sintatico.y"
                                                                     {
        (yyval.ast) = criaNo("Declaracao de funcao");
        (yyval.ast)->pai = (yyvsp[-5].ast);
        (yyvsp[-5].ast)->filho = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
    }
#line 2083 "sintatico.tab.c"
    break;

  case 14: /* listaDeParametros: TIPO ID VIRGULA listaDeParametros  */
#line 147 "sintatico.y"
                                      {
        (yyval.ast) = criaNo("Lista de Parametros");
        (yyval.ast)->pai = (yyvsp[-3].ast);
        (yyvsp[-3].ast)->filho = (yyvsp[0].ast);
    }
#line 2093 "sintatico.tab.c"
    break;

  case 15: /* listaDeParametros: TIPO ID  */
#line 152 "sintatico.y"
              {
        (yyval.ast) = criaNo("Lista de Parametros");
        (yyval.ast)->pai = (yyvsp[-1].ast);
    }
#line 2102 "sintatico.tab.c"
    break;

  case 16: /* listaDeParametros: %empty  */
#line 156 "sintatico.y"
       {
        (yyval.ast) = criaNo("Lista de Parametros vazia");
    }
#line 2110 "sintatico.tab.c"
    break;

  case 17: /* corpo: ABRE_CHAVES dentroCorpo FECHA_CHAVES  */
#line 162 "sintatico.y"
                                         {
        (yyval.ast) = criaNo("dentro das chaves");
        (yyval.ast)->pai = (yyvsp[-1].ast);
    }
#line 2119 "sintatico.tab.c"
    break;

  case 18: /* corpo: error  */
#line 166 "sintatico.y"
            {}
#line 2125 "sintatico.tab.c"
    break;

  case 19: /* dentroCorpo: declaracoes dentroCorpo  */
#line 170 "sintatico.y"
                            {
        (yyval.ast) = criaNo("declaracoes");
        (yyval.ast)->pai = (yyvsp[-1].ast);
        (yyval.ast)->filho = (yyvsp[0].ast);
    }
#line 2135 "sintatico.tab.c"
    break;

  case 20: /* dentroCorpo: declaracoes  */
#line 175 "sintatico.y"
                  {
        (yyval.ast) = criaNo("declaracoes");
        (yyval.ast)->pai = (yyvsp[0].ast);
    }
#line 2144 "sintatico.tab.c"
    break;

  case 21: /* declaracoes: corpo  */
#line 182 "sintatico.y"
          {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2152 "sintatico.tab.c"
    break;

  case 22: /* declaracoes: declaracaoVariavel  */
#line 185 "sintatico.y"
                         {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2160 "sintatico.tab.c"
    break;

  case 23: /* declaracoes: expressao  */
#line 188 "sintatico.y"
                {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2168 "sintatico.tab.c"
    break;

  case 24: /* declaracoes: entrada  */
#line 191 "sintatico.y"
              {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2176 "sintatico.tab.c"
    break;

  case 25: /* declaracoes: retorno  */
#line 194 "sintatico.y"
              {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2184 "sintatico.tab.c"
    break;

  case 26: /* declaracoes: saida  */
#line 197 "sintatico.y"
            {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2192 "sintatico.tab.c"
    break;

  case 27: /* declaracoes: for  */
#line 200 "sintatico.y"
          {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2200 "sintatico.tab.c"
    break;

  case 28: /* declaracoes: condicional  */
#line 203 "sintatico.y"
                  {
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 2208 "sintatico.tab.c"
    break;

  case 29: /* expressao: exp PONTOVIRGULA  */
#line 209 "sintatico.y"
                     {
        (yyval.ast) = criaNo("expressao");
        (yyval.ast)->pai = (yyvsp[-1].ast);
    }
#line 2217 "sintatico.tab.c"
    break;

  case 30: /* expressao: expressaoList  */
#line 213 "sintatico.y"
                    {
        (yyval.ast) = criaNo("expressao");
        (yyval.ast)->pai = (yyvsp[0].ast);
    }
#line 2226 "sintatico.tab.c"
    break;

  case 31: /* expressao: ID ATRIBUICAO expressao  */
#line 217 "sintatico.y"
                              {
        (yyval.ast) = criaNo("ATRIBUICAO");
        (yyval.ast)->pai = (yyvsp[0].ast);
    }
#line 2235 "sintatico.tab.c"
    break;

  case 32: /* expressao: ID ATRIBUICAO nil  */
#line 221 "sintatico.y"
                        {
        (yyval.ast) = criaNo("NULO");
        (yyval.ast)->pai = (yyvsp[0].ast);
    }
#line 2244 "sintatico.tab.c"
    break;

  case 33: /* for: FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO ID FECHA_PARENTESES corpo  */
#line 229 "sintatico.y"
                                                                                    {
        (yyval.ast) = criaNo("for");
        (yyval.ast)->pai = (yyvsp[-6].ast);
        (yyvsp[-6].ast)->filho = (yyvsp[-5].ast);
        (yyvsp[-5].ast)->filho = (yyvsp[0].ast);
    }
#line 2255 "sintatico.tab.c"
    break;

  case 34: /* for: FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO ID OP_B_SOMA_SUB ID FECHA_PARENTESES corpo  */
#line 235 "sintatico.y"
                                                                                                       {
        (yyval.ast) = criaNo("for");
        (yyval.ast)->pai = (yyvsp[-8].ast);
        (yyvsp[-8].ast)->filho = (yyvsp[-7].ast);
        (yyvsp[-7].ast)->filho = (yyvsp[0].ast);
    }
#line 2266 "sintatico.tab.c"
    break;

  case 35: /* for: FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO ID OP_B_SOMA_SUB numero FECHA_PARENTESES corpo  */
#line 241 "sintatico.y"
                                                                                                           {
        (yyval.ast) = criaNo("for");
        (yyval.ast)->pai = (yyvsp[-8].ast);
        (yyvsp[-8].ast)->filho = (yyvsp[-7].ast);
        (yyvsp[-7].ast)->filho = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
    }
#line 2278 "sintatico.tab.c"
    break;

  case 36: /* for: FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO OP_LOGICA_NEG ID FECHA_PARENTESES corpo  */
#line 248 "sintatico.y"
                                                                                                    {
        (yyval.ast) = criaNo("for");
        (yyval.ast)->pai = (yyvsp[-7].ast);
        (yyvsp[-7].ast)->filho = (yyvsp[-6].ast);
        (yyvsp[-6].ast)->filho = (yyvsp[0].ast);
    }
#line 2289 "sintatico.tab.c"
    break;

  case 37: /* condicional: IF ABRE_PARENTESES exp FECHA_PARENTESES ABRE_CHAVES declaracoes FECHA_CHAVES  */
#line 257 "sintatico.y"
                                                                                 {
        (yyval.ast) = criaNo("IF");
        (yyval.ast)->pai = (yyvsp[-4].ast);
        (yyvsp[-4].ast)->filho = (yyvsp[-1].ast);
    }
#line 2299 "sintatico.tab.c"
    break;

  case 38: /* condicional: IF ABRE_PARENTESES exp FECHA_PARENTESES ABRE_CHAVES declaracoes FECHA_CHAVES ELSE ABRE_CHAVES declaracoes FECHA_CHAVES  */
#line 262 "sintatico.y"
                                                                                                                             {
        (yyval.ast) = criaNo("IF-ELSE");
        (yyval.ast)->pai = (yyvsp[-8].ast);
        (yyvsp[-8].ast)->filho = (yyvsp[-5].ast);
        (yyvsp[-5].ast)->filho = (yyvsp[-1].ast);
    }
#line 2310 "sintatico.tab.c"
    break;

  case 39: /* exp: expressao_logica  */
#line 271 "sintatico.y"
                     {
        (yyval.ast) = criaNo("exp");
        (yyval.ast)->pai = (yyvsp[0].ast);
    }
#line 2319 "sintatico.tab.c"
    break;

  case 40: /* exp: OP_LOGICA_NEG exp  */
#line 275 "sintatico.y"
                        {
        (yyval.ast) = criaNo("exp");
        (yyval.ast)->pai = (yyvsp[0].ast);
    }
#line 2328 "sintatico.tab.c"
    break;

  case 41: /* expressaoList: OP_LISTA ID PONTOVIRGULA  */
#line 282 "sintatico.y"
                             {
        (yyval.ast) = criaNo("expressaoList");
    }
#line 2336 "sintatico.tab.c"
    break;

  case 42: /* expressaoList: exp CONSTRUTOR_LISTA ID PONTOVIRGULA  */
#line 285 "sintatico.y"
                                           {
        (yyval.ast) = criaNo("expressaoList");
        (yyval.ast)->pai = (yyvsp[-3].ast);
    }
#line 2345 "sintatico.tab.c"
    break;

  case 43: /* expressaoList: exp FUNCOES_LISTA ID PONTOVIRGULA  */
#line 289 "sintatico.y"
                                        {
        (yyval.ast) = criaNo("expressaoList");
        (yyval.ast)->pai = (yyvsp[-3].ast);
    }
#line 2354 "sintatico.tab.c"
    break;

  case 44: /* expressao_logica: expressao_logica OP_LOGICA_OR expressao_relacional  */
#line 296 "sintatico.y"
                                                       {
        (yyval.ast) = criaNo("expressaoLogica");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
    }
#line 2364 "sintatico.tab.c"
    break;

  case 45: /* expressao_logica: expressao_logica OP_LOGICA_AND expressao_relacional  */
#line 301 "sintatico.y"
                                                          {
        (yyval.ast) = criaNo("expressaoLogica");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
    }
#line 2374 "sintatico.tab.c"
    break;

  case 46: /* expressao_logica: expressao_relacional  */
#line 306 "sintatico.y"
                           {
        (yyval.ast) = criaNo("expressaoLogica");
    }
#line 2382 "sintatico.tab.c"
    break;

  case 47: /* expressao_relacional: opSomaSub  */
#line 312 "sintatico.y"
              {
        (yyval.ast) = criaNo("expressaoRelacional");
    }
#line 2390 "sintatico.tab.c"
    break;

  case 48: /* expressao_relacional: expressao_relacional OP_B_RELACIONAIS opSomaSub  */
#line 315 "sintatico.y"
                                                      {
        (yyval.ast) = criaNo("expressaoRelacional");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
    }
#line 2400 "sintatico.tab.c"
    break;

  case 49: /* opSomaSub: opMultDiv  */
#line 323 "sintatico.y"
              {
         (yyval.ast) = criaNo("Operando SomaSub");
    }
#line 2408 "sintatico.tab.c"
    break;

  case 50: /* opSomaSub: opSomaSub OP_B_SOMA_SUB opMultDiv  */
#line 326 "sintatico.y"
                                        {
        (yyval.ast) = criaNo("Operando SomaSub");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
    }
#line 2418 "sintatico.tab.c"
    break;

  case 51: /* opMultDiv: argumento  */
#line 335 "sintatico.y"
              {
        (yyval.ast) = criaNo("Operando MultDiv");
    }
#line 2426 "sintatico.tab.c"
    break;

  case 52: /* opMultDiv: opMultDiv OP_B_MULT_DIV argumento  */
#line 338 "sintatico.y"
                                        {
        (yyval.ast) = criaNo("Operando MultDiv");
        (yyval.ast)->pai = (yyvsp[-2].ast);
        (yyvsp[-2].ast)->filho = (yyvsp[0].ast);
    }
#line 2436 "sintatico.tab.c"
    break;

  case 53: /* argumento: ID  */
#line 346 "sintatico.y"
       {
        (yyval.ast) = criaNo("ID");
    }
#line 2444 "sintatico.tab.c"
    break;

  case 54: /* argumento: numero  */
#line 349 "sintatico.y"
             {
        (yyval.ast) = criaNo("argumento");
        (yyval.ast)->pai = (yyvsp[0].ast);
    }
#line 2453 "sintatico.tab.c"
    break;

  case 55: /* argumento: ABRE_PARENTESES exp FECHA_PARENTESES  */
#line 353 "sintatico.y"
                                           {
        (yyval.ast) = criaNo("argumento");
        (yyval.ast)->pai = (yyvsp[-1].ast);
    }
#line 2462 "sintatico.tab.c"
    break;

  case 56: /* argumento: chamadaDeFuncao  */
#line 357 "sintatico.y"
                      {
        (yyval.ast) = criaNo("argumento");
        (yyval.ast)->pai = (yyvsp[0].ast);
    }
#line 2471 "sintatico.tab.c"
    break;

  case 57: /* chamadaDeFuncao: ID ABRE_PARENTESES exp FECHA_PARENTESES  */
#line 364 "sintatico.y"
                                            {
        (yyval.ast) = criaNo("chamada de funcao");
        (yyval.ast)->pai = (yyvsp[-1].ast);
    }
#line 2480 "sintatico.tab.c"
    break;

  case 58: /* entrada: ENTRADA ABRE_PARENTESES ID FECHA_PARENTESES PONTOVIRGULA  */
#line 371 "sintatico.y"
                                                             {
        (yyval.ast) = criaNo("entrada");
    }
#line 2488 "sintatico.tab.c"
    break;

  case 59: /* saida: SAIDA ABRE_PARENTESES STRING FECHA_PARENTESES PONTOVIRGULA  */
#line 377 "sintatico.y"
                                                               {
        (yyval.ast) = criaNo("saida");
    }
#line 2496 "sintatico.tab.c"
    break;

  case 60: /* saida: SAIDA ABRE_PARENTESES ID FECHA_PARENTESES PONTOVIRGULA  */
#line 380 "sintatico.y"
                                                             {
        (yyval.ast) = criaNo("saida");
    }
#line 2504 "sintatico.tab.c"
    break;

  case 61: /* saida: SAIDA ABRE_PARENTESES expressao FECHA_PARENTESES PONTOVIRGULA  */
#line 383 "sintatico.y"
                                                                    {
        (yyval.ast) = criaNo("saida");
        (yyval.ast)->pai = (yyvsp[-2].ast);
    }
#line 2513 "sintatico.tab.c"
    break;

  case 62: /* saida: SAIDA ABRE_PARENTESES FECHA_PARENTESES PONTOVIRGULA  */
#line 387 "sintatico.y"
                                                          {
        (yyval.ast) = criaNo("saida");
    }
#line 2521 "sintatico.tab.c"
    break;

  case 63: /* saida: SAIDA ABRE_PARENTESES OP_LISTA ID FECHA_PARENTESES PONTOVIRGULA  */
#line 390 "sintatico.y"
                                                                      {
        (yyval.ast) = criaNo("saida");
    }
#line 2529 "sintatico.tab.c"
    break;

  case 64: /* retorno: RETORNO exp PONTOVIRGULA  */
#line 396 "sintatico.y"
                             {
        (yyval.ast) = criaNo("retorno");
        (yyval.ast)->pai = (yyvsp[-1].ast);
    }
#line 2538 "sintatico.tab.c"
    break;

  case 65: /* retorno: RETORNO PONTOVIRGULA  */
#line 400 "sintatico.y"
                           {
        (yyval.ast) = criaNo("retorno");
    }
#line 2546 "sintatico.tab.c"
    break;

  case 66: /* nil: NIL PONTOVIRGULA  */
#line 406 "sintatico.y"
                     {
        (yyval.ast) = criaNo("NULO");
    }
#line 2554 "sintatico.tab.c"
    break;

  case 67: /* nil: OP_B_RELACIONAIS NIL  */
#line 409 "sintatico.y"
                           {
        (yyval.ast) = criaNo("NULO");
    }
#line 2562 "sintatico.tab.c"
    break;

  case 68: /* numero: INT  */
#line 415 "sintatico.y"
        {
        (yyval.ast) = criaNo("Numero");
    }
#line 2570 "sintatico.tab.c"
    break;

  case 69: /* numero: FLOAT  */
#line 418 "sintatico.y"
            {
        (yyval.ast) = criaNo("Numero");
    }
#line 2578 "sintatico.tab.c"
    break;


#line 2582 "sintatico.tab.c"

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

#line 424 "sintatico.y"


void yyerror(const char* s){
    fprintf(stderr, "%s\n", s);
}

int main(int argc, char ** argv) {
    yyin = fopen(argv[1], "r");
    
    yyparse();
    mostraAST(raiz, 0);
    display(head);
    limpaTabela(head);
    liberaAST();
    fclose(yyin);
    yylex_destroy();
    printf("\n\n");
    return 0;
}
