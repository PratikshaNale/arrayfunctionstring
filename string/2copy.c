//2.WACP to copy one string to another string.
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch[90],ch1[90];
	int i;
	printf("Enter the first string\n");
	gets(ch);
	for(i=0;ch[i]!='\0';i++)
	{
		ch1[i]=ch[i];
	}
	ch1[i]='\0';
	printf("string ch1 %s",ch1);
	return 0;
	
}
