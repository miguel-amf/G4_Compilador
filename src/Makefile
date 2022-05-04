# Makefile do compilador de C- do grupo 4

#escolha de compilador
CC = gcc
#escolha de flags
CFLAGS =

OBJS = y.tab.o lex.yy.o main.o util.o symtab.o analyze.o cgen.o code.o

cminus: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o cminus

main.o: main.c globals.h util.h scan.h analyze.h
	$(CC) $(CFLAGS) -c main.c

util.o: util.c util.h globals.h
	$(CC) $(CFLAGS) -c util.c

symtab.o: symtab.c symtab.h globals.h
	$(CC) $(CFLAGS) -c symtab.c

analyze.o: analyze.c globals.h symtab.h analyze.h util.h
	$(CC) $(CFLAGS) -c analyze.c

cgen.o: cgen.c globals.h symtab.h cgen.h util.h
	$(CC) $(CFLAGS) -c cgen.c

code.o: code.c globals.h symtab.h code.h util.h
	$(CC) $(CFLAGS) -c code.c

lex.yy.o: cminus.l scan.h util.h globals.h
	flex -o lex.yy.c cminus.l
	$(CC) $(CFLAGS) -c lex.yy.c -lfl

y.tab.o: cminus.y globals.h util.h scan.h
	yacc -d cminus.y
	$(CC) $(CFLAGS) -c y.tab.c	

clean:
	-rm cminus
	-rm cminus_flex
	-rm y.tab.c
	-rm y.tab.h
	-rm lex.yy.c
	-rm $(OBJS)

all: cminus

