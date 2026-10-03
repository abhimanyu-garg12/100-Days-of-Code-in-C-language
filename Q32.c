#include <stdio.h>
int main(){

int n, r, rev =0,o;

printf("Enter the number: ");
scanf("%d", &n);

o=n;

while(n!=0){

r=n%10;
rev=rev*10+r;
n=n/10;

}

if(o==rev){
printf("It is a palindrome number.\n");
}
else{
printf("It is not a palindrome number.\n");
}


return 0;

}

