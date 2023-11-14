#include<stdio.h>
main()
{
	int x=10,b=9;
	void*ptr;
	ptr=&x;
	printf(" the value at generic pointer is %d\n",*(int)*ptr);
}
