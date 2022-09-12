/*2.	Write C program to read the details of two workers and calculate total payment of workers using structure.*/
#include<stdio.h>
#include<stdio.h>
struct worker 
{
	char name[20];
	int wage;
	int wdays;
};
int main()
{
	struct worker a,b;
	printf("Enter the detail of first worker\n");
	scanf("%s",&a.name);
	printf("Enter the wage\n");
	scanf("%d",&a.wage);
	printf("Enter wday\n");
	scanf("%d",&a.wdays);
	printf("Enter details of second employee\n");
	scanf("%s",&b.name);
	printf("Enter the wage\n");
	scanf("%d",&b.wage);
	printf("Enter days\n");
	scanf("%d",&b.wdays);
	printf("\n\n");
	int p1=a.wage*a.wdays;
	printf(" Name of first worker %s  :\n payment of first worker %d :\n",a.name,p1);
	printf("\n");
	int p2 = b.wage*b.wdays;
	printf("Name of second worker %s  :\n payment of second worker %d :\n",b.name,p2);
	return 0;
}
