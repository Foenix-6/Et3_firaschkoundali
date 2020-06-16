#include<stdio.h>
#include"SDL/SDL.h"
#include<SDL/SDL_image.h>
#include<SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
//#include "pers.h"
#include "entity.h"
#include "ennemie.h"
#include "map.h"
void jouer(SDL_Surface* screen)
{
	collision col;
        input in;
        pers p1,p2;
	ennemie en;
	entity e;
        int collisionennemie=0,collisionentity=0,l=0,collisionentity1=0,collisionentity2=0;  
	image gameover;
	int done = 1,collisionbckavecp1=0,collisionbckavecp2=0,d1,d2;
	Time temps;
	background background;
	map m;

	SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER);

	inittemps(&temps);
        initbackground(&background);
        initgameover(&gameover);
        initinput(&in);//in.clavier[de 0 a 323]=0;
        initperso1(&p1);
	initperso2(&p2);
	initialiser_ennemie(&en);
	initialiser_entity (&e) ;
	initialiser_map1(&m,screen,&e,&p1,&en) ;
	initialiser_map2(&m,screen,&e,&p2,&en) ;
	while (done)
	{
         
       	 in=getinput(&done,in);
	 
	 
         collisionennemie=detect_collision_ennemie(&p1,&en);
	 collisionennemie=detect_collision_ennemie(&p2,&en);
	 collisionentity1=detect_collisionentity(&p2,&e);
       	 collisionentity2=detect_collisionentity(&p1,&e);
	 updateperso1(&p1,in,&col);
         updateperso2(&p2,in,&col);
	 collisionbckavecp1=collision_Parfaite1(background,p1);
         collisionbckavecp2=collision_Parfaite2(background,p2);
	 scrolling1(&p1,&background,d1,collisionbckavecp1);
         scrolling2(&p2,&background,d2,collisionbckavecp2);
      	 
	 update_ennemie(&en);
	 update_entity(&e);
         update_time(&temps);
	 mise_a_jour_map1(&m,screen,&p1,&e,&en);
         mise_a_jour_map2(&m,screen,&p2,&e,&en);
	
       	 displaybackground(background,screen);
       	 dipslayperso(p1,screen);
	 dipslayperso(p2,screen);
       	 displaygameover(&done,p1.vie,gameover,screen);
	 displaygameover(&done,p2.vie,gameover,screen);
	 displaytime(temps,screen);
	 affiche_map1(&m,screen,&e,&p1,&en);
         affiche_map2(&m,screen,&e,&p2,&en);
       	 SDL_Flip(screen);
	 SDL_Delay(100);
	}

	
    	freeTextviep1(p1.textevie);
    	freeTextscorep1(p1.textescore);
    	freeTextviep2(p2.textevie);
    	freeTextscorep2(p2.textescore);
    	freebackground(background);
    	freeTexttime(temps.temps);
	
	//SDL_Quit();


}
