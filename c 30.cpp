#include<stdio.h>
main()
{
	int num;
	int i =1;
	int fact=1;
	printf("enter the number for find sum");
	scanf("%d",&num);
	while(i<=num)
	{
	fact*=i;
		i++;
	}
	printf("%d",fact);
	return 0;
}
