#include <stdio.h>

int main()
{
int n, i, o = 1, s = 0;

printf("Enter the value of n : ");
scanf("%d", &n);

for (i=1; i<=n; i++)
{
s = s+o;
o= o +2;

}

printf("Sum : %d \n", s);

return 0;
}
