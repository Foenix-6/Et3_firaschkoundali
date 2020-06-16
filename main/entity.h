#ifndef entite_H_INCLUDED
#define entite_H_INCLUDED
#include "pers.h"
  typedef struct
{	
}entity;
void initialiser_entity (entity *e) ;
void update_entity(entity *e);
int detect_collisionentity(pers *p, entity* e);
void afficher_entity(entity * e , SDL_Surface* screen);
void freeentity(entity e);


#endif 
