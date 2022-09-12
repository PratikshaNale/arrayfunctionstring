//WACP find LCM of two number using recursion.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int lcm(int a,int b);//declaration
int main()
{
	int a,b,LCM;//variable declaretion
	printf("Enter the two number\n");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
	LCM=lcm(b,a);
    } 
    else
    LCM= lcm(a,b);
	printf("the lcm is %d and %d = %d\n",a,b,LCM);
	return 0;
	}
   int lcm(int a,int b)
   {
   	static int mul = 0;
   	mul +=b;
   	if((mul%a==0)&&(mul%b==0))
   	{
   		return mul;
	   }
	   else
	   {
	   	return lcm(a,b);
	   }
   }
