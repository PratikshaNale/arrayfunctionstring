/*11.	Write a menu driven program in C to create a structure employee having fields empid, empname, salary. 
Accept the details of 'n' Employees from user and perform the following operations using function.

- Search by Emp-Id
- Display All
- Display Names of Employee having Salary > 10000.*/
#include<stdio.h>
#include<stdlib.h>
struct employee
{
	int empid;
	char ename[20];
	int salary;
}emp[5];
void emp_search(int r)
{
	int id,i;
	printf("Enter the search employee id\n");
	scanf("%d",&id); 
	for(i=0;i<r;i++)
	{
	   if(emp[i].empid==id)
	   {
	   	printf("employee id %d\n",emp[i].empid);
	   	printf("\n employee name %s\n",emp[i].ename);
	   	printf("salary  %d\n",emp[i].salary);
	   }	
	}
}
 void display(int r)
 {
 	int i;
 	printf("list of all employee\n");
 	printf("emp_id\temp_name\tsalary\n");
 	for(i=0;i<r;i++)
 	{
 	   printf("%d\t %s\t %d \t",emp[i].empid,emp[i].ename,emp[i].salary);
    }
 }
	void greater(int r)
	{
		int i;
		printf("Detais of employee whose salary > 10000\n");
		for(i=0;i<r;i++)
		{
			if(emp[i].salary>10000)
			{
				printf("employee name %s\n",emp[i].ename);
				printf("Employee id %d\n",emp[i].empid);
				printf("Employee salary%d\n",emp[i].salary);
			}
		}
	}
	int main()
	{
		int i,n,ch;
		printf("Enter the limit of employee\n");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("Enter the employee details %d",i+1);
			printf("\n employee name\n");
			scanf("%s",&emp[i].ename);
			printf(" employee id\n");
			scanf("%d",&emp[i].empid);
			printf("salary\n");
			scanf("%d",&emp[i].salary);
		}
		while(1)
		{
			printf("\n\t\tmenu");
			printf("\n 1 Enter search by employee id\n");
			printf("\n 2 list all employee\n");
			printf("\n 3 Display Names of Employee having Salary > 10000.\n");
			printf("\n 4 Exit\n");
			printf("\nEnter your choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:emp_search(n);
				break;
				case 2: display(n);
				break;
				case 3:greater(n);
				break;
				case 4 :exit(0);
				
			}
		}
		return 0;
	}
	


