//16.Write a c program to search all occurrences of a character in given string.
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch1[90],ch;
	int i;
	printf("Enter the string\n");
	gets(ch1);
	printf("Enter the search character\n ");
	scanf("%c",&ch);
		for(i = 0; i <= strlen(ch1); i++)
{
	if(ch1[i] == ch)  
	{
		printf("\n '%c' is Found at Position %d ", ch, i + 1);   	
	}
}
	return 0;
}
