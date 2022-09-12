//WACP to find the second largest element in array.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,c,len,sh;
	printf("Enter the size of array\n");
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
	 printf("\n After sorting\n");
	 for(i=0;i<len;i++)
	 {
	 	printf("a[%d]  %d\n",i,a[i]);
	 }
	 int value=a[len-2];
	 printf("second heighest value is %d\n",value);
	 return 0;
	
}
