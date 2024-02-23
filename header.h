             /*header files*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<pthread.h>
#include<unistd.h>
#include<signal.h>
             /*functions*/

extern int num,clr,id;
extern int green,red,win,lives, tme;
int num=0,clr=0,tme=45,id=0;
int green=0,red=0,win=1,lives=1;
int colour(void);
void *randnum_fn(void*arg);
void health (void);

             /*files*/
#include "colours.c"
#include"colour_def.h"
#include"wel.c"
#include"title.c"
#include"intro.c"
#include"attack.c"
#include"disp_num.c"
#include"final_hero_attack.c"
//#include"health.c"


           /*music*/
void *wel_mus_fn(void * arg)
{
	//while(1)
	int r1,r2;
	pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, &r1);pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS,&r2);
	system("play -q Welcome.wav");
	system("play -q title.wav");
	while(1);
}

void *fight_mus_fn(void * arg)
{
	//while(1)
	pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, NULL);pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS,0);
	system("play -q fight.wav");
}
void *final_hero_fn(void * arg)
{
	//while(1)
	int r1,r2;
	pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, &r1);pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS,&r2);
	system("play -q final_hero.mp3");
	system("play -q final_hero_save.mp3");
}
void *final_villan_fn(void * arg)
{
	//while(1)
	int r1,r2;
	pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, &r1);pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS,&r2);
	system("play -q final_villan.mp3");
}
