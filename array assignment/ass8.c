/*Assignment 8 : Remove duplicates from sorted array
Given a sorted array, the task is to remove the duplicate elements from the array.
Examples: 
Input  : arr[] = {2, 2, 2, 2, 2}
Output : arr[] = {2}    new size = 1

Input  : arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5}
Output : arr[] = {1, 2, 3, 4, 5}   new size = 5

How to Solve

Method 1: (Using extra space) 
1.	Create an auxiliary array temp[] to store unique elements.
2.	Traverse input array and one by one copy unique elements of arr[] to temp[]. Also keep track of count of unique elements. Let this count be j.
3.	Copy j elements from temp[] to arr[] and return j*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int size,i,j,k;
	printf("Enter the size of array element\n");
	scanf("%d",&size);
	int a[size];
     printf("Enter the array element\n");
     for(i=0;i<size;i++)
     {
     	scanf("%d",&a[i]);
	 }
	  printf("\nDisplay the original array\n");
	 for(i=0;i<size;i++)
	 {
	 	printf("a[%d]  %d\n",i,a[i]);
	 }
	 
	 for(i=0;i<size-1;i++)
	 {
	 	for(j=i+1;j<size;j++)
	 	{
	 		if(a[i]==a[j])
	 		{
	 			for( k=j;k<size;k++)
	 			{
	 				a[k]=a[k+1];
				 }
				 j--;
				 size--;
			}
		 }
	 }
	 printf("\n After remove duplicate value\n");
	 for(i=0;i<size;i++)
	 {
	 	printf("a[%d]  %d\n",i,a[i]);
	 }
	return 0;
}

