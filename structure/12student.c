/*12.	Write a C program to create a student structure having fields stud_name and address. Accept the 
details of 'n' students, rearrange the data in alphabetical order of student name and display it.*/
#include<stdio.h>
#include<conio.h>
struct student
{
	char name[20];
	char add[20];
}s[100];
int main()
{
   struct student t;
   int i=0,j=0,n;
   printf("Enter the how many record you want to enter\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
{
   printf("Enter the student %d details\n",i+1);
   printf("\n..........................\n");
   printf("Enter the student name\n");
   scanf("%s",&s[i].name);
   printf("Enter the address of student\n");
   scanf("%s",&s[i].add);
}
  printf("\nData before rearrangement\n");
  printf("\n.........................\n");
  printf("\nstudent name\t address\n");
  printf("\n.........................\n");
  for(i=0;i<n;i++)
  {
  	printf("%s\t%s",s[i].name,s[i].add);
  }
  for(i=0;i<n;i++)
  {
  	for(j=i+1;j<n;j++)
  	{
  		if(strcmp(s[i].name,s[j].name)>0)
  		{
  			t=s[i];
  			s[i]=s[j];
  			s[j]=t;
		  }
	  }
  }
  printf("\nData After rearrangement\n");
  printf("\n.........................\n");
  printf("student name\t address\n");
  printf("\n.........................\n");
  for(i=0;i<n;i++)
  {
  	printf("\n%s\t%s\t",s[i].name,s[i].add);
  }
  return 0;
}
