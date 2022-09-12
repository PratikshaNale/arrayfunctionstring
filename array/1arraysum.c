//WACP to input the array element and calculate it sum.
#include<stdio.h>
#include<conio.h>
 int main()
{
	int a[5],i,j,sum=0;
	printf("Enter the array element\n");
	for(i=0;i<5;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	  printf("display the array\n");
	   for(i=0;i<5;i++)
	    {
	    	printf("a[%d]  %d\n",i,a[i]);
	    	sum=sum+a[i];
		}
		 printf("sum of array %d",sum);
		 return 0;
}
