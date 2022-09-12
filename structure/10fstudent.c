/*10.	Write a C-program to create student structure having field roll_no, stud_name, class. Pass this entire
 structure to function and display the structure elements.*/
 
 #include<stdio.h>
 #include<conio.h>
 struct stud
 {
 	int r_no;
 	char stud_name[20];
 	int std;
 }s;
 void student(struct stud s)
 {
 printf("Student details\n");
 printf("\n....................\n");
 printf("roll no %d", s.r_no);
 printf("student name %s", s.stud_name);
 printf("std %d", s.std);
}
int main()
{
printf("Enter the student details\n");
printf("\n.........................\n");
printf("Enter the roll no\n");
scanf("%d",&s.r_no);
printf("Enter the name of student\n");
scanf("%s",&s.stud_name);
printf("Enter the class of student\n");
scanf("%d",&s.std);
return 0;
}
 
 
 
