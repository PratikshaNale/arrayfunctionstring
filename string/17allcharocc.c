//17.Write a c program to count occurrences of a character in given string.
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch1[90],ch;
	int i=0,count=0;
	printf("Enter the string\n");
	gets(ch1);
	printf("Enter the count occarance character\n");
	scanf("%d",&ch);
	while(ch1!='\0')
	{
		if(ch1[i]==ch)
		{
			count++;
		}
		i++;
	}
	printf("total occarance of character %c = %d",ch,count);
	return 0;
	
}
