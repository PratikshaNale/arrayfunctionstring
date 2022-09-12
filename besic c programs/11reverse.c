//11. reverse of a 4 digit of a number
#include<stdio.h>
#include<conio.h>
int main()
{
	int no,rev=0,rem;
	printf("Enter the four digit number \n");
	scanf("%d",&no);
    rem=no%10;
	no=no/10;
	rev=rev*10+rem;
	rem=no%10;
	no=no/10;
	rev=rev*10+rem;
	rem=no%10;
	no=no/10;
	rev=rev*10+rem;
	rem=no%10;
	no=no/10;
	rev=rev*10+rem;
	printf("Reverse the four digit reminder %d\n",rev);
	return 0;
}
