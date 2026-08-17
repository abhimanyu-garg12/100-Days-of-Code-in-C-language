#include <stdio.h>

int main()
{

int a,b;

printf("Enter the length of Rectangle : ");
scanf("%d", &a);

printf("Enter the breadth of Rectangle : ");
scanf("%d", &b);

printf("Perimeter : %d \n", 2*(a+b));
printf("Area : %d \n", a*b);


return 0;
}
