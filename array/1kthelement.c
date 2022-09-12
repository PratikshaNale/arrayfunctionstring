/*Assignment1 : Find the Kth smallest element?
Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.
Example 1:
Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation :
3rd smallest element in the given  array is 7.

Example 2:
Input:
N = 5
arr[] = 7 10 4 20 15
K = 4
Output : 15
Explanation :
4th smallest element in the given  array is 15*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int a[6],i,j,c,nth,len;
	printf("size of array\n");
	scanf("%d",&len);
	printf("Enter the array element\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Display the array element\n");
	for(i=0;i<len;i++)
	{
		printf("a[%d]   %d\n",i,a[i]);
	}
	 for(i=0;i<len;i++)
	 {
	 	for(j=(i+1);j<len;j++)
	 	{
	 		if(a[i]<a[j])
	 		{
	 			c=a[i];
	 			a[i]=a[j];
	 			a[j]=c;
	 			
			 }
		 }
	 	
	 }
	/* printf("After sorting in array\n");
	 for(i=0;i<len;i++)
	 {
	 	printf("a[%d]  %d\n",i,a[i]);
	 }*/
	 printf(" find the kth smallest value from array\n");
	 scanf("%d",&nth);
	 int value=a[len-nth];
	 printf("%d smallest element in the given  array is %d\n",nth,value);
}


