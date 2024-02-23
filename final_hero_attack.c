char * attack[]={"./final_attack/fha1.txt","./final_attack/fha2.txt","./final_attack/fha3.txt","./final_attack/fha4.txt","./final_attack/fha5.txt"
,"./final_attack/fha6.txt","./final_attack/fha7.txt","./final_attack/fha8.txt","./final_attack/fha9.txt","./final_attack/fha10.txt",
               "./final_attack/fha11.txt","./final_attack/fha12.txt","./final_attack/fha13.txt","./final_attack/fha14.txt","./final_attack/fha15.txt"
,"./final_attack/fha16.txt","./final_attack/fha17.txt","./final_attack/fha18.txt","./final_attack/fha19.txt","./final_attack/fha20.txt",
               "./final_attack/fha21.txt","./final_attack/fha22.txt","./final_attack/fha23.txt","./final_attack/fha24.txt","./final_attack/fha25.txt"
,"./final_attack/fha26.txt","./final_attack/fha27.txt","./final_attack/fha28.txt","./final_attack/fha29.txt","./final_attack/fha30.txt",
               "./final_attack/fha31.txt","./final_attack/fha32.txt","./final_attack/fha33.txt","./final_attack/fha34.txt","./final_attack/fha35.txt"
,"./final_attack/fha36.txt","./final_attack/fha37.txt","./final_attack/fha38.txt","./final_attack/fha39.txt","./final_attack/fha40.txt",
               "./final_attack/fha41.txt","./final_attack/fha42.txt","./final_attack/fha43.txt","./final_attack/fha44.txt","./final_attack/fha45.txt"
,"./final_attack/fha46.txt","./final_attack/fha47.txt","./final_attack/fha48.txt","./final_attack/fha49.txt","./final_attack/fha50.txt",
               "./final_attack/fha51.txt","./final_attack/fha52.txt","./final_attack/fha53.txt","./final_attack/fha54.txt","./final_attack/fha55.txt"
,"./final_attack/fha56.txt","./final_attack/fha57.txt","./final_attack/fha58.txt","./final_attack/fha59.txt","./final_attack/fha60.txt",
               "./final_attack/fha61.txt","./final_attack/fha62.txt","./final_attack/fha63.txt","./final_attack/fha64.txt","./final_attack/fha65.txt"
,"./final_attack/fha66.txt","./final_attack/fha67.txt","./final_attack/fha68.txt","./final_attack/fha69.txt","./final_attack/fha70.txt",
               "./final_attack/fha71.txt","./final_attack/fha72.txt","./final_attack/fha73.txt","./final_attack/fha74.txt","./final_attack/fha75.txt"
,"./final_attack/fha76.txt","./final_attack/fha77.txt","./final_attack/fha78.txt","./final_attack/fha79.txt","./final_attack/fha80.txt",
               "./final_attack/fha81.txt","./final_attack/fha82.txt","./final_attack/fha83.txt","./final_attack/fha84.txt","./final_attack/fha85.txt"
,"./final_attack/fha86.txt","./final_attack/fha87.txt","./final_attack/fha88.txt"};
int final_hero_attack()
{
	int i ,n;
	char ch;
	FILE *f[90];
	//n= sizeof(wel)/sizeof(wel[0]);
	for(i=0;i<88;i++)
	{
		f[i]=fopen(attack[i],"r");
		system("clear");
		system("clear");puts("\n\n\n\n\n");
		while((ch=fgetc(f[i]))!=-1) 
		{
			putchar(ch);
		}puts("");
		fclose(f[i]);
		if(i==0) sleep(1);
		else if(i<16)  usleep(100000);
		else if(i<24)  usleep(500000);
		else if(i<40)  usleep(100000);
		else if(i<43)  usleep(500000);
		else if(i<54)  usleep(100000);
		else if(i<56)  usleep(500000);
		else if(i<66)  usleep(100000);
		else if(i==66)  sleep(2);
		else if(i<81)  usleep(200000);	
		else if(i<86) usleep(500000);	
		else 	scanf("%c",&ch);
	}
	sleep(2);
	f[i]=fopen("./final_attack/win_stst.txt","r");
	system("clear");
	while((ch=fgetc(f[i]))!=-1) 
	{
		putchar(ch);
	}
	scanf("%c",&ch);
}
char * attack_vill[]={"./final_attack/fva2.txt","./final_attack/fva3.txt","./final_attack/fva4.txt","./final_attack/fva5.txt"
,"./final_attack/fva6.txt","./final_attack/fva7.txt","./final_attack/fva8.txt","./final_attack/fva9.txt","./final_attack/fva10.txt",
               "./final_attack/fva11.txt","./final_attack/fva12.txt","./final_attack/fva13.txt","./final_attack/fva14.txt","./final_attack/fva15.txt"
,"./final_attack/fva16.txt","./final_attack/fva17.txt","./final_attack/fva18.txt","./final_attack/fva19.txt","./final_attack/fva20.txt",
               "./final_attack/fva21.txt","./final_attack/fva22.txt","./final_attack/fva23.txt","./final_attack/fva24.txt","./final_attack/fva25.txt"
,"./final_attack/fva26.txt","./final_attack/fva27.txt","./final_attack/fva28.txt","./final_attack/fva29.txt","./final_attack/fva30.txt",
               "./final_attack/fva31.txt","./final_attack/fva32.txt","./final_attack/fva33.txt","./final_attack/fva34.txt","./final_attack/fva35.txt"
,"./final_attack/fva36.txt","./final_attack/fva37.txt","./final_attack/fva38.txt","./final_attack/fva39.txt","./final_attack/fva40.txt",
               "./final_attack/fva41.txt","./final_attack/fva42.txt","./final_attack/fva43.txt","./final_attack/fva44.txt","./final_attack/fva45.txt"
,"./final_attack/fva46.txt","./final_attack/fva47.txt","./final_attack/fva48.txt","./final_attack/fva49.txt","./final_attack/fva50.txt",
               "./final_attack/fva51.txt","./final_attack/fva52.txt","./final_attack/fva53.txt","./final_attack/fva54.txt","./final_attack/fva55.txt"
,"./final_attack/fva56.txt","./final_attack/fva57.txt","./final_attack/fva58.txt","./final_attack/fva59.txt","./final_attack/fva60.txt",
               "./final_attack/fva61.txt","./final_attack/fva62.txt","./final_attack/fva63.txt","./final_attack/fva64.txt","./final_attack/fva65.txt"
,"./final_attack/fva66.txt","./final_attack/fva67.txt","./final_attack/fva68.txt","./final_attack/fva69.txt","./final_attack/fva70.txt",
               "./final_attack/fva71.txt","./final_attack/fva72.txt","./final_attack/fva73.txt","./final_attack/fva74.txt","./final_attack/fva75.txt"
,"./final_attack/fva76.txt","./final_attack/fva77.txt","./final_attack/fva78.txt","./final_attack/fva79.txt","./final_attack/fva80.txt"};


//char star[]="\033[0;31m*\033[0;0m";

int final_vill_attack()
{
	int i ,n;
	char ch;
	FILE *f[90];
	//n= sizeof(wel)/sizeof(wel[0]);
	for(i=0;i<79;i++)
	{
		f[i]=fopen(attack_vill[i],"r");
		system("clear");puts("\n\n\n\n\n");
		while((ch=fgetc(f[i]))!=-1) 
		{
			if(ch=='*') printf("%s",star);
			else putchar(ch);
		}puts("");
		fclose(f[i]);
		if(i<45) usleep(100000);
		else if(i<57)  usleep(150000);
		else if(i==57)  usleep(1500000);
		else  usleep(100000);
	}
	sleep(2);
	f[i]=fopen("./final_attack/win_stat2.txt","r");
	system("clear");
	while((ch=fgetc(f[i]))!=-1) 
	{
		putchar(ch);
	}
	scanf("%c",&ch);
}
