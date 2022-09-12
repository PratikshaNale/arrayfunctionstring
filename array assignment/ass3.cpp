/*Assignment3 :  Subarray with given sum
Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S. In case of multiple subarrays, return the subarray which comes first on moving from left to right.
Example 1:
Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements  from 2nd position to 4th position  is 12.
Example 2:
Input:
N = 10, S = 15
A[] = {1,2,3,4,5,6,7,8,9,10}
Output: 1 5
Explanation: The sum of elements  from 1st position to 5th position is 15.*/
#include<stdio.h>
#include<conio.h>
void sub(int a[],int len,int sum)
{
	int i,j,temp,flag=1;
	for(i=1;i<len;i++)
	{
		temp=a[i];
		for(j=(i+1);j<len;j++)
		{
			temp=temp+a[j];
			if(temp==sum)
			{
				flag=0;
				break;
			}
		}
		if(flag==0)
		{
			break;
		}
	}
		if(flag)
		{
			printf("sum does not found\n");
		}
		else
		{
			printf("sum of element position %d  position %d sum %d",i,j,temp);
		}
	}
	  int main()
	 {
	 	int a[11],len,i,sum;
	 	len=sizeof(a)/sizeof(int);
	 	printf("Enter the array element\n");
	 	for(i=1;i<len;i++)
	 	{
	 		scanf("%d",&a[i]);
		 }
		  printf("Enter the sum\n");
		  scanf("%d",&sum);
		  sub(a,len,sum);
		  return 0;
	 }


