//5. Find surface area of sphere formula of surface area is 4 * 3.14 * r * r
#include<stdio.h>
int main()
{
 float radius,area,pi=3.14;
 printf("Enter the radius of sphere\n");
 scanf("%f",&radius);
 area=4*pi*radius*radius;
 printf("surface area of sphere %2f\n",area);
 return 0;
}
