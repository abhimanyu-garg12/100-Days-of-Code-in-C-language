#include <stdio.h>

int main(){

int a;
 
printf("Enter the Year : ");
scanf("%d", &a);

if((a%400==0) || (a%4==0 && a%100 != 0))
{
printf("It's a Leap Year \n");
}
else{

printf("It's not a Leap Year \n");

}
return 0;
}
