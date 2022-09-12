//14.Write a c program to find first occurrence of a character in a given string.
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch[90],word[90];
	int i ,j,flag;
	printf("Enter the string\n");
	gets(ch);
	printf("Enter the search word\n");
	gets(word);
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]==word[0])
		{
			flag=1;
		for(j=0;word[j]!='\0';j++)
		{
			if(ch[i+j]!=word[j])
			{
			  flag=0;
			  break;	
			}
		}
	}
	 if(flag==1)
	 {
	 	break;
	 }
  } 
	 if(flag==0)
	 {
	 	printf("WE have not found the word %s\n",word);
	 }
	  else
	  {
	  	printf("\n we have found word %s and it position %d",word,i+1);
	  }
	  return 0;
}
