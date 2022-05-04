# cd src/ && flex lexico.l && gcc lex.yy.c -g -Wall -o ../tradutor
all:
	cd src/ && bison -d sintatico.y  \
	&& flex lexico.l \
	&& gcc -g -c arvore.c -o arvore.o \
	&& gcc -g -c cgen.c -o cgen.o \
	&& gcc -g -c symtab.c -o symtab.o \
	&& gcc -g -c tabelaSimbolo.c -o tabelaSimbolo.o \
	&& gcc sintatico.tab.c lex.yy.c symtab.o arvore.o cgen.o tabelaSimbolo.o -g -Wall -o ../cminus
	./cminus tests/fatorial.cm	
run:
	./cminus tests/fatorial.cm
	# tests/fatorial_erro1.cm
	# tests/fatorial_erro2.cm
	# tests/fatorial_erro3.cm
	
compile:
	cd src/ && bison -d sintatico.y  && flex lexico.l && gcc -g -c arvore.c -o arvore.o && gcc -g -c tabelaSimbolo.c -o tabelaSimbolo.o && gcc sintatico.tab.c lex.yy.c arvore.o tabelaSimbolo.o -g -Wall -o ../tradutor