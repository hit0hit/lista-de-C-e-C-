#include <stdio.h>
#include <stdlib.h>
int main () {

float M , F , formula1 , formula2;

printf("digite a sua altura M");
scanf("%f" , &M);
printf("digite a sua altura F");
scanf("%f" , &F);

formula1 = (72.7*M) - 58;
formula2 = (62.1*F) - 44.7;

printf("seu peso ideal para homens:%.2f\n" , formula1);
printf("seu peso ideal para mulher:%.2f" , formula2);
printf("\n");
  system("pause");
return 0;
}