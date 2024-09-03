#include<stdio.h>
int num()
{
	int a;
	printf("enter a:");
	scanf("%d",&a);
	if(a>0)
		printf("a is positive number. ");
	else
		printf("a is negative number. ");
	return 0;
}
