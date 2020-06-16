#ifndef BACKGROUND_H_INCLUDED
#define BACKGROUND_H_INCLUDED

#include "entity.h"
#include "ennemie.h"


typedef struct 
{
	image background;
}background;

void initbackground(background *background);
void scrolling1 (pers *p,background *background,int d,int co);
void scrolling2 (pers *p,background *background,int d2,int co);
void displaybackground(background background,SDL_Surface* screen);
int collision_Parfaite1(background background,pers p1);
int collision_Parfaite2(background background,pers p2);
void freebackground(background background);

#endif
