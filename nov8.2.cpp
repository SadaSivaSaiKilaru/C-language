#include<stdio.h>
struct emp
{
	char name[20];
	int age;
	float salary;
};
main()
{

  struct emp e1={"Rohit ",20,100000};
  struct emp *ptr;
  ptr=&e1;
  printf("name %s, age %d,salary %f \n",e1.name,e1.age,e1.salary );
  
  printf("name %s, age %d,salary %f \n",ptr->name,ptr->age,ptr->salary );
  
  printf("name %s, age %d,salary %f \n",(*ptr).name,(*ptr).age,(*ptr).salary );
  
  }
