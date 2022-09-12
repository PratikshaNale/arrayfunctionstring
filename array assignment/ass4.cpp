/*Assignment 4: Move all negative elements to end
Given an unsorted array arr[] of size N having both negative and positive integers. The task is place all negative element at the end of array without changing the order of positive element and negative element.
Example 1:
Input : 
N = 8
arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
Output : 
1  3  2  11  6  -1  -7  -5
Example 2:
Input : 
N=8
arr[] = {-5, 7, -3, -4, 9, 10, -1, 11}
Output :
7  9  10  11  -5  -3  -4  -1*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,c,size,x[i],l=0;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	int a[size];
	printf("Enter the array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	 printf("Display the array element\n");
	 for(i=0;i<size;i++)
	 {
	 	printf("a[%d]  %d\n",i,a[i]);
	 }
	   for(i=0;i<size-1;i++)
	   {
	   	 for(j=(i+1);j<size;j++)
	   	 {
	   	 	if(a[i]<0)
	   	 	{
	   	 		c=a[i];
	   	 		a[i]=a[j];
	   	 		a[j]=c;
				}
			}
	   }
	   printf("\n\n");
	   for(i=0;i<size;i++)
	   {
	   	for(j=i+1;j<size;j++)
	   	{
	   		if(a[i]<0)
	   		{
	   			c=a[i];
	   			a[i]=a[j];
	   			a[j]=c;
			   }
		   }
	   }
	   printf("After sorting in array\n");
	   for(i=0;i<size;i++)
	   {
	   	printf("a[%d]   %d\n",i,a[i]);
	   }
	   return 0;
}


