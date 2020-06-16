#ifndef ENIGME_H_INCLUDED
#define ENIGME_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <stdbool.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
typedef struct 
{
 
}enigme;

void init_enigme(enigme * eni);
int solution_e (enigme * eni);
int resolution (enigme * eni );
void afficher_resultat(SDL_Surface * screen,int solution,int r,enigme *en);
#endif // ENIGME_H_INCLUDED
