//12 swap using third variable
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter the two number\n");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("After swpping a= %d\t b = %d\n",a,b);
	return 0;
}
