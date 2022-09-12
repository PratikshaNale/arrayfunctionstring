//18) Write a program in C to to print next greater elements in a given unsorted array. Elements for 
//which no greater element exist, consider next greater element as -1
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[6],i,j,len;
	len=sizeof(a)/sizeof(int);
	printf("Enter the array element\n");
	for(i=0;i<len;i++)
	{
	  scanf("%d",&a[i]);	
	}
	printf("Display the array\n");
	for(i=0;i<len;i++)
	{
		printf("a[%d]  %d\n",i,a[i]);
	}
	int max=a[0];
	for(i=0;i<len;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("\n max element in array is %d",max);
	printf("\n\n next bigger element are\n");
	for(i=0;i<len;i++)
	 {
	 	for(j=i+1;j<len;j++)
	 	{
	 		if(a[i]<a[j])
	 		{
	 			printf("next bigger element of %d in the array is %d\n",a[i],a[j]);
	 			break;
			 }
		 }
	 }
	  if(max)
	  {
	  	printf("next bigger element of %d in the array is %d\n",max,-1);
	  }
	  return 0;
}
