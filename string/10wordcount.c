//WAP to count a words in given string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char ch[90];
	int len,i,count=1;
	printf("Enter the string\n");
	gets(ch);
	len=strlen(ch);
	for(i=0;i<len;i++)
	 {
	 	 if(ch[i]==' ')
		  
	 	 count++;
	 }
	  printf("count the words %d",count);
	  return 0;
}
