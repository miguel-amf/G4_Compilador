%{
#include <stdio.h>
%}

id	[a-zA-Z][a-zA-Z0-9]*\n

int	(\-|\+)?(([1-9][0-9]*)|0)\n

float	(\-|\+)?([1-9][0-9]*|0)\.[0-9]*\n

comentario	\/\*.*\*\/\n

outro	.*\n


%%
{id}		{printf("Identificador\n");}
{int}		{printf("Inteiro\n");}
{float}		{printf("Ponto Flutuante\n");}
{comentario}	{printf("Comentario\n");}
{outro}		{printf(":-(\n");}

%%
/* recomendavel declarar sempre
   funcao yywrap() */
int yywrap ();

/* programa principal */
main() {
  yylex(); /* scanner gerado por Flex */
}

int yywrap() {
 return 1;
}
