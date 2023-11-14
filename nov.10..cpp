#include<stdio.h>
 #include<string.h>
 union data
 {
 	int i;
 	float f;
 	char str[20];
 };
struct meta
 {
 	int i;
 	float f;
 	char str[20];
 };
 main()
 {
 	union data d;
 	struct meta m;
 	
 	printf("size of union is %d\n";sizeof(d));
 	printf("size of structure is %d\n";sizeof(m));
 }
