/*5.	Write a 'C' program to accept customer details such as: Account_no, Name, Balance using structure. 
Assume 3 customers in the bank. Write a function to print the account no. and name of each customer whose balance < 100 Rs.*/
#include<stdio.h>
struct bank
{
	int ano;
	char name[20];
	int balance;
};
 struct bank a[3];
 int main()
 {
 	int i;
 	printf("Enter the account no name and balance\n");
 	for(i=0;i<3;i++)
 	{
 		scanf("%d%s%d",&a[i].ano,&a[i].name,&a[i].balance);
	 }
	 printf("Display the bank details\n");
	 for(i=0;i<3;i++)
	 {
	 	printf("\naccount no %d name %s balance%d",a[i].ano,a[i].name,a[i].balance);
	 }
	 for(i=0;i<3;i++)
	 {
	    if(a[i].balance<100)
	 {
	 	printf("\naccount no %d name %sand balance %d",a[i].ano,a[i].name,a[i].balance);
	 }
	
}
	return 0;
 }
