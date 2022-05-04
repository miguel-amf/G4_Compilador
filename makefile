# cd src/ && flex lexico.l && gcc lex.yy.c -g -Wall -o ../tradutor
all:
	cd src/ && bison -d sintatico.y  && flex lexico.l && gcc -g -c arvore.c -o arvore.o && gcc -g -c tabelaSimbolo.c -o tabelaSimbolo.o && gcc sintatico.tab.c lex.yy.c arvore.o tabelaSimbolo.o -g -Wall -o ../tradutor
run:
	./tradutor tests/fatorial.cm	
	# valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./tradutor tests/testeCerto2.c
	# ./tradutor tests/testeCertoLab.c
	# ./tradutor tests/testeCertoLab2.c
	# ./tradutor tests/testeErrado.c
	# ./tradutor tests/testeErrado2.c