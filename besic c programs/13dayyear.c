//13. Convert days into years
#include<stdio.h>
int main()
{
	int day,year,month,weak;
	printf("Enter the day\n");
	scanf("%d",&day);
	year=day/365;
	month=day/30;
	weak=day/7;
	printf("year is %d\n",year);
	printf("month is %d\n",month);
	printf("weak is %d\n",weak);
	return 0;
}
