
#include "map.h"

void initialiser_map1(map *m,SDL_Surface *screen,entity *e,pers *p,ennemie *en)
{

	printf("initialiser la map.\n");
        printf("initialier la position de l'ennemie sur la map.\n");
	printf("initialiser la position de l'entity sur la map.\n");
	printf("initialiser la position de perso1 sur la map.\n");
}

void initialiser_map2(map *m,SDL_Surface *screen,entity *e,pers *p,ennemie *en)
{

	printf("initialiser la map.\n");
        printf("initialier la position de l'ennemie sur la map.\n");
	printf("initialiser la position de l'entity sur la map.\n");
	printf("initialiser la position de perso2 sur la map.\n");
}


void entity_map(map *m, entity *e)
{
	printf("deplacer l'entity dans le map selon la position de l'entity.\n");
}

void ennemie_map(map *m, ennemie *en)
{
    printf("deplacer l'ennemie dans le map selon la position de ennemie.\n");
}

void perso_map1(map *m,pers *p)
{
  printf("deplacer le perso dans le map selon la position de perso1.\n");
}
void perso_map2(map *m,pers *p)
{
  printf("deplacer le perso dans le map selon la position de perso2.\n");
}

void affiche_map1(map *m , SDL_Surface *screen, entity *e,pers *p,ennemie *en)
{
      printf("afficher l'entity et l'ennemie et le perso1 sur la map.\n");
}
void affiche_map2(map *m , SDL_Surface *screen, entity *e,pers *p,ennemie *en)
{
      printf("afficher l'entity et l'ennemie et le perso2 sur la map.\n");
}


void mise_a_jour_map1(map *m , SDL_Surface *screen, pers *p, entity *e,ennemie *en){
   perso_map1(m,p);  
   entity_map(m,e);
   ennemie_map(m,en);


}

void mise_a_jour_map2(map *m , SDL_Surface *screen, pers *p, entity *e,ennemie *en){
   perso_map2(m,p);  
   entity_map(m,e);
   ennemie_map(m,en);


}

