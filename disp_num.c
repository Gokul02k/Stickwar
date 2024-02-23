char *frame1[]={"./clr_main/r0.txt","./clr_main/r1.txt","./clr_main/r2.txt","./clr_main/r3.txt","./clr_main/r4.txt","./clr_main/r5.txt",
      "./clr_main/r6.txt","./clr_main/r7.txt","./clr_main/r8.txt","./clr_main/r9.txt"};
char *frame2[]={"./clr_main/g0.txt","./clr_main/g1.txt","./clr_main/g2.txt","./clr_main/g3.txt","./clr_main/g4.txt","./clr_main/g5.txt",
      "./clr_main/g6.txt","./clr_main/g7.txt","./clr_main/g8.txt","./clr_main/g9.txt"};

void disp_num(int n,int c)
{
	FILE * fp;
	if(c==2)
		fp=fopen(frame1[n],"r");
	if(c==1)
		fp=fopen(frame2[n],"r");
	char ch;
	while((ch=fgetc(fp))!=-1)	
	{
		if(ch=='r')  printf("%s",tr);
		else if (ch=='g')  printf("%s",tg);
		else if (ch=='s')  printf("%s",rs);
		else  printf("%c",ch);
	}
	rewind(fp);
}
