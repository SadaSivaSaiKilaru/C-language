#include<stdio.h>
main()
{
	int a=9;
	int *aptr;
    aptr=&a;
    
	printf(" value of a is %d\n",a);
	printf(" addressof a is %d\n",&a);
	printf("address of aptr is %d\n",&aptr);
	printf(" what address is held at pointer aptr is %d\n",aptr);
	}
