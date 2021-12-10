all: main

main: main.c hash.o arvore_binaria_busca.o
	gcc -o main main.c hash.o arvore_binaria_busca.o
	
hash.o: hash.c
	gcc -c hash.c

arvore_binaria_busca.o: arvore_binaria_busca.c
	gcc -c arvore_binaria_busca.c

clean:
	rm -rf *.o