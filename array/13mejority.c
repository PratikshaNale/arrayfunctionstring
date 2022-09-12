//WACP to find the mejority element of array.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,b,j,temp,size,max=0;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	int a[size];
	printf("Enter the array %d element ",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	 }
	 for(i=0;i<size;i++)
	 {
	  	for(j=(i+1);j<size;j++)
	  	 {
	  	 	if(a[i]>a[j])
	  	 	 {
	  	 	 	temp =a[i];
	  	 	 	a[i]=a[j];
	  	 	 	a[j]=temp;
				}
		   }
	  }
	  printf("array after sorting\n");
	  for(i=0;i<size;++i)
	  {
	   	printf("%d\n",a[i]);
	   }
	   int count=1;
	   for(i=0;i<size;++i)
	   {
	   	if(a[i]==a[i+1])
	   	{
	   		count++;
		   }
		   else
		   {
		   	printf("\n%d occuraed %d time\n",a[i],count);
		   	if(max<count)
		   	{
		   		max=count;
		   		b=a[i];
		   	}
		   	count==0;
		   }
	   }
	   printf("mejority is %d",b);
	   return 0;
}
