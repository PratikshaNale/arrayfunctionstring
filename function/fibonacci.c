/*write a recursive program to print fibonacci seriesed for n terms.*/
#include<stdio.h>
#include<conio.h>
int fibonacci(int);
int main()
{
	int n,i;
	printf("Enter the number\n");
	scanf("%d",&n);
	printf("fibonacci serise is \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",fibonacci(i));
	}
	return 0;
}
int fibonacci(int i)
{
	if(i==0)
	return 0;
	else if(i==1)
	return 1;
	else return(fibonacci(i-1)+fibonacci(i-2));
}
