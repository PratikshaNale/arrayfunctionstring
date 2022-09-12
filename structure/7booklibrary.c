/*7.	Write a menu driven program in 'C' which shows the working of library. The menu option should be

i) Add book details.
ii) Display book details.
iii) List all books of given author.
iv) List the count of books in the library.
v) Exit.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct book
{
	int bno;
	char bauother[20];
	char bname[20];
	int nopage;
};
 int main()
 {
 	struct book b[20];
	 int ch,n,i,count=0;
	 char temp[40];	
	 do
{ printf("\t\tMENU\n") ;
printf("\n            \n");
 	printf("1 add book details\n");
 	printf("2 display book details\n");
 	printf("3 list all books of given author\n");
 	printf("4 list the count of books in the library\n");
 	printf("5 Exit\n");
 	printf("\n -------------------------------------\n") ;
 	printf("Enter your choice\n");
 	scanf("%d",&ch);
 	switch(ch)
 	{
 		case 1:
 			printf("\nhow many record add\n");
 			scanf("%d",&n);
 			printf(" -------------------------------------\n") ;
 			printf(" \nAdd Details of %d Book\n",n) ;
 			printf(" -------------------------------------\n") ;
 			for(i=0;i<n;i++)
 			{
 				printf("\nEnter the book no\n ");
 				scanf("%d",&b[i].bno);
 				printf("Enter the auther name\n");
 				scanf("%s",&b[i].bauother);
 				printf("Enter book  name\n");
 				scanf("%s",&b[i].bname);
 				printf("Enter the no of pages\n");
 				scanf("%d",&b[i].nopage);
 				printf(" -------------------------------------\n") ;
			}
			 break;
	   case 2:
	 	printf("\nDisplay book details\n");
	 	printf(" -------------------------------------\n") ;
	 	 printf(" \nBook No. Book Name\t Author Name\tNo. of Pages\n");
	 	 printf(" -------------------------------------\n") ;
	 	for(i=0;i<n;i++)
	 	{
	 		printf("%d\t%s\t%s\t%d",b[i].bno,b[i].bauother,b[i].bname,b[i].nopage);
		 }
		 printf("\n\n") ;
		 break;
		 case 3:
		 	printf(" Enter the Authoer name\n ");
		 	scanf("%s",temp);
		 	for(i=0;i<n;i++)
		 	{
		 		if(strcmp(b[i].bauother,temp)==0)
		 		{
		 			printf("\n%s\n",b[i].bname);
			
	            }
			 }
			 break;
			 case 4:
			 	for(i=0;i<n;i++)
			 	{
			 	 count++;
				 }
				 printf("Total number of books in library %d\n",count);
				 printf(" -------------------------------------\n") ;
				 break;
				  case 5 :
            exit(0) ;
      }
}while(ch != 5) ;
return 0 ;
}


