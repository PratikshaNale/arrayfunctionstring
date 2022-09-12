//WACP to find cube of any number using function.
#include<stdio.h>
#include<conio.h>
double cube(double no);//function declaration
int main()
{
	int no;
	double c;
	printf("Enter the number\n");
	scanf("%d",&no);
	c=cube(no);
	printf("cube of no is %d is %f",no,c);
	return 0;
}
 double cube(double no)//find cube of array
 {
 	return(no*no*no);
 }
