
char *heroatt[]={"./attack/ha1.txt","./attack/ha1.txt","./attack/ha1.txt","./attack/ha2.txt","./attack/ha3.txt","./attack/ha4.txt","./attack/ha5.txt","./attack/ha6.txt",
"./attack/ha7.txt","./attack/ha8.txt","./attack/ha9.txt","./attack/ha10.txt","./attack/ha11.txt","./attack/ha12.txt","./attack/ha13.txt",
"./attack/ha14.txt","./attack/ha15.txt","./attack/ha16.txt","./attack/ha17.txt"};

char *villatt[]={"./attack/va1.txt","./attack/va2.txt","./attack/va3.txt","./attack/va4.txt","./attack/va5.txt","./attack/va6.txt",
"./attack/va7.txt","./attack/va8.txt","./attack/va9.txt","./attack/va10.txt","./attack/va11.txt","./attack/va12.txt","./attack/va13.txt",
"./attack/va14.txt","./attack/va15.txt","./attack/va16.txt","./attack/va17.txt"};

char star[]="\033[0;31m*\033[0;0m";
char fla1[]="\033[0;33m(\033[0;0m";
char fla2[]="\033[0;31m)\033[0;0m";
char fla3[]="\033[0;31m(\033[0;0m";
char fla4[]="\033[0;33m)\033[0;0m";
char grd1[]="\033[1;31m_\033[0;0m";
char ball[]="\033[0;33m░\033[0;0m";

void *talwar_fn(void * arg)
{
	//while(1)
	system("play -q talwar.mp3");
}
void *flame_fn(void * arg)
{
	//while(1)
	system("play -q flame.mp3");
}
void hero_att ()
{
	int i ,x=0;
	char ch;
	FILE *f[20];
	
	for(i=0;i<19;i++)
	{
		f[i]=fopen(heroatt[i],"r");
		system("clear");
		puts("\n\n");
		health();
		while((ch=fgetc(f[i]))!=-1) 
		{
			
			//if(ch=='░') printf("%s",ball);
			//if(ch=='_') printf("%s",grd1);
			//if((ch=='(')&&((x%2)==1)) printf("%s",fla1);
			//else if((ch==')')&&((x%2)==1)) printf("%s",fla2);
			//else if((ch=='(')&&((x%2)==0)) printf("%s",fla3);
			//else if((ch==')')&&((x%2)==0)) printf("%s",fla4);
			//else if(ch=='S') printf(rs);
			 putchar(ch);
			
			
		}puts("");
		x++;
		usleep(80000);		
	}
	
}
void villan_att()
{
	int i ,x=0;
	char ch;
	FILE *f[20];

	for(i=0;i<17;i++)
	{
		f[i]=fopen(villatt[i],"r");
		system("clear");
		puts("\n\n");
		health();
		while((ch=fgetc(f[i]))!=-1) 
		{
			if(ch=='*') printf("%s",star);
			//else if(ch=='▒') printf("%s",fla2);
			//else if((ch=='(')&&((x%2)==1)) printf("%s",fla1);
			//else if((ch==')')&&((x%2)==1)) printf("%s",fla2);
			//else if((ch=='(')&&((x%2)==0)) printf("%s",fla3);
			//else if((ch==')')&&((x%2)==0)) printf("%s",fla4);
			//else if(ch=='S') printf(rs);
			else putchar(ch);
		x++;	
		}puts("");
		usleep(80000);	
	}
	
}
