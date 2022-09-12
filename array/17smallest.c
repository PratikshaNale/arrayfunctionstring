//WACP to find the smallest missing element from a sorted array.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,c,sum=0,n,start,end;
	printf("Enter the five element\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=(i+1);j<5;j++)
		{
			if(a[i]>a[j])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
	printf("After ascending orer\n");
	for(i=0;i<5;i++)
	{
		printf("a[%d]  %d\n",i,a[i]);
		sum=sum+a[i];
	}
	printf("\n find out smallest missing element\n");
	for(i=0;i<5;i++)
	{
		end=a[i+1];
		for(start=a[i];start<end;start++)
		{
			if(a[i]!=start)
			{
				printf("%d\t",start);
			}
		}
		
	}
	return 0;}
