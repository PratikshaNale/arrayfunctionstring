//8. Write a c program to find total number of alphabets, digits or special character in a string
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char ch[100];
	int alphabates,digit,others,i;
	printf("Enter the string\n");
	fgets(ch, sizeof ch, stdin);
	
	printf("%s\n",ch);
	 alphabates = digit = others = i =0 ;
	 
	 
	  while(ch[i]!='\0')
    {
        if((ch[i]>='a' && ch[i]<='z') || (ch[i]>='A' && ch[i]<='Z'))
        {
            alphabates++;
        }
        else if(ch[i]>='0' && ch[i]<='9')
        {
            digit++;
        }
        else
        {
            others++;
        }

        i++;
    }

    printf("Alphabets = %d\n", alphabates);
    printf("Digits = %d\n", digit);
    printf("Special characters = %d\n", others);

    return 0;
}
