//7. Find area of right angle triangle
#include<stdio.h>
int main()
{
	int base,height,area;
	
	printf("Enter the base\n");
	scanf("%d",&base);
	printf("Enter the height\n");
	scanf("%d",&height);
	area=0.5*base *height;
	printf("area of right angle triangle %d\n",area);
	return 0;
	
}

