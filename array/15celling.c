//WACP to find the ceiling in a sorted array.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,temp;
	printf("Enter the array element\n");
	for(i=0;i<5;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 printf("Display the array element\n");
	 for(i=0;i<5;i++)
	 {
	 	printf("a[%d]   %d\n",i,a[i]);
	 }
	  for(i=0;i<5;i++)
	  {
	  	for(j=(i+1);j<5;j++)
	  	{
	  		if(a[i]>a[j])
	  		{
	  			temp=a[i];
	  			a[i]=a[j];
	  			a[j]=temp;
			  }
		  }
	  }
	  printf("After ascending order\n");
	  for(i=0;i<5;i++)
	  {
	  	printf("a[%d]   %d\n",i,a[i]);
	  }
	    for(i=0;i<5;i++)
	    {
          printf("\n number = %d",i);
		  
            for(j=0;j<5;j++)
	    	 {
	             if( i<=a[j])
	     {
	     	printf("celling = %d",a[j]);
	     	break;
		 }
		 if(j==5)
		 {
		 	printf("celling = -1");
		 	break;
		 }
	}
      	printf("\n");
      }
      	return 0;
}


