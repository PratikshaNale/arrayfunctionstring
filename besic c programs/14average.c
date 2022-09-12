//14.average of three number
#include<stdio.h>
int main()
{
	int a,b,c,avg,total;
	printf("Enter the three number\n");
	scanf("%d%d%d",&a,&b,&c);
	total=a+b+c;
	avg=total/3;
	printf("average is %d",avg);
	return 0;
	
}
