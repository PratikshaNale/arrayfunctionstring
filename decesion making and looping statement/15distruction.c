//15. Check if student scored distinction
#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,total,per;
	printf("Enter the five subject marks\n");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	total=m1+m2+m3+m4+m5;
	per=total/5;
	printf("total marks is %d\n",total);
	printf("percentage is %d\n",per);
	  if(m1>=40 && m2>=40 && m3>=40 && m4>=40 && m5>=40)
	  {
	  	printf("pass\n");
	  }
	if(per>75)
	{
		printf("distruction\n");
	}
	else
	{
		printf("fail\n");
	}
	 return 0;
}
