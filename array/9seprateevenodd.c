//WACP to input the array to seprate odd even integer in seprate array.
#include<stdio.h>
#include<conio.h>
int main()
{
	 int size,i,j=0,k=0,odd,even,count;
	 int  b[10],c[10];
	printf("Enter the size array\n");
	scanf("%d",&size);
	int a[size];
	printf("Eneter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(a[i]%2==0)
		 {
		 	b[j]=a[i];
		 	j++;
		 }
		 else
		 {
		 	c[k]=a[i];
		 	k++;
		 }
		 
    }
	     printf("\nGiven no is even \n");
		    for(i=0;i<j;i++)
		     {
		     	printf("%d\n",b[i]);
			 } 
		    printf("\nGiven no is odd\n");
		    for(i=0;i<k;i++)
		    {
		    	printf("%d\n",c[i]);
			}
			printf("\n\n");
            return 0;
}
