//WACP to rotate an arra by n position.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,temp,len;
	printf("Enter the  length of the array\n");
	scanf("%d",&len);
	int a[len];
	printf("Enter the array element\n");
	for(i=0;i<len;i++)
    scanf("%d",&a[i]);
	printf("Enter the index of rotation\n");
	scanf("%d",&n);
    printf("original array \n");
	for(i=0;i<len;i++)
	{
		printf("%d",a[i]);
	}
	 for(i=0;i<len;i++);
	 {
	 j=temp;
	 temp=a[len-1];
	 for(j=len-1;j>0;j--)
	 {
	 	a[j]=a[j-1];
	 }
		 a[0]=temp;	
	}
	 printf("\n");
	 printf("array after circular rotation\n");
	 for(i=0;i<len;i++)
	 {
	 	printf("%d",a[i]);
	 }
	 return 0;
	
}
