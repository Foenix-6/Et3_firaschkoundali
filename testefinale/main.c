/**
* @file main.c
* @brief Testing Program.
* @author C Team
* @version 0.1
* @date Apr 01, 2020
* Testing program for gestion de vie et de score et de temps
*
*/



#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h> 
#include "pers.h"

int main()
{
   
        int hauteur_fenetre = 1000 , largeur_fenetre = 1500;
   	SDL_Surface *screen;
	collision col;
        input in;
        pers p1,p2;
        int collision=1,l=0;  
	image background,gameover;
	int done = 1;
	SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER);
        Time temps;
        
//creation de la fenetre 
	
	 if(SDL_Init(SDL_INIT_VIDEO)!=0)
    {
        printf("unable to initialize SDL: %s\n",SDL_GetError());
        return 1;
    }
 screen=SDL_SetVideoMode(largeur_fenetre,hauteur_fenetre,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
    if(screen==NULL)
    {
        printf("unable to set video mode:%s\n",SDL_GetError());
        return 1;
    }
	SDL_WM_SetCaption("CORONA", NULL); 
         
        initbackground(&background);
        initgameover(&gameover);
        initinput(&in);//in.clavier[de 0 a 323]=0;
        initperso1(&p1);
	initperso2(&p2);
        inittemps(&temps);



        while (done)
	{
         
       	 in=getinput(&done,in);
         
       	 updateperso1(&p1,in,&col);
         updateperso2(&p2,in,&col);
         update_time(&temps);
       	 displaybackground(background,screen);
       	 dipslayperso(p1,screen);
	 dipslayperso(p2,screen);
       	 displaygameover(&done,p1.vie,gameover,screen);
	 displaygameover(&done,p2.vie,gameover,screen);
	 displaytime(temps,screen);
	    
       	 SDL_Flip(screen);
	 SDL_Delay(100);
	}

	
    freeTextviep1(p1.textevie);
    freeTextscorep1(p1.textescore);
    freeTextviep2(p2.textevie);
    freeTextscorep2(p2.textescore);
    freebackground(background);
    freeTexttime(temps.temps);
	SDL_Quit();

    return 0;
}
