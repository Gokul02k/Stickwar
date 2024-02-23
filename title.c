char *tit[]={"./title/title1.txt","./title/title1.txt","./title/title1.txt","./title/blk1.txt","./title/title2.txt","./title/title3.txt","./title/title4.txt",
"./title/title5.txt","./title/title6.txt","./title/blk1.txt"};

FILE *f[30];
void *thread_fn(void*arg);
void title (void)
{
	pthread_t thread;
	pthread_create(&thread,NULL,thread_fn,NULL);
	
	
	char ch;
	while(1)
	{
		if (scanf("%c",&ch)==1)
		{
			pthread_cancel(thread);
			break;
		}
	}puts("");
}
void *thread_fn(void*arg)
{
	int i;char ch;

	for(i=0;i<10;i++)
	{
		f[i]=fopen(tit[i],"r");
		system("clear"); 
		while((ch=fgetc(f[i]))!=-1) 
		{
			if(ch=='B') printf("%s",bk);
			//else if(ch=='q') printf("%s",bl);
			else if(ch=='X') printf("%s",tr);
			else if(ch=='S') printf("%s",rs);
			else if(ch=='\n') printf("%c",ch);			
			else putchar(ch);
		}
		usleep(500000);	
		if(i==7)  i=3;
		fclose(f[i]);
	}
}
