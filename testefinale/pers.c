/**
* @file pers.c
* @brief Testing Program.
* @author C Team
* @version 0.1
* @date Apr 01, 2020
*
* Testing pers
*
*/


#include "pers.h"
/**
* @brief To initialize the background background .
* @param background the background
* @return Nothing
*/
void initbackground(image *background)
{
	(*background).image=IMG_Load("background.jpeg");
	((*background).posimage).x = 0;
	((*background).posimage).y = 0;
}
/**
* @brief To initialize the image gameover .
* @param gameover the image
* @return Nothing
*/
void initgameover(image *gameover)
{
	 (*gameover).image=IMG_Load("gameover.jpeg");
	((*gameover).posimage).x=200;
        ((*gameover).posimage).y=120;		
}
/**
* @brief To initialize the life .
* @param vie the number of life
* @param textevie the text of life
* @return int 
*/
int initvie2(Text* textevie,int* vie)
{int ltv;
	*vie=3;
	ltv=initTextviep2(textevie);
	return ltv;
}
/**
* @brief To initialize the score .
* @param score the number of score
* @param textescore the text of score
* @return int 
*/
int initscore2(Text* textescore,int *score)
{int lts;
	(*score)=0;
	lts=initTextscorep2(textescore);
	return lts;
} 
/**
* @brief To initialize the pers p.
* @param p the pers
* @return nothing
*/
void initperso2(pers* p)
{int ltv,lts;
	ltv=initvie2(&(p->textevie),&(p->vie));
	lts=initscore2(&(p->textescore),&(p->score));
}
/**
* @brief To initialize the life .
* @param vie the number of life
* @param textevie the text of life
* @return int 
*/
int initvie1(Text* textevie,int* vie)
{int ltv;
	*vie=3;
	ltv=initTextviep1(textevie);
	return ltv;
}
/**
* @brief To initialize the score .
* @param score the number of score
* @param textescore the text of score
* @return int 
*/
int initscore1(Text* textescore,int *score)
{int lts;
	(*score)=0;
	lts=initTextscorep1(textescore);
	return lts;
} 
/**
* @brief To initialize the pers p1.
* @param p the pers
* @return nothing
*/
void initperso1(pers* p)
{int ltv,lts;
	ltv=initvie1(&(p->textevie),&(p->vie));
	lts=initscore1(&(p->textescore),&(p->score));
}

/**
* @brief To initialize the input .
* @param in the input 
* @return nothing
*/

void initinput(input *in)
{int i;
	for(i=0;i<322;i++)
	{in->clavier[i]=0;}
}
input getinput(int *done,input in)
{SDL_Event event;
        if (SDL_PollEvent(&event))
	{
	        switch(event.type)
	        {
	
	        case SDL_QUIT:
	            *done=0;
	            break;
	        case SDL_KEYDOWN: 
	             in.clavier[event.key.keysym.sym]=1;
	             break;
	        case SDL_KEYUP:
	             in.clavier[event.key.keysym.sym]=0;
	             break;
	
         
		}
	
	}
     return in;
}
/**
* @brief To update the pers p1 .
* @param p the pers 
* @param in the input
* @param col the collision
* @return nothing 
*/
void updateperso1(pers *p,input in,collision *col)
{//mise a jour des autres champs du hero
  
  //exemple : col.coin=collisonboundingbox entre personnage et coin.
	 col->colcoin=in.clavier[SDLK_k];/*sdlk_k*/
	 col->colenigme=in.clavier[SDLK_j];/*sdlk_j*/
 	update_viep1(&(p->textevie),&(p->vie),*col);
 	update_scorep1(&(p->textescore),&(p->score),*col);
 

} 
/**
* @brief To update the pers p2 .
* @param p the pers 
* @param in the input
* @param col the collision
* @return nothing 
*/
void updateperso2(pers *p,input in,collision *col)
{//mise a jour des autres champs du hero
  
  //exemple : col.coin=collisonboundingbox entre personnage et coin.
 	col->colcoin=in.clavier[SDLK_z];/*sdlk_k*/
 	col->colenigme=in.clavier[SDLK_s];/*sdlk_j*/
 	update_viep2(&(p->textevie),&(p->vie),*col);
 	update_scorep2(&(p->textescore),&(p->score),*col);
 

} 
/**
* @brief To display the pers 
* @param p the pers 
* @param screen the screen 
* @return nothing 
*/
void dipslayperso(pers p,SDL_Surface* screen)
{ 
//afficher image perso 
	displayviep1(p.textevie,screen);
	displayscorep1(p.textescore,screen);
}
/**
* @brief To display the background 
* @param background the background
* @param screen the screen 
* @return nothing 
*/
void displaybackground(image background,SDL_Surface* screen)
{
	SDL_BlitSurface(background.image,NULL,screen,&background.posimage);
}
/**
* @brief To display the gameover
* @param gameover the image of gameover
* @param screen the screen 
* @param vie the number of life 
* @return nothing 
*/
void displaygameover(int *done,int vie,image gameover,SDL_Surface* screen)
{
  if(vie==0){   
        SDL_BlitSurface(gameover.image,NULL,screen,&gameover.posimage);
	*done=0;
	}
}
/**
* @brief To free  background.
* @param background the background.
* @return Nothing
*/
void freebackground(image background)
{
	SDL_FreeSurface(background.image);
}
