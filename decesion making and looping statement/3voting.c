//3. Check voting eligibility
#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age\n");
	scanf("%d",&age);
	if(age<18)
	{
		printf("not eligible\n");
	}
	else
	{
		printf("eligible\n");
	}
	return 0;
}
