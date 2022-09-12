//9. Find perimeter of rectangle
#include<stdio.h>
int main()
{
	int p,width,length;
	printf("Enter the width and height\n");
	scanf("%d%d",&width,&length);
	p=2*(length+width);
	printf("perimeter of rectangle %d\n",p);
	return 0;
}
