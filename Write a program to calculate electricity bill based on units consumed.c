/*
Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
*/
#include <stdio.h>

int main()
{

int a;
printf("Enter the number of units consumed : ");
scanf("%d", &a);

if(a<=100)
{
printf("Bill : ₹ %d\n", a*5);
}
else if(a<=200)
{
printf("Bill : ₹ %d\n", 500+(7*(a-100)));
}
else if(a<=300)
{
printf("Bill : ₹ %d\n", 1200+(10*(a-200)));
}

else
{
printf("Bill : ₹ %d\n", 2200+(12*(a-300)));
}

return 0;
}
