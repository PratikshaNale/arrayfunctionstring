//WACP to find the floor and ceil of number 0 to 10 from a sorted array.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[6],i,j, temp;
	printf("Enter the array values\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n the Given array\n ");
	for(i=0;i<6;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n\n");
	for(i=0;i<6;i++)
	{
		for(j=(i+1);j<6;j++)
		 {
		 	if(a[i]>a[j])
		 	 {
		 	 	temp=a[i];
		 	 	a[i]=a[j];
		 	 	a[j]=temp;
			  }
		 }
	}
	    for(i=0;i<=10;i++)
	     {
	     	printf("\n number =%d\t",i);
	     	for(j=0;j<6;j++)
	     	{
	     		if(i<=a[j])
	     		{
	     			printf("celling = %d\t",a[j]);
	     			break;
	     		}
	     		if(j==5)
	     		{
	     			printf("celling = -1");
	     			break;
				 }
			 }
			 for(j=5;j>=0;j--)
			 {
			 	if( a[j]<=i)
			 	{
			 	printf("floor = %d",a[j]);
			 	break;
			    }
			     if(j==0)
			     {
			     	printf("floor = -1");
			     	break;
				 }
		     }
		      printf("\n");
		  }
		      return 0;
}
