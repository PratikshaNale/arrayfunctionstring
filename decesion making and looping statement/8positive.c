//8. Check number is +ve, -ve or zero
#include<stdio.h>
int main()
{
	int no;
	printf("enter the number\n");
	scanf("%d",&no);
	if(no>=0)
	{
		printf("number is positive\n");
	}
	else
	{
		printf("number is negative\n");
	}
	return 0;
}
