#ifndef map_H_INCLUDED
#define map_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <stdbool.h>
#include <math.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include "background.h"

/**
* @struct the map 
* @brief struct for the map 
*/
typedef struct {

}map ;
void initialiser_map1(map *m,SDL_Surface *screen, entity *e,pers *p,ennemie *en) ;
void initialiser_map2(map *m,SDL_Surface *screen, entity *e,pers *p,ennemie *en) ;
void entity_map(map *m, entity *e);
void ennemie_map(map *m, ennemie *en);
void perso_map2(map *m,pers *p);
void perso_map1(map *m,pers *p);
void mise_a_jour_map1(map *m , SDL_Surface *screen, pers *p, entity *e,ennemie *en);
void mise_a_jour_map2(map *m , SDL_Surface *screen, pers *p, entity *e,ennemie *en);
void affiche_map1(map *m, SDL_Surface *screen, entity *e,pers *p,ennemie *en);
void affiche_map2(map *m, SDL_Surface *screen, entity *e,pers *p,ennemie *en);
#endif
