//12. Find compound interest Compound intrest CI = principle * pow((1 + rate / 100), time).
#include<stdio.h>
#include<math.h>
int main()
{
	int p,rate,ci,time;
	printf("Enter the principal amount,rate and time\n");
	scanf("%d%d%d",&p,&time,&rate);
	ci = p * pow((1 + rate / 100), time);
	printf("compound intrest is %d\n ",ci);
	return 0;
}
