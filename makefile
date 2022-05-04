# cd src/ && flex lexico.l && gcc lex.yy.c -g -Wall -o ../tradutor
all:
	cd src/ && bison -d sintatico.y  && flex lexico.l && gcc -g -c arvore.c -o arvore.o && gcc -g -c tabelaSimbolo.c -o tabelaSimbolo.o && gcc sintatico.tab.c lex.yy.c arvore.o tabelaSimbolo.o -g -Wall -o ../tradutor
	./tradutor tests/fatorial.cm	
run:
	./tradutor tests/fatorial.cm
	./tradutor tests/testeCerto.c	
	./tradutor tests/testeCertoLab.c
	./tradutor tests/testeCertoLab2.c
	./tradutor tests/testeErrado.c
	./tradutor tests/testeErrado2.c
compile:
	cd src/ && bison -d sintatico.y  && flex lexico.l && gcc -g -c arvore.c -o arvore.o && gcc -g -c tabelaSimbolo.c -o tabelaSimbolo.o && gcc sintatico.tab.c lex.yy.c arvore.o tabelaSimbolo.o -g -Wall -o ../tradutor