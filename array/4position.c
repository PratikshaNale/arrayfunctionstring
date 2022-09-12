//WACP to insert the element of specified position in array.
#include<stdio.h>
#include<conio.h>
int main()
 {
 	int a[5],i,j,index,value;
 	printf("Enter the array element\n");
 	for(i=0;i<5;i++)
 	 {
 	 	scanf("%d",&a[i]);
	  }
	   printf("Display the array element\n");
	   for(i=0;i<5;i++)
	    {
	    	printf("a[%d]  %d\n",i,a[i]);
		}
		//insertion logic
		printf("Enter the index and value\n");
		scanf("%d%d",&index,&value);
		for(i=4;i>=index;i--)
		 {
		 	a[i+1]=a[i];
		 }
		  a[index]=value;
		  printf("After the inserting\n");
		   for(i=0;i<5;i++)
		   {
		   	printf("a[%d]   %d\n",i,a[i]);
		   }
		return 0;
 }
