/*Assignment 6 : Merge two sorted arrays
Given two sorted arrays, the task is to merge them in a sorted manner.
Examples: 
Input: arr1[] = { 1, 3, 4, 5}, arr2[] = {2, 4, 6, 8} 
Output: arr3[] = {1, 2, 3, 4, 4, 5, 6, 8}

Input: arr1[] = { 5, 8, 9}, arr2[] = {4, 7, 8} 
Output: arr3[] = {4, 5, 7, 8, 8, 9} 

Method : 
1.	Create an array arr3[] of size n1 + n2.
2.	Copy all n1 elements of arr1[] to arr3[]
3.	Traverse arr2[] and one by one insert elements  of arr3[] to arr1[]. This step take O(n1 * n2) time.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,temp,a[4],b[4],c[8],size,count=0;
	printf("Enter the first array element\n");
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the second array\n");
	for(i=0;i<4;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\nDisplay the first array\n");
	for(i=0;i<4;i++)
	{
		printf("a[%d]  %d\n",i,a[i]);
	}
	printf("\nDisplay the second array\n");
	for(i=0;i<4;i++)
	{
		printf("a[%d]  %d\n",i,b[i]);
	}
	 for(i=0;i<4;i++)
	 {
	 	for(j=(i+1);j<4;j++)
	 	{
	 		if(a[i]>a[j])
	 		{
	 		 temp=a[i];
	 		 a[i]=a[j];
	 		 a[j]=temp;
			 }
		 }
	 }
	 printf("After sorted array\n");
	 for(i=0;i<4;i++)
	 {
	 	printf("a[%d]   %d\n",i,a[i]);
	 }
	 for(i=0;i<4;i++)
	 {
	 	for(j=(i+1);j<4;j++)
	 	{
	 		if(a[i]>a[j])
	 		{
	 		 temp=a[i];
	 		 a[i]=a[j];
	 		 a[j]=temp;
			 }
		 }
	 }
	 printf("After sorted second array\n");
	 
	 for(i=0;i<4;i++)
	 {
	 	printf("a[%d]   %d\n",i,b[i]);
	 }
	  printf("marge element\n");
	  for(i=0;i<4;i++)
	  {
	  	c[count++]=a[i];
	  }
	  for(j=0;j<4;j++)
	  {
	  	c[count++]=b[j];
	  }
	   for(i=0;i<8+1;i++)
	   {
	   	for(j=j+1;j<8+1;j++)
	   	{
	   		if(c[i]>c[j])
	   		{
	   			int temp=c[i];
	   			c[i]=c[j];
	   			c[j]=temp;
			   }
		   }
	   }
	  printf("After marge element\n");
	  for(i=0;i<8;i++)
	  {
	  	printf("a[%d]  %d\n",i,c[i]);
	  }
	  
	  return 0;
}

	


