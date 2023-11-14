#include<stdio.h>
#include<stdlib.h>
main()
{
	int *ptr, i,n1 ,n2;
	n1=5;
	ptr=(int*)malloc(n1*sizeof (int));
	for(i=0; i<n1;i++)
	{
		scanf("%d",ptr+i);
	}
}
