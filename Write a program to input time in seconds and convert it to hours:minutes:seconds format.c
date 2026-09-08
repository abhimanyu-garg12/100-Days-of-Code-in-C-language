#include <stdio.h>

int main (){

int h,m,s,a;

printf("Enter total time in Seconds : ");
scanf("%d", &a);

h=a/3600;
a=a%3600;
m=a/60;
a=a%60;
s=a;

printf("Time : %d:%d:%d\n", h,m,s);
return 0;
}
