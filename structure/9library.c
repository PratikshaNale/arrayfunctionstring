/*9.	Write a 'C' program to accept book details for 'n' books as book_title, author, publisher and cost. 
Assign the accession number to each book in increasing order. Display these details as,

1. Books of a specific author
2. Books by a specific Publisher
3. All Books costing Rs. 500 and above.
4. All Books.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct book
{
   int bno,bcost,baccno;
   char bname[20],bpub[20],bauthor[20];
}p[10];
int main()
{
   int n,i,ch;
   char pubname[20],authorname[20];
   printf("Enter the limit of book\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   	printf("Enter the details of book %d",i+1);
   	printf("\nbook no\n");
   	scanf("%d",&p[i].bno);
   	printf("Book name\n");
   	scanf("%s",&p[i].bname);
   	printf("book author\n");
   	scanf("%s",&p[i].bauthor);
   	printf("Accasiation no\n");
   	scanf("%d",&p[i].baccno);
   	printf("book publication\n");
   	scanf("%s",p[i].bpub);
   	printf("cost\n");
   	scanf("%d",&p[i].bcost);
   }
   while(1)
{
printf("\n\t\tmenu\n");
printf("\n 1.books for a specific author\n");
printf("\n 2. books for specific publisher\n");
printf("\n 3All book costing rs.500 &above\n");
printf("\n 4.All books\n");
printf("\n 5.exit");
printf("\nEnter your choice\n");
scanf("%d",&ch);
switch(ch)
{
	case 1:
		printf("Enter author name");
		scanf("%s",authorname);
		for(i=0;i<n;i++)
		{
			if(strcmp(p[i].bauthor,authorname)==0)
			{
				printf("\n book number %d\n book name %s\n accessiation number %d\n",p[i].bno,p[i].bname,p[i].baccno);
			}
			break;
			case 2:
				printf("Enter publication name\n");
				scanf("%s",pubname);
				for(i=0;i<n;i++)
				{
					if(strcmp(p[i].bpub,pubname)==0)
					{
						printf("\n book number %d\n book name %s\n accessiation number %d\n",p[i].bno,p[i].bname,p[i].baccno);	
					}
					break;
					case 3 :
						for(i=0;i<n;i++)
						{
							if(p[i].bcost>=500)
							{
								printf("book name %s\n",p[i].bname);
								printf("book no %d\n",p[i].bno);
								printf("Accession no %d",p[i].baccno);
								printf("cost %d\n",p[i].bcost);
							}
							break;
							case 4:
								for(i=0;i<n;i++)
								{
							    printf("book name %s\n",p[i].bname);
								printf("book no %d\n",p[i].bno);
								printf("Accession no %d",p[i].baccno);
								printf("cost %d\n",p[i].bcost);
								printf("publisher %s\n",p[i].bpub);
								printf("Author %s\n",p[i].bauthor);
									
								}
								break;
								case 5:
									exit(0);
								}
							}
					
	
	}
	}
	}						return 0;
}
								
		





