#include<stdio.h>

main()
{
	FILE *p;
	char data[1000];
	p =fopen("ds.txt","w");

	if(p==NULL)
	{
	     printf("can not open");
	}
	else
	{
		printf("i'm like to learn c languge:-");
		gets(data);
		fputs(data,p);
		printf("data enter succesfully");

	}
	fclose(p);
}
