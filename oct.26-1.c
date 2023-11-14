//Malloc()
#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p, n, i;
printf("enter the number of integers to be used ");
scanf("%d",&n);
p=(int*)malloc(n*(sizeof(int)));
      if(p==NULL)
      {
      	printf("no memory available");
      	exit(1);
	  }
      else
      {
      	printf(" memory allocation was successful");
		  	printf("enter the values \n");
			  for(i=0; i<n; i++)
			  {
			  	sacnf("%d",p+i);
				  }	
	  }

}
