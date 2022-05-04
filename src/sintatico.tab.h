/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
    ENTRADA = 272,
    SAIDA = 273,
    CONSTRUTOR_LISTA = 274,
    OP_LISTA = 275,
    FUNCOES_LISTA = 276,
    STRING = 277,
    NIL = 278,
    ABRE_PARENTESES = 279,
    FECHA_PARENTESES = 280,
    ABRE_CHAVES = 281,
    FECHA_CHAVES = 282,
    ATRIBUICAO = 283,
    VIRGULA = 284,
    PONTOVIRGULA = 285,
    COLCHETES = 286
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 31 "sintatico.y" /* yacc.c:1909  */

    struct AST* ast;
    struct Token {
        int linha;
        int coluna;
        char id[100];
        int escopo;
    } token;

#line 96 "sintatico.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTATICO_TAB_H_INCLUDED  */
