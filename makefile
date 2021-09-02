# cd src/ && flex lexico.l && gcc lex.yy.c -g -Wall -o ../tradutor
all:
	cd src/ && bison -d sintatico.y -Wcounterexamples && flex lexico.l && gcc-11 sintatico.tab.c lex.yy.c -g -Wall -o ../tradutor
run:
	./tradutor tests/testeCerto.c
	
# ./tradutor tests/testeCerto2.c
# valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./tradutor tests/testeErrado.c
# ./tradutor tests/testeErrado2.c