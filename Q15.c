#include <stdio.h>

int main(){

char a;
printf("Enter a character : ");
scanf(" %c", &a);

if(a>='A' && a<='Z'){

printf("It is a Uppercase alphabet. \n");

}
else if (a>='a' && a<='z'){
printf("It is a Lowercase alphabet. \n");
}
else if(a>='0' && a<='9'){

printf("It is a digit. \n");

}

else{

printf("It is a Special Character. \n");

}

return 0;
}
