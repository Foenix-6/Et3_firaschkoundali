#include "entity.h"

void initialiser_entity (entity *e) 
{


 	 printf("initialisation d'entity.\n");

}

void update_entity(entity *e)
{
 	printf("update d'entity.\n");

}

int detect_collisionentity(pers *p, entity* e)
{

	printf("detecter si il y a une collision avec entity\n");
}

void afficher_entity(entity * e , SDL_Surface *screen)
{

	printf("afficher entity.\n");
}
void freeentity(entity e)
{
	printf("free image de lentity.\n");
}
