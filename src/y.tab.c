/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "cminus.y"

#define YYPARSER /* distinguishes Yacc output from other code files */

#include "globals.h"
#include "util.h"
#include "scan.h"

#define YYSTYPE TreeNode *
static char * savedName; /* for use in assignments */
static int savedNum;
static int savedLineNo;  /* ditto */
static TreeNode * savedTree; /* stores syntax tree for later return */
static int yylex(void); // added 11/2/11 to ensure no conflict with lex

static TreeNode *l = NULL; /* local dec list */
static TreeNode *s = NULL; /* stmt list */
static TreeNode *d = NULL; /* dec list */
static TreeNode *p = NULL; /* params list */
static TreeNode *a = NULL; /* argument list */


#line 93 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IF = 258,                      /* IF  */
    ELSE = 259,                    /* ELSE  */
    RETURN = 260,                  /* RETURN  */
    WHILE = 261,                   /* WHILE  */
    VOID = 262,                    /* VOID  */
    INT = 263,                     /* INT  */
    ID = 264,                      /* ID  */
    NUM = 265,                     /* NUM  */
    ASSIGN = 266,                  /* ASSIGN  */
    EQ = 267,                      /* EQ  */
    NE = 268,                      /* NE  */
    LT = 269,                      /* LT  */
    LE = 270,                      /* LE  */
    GT = 271,                      /* GT  */
    GE = 272,                      /* GE  */
    PLUS = 273,                    /* PLUS  */
    MINUS = 274,                   /* MINUS  */
    TIMES = 275,                   /* TIMES  */
    OVER = 276,                    /* OVER  */
    SEMI = 277,                    /* SEMI  */
    COMMA = 278,                   /* COMMA  */
    LPAREN = 279,                  /* LPAREN  */
    RPAREN = 280,                  /* RPAREN  */
    LBRACE = 281,                  /* LBRACE  */
    RBRACE = 282,                  /* RBRACE  */
    LCURLY = 283,                  /* LCURLY  */
    RCURLY = 284,                  /* RCURLY  */
    ERROR = 285                    /* ERROR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IF 258
#define ELSE 259
#define RETURN 260
#define WHILE 261
#define VOID 262
#define INT 263
#define ID 264
#define NUM 265
#define ASSIGN 266
#define EQ 267
#define NE 268
#define LT 269
#define LE 270
#define GT 271
#define GE 272
#define PLUS 273
#define MINUS 274
#define TIMES 275
#define OVER 276
#define SEMI 277
#define COMMA 278
#define LPAREN 279
#define RPAREN 280
#define LBRACE 281
#define RBRACE 282
#define LCURLY 283
#define RCURLY 284
#define ERROR 285

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_ELSE = 4,                       /* ELSE  */
  YYSYMBOL_RETURN = 5,                     /* RETURN  */
  YYSYMBOL_WHILE = 6,                      /* WHILE  */
  YYSYMBOL_VOID = 7,                       /* VOID  */
  YYSYMBOL_INT = 8,                        /* INT  */
  YYSYMBOL_ID = 9,                         /* ID  */
  YYSYMBOL_NUM = 10,                       /* NUM  */
  YYSYMBOL_ASSIGN = 11,                    /* ASSIGN  */
  YYSYMBOL_EQ = 12,                        /* EQ  */
  YYSYMBOL_NE = 13,                        /* NE  */
  YYSYMBOL_LT = 14,                        /* LT  */
  YYSYMBOL_LE = 15,                        /* LE  */
  YYSYMBOL_GT = 16,                        /* GT  */
  YYSYMBOL_GE = 17,                        /* GE  */
  YYSYMBOL_PLUS = 18,                      /* PLUS  */
  YYSYMBOL_MINUS = 19,                     /* MINUS  */
  YYSYMBOL_TIMES = 20,                     /* TIMES  */
  YYSYMBOL_OVER = 21,                      /* OVER  */
  YYSYMBOL_SEMI = 22,                      /* SEMI  */
  YYSYMBOL_COMMA = 23,                     /* COMMA  */
  YYSYMBOL_LPAREN = 24,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 25,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 26,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 27,                    /* RBRACE  */
  YYSYMBOL_LCURLY = 28,                    /* LCURLY  */
  YYSYMBOL_RCURLY = 29,                    /* RCURLY  */
  YYSYMBOL_ERROR = 30,                     /* ERROR  */
  YYSYMBOL_YYACCEPT = 31,                  /* $accept  */
  YYSYMBOL_program = 32,                   /* program  */
  YYSYMBOL_dec_list = 33,                  /* dec_list  */
  YYSYMBOL_dec = 34,                       /* dec  */
  YYSYMBOL_id = 35,                        /* id  */
  YYSYMBOL_var_dec = 36,                   /* var_dec  */
  YYSYMBOL_37_1 = 37,                      /* @1  */
  YYSYMBOL_38_2 = 38,                      /* @2  */
  YYSYMBOL_type_spec = 39,                 /* type_spec  */
  YYSYMBOL_fun_dec = 40,                   /* fun_dec  */
  YYSYMBOL_41_3 = 41,                      /* @3  */
  YYSYMBOL_params = 42,                    /* params  */
  YYSYMBOL_params_list = 43,               /* params_list  */
  YYSYMBOL_param = 44,                     /* param  */
  YYSYMBOL_comp_stmt = 45,                 /* comp_stmt  */
  YYSYMBOL_local_dec = 46,                 /* local_dec  */
  YYSYMBOL_stmt_list = 47,                 /* stmt_list  */
  YYSYMBOL_stmt = 48,                      /* stmt  */
  YYSYMBOL_exp_stmt = 49,                  /* exp_stmt  */
  YYSYMBOL_select_stmt = 50,               /* select_stmt  */
  YYSYMBOL_iter_stmt = 51,                 /* iter_stmt  */
  YYSYMBOL_return_stmt = 52,               /* return_stmt  */
  YYSYMBOL_exp = 53,                       /* exp  */
  YYSYMBOL_var = 54,                       /* var  */
  YYSYMBOL_55_4 = 55,                      /* @4  */
  YYSYMBOL_simple_exp = 56,                /* simple_exp  */
  YYSYMBOL_relop = 57,                     /* relop  */
  YYSYMBOL_add_exp = 58,                   /* add_exp  */
  YYSYMBOL_addop = 59,                     /* addop  */
  YYSYMBOL_term = 60,                      /* term  */
  YYSYMBOL_mulop = 61,                     /* mulop  */
  YYSYMBOL_factor = 62,                    /* factor  */
  YYSYMBOL_call = 63,                      /* call  */
  YYSYMBOL_64_5 = 64,                      /* @5  */
  YYSYMBOL_args = 65,                      /* args  */
  YYSYMBOL_arg_list = 66                   /* arg_list  */
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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   102

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  108

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   285


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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    31,    31,    37,    50,    56,    59,    65,    72,    76,
      81,    76,    91,    95,   102,   102,   116,   119,   126,   138,
     144,   149,   159,   166,   178,   184,   196,   202,   205,   208,
     211,   214,   220,   223,   229,   235,   244,   252,   255,   262,
     268,   274,   278,   278,   289,   294,   299,   303,   307,   311,
     315,   319,   325,   331,   334,   338,   344,   350,   353,   357,
     363,   367,   371,   375,   383,   382,   394,   395,   398,   411
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IF", "ELSE", "RETURN",
  "WHILE", "VOID", "INT", "ID", "NUM", "ASSIGN", "EQ", "NE", "LT", "LE",
  "GT", "GE", "PLUS", "MINUS", "TIMES", "OVER", "SEMI", "COMMA", "LPAREN",
  "RPAREN", "LBRACE", "RBRACE", "LCURLY", "RCURLY", "ERROR", "$accept",
  "program", "dec_list", "dec", "id", "var_dec", "@1", "@2", "type_spec",
  "fun_dec", "@3", "params", "params_list", "param", "comp_stmt",
  "local_dec", "stmt_list", "stmt", "exp_stmt", "select_stmt", "iter_stmt",
  "return_stmt", "exp", "var", "@4", "simple_exp", "relop", "add_exp",
  "addop", "term", "mulop", "factor", "call", "@5", "args", "arg_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-93)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-65)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      46,   -93,   -93,     6,    46,   -93,   -93,     1,   -93,   -93,
     -93,   -93,    11,   -93,   -10,     5,    15,    48,   -93,     7,
       1,    14,    39,   -93,    45,    47,    49,    46,    53,    51,
     -93,   -93,   -93,   -93,   -93,    46,   -93,     1,    12,    54,
      50,    28,    55,   -93,   -93,    33,   -93,    25,   -93,   -93,
     -93,   -93,   -93,   -93,    58,    70,   -93,    52,    38,   -93,
     -93,    33,   -93,    60,    33,    59,    57,    61,   -93,    33,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,    33,    33,
     -93,   -93,    33,    62,   -93,    63,   -93,    33,    33,   -93,
     -93,    42,    38,   -93,     2,     2,    64,   -93,    65,    66,
      82,   -93,   -93,   -93,    33,     2,   -93,   -93
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    13,    12,     0,     2,     4,     5,     0,     6,     1,
       3,     7,     9,     8,     0,     0,     0,     0,    10,    13,
       0,     0,    16,    19,     0,    20,     0,     0,     0,     0,
      24,    15,    18,    11,    21,    26,    23,     0,     0,     9,
       0,     0,     0,    63,    33,     0,    22,    41,    28,    25,
      27,    29,    30,    31,     0,    61,    40,    45,    53,    57,
      62,     0,    37,     0,     0,     0,     0,     0,    32,     0,
      50,    51,    47,    46,    48,    49,    54,    55,     0,     0,
      58,    59,     0,     0,    38,     0,    60,     0,    67,    39,
      61,    44,    52,    56,     0,     0,     0,    69,     0,    66,
      34,    36,    43,    65,     0,     0,    68,    35
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -93,   -93,   -93,    88,    -6,    67,   -93,   -93,    -8,   -93,
     -93,   -93,   -93,    68,    71,   -93,   -93,   -92,   -93,   -93,
     -93,   -93,   -41,   -34,   -93,   -93,   -93,    16,   -93,    17,
     -93,    18,   -93,   -93,   -93,   -93
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,    47,     6,    14,    24,     7,     8,
      15,    21,    22,    23,    48,    35,    38,    49,    50,    51,
      52,    53,    54,    55,    66,    56,    78,    57,    79,    58,
      82,    59,    60,    67,    98,    99
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      63,    12,   100,   101,    65,    40,     9,    41,    42,    20,
      11,    11,    43,   107,    25,    40,    16,    41,    42,    20,
      83,    11,    43,    85,    44,    18,    45,    37,    89,    17,
      30,    39,   -17,    13,    44,   -14,    45,    11,    43,    26,
      30,    46,    11,    43,    90,    90,    96,    97,    90,   -64,
      62,   -42,    45,     1,     2,    19,     2,    45,    80,    81,
      76,    77,    27,   106,    70,    71,    72,    73,    74,    75,
      76,    77,    28,    29,    61,    33,    13,    30,    34,    64,
      68,    69,    84,    87,    86,    88,   105,    94,    95,   104,
     103,   102,    10,     0,    91,    32,    92,    31,     0,     0,
      93,     0,    36
};

static const yytype_int8 yycheck[] =
{
      41,     7,    94,    95,    45,     3,     0,     5,     6,    17,
       9,     9,    10,   105,    20,     3,    26,     5,     6,    27,
      61,     9,    10,    64,    22,    10,    24,    35,    69,    24,
      28,    37,    25,    22,    22,    24,    24,     9,    10,    25,
      28,    29,     9,    10,    78,    79,    87,    88,    82,    24,
      22,    26,    24,     7,     8,     7,     8,    24,    20,    21,
      18,    19,    23,   104,    12,    13,    14,    15,    16,    17,
      18,    19,    27,    26,    24,    22,    22,    28,    27,    24,
      22,    11,    22,    26,    25,    24,     4,    25,    25,    23,
      25,    27,     4,    -1,    78,    27,    79,    26,    -1,    -1,
      82,    -1,    35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,     8,    32,    33,    34,    36,    39,    40,     0,
      34,     9,    35,    22,    37,    41,    26,    24,    10,     7,
      39,    42,    43,    44,    38,    35,    25,    23,    27,    26,
      28,    45,    44,    22,    27,    46,    36,    39,    47,    35,
       3,     5,     6,    10,    22,    24,    29,    35,    45,    48,
      49,    50,    51,    52,    53,    54,    56,    58,    60,    62,
      63,    24,    22,    53,    24,    53,    55,    64,    22,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    57,    59,
      20,    21,    61,    53,    22,    53,    25,    26,    24,    53,
      54,    58,    60,    62,    25,    25,    53,    53,    65,    66,
      48,    48,    27,    25,    23,     4,    53,    48
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    31,    32,    33,    33,    34,    34,    35,    36,    37,
      38,    36,    39,    39,    41,    40,    42,    42,    43,    43,
      44,    44,    45,    46,    46,    47,    47,    48,    48,    48,
      48,    48,    49,    49,    50,    50,    51,    52,    52,    53,
      53,    54,    55,    54,    56,    56,    57,    57,    57,    57,
      57,    57,    58,    58,    59,    59,    60,    60,    61,    61,
      62,    62,    62,    62,    64,    63,    65,    65,    66,    66
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     0,
       0,     8,     1,     1,     0,     7,     1,     1,     3,     1,
       2,     4,     4,     2,     0,     2,     0,     1,     1,     1,
       1,     1,     2,     1,     5,     7,     5,     2,     3,     3,
       1,     1,     0,     5,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       3,     1,     1,     1,     0,     5,     1,     0,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* program: dec_list  */
#line 31 "cminus.y"
          { 
    savedTree = yyvsp[0];
  }
#line 1318 "y.tab.c"
    break;

  case 3: /* dec_list: dec_list dec  */
#line 37 "cminus.y"
              {
    d = yyvsp[-1];
    if(d==NULL){
      yyval = yyvsp[0];
    }else{
      while(d->sibling != NULL){
        d = d->sibling;
      }
      d->sibling = yyvsp[0];
      yyval = yyvsp[-1];
    }
  }
#line 1335 "y.tab.c"
    break;

  case 4: /* dec_list: dec  */
#line 50 "cminus.y"
       { 
    yyval = yyvsp[0]; 
  }
#line 1343 "y.tab.c"
    break;

  case 5: /* dec: var_dec  */
#line 56 "cminus.y"
          { 
    yyval = yyvsp[0]; 
  }
#line 1351 "y.tab.c"
    break;

  case 6: /* dec: fun_dec  */
#line 59 "cminus.y"
           { 
    yyval = yyvsp[0]; 
  }
#line 1359 "y.tab.c"
    break;

  case 7: /* id: ID  */
#line 65 "cminus.y"
    {
    savedName = copyString(tokenString);
  }
#line 1367 "y.tab.c"
    break;

  case 8: /* var_dec: type_spec id SEMI  */
#line 72 "cminus.y"
                    {
    yyval = yyvsp[-2];
    yyval->attr.name = savedName;
  }
#line 1376 "y.tab.c"
    break;

  case 9: /* @1: %empty  */
#line 76 "cminus.y"
                {
    yyval = yyvsp[-1];
    yyval->attr.name = savedName;
    yyval->type = Array;
  }
#line 1386 "y.tab.c"
    break;

  case 10: /* @2: %empty  */
#line 81 "cminus.y"
             {
    yyval = yyvsp[-2];
    yyval->size = atoi(tokenString);
  }
#line 1395 "y.tab.c"
    break;

  case 11: /* var_dec: type_spec id @1 LBRACE NUM @2 RBRACE SEMI  */
#line 85 "cminus.y"
              {
    yyval = yyvsp[-2];
  }
#line 1403 "y.tab.c"
    break;

  case 12: /* type_spec: INT  */
#line 91 "cminus.y"
      {
      yyval = newDecNode(VarK);
      yyval->type = Integer;
    }
#line 1412 "y.tab.c"
    break;

  case 13: /* type_spec: VOID  */
#line 95 "cminus.y"
        {
    yyval = newDecNode(VarK);
    yyval->type = Void;
  }
#line 1421 "y.tab.c"
    break;

  case 14: /* @3: %empty  */
#line 102 "cminus.y"
               {
    yyval = yyvsp[-1];
    yyval->kind.dec = FunK;
    yyval->attr.name = savedName;
  }
#line 1431 "y.tab.c"
    break;

  case 15: /* fun_dec: type_spec id @3 LPAREN params RPAREN comp_stmt  */
#line 107 "cminus.y"
                                 {
    yyval = yyvsp[-4];
    
    yyval->child[0] = yyvsp[-2];
    yyval->child[1] = yyvsp[0];
  }
#line 1442 "y.tab.c"
    break;

  case 16: /* params: params_list  */
#line 116 "cminus.y"
              {
    yyval = yyvsp[0];
  }
#line 1450 "y.tab.c"
    break;

  case 17: /* params: VOID  */
#line 119 "cminus.y"
        {
    yyval = newDecNode(ParamK);
    yyval->type = Void;
  }
#line 1459 "y.tab.c"
    break;

  case 18: /* params_list: params_list COMMA param  */
#line 126 "cminus.y"
                          {
    p = yyvsp[-2];
    if(p==NULL){
      yyval = yyvsp[0];
    }else{
      while(p->sibling != NULL){
        p = p->sibling;
      }
      p->sibling = yyvsp[0];
      yyval = yyvsp[-2];
    }
  }
#line 1476 "y.tab.c"
    break;

  case 19: /* params_list: param  */
#line 138 "cminus.y"
         { 
    yyval = yyvsp[0]; 
  }
#line 1484 "y.tab.c"
    break;

  case 20: /* param: type_spec id  */
#line 144 "cminus.y"
               {
    yyval = yyvsp[-1];
    yyval->kind.dec = ParamK;
    yyval->attr.name = savedName;
  }
#line 1494 "y.tab.c"
    break;

  case 21: /* param: type_spec id LBRACE RBRACE  */
#line 149 "cminus.y"
                              {
    yyval = yyvsp[-3];
    yyval->kind.dec = ParamK;
    yyval->type = Array;
    yyval->size = 0;
    yyval->attr.name = savedName;
  }
#line 1506 "y.tab.c"
    break;

  case 22: /* comp_stmt: LCURLY local_dec stmt_list RCURLY  */
#line 159 "cminus.y"
                                    {
    yyval = newStmtNode(CompK);
    yyval->child[0] = yyvsp[-2];
    yyval->child[1] = yyvsp[-1];
  }
#line 1516 "y.tab.c"
    break;

  case 23: /* local_dec: local_dec var_dec  */
#line 166 "cminus.y"
                            {
    l = yyvsp[-1];
    if(l==NULL){
      yyval = yyvsp[0];
    }else{
      while(l->sibling != NULL){
        l = l->sibling;
      }
      l->sibling = yyvsp[0];
      yyval = yyvsp[-1];
    }
  }
#line 1533 "y.tab.c"
    break;

  case 24: /* local_dec: %empty  */
#line 178 "cminus.y"
   { 
    yyval = NULL; 
  }
#line 1541 "y.tab.c"
    break;

  case 25: /* stmt_list: stmt_list stmt  */
#line 184 "cminus.y"
                 {
    s = yyvsp[-1];
    if(s==NULL){
      yyval = yyvsp[0];
    }else{
      while(s->sibling != NULL){
        s = s->sibling;
      }
      s->sibling = yyvsp[0];
      yyval = yyvsp[-1];
    }
  }
#line 1558 "y.tab.c"
    break;

  case 26: /* stmt_list: %empty  */
#line 196 "cminus.y"
   { 
    yyval = NULL; 
  }
#line 1566 "y.tab.c"
    break;

  case 27: /* stmt: exp_stmt  */
#line 202 "cminus.y"
           { 
    yyval = yyvsp[0]; 
  }
#line 1574 "y.tab.c"
    break;

  case 28: /* stmt: comp_stmt  */
#line 205 "cminus.y"
             { 
    yyval = yyvsp[0]; 
  }
#line 1582 "y.tab.c"
    break;

  case 29: /* stmt: select_stmt  */
#line 208 "cminus.y"
               { 
    yyval = yyvsp[0]; 
  }
#line 1590 "y.tab.c"
    break;

  case 30: /* stmt: iter_stmt  */
#line 211 "cminus.y"
             { 
    yyval = yyvsp[0]; 
  }
#line 1598 "y.tab.c"
    break;

  case 31: /* stmt: return_stmt  */
#line 214 "cminus.y"
               { 
    yyval = yyvsp[0]; 
  }
#line 1606 "y.tab.c"
    break;

  case 32: /* exp_stmt: exp SEMI  */
#line 220 "cminus.y"
           {
    yyval = yyvsp[-1];
  }
#line 1614 "y.tab.c"
    break;

  case 33: /* exp_stmt: SEMI  */
#line 223 "cminus.y"
        {
    yyval = NULL;
  }
#line 1622 "y.tab.c"
    break;

  case 34: /* select_stmt: IF LPAREN exp RPAREN stmt  */
#line 229 "cminus.y"
                           { 
    yyval = newStmtNode(IfK);
    yyval->child[0] = yyvsp[-2];
    yyval->child[1] = yyvsp[0];
    yyval->child[2] = NULL;
  }
#line 1633 "y.tab.c"
    break;

  case 35: /* select_stmt: IF LPAREN exp RPAREN stmt ELSE stmt  */
#line 235 "cminus.y"
                                      { 
    yyval = newStmtNode(IfK);
    yyval->child[0] = yyvsp[-4];
    yyval->child[1] = yyvsp[-2];
    yyval->child[2] = yyvsp[0];
  }
#line 1644 "y.tab.c"
    break;

  case 36: /* iter_stmt: WHILE LPAREN exp RPAREN stmt  */
#line 244 "cminus.y"
                              {
    yyval = newStmtNode(WhileK);
    yyval->child[0] = yyvsp[-2];
    yyval->child[1] = yyvsp[0];
  }
#line 1654 "y.tab.c"
    break;

  case 37: /* return_stmt: RETURN SEMI  */
#line 252 "cminus.y"
              {
    yyval = newStmtNode(RetK);
  }
#line 1662 "y.tab.c"
    break;

  case 38: /* return_stmt: RETURN exp SEMI  */
#line 255 "cminus.y"
                   {
    yyval = newStmtNode(RetK);
    yyval->child[0] = yyvsp[-1];
  }
#line 1671 "y.tab.c"
    break;

  case 39: /* exp: var ASSIGN exp  */
#line 262 "cminus.y"
                 {
    yyval = newExpNode(OpK);
    yyval->attr.op = ASSIGN;
    yyval->child[0] = yyvsp[-2];
    yyval->child[1] = yyvsp[0];
  }
#line 1682 "y.tab.c"
    break;

  case 40: /* exp: simple_exp  */
#line 268 "cminus.y"
              {
    yyval = yyvsp[0];
  }
#line 1690 "y.tab.c"
    break;

  case 41: /* var: id  */
#line 274 "cminus.y"
    {
    yyval = newExpNode(IdK);
    yyval->attr.name = savedName;
  }
#line 1699 "y.tab.c"
    break;

  case 42: /* @4: %empty  */
#line 278 "cminus.y"
      {
    yyval = newExpNode(ArrIdK);
    yyval->attr.name = savedName;
  }
#line 1708 "y.tab.c"
    break;

  case 43: /* var: id @4 LBRACE exp RBRACE  */
#line 282 "cminus.y"
                    { // TODO VERIFICAR ISSO
    yyval = yyvsp[-3];
    yyval->child[0] = yyvsp[-1];
  }
#line 1717 "y.tab.c"
    break;

  case 44: /* simple_exp: add_exp relop add_exp  */
#line 289 "cminus.y"
                       {
    yyval = yyvsp[-1];
    yyval->child[0] = yyvsp[-2];
    yyval->child[1] = yyvsp[0];
  }
#line 1727 "y.tab.c"
    break;

  case 45: /* simple_exp: add_exp  */
#line 294 "cminus.y"
           {
    yyval = yyvsp[0];
  }
#line 1735 "y.tab.c"
    break;

  case 46: /* relop: LE  */
#line 299 "cminus.y"
           {
                yyval = newExpNode(OpK);
                yyval->attr.op = LE;
              }
#line 1744 "y.tab.c"
    break;

  case 47: /* relop: LT  */
#line 303 "cminus.y"
        {
                yyval = newExpNode(OpK);
                yyval->attr.op = LT;
              }
#line 1753 "y.tab.c"
    break;

  case 48: /* relop: GT  */
#line 307 "cminus.y"
        {
                yyval = newExpNode(OpK);
                yyval->attr.op = GT;
              }
#line 1762 "y.tab.c"
    break;

  case 49: /* relop: GE  */
#line 311 "cminus.y"
        {
                yyval = newExpNode(OpK);
                yyval->attr.op = GE;
              }
#line 1771 "y.tab.c"
    break;

  case 50: /* relop: EQ  */
#line 315 "cminus.y"
        {
                yyval = newExpNode(OpK);
                yyval->attr.op = EQ;
              }
#line 1780 "y.tab.c"
    break;

  case 51: /* relop: NE  */
#line 319 "cminus.y"
        {
                yyval = newExpNode(OpK);
                yyval->attr.op = NE;
              }
#line 1789 "y.tab.c"
    break;

  case 52: /* add_exp: add_exp addop term  */
#line 326 "cminus.y"
              {
                yyval = yyvsp[-1];
                yyval->child[0] = yyvsp[-2];
                yyval->child[1] = yyvsp[0];
              }
#line 1799 "y.tab.c"
    break;

  case 53: /* add_exp: term  */
#line 331 "cminus.y"
        {yyval = yyvsp[0];}
#line 1805 "y.tab.c"
    break;

  case 54: /* addop: PLUS  */
#line 334 "cminus.y"
              {
                yyval = newExpNode(OpK); 
                yyval->attr.op = PLUS;
              }
#line 1814 "y.tab.c"
    break;

  case 55: /* addop: MINUS  */
#line 338 "cminus.y"
           {
                yyval = newExpNode(OpK);
                yyval->attr.op = MINUS;
              }
#line 1823 "y.tab.c"
    break;

  case 56: /* term: term mulop factor  */
#line 345 "cminus.y"
              {
                yyval = yyvsp[-1];
                yyval->child[0] = yyvsp[-2];
                yyval->child[1] = yyvsp[0];
              }
#line 1833 "y.tab.c"
    break;

  case 57: /* term: factor  */
#line 350 "cminus.y"
          {yyval = yyvsp[0];}
#line 1839 "y.tab.c"
    break;

  case 58: /* mulop: TIMES  */
#line 353 "cminus.y"
               {
                yyval = newExpNode(OpK); 
                yyval->attr.op = TIMES;
              }
#line 1848 "y.tab.c"
    break;

  case 59: /* mulop: OVER  */
#line 357 "cminus.y"
          {
                yyval = newExpNode(OpK);
                yyval->attr.op = OVER;
              }
#line 1857 "y.tab.c"
    break;

  case 60: /* factor: LPAREN exp RPAREN  */
#line 364 "cminus.y"
              {
                yyval = yyvsp[-1];
              }
#line 1865 "y.tab.c"
    break;

  case 61: /* factor: var  */
#line 368 "cminus.y"
              {
                yyval = yyvsp[0];
              }
#line 1873 "y.tab.c"
    break;

  case 62: /* factor: call  */
#line 372 "cminus.y"
              {
                yyval = yyvsp[0];
              }
#line 1881 "y.tab.c"
    break;

  case 63: /* factor: NUM  */
#line 376 "cminus.y"
              {
                yyval = newExpNode(ConstK);
                yyval->attr.val = atoi(tokenString);
              }
#line 1890 "y.tab.c"
    break;

  case 64: /* @5: %empty  */
#line 383 "cminus.y"
                {
                  yyval = newExpNode(CallK);
                  yyval->attr.name = savedName;  
                }
#line 1899 "y.tab.c"
    break;

  case 65: /* call: id @5 LPAREN args RPAREN  */
#line 388 "cminus.y"
              {
                yyval = yyvsp[-3];
                yyval->child[0] = yyvsp[-1];
              }
#line 1908 "y.tab.c"
    break;

  case 66: /* args: arg_list  */
#line 394 "cminus.y"
                  {yyval = yyvsp[0];}
#line 1914 "y.tab.c"
    break;

  case 67: /* args: %empty  */
#line 395 "cminus.y"
   { yyval = NULL; }
#line 1920 "y.tab.c"
    break;

  case 68: /* arg_list: arg_list COMMA exp  */
#line 399 "cminus.y"
              {
                a = yyvsp[-2];
                if(a==NULL){
                  yyval = yyvsp[0];
                }else{
                  while(a->sibling != NULL){
                    a = a->sibling;
                  }
                  a->sibling = yyvsp[0];
                  yyval = yyvsp[-2];
                }
              }
#line 1937 "y.tab.c"
    break;

  case 69: /* arg_list: exp  */
#line 411 "cminus.y"
       {yyval = yyvsp[0];}
#line 1943 "y.tab.c"
    break;


#line 1947 "y.tab.c"

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
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

  return yyresult;
}

#line 414 "cminus.y"


int yyerror(char * message)
{ fprintf(listing,"Syntax error at line %d: %s\n",lineno,message);
  fprintf(listing,"Current token: ");
  printToken(yychar,tokenString);
  Error = TRUE;
  return 0;
}

/* yylex calls getToken to make Yacc/Bison output
 * compatible with ealier versions of the TINY scanner
 */
static int yylex(void)
{ return getToken(); }

TreeNode * parse(void)
{ 
  yyparse();
  return savedTree;
}

