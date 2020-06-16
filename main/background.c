#include "background.h"




void initbackground(background *background)
{
	(*background).background.image=IMG_Load("background.jpeg");
	((*background).background.posimage).x = 0;
	((*background).background.posimage).y = 0;
}

void scrolling1 (pers *p,background *background,int d,int co)
{
	printf("scrolling pour le pers 1.\n");
}
void scrolling2 (pers *p,background *background,int d2,int co)
{
	printf("scrolling pour le pers 2.\n");
}


int collision_Parfaite1(background background,pers p1)
{
	printf("collision du perso1 avec bacground.\n");
}
int collision_Parfaite2(background background,pers p2)
{
	printf("collision du perso2 avec bacground.\n");
}
void displaybackground(background background,SDL_Surface* screen)
{
	SDL_BlitSurface(background.background.image,NULL,screen,&background.background.posimage);
}
void freebackground(background background)
{
	SDL_FreeSurface(background.background.image);
}


