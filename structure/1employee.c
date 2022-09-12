/*1Write C program to accept the details of employee and display them using structure.
 Details consist of Employee ID, Name, Designation, Department, salary.*/
 #include<stdio.h>
 #include<conio.h>
 struct employee
 {
 	int emp_id;
 	char name[20];
 	char designation[20];
 	char department[20];
 	int salary;
 };
 int main()
 {
 	struct employee a;
 printf("Enter employee detail\n");
 printf("Enter employee id\n");
 scanf("%d",&a.emp_id);
 printf("Enter the employee name\n");
 scanf("%s",&a.name);
 printf("Enter the designation\n");
 scanf("%s",&a.designation);
 printf("Enet the department\n");
 scanf("%s",&a.department);
 printf("Enter the salary\n");
 scanf("%d",&a.salary);
 printf("Employee details\n");
 printf("empoloyee id %d\n",a.emp_id);
 printf("employee name %s\n",a.name);
 printf("designation is %s\n",a.designation);
 printf("department is %s\n",a.department);
 printf("salary  is %d\n",a.salary);
 return 0;
}
 
