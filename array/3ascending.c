//WACP to enter the array element and print it ascending order.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,c;
	printf("Enter the array element\n");
	for(i=0;i<5;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	  printf("Display the array\n");
	  for(i=0;i<5;i++)
	  {
	  	printf("a[%d]  %d\n",i,a[i]);
	  }
	  for(i=0;i<5;i++)
	   {
	   	 for( j=(i+1);j<5;j++)
	   	  {
	   	  	if(a[i]>a[j])
			 {
			 	c=a[i];
	            a[i]=a[j];
	            a[j]=c;
	  
			 }
		 }
	}
	printf("\nascending order\n");
	for(i=0;i<5;i++)
	 {
	 	printf("a[%d]  %d\n",i,a[i]);
	 }
	return 0;
}
		
	   
	  
	

