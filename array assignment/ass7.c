/*Assignment 7 : Program for array rotation
Given an array of integers arr[] of size N and an integer, the task is to rotate the array elements to the left by d positions.

Examples:  
Input: 
arr[] = {1, 2, 3, 4, 5, 6, 7}, d = 2
Output: 3 4 5 6 7 1 2
Input: arr[] = {3, 4, 5, 6, 7, 1, 2}, d=2
Output: 5 6 7 1 2 3 4


Approach 1 (Using temp array): This problem can be solved using the below idea:
After rotating d positions to the left, the first d elements become the last d elements of the array
"	First store the elements from index d to N-1 into the temp array.
"	Then store the first d elements of the original array into the temp array.
"	Copy back the elements of the temp array into the original array*/


#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,temp,len;
	printf("Enter the  length of the array\n");
	scanf("%d",&len);
	int a[len];
    printf("Enter the array element\n");
	for(i=0;i<len;i++)
	{
      scanf("%d",&a[i]);
    } 
    	int size=sizeof(a)/4;
     printf("Enter the index no for rotation\n");
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
	 	int temp=a[0];
	 	for(j=0;j<len-1;j++)
	 	{
	 		a[j]=a[j+1];
		 }
		 a[len-1]=temp;
	 }
	 printf("Display the array\n");
	 for(i=0;i<len;i++)
	 {
	 	printf("a[%d]   %d\n",i,a[i]);
	 }
	 return 0;
	
}
