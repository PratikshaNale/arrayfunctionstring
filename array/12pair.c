//WACP to find a pair with given sum in the array.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[6],i,j,sum,flag=0;
	printf("Enter the array element\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Display the array element\n");
	for(i=0;i<6;i++)
	{
		printf("a[%d]  %d\n",i,a[i]);
	}
	printf("\nsum of array is\n");
	scanf("%d",&sum);
	for(i=0;i<6;i++)
	{
		for(j=(i+1);j<6;j++)
		{
			if(a[i]+a[j]==sum)
			{
				flag=1;
				printf("Given sum of pair of element is %d and %d\n",a[i],a[j]);
			}
		}
	}
	if(flag==0)
	printf("Given sum pair is not present\n ");
	return 0;
}

