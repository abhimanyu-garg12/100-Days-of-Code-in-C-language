#include <stdio.h>
#include <math.h>

int main()
{
int a, b,c;
float d, r1, r2;
printf("Enter the coefficient of x^2 : ");
scanf("%d", &a);

printf("Enter the coefficient of x : ");
scanf("%d", &b);

printf("Enter the constant number : ");
scanf("%d", &c);

d=(b*b)-(4*a*c);

if(d>0){
r1=(-b + sqrt(d))/(2*a);
r2=(-b - sqrt(d))/(2*a);

printf("The Roots of Equation are Real and Different. \n");
printf("Root1 : %.2f \n", r1);
printf("Root2 : %.2f \n", r2);
}
else if(d==0){

r1 = (-b)/(2*a);

printf("The Roots of Equation are Real and Equal. \n");

printf("Root : %.2f \n", r1);

}

else{

printf("The Roots of Equation are Complex and Imaginary. \n");

}




return 0;
}
