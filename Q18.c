#include <stdio.h>

int main(){

int a;

printf("Enter the percentage : ");
scanf("%d", &a);


if(a>=90){

printf("Grade A \n");

}

else if(a>=80){

printf("Grade B \n");

}

else if(a>=70){

printf("Grade C \n");

}

else if(a>=60){

printf("Grade D \n");

}

else if(a<=59){

printf("Grade F \n");

}

return 0;
}
