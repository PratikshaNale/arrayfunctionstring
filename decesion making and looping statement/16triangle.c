//16. Check type of triangle
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three side of triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b||b==c||c==a)
	{
		printf("triangle is equilatral\n");
	}
	else if(a!=b||b!=c||c!=a)
	{
		printf("scalen triangle\n");
	}
	else
	{
		printf("isoscalen triangle\n");
	}
	return 0;
}
