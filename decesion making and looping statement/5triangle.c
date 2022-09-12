//5. Enter three angles & check if it is a triangle
#include<stdio.h>
int main()
{
	int a,b,c,t;
	printf("Enter the three angles\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b+c==180)
	{
		printf("it is a triangle\n");
	}
	else
	{
		printf("it is not triangle\n");
	}
	return 0;
	
}
