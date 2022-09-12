//WACP to delete an element at desired postion of  array.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,index,len,c;
	printf("Enter the array element is\n");
	len=sizeof(a)/sizeof(int);
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
	 printf("\nAfter sorting array\n");
	 for(i=0;i<len;i++)
	 {
	 	printf("a[%d]   %d\n",i,a[i]);
	 }
	 printf("\n\t Enter the index for delete value\n");
	 scanf("%d",&index);
	 for(i=index;i<len;i++)
	 {
	 	a[i]=a[i+1];
	 }
	 printf(" display the value After deleting value\n ");
	 for(i=0;i<len;i++)
	 {
	 	printf("a[%d]   %d\n",i,a[i]);
	 }
	 return 0;
	 
}

