#include<stdio.h>
#include<string.h>
main()
{
	int n=3;
	char s1[20]=" I am a student";
	char s2[20]=" at LPU";
	//strcat(s1,s2);
	strncat(s1,s2,3);
	printf("%s\n",s1);
}
