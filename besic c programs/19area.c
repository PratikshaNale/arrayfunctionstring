//19. Calculate area of circle
#include<stdio.h>
int main()
{
	int area,r;
	float pi=3.14;
	printf("Enter the radius of circle\n");
	scanf("%d",&r);
	area=r*r*pi;
	printf("area of circle is %d",area);
	return 0;
	
}
