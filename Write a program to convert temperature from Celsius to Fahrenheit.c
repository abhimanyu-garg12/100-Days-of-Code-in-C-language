#include <stdio.h>

int main() 
{

float a;
printf("Enter the temperature in Celsius : ");
scanf("%f", &a);

printf("Temperature in Fahrenheit : %f \n", (a*(9/5))+32);


return 0;
}
