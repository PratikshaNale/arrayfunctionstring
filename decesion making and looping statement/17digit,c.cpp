//17. Check sum of digit greater than 10
#include<stdio.h>
int main()
{
	int no,sum=0,f,l;
	printf("Enter the two digit number\n");
	scanf("%d",&no);
	 if(no>9 && no<100)
	 {
	 	f=no%10;
	 	l=no/10;
	 	sum=f+l;
	 	printf("sum of two digit %d\n",sum);
	 }
	 	if(sum>10)
	 	{
	 		printf("sum of digit greter than 10\n");
		 }
		 else
		 {
		  printf("not greter than 10\n");
		 }
	 	   return 0;
	 }
	
