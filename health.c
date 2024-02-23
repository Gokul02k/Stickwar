void health (void)
{
	//char line='░',heart='❤',vill='🤖',hero='😃';
	int vill_health=win-green,hero_health=lives-red;
	printf("%s    🤖    ",tv);
	while(vill_health)
		printf("░░░░░");
	printf("%s%s❤%s",rs,tr,rs);
	printf("\n\n");
	printf("%s    😃    ",tb);
	while(hero_health)
		printf("░░░░░");
	printf("%s%s❤%s",rs,tr,rs);
	printf("\n\n");
}
