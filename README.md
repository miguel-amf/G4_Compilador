## Compilador Grupo 4
Trabalho de desenvolvimento de um módulo gerador de código do compilador para a disciplina de compiladores ministrado pela professora Germana Nóbrega.

Realizado pelo Grupo 4:
* José Fortes Neto - 16/0128331
* Lucas Raphael Ferreira de Miranda - 18/0046799
* Miguel Angelo Montagner Filho - 13/0127302

## Funcionamento
O compilador recebe um programa-fonte em linguagem de alto nível, realiza as análises léxica, sintática e semântica, e estando o programa-fonte correto quanto a essas análises, gera em arquivo, o código de baixo nível correspondente.
O compilador é capaz de realizar a tradução dos comandos básicos, interface (saída e entrada), atribuição (variável recebendo expressão) e controle (condicional e repetição), a seguir segue o que o trabalho desenvolvido identifica:

* ID
* INT
* VOID
* Tipo de INT
* Operações de SOMA, SUBTRAÇÃO, MULTIPLICAÇÃO, DIVISÃO
* Operações Lógicas AND, NEGAÇÃO, OR
* Operações RELACIONAIS
* Condicionais IF, ELSE e THEN ELSE
*  WHILE
*  RETORNO
*  ABRE e FECHA PARENTESES e CHAVES
*  VIRGULA e PONTO e VIRGULA

Além de:
*  Programas;
*  Lista de declarações;
*  Declaração;
*  TIPO;
*  Declaracao de Variavel;
*  Declaracao de Funcao;
*  Lista de Parâmetros
*  Corpo;
*  Dentro Corpo;
*  Declaracoes;
*  Expressao;
*  Expressao logica, relacional;
*  Argumento;
*  Chamada de Funcao;
*  Exp Unaria;

Assim, é possível realizar o teste a partir do programa "fatorial.cm" localizado na pasta "tests" calcula o fatorial de um número recebido em entrada.
A Gramática BNF que utilizamos como referência foi a de C-Minus e pode ser acessada no link: "http://www.sierranevada.edu/snow/ExamplesX/C-Syntax.pdf".


## Como compilar e executar
O programa é compilado utilizando comando "make", tal comando, realiza:	clear, flex, bison e compile.
Os arquivos a serem testados estão em /tests sendo o programa principal, o "fatorial.cm" e os outros são suas variâncias com alguns erros para testar o tratamento de erro pelo compilador projetado.

E para executar, utilize ./cminus tests/"teste_a_ser_executado.cm"

