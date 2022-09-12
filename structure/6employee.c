/*6.	Write a C program to accept details of 'n' employee(eno, ename, salary) and display the details of employee having 
highest salary. Use array of structure.*/
#include<stdio.h>
struct employee
{
	int eno;
	char ename[20];
	int salary;
};
   int main()
   {
   	struct employee a[20];
   	int i,j,no,max;
   	printf("Enter  the employee count\n");
   	scanf("%d",&no);
   	printf("Enter the employee no employee name and employee salary\n");
   	for(i=0;i<2;i++)
   	{
   		scanf("\n %d%s%d\n", &a[i].eno,&a[i].ename,&a[i].salary);
    }
    printf("Disply the details of employee\n");
    for(i=0;i<2;i++)
    {
        printf("\n employee no %d employee name %s employee salary  %d",a[i].eno,a[i].ename,a[i].salary);
    }
      max=a[0].salary;
      	for(i=0;i<2;i++)
      	{
      		if(a[i].salary>max)  
      		{
      			max=a[i].salary;
			  }
		  }
		  printf("\n Display the heighest salary of employee\n");
		  for(i=0;i<2;i++)
		  {
		  	if(a[i].salary==max)
		  	{
		  		printf(" %d\t%s\t%d\t",a[i].eno,a[i].ename,a[i].salary);
			  }
		  }
		  return 0;
}
