#include<stdio.h>

main()
{
	FILE *p;
	char data[1000];
	p =fopen("ds.txt","a");

	if(p == NULL)
	{
	   printf("can not open");
	}
	else
	{
		printf("enter any value:-");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("data enter successfully");
	}
	fclose(p);

   printf("\n===========================\n");
   p =fopen("ds.txt","r");
   if(p == NULL)
	{
	   printf("can not open ");
	}
	else
	{
		while(fgets(data,50,p)!= NULL)
		{
			printf("%s",data);
		}
		fclose(p);
	}
}
