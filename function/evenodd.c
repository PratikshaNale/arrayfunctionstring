//WACP to check whether a number is even or odd using function.
#include<stdio.h>
#include<conio.h>
int even(int num)
{
	if(num%2==0)
	{
		printf("\n %d number is even\n",num);
	}
	else
	{
		printf("\n %d number is odd",num);
	}
}
	int main()
	{
		int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	even(num);
	return 0;
}
