int colour(int n)
{
	if ((n==1)||(n==5)||(n==9))    return 1;
	else return 2;
}

int main()
{
	int num,green=0,red=0,win,lives,clr,duration;
	int in_time,run_time=0,end_time;
	int inp;
	pthread_t thread;
	pthread_create(&thread,NULL,thread_fn,NULL);
	in_time=time(NULL)%100;
	duration=15;
	win=7;
	lives=3;
	end_time=in_time+duration;
	while(run_time<=end_time)
	{
		run_time=time(NULL)%100;
		srand(run_time);
		clr=colour(rand()%10);
		system("clear");
		if(clr==2) 
		{
			num=rand()%10;
			printf(tg"  %d\n"rs,num);
			printf("Enter: ");
			scanf("%d",&inp);
			if(inp==num)	green++;
			else if (inp!=num)	red++;
			printf("g%d r%d\n",green,red);
		}
		else
		{
			num=rand()%10;
			printf(tr"  %d\n"rs,num);
			printf("Enter: ");
			scanf("%d",&inp);
			if(inp!=0) red++;
			printf("g%d r%d\n",green,red);
		}
		if((green==win)|| (red==lives))break;
	}
	system("clear");
	if(green==win)	puts("you won...");
	else if(red==lives)	puts("You're killed...");
	else if ((green<win)||(red<lives))	puts("Time's up \n You're killed");
}
