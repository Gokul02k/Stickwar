char * attack={"./final_attack/fha1.txt","./final_attack/fha2.txt","./final_attack/fha3.txt","./final_attack/fha4.txt","./final_attack/fha5.txt"
,"./final_attack/fha6.txt","./final_attack/fha7.txt","./final_attack/fha8.txt","./final_attack/fha9.txt","./final_attack/fha10.txt",
               ,"./final_attack/fha11.txt","./final_attack/fha12.txt","./final_attack/fha13.txt","./final_attack/fha14.txt","./final_attack/fha15.txt"
,"./final_attack/fha16.txt","./final_attack/fha17.txt","./final_attack/fha18.txt","./final_attack/fha19.txt","./final_attack/fha20.txt",
               ,"./final_attack/fha21.txt","./final_attack/fha22.txt","./final_attack/fha23.txt","./final_attack/fha24.txt","./final_attack/fha25.txt"
,"./final_attack/fha26.txt","./final_attack/fha27.txt","./final_attack/fha28.txt","./final_attack/fha29.txt","./final_attack/fha30.txt",
               ,"./final_attack/fha31.txt","./final_attack/fha32.txt","./final_attack/fha33.txt","./final_attack/fha34.txt","./final_attack/fha35.txt"
,"./final_attack/fha36.txt","./final_attack/fha37.txt","./final_attack/fha38.txt","./final_attack/fha39.txt","./final_attack/fha40.txt",
               ,"./final_attack/fha41.txt","./final_attack/fha42.txt","./final_attack/fha43.txt","./final_attack/fha44.txt","./final_attack/fha45.txt"
,"./final_attack/fha46.txt","./final_attack/fha47.txt","./final_attack/fha48.txt","./final_attack/fha49.txt","./final_attack/fha50.txt",
               ,"./final_attack/fha51.txt","./final_attack/fha52.txt","./final_attack/fha53.txt","./final_attack/fha54.txt","./final_attack/fha55.txt"
,"./final_attack/fha56.txt","./final_attack/fha57.txt","./final_attack/fha58.txt","./final_attack/fha59.txt","./final_attack/fha60.txt",
               ,"./final_attack/fha61.txt","./final_attack/fha62.txt","./final_attack/fha63.txt","./final_attack/fha64.txt","./final_attack/fha65.txt"
,"./final_attack/fha66.txt","./final_attack/fha67.txt","./final_attack/fha68.txt","./final_attack/fha69.txt","./final_attack/fha70.txt",
               ,"./final_attack/fha71.txt","./final_attack/fha72.txt","./final_attack/fha73.txt","./final_attack/fha74.txt","./final_attack/fha75.txt"
,"./final_attack/fha76.txt","./final_attack/fha77.txt","./final_attack/fha78.txt","./final_attack/fha79.txt","./final_attack/fha80.txt",
               ,"./final_attack/fha81.txt","./final_attack/fha82.txt","./final_attack/fha83.txt","./final_attack/fha84.txt","./final_attack/fha85.txt"
,"./final_attack/fha86.txt","./final_attack/fha87.txt","./final_attack/fha88.txt"}
int final_hero_attack()
{
	int i ,n;
	char ch;
	FILE *f[90];
	//n= sizeof(wel)/sizeof(wel[0]);
	for(i=0;i<87;i++)
	{
		f[i]=fopen(wel[i],"r");
		system("clear");
		while((ch=fgetc(f[i]))!=-1) 
		{
			putchar(ch);
		}
		if(i==87)	scan("%c",&ch);	
		else  usleep(100000);	
	}
}