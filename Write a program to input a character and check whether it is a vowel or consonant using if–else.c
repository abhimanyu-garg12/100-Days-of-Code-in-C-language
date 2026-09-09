#include <stdio.h>

int main(){

char c;

printf("Enter the Character : ");
scanf("%c", &c);

if((c>='A' && c<='Z') || (c>='a' && c<='z'))
{
if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' ||c=='I' ||c=='O' || c=='U'){

printf("It's a Vowel \n");

}
else {

printf("It's a Consonant \n");

}
}
else {

printf("Invalid Input \n");

}



return 0;
}
