//WACP to input the 5 value in ascending order and store in array and find out the missing element.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,c,end, start;
	printf("Enter the array element\n");
	for(i=0;i<5;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 printf("display the array element\n");
	 for(i=0;i<5;i++)
	  {
	  	printf("a[%d]  %d\n",i,a[i]);
	  }
	  //logic for ascending order
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
	   printf("After ascending order\n");
	   for(i=0;i<5;i++)
	    {
	    	printf("a[%d]  %d\n",i,a[i]);
		}
		 printf("findout missing element\n");
		 for(i=0;i<5;i++)
		  {
		  	end=a[i+1];
		  	for(start=a[i]+1;start<end;start++)
		  	{
		  		if(a[i]!=end)
		  		 {
		  		 	printf("%d\t",start);
					   
				}
			  }
		  }
		return 0;
}
