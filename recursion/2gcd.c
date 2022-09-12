// WACP to find gcd using recursion.
#include<stdio.h>
#include<conio.h>
int gcd(int a,int b);
int main()
{
	int a,b ,result;
	printf("Enter the two number to find gcd");
	scanf("%d%d",&a,&b);
	result=gcd(a,b);
	printf("the gcd of %d and %d =%d\n",a,b,result);
	
}
 int gcd(int a,int b)
 {
 	while(a!=b)
 	{
	 if(a>b)
	 {
	 	return gcd(a-b,b);
	 }
	 else
	 {
	 	return gcd(a,b-a);
	 }
     }
      return a;
 }
	
