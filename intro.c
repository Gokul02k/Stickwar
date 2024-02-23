char *wel1[]={"./intro/i1.txt","./intro/i2.txt","./intro/i3.txt",
"./intro/w1.txt","./intro/w2.txt","./intro/w3.txt","./intro/w4.txt","./intro/w7.txt","./intro/w8.txt","./intro/w9.txt","./intro/w10.txt",
"./intro/f1.txt","./intro/f2.txt","./intro/f3.txt","./intro/f4.txt","./intro/f5.txt","./intro/f6.txt","./intro/f7.txt","./intro/f8.txt","./intro/f9.txt","./intro/f10.txt",
"./intro/f11.txt","./intro/f12.txt","./intro/f13.txt","./intro/f14.txt"};

char *wel2[]={"./intro/e1.txt","./intro/e2.txt","./intro/e3.txt","./intro/e4.txt","./intro/e5.txt","./intro/e6.txt","./intro/e7.txt","./intro/v1.txt","./intro/v2.txt","./intro/v3.txt","./intro/v4.txt","./intro/v5.txt","./intro/v6.txt","./intro/v7.txt","./intro/v8.txt",
"./intro/v9.txt","./intro/v10.txt","./intro/va1.txt","./intro/va2.txt","./intro/va3.txt","./intro/va.txt","./intro/va5.txt","./intro/va6.txt","./intro/va7.txt","./intro/va8.txt","./intro/va9.txt","./intro/va10.txt","./intro/s1.txt","./intro/s2.txt","./intro/s3.txt",
"./intro/s4.txt","./intro/s5.txt","./intro/s6.txt","./intro/s7.txt","./intro/s8.txt","./intro/s9.txt","./intro/s10.txt","./intro/s11.txt","./intro/s12.txt","./intro/s13.txt","./intro/s14.txt","./intro/s15.txt","./intro/s16.txt","./intro/int4.txt","./intro/int5.txt","./intro/int6.txt"};

int intro (void)
{
	int i ,n;
	char ch,o;
	FILE *f[40],*p[50];
	for(i=0;i<25;i++)
	{
		f[i]=fopen(wel1[i],"r");
		system("clear");
		while((ch=fgetc(f[i]))!=-1) 
		{	
			if(ch=='S') printf("%s",rs);
			putchar(ch);
		}
		if(i<=2) 
		{
			scanf("%c",&o);
			continue;
		}
		else if((i>2)&&(i<=10)) usleep(500000);
		else 
		{
			scanf("%c",&o);
			continue;
		}
		fclose(f[i]);
	}
	for(i=0;i<46;i++)
	{
		p[i]=fopen(wel2[i],"r");
		system("clear");
		while((ch=fgetc(p[i]))!=-1) 
		{	
			if((ch=='R')&&(i<=7)) printf("%s",tr);
			else if(ch=='S') printf("%s",rs);
			else putchar(ch);
		}
		if((i==0)||(i==6)||(i>=40)) 
		{
			scanf("%c",&o);
			continue;
		}
		else if (i==16) sleep(3);
		else usleep(400000);
		fclose(p[i]);
	}
}
