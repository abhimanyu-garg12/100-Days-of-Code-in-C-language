#include <stdio.h>

int main()
{
int a,b,c;

printf("Enter the first number : ");
scanf("%d", &a);

printf("Enter the second number : ");
scanf("%d", &b);

printf("Numbers before swap : %d, %d \n", a, b);

c=b;
b=a;
a=c;

printf("Numbers after swap : %d, %d \n", a, b);
return 0;
}
