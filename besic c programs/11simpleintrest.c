//11. Find simple interest SI = (principle * time * rate) / 100.

#include<stdio.h>
int main()
{
	int si,rate,time,principal;
	printf("Enter the principal amount, time and rate\n");
	scanf("%d%d%d",&principal,&rate,&time);
	si=(principal*time*rate)/100;
	printf("simple intrest is %d",si);
	return 0;
	
}
