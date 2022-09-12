//WACP to find maximum and minimum between two number using function.
#include<stdio.h>
#include<conio.h>
int max(int num1,int num2);//function declaration
int min(int num1,int num2);
int main()
{
	int num1,num2,maximum,minimum;
	printf("Enter any two number\n");
	scanf("%d %d",&num1,&num2);
	maximum=max(num1,num2);//function call
	minimum=min(num1,num2);
	printf("\n maximum = %d\n",maximum);
	printf("\n minimun = %d\n",minimum);
	return 0;
	
	
}
int max(int num1,int num2)
{
 return (num1 > num2) ? num1:num2;
}

int min(int num1,int num2)
{
 return (num1<num2) ?num1:num2;	
}
