//9. Largest amongst three numbers
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three number\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b&&a>=c)
	{
		
		printf("a is greter %d \n",a);
	}
	 if(b>=a&&b>=c)
	{
	 printf("b is greter %d\n",b);
	}
	else
	{
		printf("c is greter %d\n",c);
	}
	 return 0;
}
