/**
* @struct pers
* @brief struct for personnage
*/

#ifndef PERS_H_INCLUDED
#define PERS_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "utilitaire.h"




typedef struct
{
    SDL_Surface *bas;
    SDL_Surface *haut;
    SDL_Surface *gauche[8];
    SDL_Surface *droite[8];
    SDL_Surface *depart;
    int left,right;

    SDL_Rect position_joueur;
	int score,vie;
        Text textevie;
        Text textescore;
	
}pers;








void initgameover(image *gameover);
int initvie1(Text* textevie,int* vie);
int initscore1(Text* textescore,int *score);
void initperso1(pers* p);
int initvie2(Text* textevie,int* vie);
int initscore2(Text* textescore,int *score);
void initperso2(pers* p);
void initinput(input *in);
input getinput(int *done,input in);
void updateperso1(pers *p,input in,collision *col);
void updateperso2(pers *p,input in,collision *col);
void displaygameover(int *done,int vie,image gameover,SDL_Surface* screen);
void dipslayperso(pers p,SDL_Surface* screen);





#endif
