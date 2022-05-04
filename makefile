# cd src/ && flex lexico.l && gcc lex.yy.c -g -Wall -o ../tradutor
all:
	cd src/ && bison -d sintatico.y  && flex lexico.l && gcc -g -c arvore.c -o arvore.o && gcc -g -c tabelaSimbolo.c -o tabelaSimbolo.o && gcc sintatico.tab.c lex.yy.c arvore.o tabelaSimbolo.o -g -Wall -o ../tradutor
	./tradutor tests/fatorial.cm	
run:
	./tradutor tests/fatorial.cm	
compile:
	cd src/ && bison -d sintatico.y  && flex lexico.l && gcc -g -c arvore.c -o arvore.o && gcc -g -c tabelaSimbolo.c -o tabelaSimbolo.o && gcc sintatico.tab.c lex.yy.c arvore.o tabelaSimbolo.o -g -Wall -o ../tradutor