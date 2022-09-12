/*Assignment 5 :  Union of two arrays
Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.
Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in the union.

Example 1:
Input:
5   3
1 2 3 4 5
1 2 3
Output: 
5
Explanation: 
1, 2, 3, 4 and 5 are the elements which come in the union set of both arrays. So count is 5.

Example 2:
Input:
6 2 
85 25 1 32 54 6
85 2 
Output: 
7
Explanation: 
85, 25, 1, 32, 54, 6, and 2 are the elements which come in the union set of both arrays. So count is 7.*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,a[5],b[5],size;
	size=sizeof(a)/sizeof(int);
	printf("Enter the first array ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("Enter the second array ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<size;i++)
	{
	  for(j=0;j<size;j++)
	  {
	  	if(a[i]=b[i])
	  	{
	  		c=a[i];
	  		a[i]=b[i]
	  		b[i]c;
		  }
	  }
	}
	j++;
}
	void sort(int size,int a[])
	return 0;
	
}

