/* WACP to convert decimal number to binary using function.*/
#include<stdio.h>
#include<conio.h>
long tobin(int dno)
{
	long bno=0;
	int reminder,f=1;
   while(dno!=0)
   {
   	reminder=dno%2;
   	dno=dno/2;
   	bno=bno+reminder*f;
   	f=f*10;
   }
   return bno;
}
int main()
{
	int dno;
	printf("convert decimal to binary\n");
	printf("\n\n");
	printf("input any decimal number\n");
	scanf("%d",&dno);
	printf("the binary value is %ld\n\n",tobin( dno));
	return 0;
}

