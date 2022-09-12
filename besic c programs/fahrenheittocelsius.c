//14. Fahrenheit to Celsius conversion Cels=(farh-32)*5/9;

#include<stdio.h>
#include<conio.h>
int main()
{
	int f,cel;
	printf("Enter the fahrenheit\n");
	scanf("%d",&f);
	cel=(f-32)*5/9;
	printf("fahrenheit to celsius conversion is %d",cel);
	return 0;
}
