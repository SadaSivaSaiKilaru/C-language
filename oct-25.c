#include<Stdio.h>
main()
{
	int a[3]={4,5,8};
	
	 int *ptr[3], i;
	 
for(i=0; i<3; i++)
	{
		ptr[i]=&a[i];		
	 } 

print(" prints the elemnts using pointer");
      for(i=0;i<3;i++)
  {
   printf("%d",*(ptr[i]));	
  }
  	 
	 
}
