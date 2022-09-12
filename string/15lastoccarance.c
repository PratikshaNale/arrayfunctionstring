//15.Write a c program to find last occurrence of a character in a given string.
#include<stdio.h>
#include<string.h>
int main()
{
	char ch1[90],ch;
	int i,index;
	i=0;
	index=-1;
	printf("Enter the string\n");
	gets(ch1);
	printf("Enter the character for search\n");
	scanf("%c",&ch);
	while(ch1[i]!='\0')
	{
		if(ch1[i]==ch)
		{
		  index=i;	
		}
		i++;
	}
	 if(index==-1)
	 {
	 	printf("we have not found search element %c",ch);
	 }
	 else
	 {
	 	printf("found serch element %c position is %d",ch,index+1);
	 }
	  return 0;
	  
}
