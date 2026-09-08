#include <stdio.h>

int main(){

int a,b;

printf("Enter the value of a : ");
scanf("%d", &a);

printf("Enter the value of b : ");
scanf("%d", &b);

printf("Value of a,b before swap : %d,%d \n ", a,b);

a=a+b;
b=a-b;
a=a-b;

printf("Value of a,b after swap : %d,%d \n ", a,b);


return 0;
}
