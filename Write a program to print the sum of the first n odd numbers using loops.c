//Write a program to print the sum of the first n odd numbers using loops.

#include <stdio.h>

int main()
{
int i, n, e = 2, p = 1;

printf("Enter the value of n : ");
scanf("%d", &n);

for(i=0;i<n;i++)
{
p = p*e;
e=e+2;

}
printf("Product : %d \n", p);


return 0;
}
