#include<stdio.h>
#include<conio.h>
void power(int x,int y,int z);
int main()
{
	int x,y,z;
	printf("Enter the value of x\n");
	scanf("%d",&x);
	printf("Enter the value of y\n");
	scanf("%d",&y);
	printf("Enter the value of z\n");
	scanf("%d",&z);
	power(x,y,z);
}
void power(int x,int y,int z)
{
	int result=1,i;
	for(i=1;i<=(y+z);i++)
	result*=x;
	printf("%d^(%d+%d)=%d",x,y,z,result);
	return 0;
}
