//13.swapping withoutbusing third variable
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter the two number\n");
	scanf("%d%d",&a,&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("After swapping a= %d\t b=%d",a,b);
	return 0;
}
