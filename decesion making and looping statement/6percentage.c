//6. Find total marks & percentage
#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,per,total;
	printf("Enter the five subject\n");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	total=s1+s2+s3+s4+s5;
	per=total/5;
	printf("total is %d\n",total);
	printf("percentage is %d\n",per);
	if(per<35)
	{
		printf("fail");
	}
	else
	{
		printf("pass");
	}
	 return 0;
}
