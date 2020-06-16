prog:main.o pers.o utilitaire.o
	gcc main.o pers.o utilitaire.o -o brog -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf
main.o:main.c 
	gcc -c main.c -g

pers.o:pers.c
	gcc -c pers.c -g
utilitaire.o:utilitaire.c
	gcc -c utilitaire.c -g

