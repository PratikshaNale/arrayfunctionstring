/*8.	Write a 'C' Program to create a structure of student having fields roll_no, stud_name, mark1, mark2, mark3.
 Calculate total marks and average marks. Arrange the records in descending order of marks */

#include<stdio.h>
#include<conio.h>
struct student
{
	int r_no;
	char stud_name[20];
	int mark[3];
	float avg;
	int total;
}s[2];
int main()
{
	struct student stud;
	int i,j;
	for(i=0;i<2;i++)
	{
	 printf("Enter the student record %d\n",i+1);
	 printf("\n..............................\n");
	 printf("Enter the name\n ");
	 scanf("%s",&s[i].stud_name);
	 printf("Enter the rollno\n");
	 scanf("%d",&s[i].r_no);
	 s[i].total=0;
	for(j=0;j<3;j++)
	{
		printf("Enter the marks of subject\n",j+1);
		scanf("%d",&s[i].mark[j]);
		s[i].total=s[i].total+s[i].mark[j];
		s[i].avg=s[i].total/3.0;
	}
      	printf("\n...............................\n");
}
        for(i=0;i<2;i++)
     {
     	for(j=i+1;j<2;j++)
     	{
     		if(s[i].total<s[j].total)
     		{
     			stud =s[i];
				 s[i]=s[j];
     			s[j]=stud;
			 }
		 }
	 }
	 printf("Record print in decending order\n");
	 printf("\n..............................\n");
	 printf("\n roll no name totalmarks avg");
	 	for(i=0;i<2;i++)
	 	{
	 		printf("\n%d\t%s\t%d\t%f",s[i].r_no,s[i].stud_name,s[i].total,s[i].avg);
		 }

	return 0;
}
