#include<stdio.h>

void ref1( int x[]);
main()
{

	int arr[6]={1,2,3,4,5};
	
ref1( arr[1]);// function call wchich  having parameter as an array
}

void ref1( int x[])
{ 
//x[6]={1,2,3,4,5}
printf("%d",x[0]);
   	
}
