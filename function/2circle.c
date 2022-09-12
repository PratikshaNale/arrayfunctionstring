//WACP to find diameter circumfarance and area of circle using function.
#include<stdio.h>
#include<math.h>
double find_Diameter(double radius);
double find_circumfarance (double radius);
double find_areaofcircle(double radius);
int main()
{
	float radius,area,circumfarance,Diameter;
	printf("Enter the radius of circle\n");
	scanf("%f",&radius);
	Diameter=find_Diameter(radius);
	circumfarance=find_circumfarance(radius);
	area=find_areaofcircle(radius);
	printf("Diameter of circle is %f\n",Diameter);
	printf("circumfarance of circle is %f\n",circumfarance);
	printf("area of circle is %f\n",area);
	return 0;
	
}
double find_Diameter(double radius)
{
	return 2*radius;
}
double find_circumfarance (double radius)
{
	return 2*3.14*radius;
}
double find_areaofcircle(double radius)
{
	return 3.14*radius*radius;
}
