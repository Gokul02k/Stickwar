
char *wel[]={"./wel_to/blk.txt","./wel_to/w1.txt","./wel_to/w2.txt","./wel_to/w3.txt","./wel_to/w4.txt","./wel_to/w7.txt","./wel_to/w8.txt","./wel_to/w9.txt","./wel_to/w10.txt",
"./wel_to/w11.txt","./wel_to/w12.txt","./wel_to/w13.txt","./wel_to/w14.txt","./wel_to/w15.txt","./wel_to/w16.txt","./wel_to/w17.txt","./wel_to/w18.txt","./wel_to/w19.txt","./wel_to/w20.txt",
"./wel_to/w21.txt","./wel_to/w22.txt","./wel_to/w23.txt","./wel_to/tq1.txt","./wel_to/tq2.txt","./wel_to/tq3.txt","./wel_to/tq4.txt","./wel_to/tq5.txt","./wel_to/tq6.txt","./wel_to/tq7.txt","./wel_to/tq8.txt",
"./wel_to/tq9.txt","./wel_to/tq10.txt","./wel_to/tq11.txt"};
char *blk[]={"./wel_to/blk1.txt","./wel_to/blk1.txt","./wel_to/blk1.txt","./wel_to/blk2.txt","./wel_to/blk1.txt","./wel_to/blk1.txt","./wel_to/blk2.txt","./wel_to/blk1.txt"};
void welcome (void)
{
	int i ,n;
	char ch;
	FILE *f[40];
	//n= sizeof(wel)/sizeof(wel[0]);
	for(i=0;i<33;i++)
	{
		f[i]=fopen(wel[i],"r");
		system("clear");
		while((ch=fgetc(f[i]))!=-1) 
		{
			//if(ch=='B') printf("%s",bk);
			putchar(ch);
		}
		if(i<5)	usleep(100000);	//5
		//else if (i==7) sleep(1);
		else if (i==14) sleep(2);
		else if (i==28) sleep(1);
		else  usleep(100000);	//3
	}
	for(i=0;i<8;i++)
	{
		f[i]=fopen(blk[i],"r");
		system("clear");
		while((ch=fgetc(f[i]))!=-1)  
		{
			//if(ch=='B') printf("%s",bk);
			if(ch=='W') printf("%s",bw);
			else if(ch=='S') printf("%s",rs);
			else if(ch=='\n') printf("%c",ch);			
			else putchar(ch);
		}
		if ((i==3)&&(i==6)) usleep(100000);	
	        else usleep(300000);	
	}
	return;
}
