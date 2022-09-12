//WACP to convert lowercase string to uppercase string.
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch[90];
	printf("Enter the string\n");
	gets(ch);
	int count=0;
	printf("Before conversion %s\n",ch);
	while(ch[count]!='\0')
	{
		if(ch[count]>='a'&&ch[count]<='z')
		{
			ch[count]=ch[count]-32;
		}
		++count;
	}
	printf("After conversion %s\n",ch);
	return 0;
}
