#include "header.h"
void rules(void);
int main (int argc,char*argv[])
{
	int inp;
	if(argc>1)
	{
		win=atoi(argv[1]);
		lives=atoi(argv[2]);
	}
	else
	{
		win = 5;
		lives = 5;
	}
	pthread_t randnum,talwar,flame,fight_mus;
	pthread_t wel_mus,final_hero,final_villan; 
	pthread_t missed;
	pthread_create(&wel_mus,NULL,wel_mus_fn,NULL);
	//system("./p&");
        welcome();
	title();
	system("killall play");
	pthread_cancel(wel_mus);
	if(argc>3) goto Rule;
	intro();
	Rule:
	rules();
	system("clear");
	while(tme>0)
	{
		pthread_create(&fight_mus,NULL,fight_mus_fn,NULL);
		sleep(1);
		pthread_create(&randnum,NULL,randnum_fn,NULL);
		scanf("%d",&inp);
		pthread_cancel(randnum);
		pthread_cancel(missed);
		if((clr==1)&&(inp==num))
		{
			green++;
			health();
			pthread_create(&flame,NULL,flame_fn,NULL);
			hero_att();
			pthread_cancel(flame);
		}
		else
		{
			red++;
			health();
			pthread_create(&talwar,NULL,talwar_fn,NULL);
			villan_att();
			pthread_cancel(talwar);
		}
		if(green==win)
		{
			system("killall play");
			sleep(2);
			pthread_cancel(fight_mus);
			pthread_create(&final_hero,NULL,final_hero_fn,NULL);
			final_hero_attack();
			pthread_cancel(final_hero);
			break;
		}
		if(red==lives)
		{
			system("killall play");
			sleep(2);
			pthread_cancel(fight_mus);
			pthread_create(&final_villan,NULL,final_villan_fn,NULL);
			final_vill_attack();
			pthread_cancel(final_villan);
			break;
		}
	}

	if ((green!=win)&&(red!=lives))
	{
		system("killall play");
		sleep(2);
		pthread_cancel(fight_mus);
		system("clear");
		printf("\n\n Time's up...\n");
		pthread_create(&final_villan,NULL,final_villan_fn,NULL);
		final_vill_attack();
		pthread_cancel(final_villan);
	}
}
void rules(void)
{
	char ch;
	FILE * fp=fopen("rules.txt","r");
	system("clear");
	printf("\033[0;0m");
	while((ch=fgetc(fp))!=-1) putchar(ch);
	scanf("%c",&ch);
}
void *randnum_fn(void*arg)
{
	int t,clr_inp,i;
	while(1)
	{
		t=time(NULL)%10;
		srand(t);
		num=rand()%10;
		clr_inp=colour();
		clr=clr_inp;
		i=tme;
		if(i>0) 	while(i--)  printf("%s▄▄▄▄%s",tr,rs);
		puts("");
		health();
		disp_num(num,clr);
		puts("");
		usleep(1000000);
		tme--;
		system("clear");
		system("clear");
	}
}

int colour(void)
{
	int n;
	n=time(NULL)%1000;
	srand(n);
	n=rand()%10;
	if ((n==1)||(n==5)||(n==9))    return 2;
	else return 1;
} 
void health (void)
{
	int vill_health=win-green,hero_health=lives-red;
	printf("\n\t%s    🤖    ",ty);
	while(vill_health)
	{
		printf("░░░░░░░░░░░░░░░");
		vill_health--;
	}
	printf("%s%s❤%s",rs,tr,rs);
	printf("\n\n");
	printf("\t%s    😃    ",tb);
	while(hero_health)
	{
		printf("░░░░░░░░░░░░░░░");
		hero_health--;
	}
	printf("%s%s❤%s",rs,tr,rs);
	printf("\n");
}


