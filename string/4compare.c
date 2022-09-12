//WACP compare two string.
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch[90],ch1[90];
	int i,count=0,flag=1;
	printf("Enter the first string\n");
	gets(ch);
	printf("Enter the second string\n");
	gets(ch1);
	int flen=strlen(ch);
	int slen=strlen(ch1);
		if(flen==slen);
		{
			//int count=0,flag=1;
			while(ch[count]!='\0')
			{
				int diff=ch[count]-ch1[count];
				if(diff!=0)
				flag=0;
				break;
			}
			++count;
		}
		if(flag)
		{
			printf("\n string are equal");
		}
		else
		{
			printf("string are not equal");
		}
		return 0;
	}
	
		
