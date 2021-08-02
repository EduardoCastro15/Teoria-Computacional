ej2: tokens.h lex.yy.c
	gcc -o ej2 lex.yy.c
lex.yy.c: ej2.l tokens.h
	flex ej2b.l
clean:
	rm lex.yy.c ej2 *.o

