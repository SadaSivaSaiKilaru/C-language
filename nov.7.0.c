#include<stdio.h>
#include<string.h>
struct student
{

   char name[20];
   int rollno;
  float  cgpa;
}
main()
{
	struct student s1;
	strcpy(s1.name,"sadasivasaikilaru");
	s1.rollno=27;
	s1.cgpa=10;
	
	printf("name=%s rollno=%d cgpa=%f\n",s1.name,s1.rollno,s1.cgpa);
}
