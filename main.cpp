#include <stdio.h>

main()
{
	int a,b;
	printf("a=");
	scanf("%i",&a);
	printf("b=");
	scanf("%i",&b);
	if(a>b)
	{
		printf("A bolshe");
	}
	else
	{
		if(a==b)
		{
			printf("A ravno B");
		}
		else
		{
			printf("B bolshe");
		}
	}
}
