//15 find total marks and percentage
#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,total,per;
	printf("Enter the marks of  five subject\n");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	total=s1+s2+s3+s4+s5;
	per=total/5;
	printf("total marks is %d\n",total);
	printf("percentage is %d\n",per);
	return 0;
}
