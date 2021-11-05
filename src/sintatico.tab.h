/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SINTATICO_TAB_H_INCLUDED
# define YY_YY_SINTATICO_TAB_H_INCLUDED
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
    ID = 258,                      /* ID  */
    INT = 259,                     /* INT  */
    FLOAT = 260,                   /* FLOAT  */
    TIPO_INT = 261,                /* TIPO_INT  */
    TIPO_FLOAT = 262,              /* TIPO_FLOAT  */
    TIPO_LIST_INT = 263,           /* TIPO_LIST_INT  */
    TIPO_LIST_FLOAT = 264,         /* TIPO_LIST_FLOAT  */
    OP_B_SOMA_SUB = 265,           /* OP_B_SOMA_SUB  */
    OP_B_MULT_DIV = 266,           /* OP_B_MULT_DIV  */
    OP_LOGICA_AND = 267,           /* OP_LOGICA_AND  */
    OP_LOGICA_NEG = 268,           /* OP_LOGICA_NEG  */
    OP_LOGICA_OR = 269,            /* OP_LOGICA_OR  */
    OP_B_RELACIONAIS = 270,        /* OP_B_RELACIONAIS  */
    IF = 271,                      /* IF  */
    ELSE = 272,                    /* ELSE  */
    THEN = 273,                    /* THEN  */
    FOR = 274,                     /* FOR  */
    RETORNO = 275,                 /* RETORNO  */
    ENTRADA = 276,                 /* ENTRADA  */
    SAIDA = 277,                   /* SAIDA  */
    CONSTRUTOR_LISTA = 278,        /* CONSTRUTOR_LISTA  */
    OP_LISTA = 279,                /* OP_LISTA  */
    FUNCOES_LISTA = 280,           /* FUNCOES_LISTA  */
    STRING = 281,                  /* STRING  */
    NIL = 282,                     /* NIL  */
    ABRE_PARENTESES = 283,         /* ABRE_PARENTESES  */
    FECHA_PARENTESES = 284,        /* FECHA_PARENTESES  */
    ABRE_CHAVES = 285,             /* ABRE_CHAVES  */
    FECHA_CHAVES = 286,            /* FECHA_CHAVES  */
    ATRIBUICAO = 287,              /* ATRIBUICAO  */
    VIRGULA = 288,                 /* VIRGULA  */
    PONTOVIRGULA = 289,            /* PONTOVIRGULA  */
    COLCHETES = 290                /* COLCHETES  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 30 "sintatico.y"

    struct AST* ast;
    struct Token {
        int linha;
        int coluna;
        char id[100];
        int escopo;
    } token;

#line 109 "sintatico.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTATICO_TAB_H_INCLUDED  */
