//12. Print gross salary of employee
#include<stdio.h>
int main()
{
	int bs,da,hra,gross_salary;
	printf("Enter the besic salary of employee\n");
	scanf("%d",&bs);
	if(bs<=25000)
	{
		da=bs*10/100;
		hra=bs*15/100;
	}
	else if(bs<=40000)
	{
		da=bs*12/100;
		hra=bs*18/100;
	}
	else
	{
	 da=bs*15/100;
	 hra=bs*20/100;	
	}
	gross_salary=da+bs+hra;
	printf("gross salary is %d\n",gross_salary);
	return 0;
}
