//1.WACP to find length of string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char ch[90];
	int i,count=0,len;
	printf("Enter the string\n");
	gets(ch);
	for(i=1;ch[i] !='\0';++i)
	{
	len++;	
	}

	printf(" %d",len);
	return 0;
}

