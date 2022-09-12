//13. Print division scored by student
#include<stdio.h>
int main()
{
	int per,grade;
	printf("Enter the percentage\n");
	scanf("%d",&per);
	if(per>=60)
	{
		printf("first division\n");
	}
	else if(per>=40)
	{
		printf("second division\n");
	}
	else
	{
		printf("third division\n");
	}
	return 0;
}
