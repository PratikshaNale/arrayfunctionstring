// 10.sum of a four digit
#include<stdio.h>
#include<conio.h>
int main()
{
	int no,rem,sum=0;
	printf("Enter the three digit number\n");
	scanf("%d",&no);
	rem=no%10;
	no=no/10;
	sum=rem+sum;
	rem=no%10;
	no=no/10;
	sum=rem+sum;
	rem=no%10;
	no=no/10;
	sum=rem+sum;
	rem=no%10;
	no=no/10;
	sum=rem+sum;
	printf("Addition of four digit %d ",sum);
	return 0;
}
