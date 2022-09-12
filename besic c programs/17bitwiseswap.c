//17. Swap with bitwise operator
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter the two number\n");
	scanf("%d%d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("swap two number is A = %d B = %d\n",a,b);
	return 0;
}
