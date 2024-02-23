#include "header.h"

int colour(void);

int main ()
{
	int num,green=0,red=0,win,lives,clr,duration;
	int in_time,run_time=0,end_time;
	int inp;
	pthread_t value;
	duration=40;
	win=7;
	lives=3;
    /*welcome();
	title();
	intro();*/
	in_time=time(NULL)%100;
	end_time=in_time+duration;
	while(run_time<=end_time)
	{
		run_time=time(NULL)%100;
		clr=colour();
		system("clear");
		num=rand()
		if(clr==2) 
		{
			//printf("%d\n",run_time);
			printf(_g"  %d\n"_s,num);
			printf("Enter: ");
			scanf("%d",&inp);
			if(inp==num)
            {
            	green++;
                hero_att();
            }
			else if (inp!=num)
            {
            	red++;
                villan_att();
            }
			printf("g%d r%d\n",green,red);
		}
		else
		{
			//printf("%d\n",run_time);
			printf(_r"  %d\n"_s,num);
			printf("Enter: ");
			scanf("%d",&inp);
			if(inp!=0) 
			{
				red++;
                villan_att();
			}
			printf("g%d r%d\n",green,red);
		}
		if((green==win)|| (red==lives))break;
	}
	system("clear");
	if(green==win)	puts("you won...");
	else if(red==lives)	puts("You're killed...");
	else if ((green<win)||(red<lives))	puts("Time's up \n You're killed");
}
int colour(void)
{
	int n;
	n=time(NULL)%10;
	srand(n);
	n=rand()%10;
	if ((n==1)||(n==5)||(n==9))    return 1;
	else return 2;
} 

