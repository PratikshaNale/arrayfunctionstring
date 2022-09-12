//7.  find last digit of number
#include<stdio.h>
#include<conio.h>
int main()
{
	int no;
	printf("Enter the number\n");
	scanf("%d",&no);
	no=no%10;
	printf("last digit number is %d\n",no);
	return 0;
}
