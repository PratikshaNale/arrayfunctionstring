#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,c,min,max;
	printf("Enter the array element\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Display the array element\n");
	max=a[0];
	for(i=0;i<5;i++)
	{
		{
			if(a[i]>a[j])
			{
				max=a[i];
			}
		}
    
	} 
		printf("maximum value is %d\n",max);
	for(i=0;i<5;i++)
	{
		if(a[i]<a[j])
		{
			min=a[i];
			
		}
	}
	printf("minimum value is %d\n",min);
	return 0;
}
