#include <stdio.h> 
#include <math.h>

int main(){

float p,r,t,a;

printf("Enter the Principal Value : ");
scanf("%f", &p);

printf("Enter the  Rate of Interest : ");
scanf("%f", &r);

printf("Enter the time period : ");
scanf("%f", &t);

printf("Simple Interest : %f \n", (p*r*t)/100);

a=p*pow(1+(r/100),t);

printf("Compound Interest : %f \n", a-p );

return 0;
}
