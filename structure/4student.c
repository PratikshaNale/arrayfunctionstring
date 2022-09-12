/*4.	C program to read information of student. It contains Name, Roll number, Birthday, admission date. 
Calculate age of student at the time of admission8*/

#include<stdio.h>
struct student
{
	char name[20];
	int rollno;
	int birthday;
	int admisiondate;
};
 int main()
 {
 	int age,i;
 	struct student a[1];
 	printf("Enter the name,rollno,birthday and admision date\n ");
 	for(i=0;i<1;i++)
 	{
 		scanf("%s%d%d%d\n",&a[i].name,&a[i].rollno,&a[i].birthday,&a[i].admisiondate);
	 }
	  for(i=0;i<1;i++)
	  {
	  	printf("name %s\n rollno %d\n birthday %d\n admisiondate %d\n",a[i].name,a[i].rollno,a[i].birthday,a[i].admisiondate);
	  	age = a[i].admisiondate-a[i].birthday;
	  }
	  printf("age of student is %d",age);
	  return 0;
 	
 }
