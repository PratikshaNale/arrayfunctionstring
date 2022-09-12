//WACP to cheack whether a number is prime,armstrong or perfect,number using function.
#include<stdio.h>
#include<conio.h>
int prime(int num);
int armstrong(int num);
int perfect(int num);
int main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
}
 int prime(int num)
 {
 	printf("%d number is prime\n");
 }
 else
 {
 	printf("%d nunber is not prime\n");
 }
int armstrong(int num)
{
	printf("%d number is armstrong\n");
}
 else
 {
 	printf("%d number is not armstrong");
 }
int perfect(int num)
{
	printf("%d number is perfect\n");
}
else
 {
 	printf("%d number is not perfect\n");
 }
  return 0;
  int prime(int num)
  {
  	int i;
  	for(i=2;i<num/2;i++)
  	{
  	if(num%i==0)
  	{
  		return 0;
	  }
  }
   return 1;
  int armstrong(int num)
  int lastdigit,sum,onum,digit,sum=0;
  onum=num;
  while(num>0)
  {
  	lastdigit=num%10;
  	sum=sum+lastdigit*lstdigit;
  }
  

int perfect(int num);
