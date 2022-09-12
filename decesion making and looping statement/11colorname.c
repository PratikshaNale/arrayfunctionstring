/*11.C program to read character and print color name.

i) r/R - Red
ii) g/G - Green
iii) b/B - Blue
iv) Any other - Invalid Input*/
 
#include<stdio.h>
int main()
{
	char name[20];
	char ch;
	printf("Enter the character\n");
	scanf("%c",&ch);
	if(ch=='r'||ch=='R')
	{
		printf("red\n");
	}
	else if(ch=='g'||ch=='G')
	{
		printf("green\n");
	}
	else if(ch=='b'||ch=='B')
	{
		printf("blue\n");
	}
	else
	{
		printf("invalid input\n");
	}
	 return 0;
}
