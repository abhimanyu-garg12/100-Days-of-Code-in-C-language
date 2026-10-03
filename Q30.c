#include <stdio.h>

int main(){
int a, r, rs;

printf("Enter the number to reverse: ");
scanf("%d", &a);

while(a!=0){

r= a%10;
rs=rs*10+r;
a=a/10;

}
printf("The Reversed number: %d\n", rs);

return 0;
}
