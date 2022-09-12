//4. Calculate volume of sphere formula V = 4/3 * pi * r^3

#include<stdio.h>
int main()
{
	float v,r;
	printf("Enter the radius\n");
	scanf("%f",&r);
	v=(4*22*r*r*r)/(7*3);
	printf("volume of sphere is %f",v);
	return 0;
	
}
