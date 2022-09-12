//WACP to concatenate two string.
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch[90],ch1[90];
	int i,j;
	printf("Enter the first string\n");
	gets(ch);
	printf("Enter the second string\n");
	gets(ch1);
	while(ch[i]!='\0')
	i++;
	for(j=0;ch1[j]!='\0';i++,j++)
	{
		ch[i]=ch1[j];

	}
	  ch[i]='\0';
		printf("after concatenate string %s",ch);
		return 0;
}
