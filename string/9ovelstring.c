//9. Write a c program to count total number of vowels and consonants in a string.
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch[90];
	int i,v=0,c=0;
	printf("Enter the string\n");
	gets(ch);
	for(i=0;ch[i]!='\0';i++)
	{
	 	if((ch[i]>=65&&ch[i]<=90)||(ch[i]>=97&&ch[i]<=122))
	 	{
	 		if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
	 	v++;
	 	else
	 	c++;
	 }
}
	    printf("vowels count %d\n",v);
      	printf("consonent %d\n",c);

	  	 return 0;
} 
