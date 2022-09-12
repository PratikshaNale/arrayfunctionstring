//10. Print grade of employee
#include<stdio.h>
int main()
{
  int sal;
  printf("Enter the salary of employee\n");
  scanf("%d",&sal);
  if(sal>=20000)
  {
  	printf("Employee gread is""A");
  }	
  else if(sal>=10000)
  {
  	printf("Employee gread ""B");
  }
  else if(sal>=5000)
  {
  	printf("Employee greade""c");
  }
  else
  {
  	printf("gread is employee ""B");
  }
  return 0;
}
