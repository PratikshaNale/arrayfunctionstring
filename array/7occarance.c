//WACP to eneter the 10 element print the occarances of every element.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],count=0,i,svalue,index;
	printf("Enter the value in array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the search value\n");
	scanf("%d",&svalue);
	for(i=0;i<10;i++)
	 {
	 	if(a[i]==svalue)
	 	{
	 		count++;
	 		index=i;
		 }
	 }
	 printf("Element %d found %d\n",a[index],count);
	 return 0;
}
