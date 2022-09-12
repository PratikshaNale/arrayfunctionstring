/*Assignment 2 : Sort an array of 0s, 1s and 2s
Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
Example 1:
Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s  1s and 2s are segregated  into ascending order.


Example 2:
Input: 
N = 3
arr[] = {0 1 0}
Output:
0 0 1
Explanation:
0s   1s and 2s are segregated  into ascending order.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,c,len;
	printf("Enter the array size\n");
	scanf("%d",&len);
	printf("Enter the array element\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<len;i++)
	{
		for(j=(i+1);j<len;j++)
		{
			if(a[i]>a[j])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
	printf("After sorting array\n");
	for(i=0;i<len;i++)
	{
		printf("a[%d]   %d\n",i,a[i]);
	}
}
