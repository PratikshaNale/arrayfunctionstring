//WACP to input the five element and reverse it.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,c,temp,start,end,len,mid;
	printf("Enter the array element\n");
	for(i=0;i<5;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 printf("Display the array element\n");
	 for(i=0;i<5;i++)
	 {
	 	printf("a[%d]    %d\n",i,a[i]);
	 }
	 for(i=0;i<5;i++)
	  {
	  	for(j=(i+1);j<5;j++)
	  	{
	  		if(a[i]>a[j])
	  		 {
	  		 	c=a[i];
	  		 	a[i]=a[j];
	  		 	a[j]=c;
			   }
		  }
     } 
	   printf("reverse the array\n");
	   len=sizeof(a)/sizeof(int);
	   end=len-1;
	   mid=len/2;
	   for(start=0;start<end;start++)
	   {
	   	temp=a[start];
	   	a[start]=a[end];
	   	a[end]=temp;
	   	end--;
	   }
	   for(i=0;i<5;i++)
	   {
	   	printf("%d\n",a[i]);
	   }
	   return 0;
}
