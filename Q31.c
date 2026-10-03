#include <stdio.h>

int main()
{
int n, r, no=0, p = 1;
printf("Enter the number: ");
scanf("%d", &n);

while(n != 0)
{
r=n%2;
no=no+r*p;
p=p*10;
n=n/2;

}

printf("Binary: %d\n", no);


return 0;
}
