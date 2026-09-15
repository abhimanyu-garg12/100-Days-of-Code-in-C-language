#include <stdio.h>

int main()
{

float a,b;

printf("Enter the Cost Price : ");
scanf("%f", &a);

printf("Enter the Selling Price : ");
scanf("%f", &b);

if (a<=b)
{
printf("Profit = %f %\n",((b-a)/a)*100);
}

else
{
printf("Loss = %f %\n",((a-b)/a)*100);
}

return 0;
}
