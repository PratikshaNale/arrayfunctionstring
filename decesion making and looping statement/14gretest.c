//14. Find greatest among 3 numbers
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three number\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		printf("a is greater\n");
	}
	else if(b>c)
	{
		printf("b is greater\n");
	}
	else
	{
		printf("c is greater\n");
	}
	return 0;
}

