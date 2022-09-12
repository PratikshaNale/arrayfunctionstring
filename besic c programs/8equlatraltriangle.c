//8. Find area of equilateral triangle
#include<stdio.h>
#include<math.h>
int main()
{
	 float area,side;
	printf("Enter the side of triangle\n");
	scanf("%f",&side);
	area=(sqrt(3)/4)*(side*side);
	printf("area of equilatral traiangle %f",area);
	return 0;
}
