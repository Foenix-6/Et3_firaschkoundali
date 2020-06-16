/**
* @struct Text
* @brief struct for Text
*/
/**
* @struct image
* @brief struct for image
*/
/**
* @struct Time
* @brief struct for time
*/
/**
* @struct input
* @brief struct for input
*/
/**
* @struct collision
* @brief struct for collisions
*/
#ifndef UTILITAIRE_H_INCLUDED
#define UTILITAIRE_H_INCLUDED
#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>
#include <string.h>



typedef struct 
{
    SDL_Surface* textSurface;
    SDL_Rect positionText;
    char txt[20];
    SDL_Color couleurTxt;
    TTF_Font* police;
}Text;

typedef struct image {
	SDL_Surface* image;
	SDL_Rect posimage;
}image;
typedef struct 
{
    int tempsdebut;
    int mm; 
    int ss;
    Text temps;
    
} Time;
typedef struct input
{ int clavier[322]; 
  int souris[3];
}input;

typedef struct collision
{
  int colbackgenigme;//perfectpixel
  int colcoin;//boundingbox
  int colenmie;//boundingbox
  int colenigme;//trigo
  int colbackgtrou;//perfectpixel
}collision;


//viep1:
int initTextviep1(Text* T);
void update_viep1(Text* T, int *vies,collision col);
void displayviep1(Text T,SDL_Surface *screen);
void freeTextviep1(Text T);
int loadFontviep1(Text* T, char* path);
//viep2:
int initTextviep2(Text* T);
void update_viep2(Text* T, int *vies,collision col);
void displayviep2(Text T,SDL_Surface *screen);
void freeTextviep2(Text T);
int loadFontviep2(Text* T, char* path);
//time:
void inittemps(Time *t);
void Timer(int *tempsdebut);
int initTexttime(Text* T);
int loadFonttime(Text* T, char* angelina);
void update_time(Time* T);
void displaytime(Time T,SDL_Surface *screen);
void freeTexttime(Text T);

//scorep1:
int initTextscorep1(Text* T);
void update_scorep1(Text* T, int *score, collision col);
void displayscorep1(Text T,SDL_Surface *screen);
void freeTextscorep1(Text T);
int loadFontscorep1(Text* T, char* path);
//scorep2:
int initTextscorep2(Text* T);
void update_scorep2(Text* T, int *score, collision col);
void displayscorep2(Text T,SDL_Surface *screen);
void freeTextscorep2(Text T);
int loadFontscorep2(Text* T, char* path);



int menu(SDL_Surface* screen);
void option(SDL_Surface* screen);
void jouer(SDL_Surface* screen);
#endif
