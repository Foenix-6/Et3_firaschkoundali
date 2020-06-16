#ifndef ennemie_H_INCLUDED
#define ennemie_H_INCLUDED
#include "pers.h"


typedef struct
{
		
}ennemie;


void initialiser_ennemie (ennemie *en) ;
void update_ennemie(ennemie *en);
int detect_collision_ennemie(pers *p, ennemie* en);
void afficher_ennemie(ennemie * en , SDL_Surface *screen);
void freeennemie(ennemie en);

#endif 
