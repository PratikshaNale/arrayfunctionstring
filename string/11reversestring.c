//Wacp to input string and reverse it.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char ch[90];
	int i,l;
	printf("Enter the first string\n");
	gets(ch);
	printf("Before reverse the string\n");
	 l=strlen(ch);
	int mid=(l/2);
	int end=(l-1);
	for(i=0;i<mid;i++)
	{
		char temp=ch[i];
	    ch[i]=ch[end];
		ch[end]=temp;
		end--;
	}
	printf("before reverse the string %s\n",ch);
	return 0;
}
