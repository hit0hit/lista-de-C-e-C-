#include <stdio.h>
int main () {

float M , F , formula1 , formula2;

printf("digite a sua altura M:\t");
scanf("%f" , &M);
printf("digite a sua altura F:\t");
scanf("%f" , &F);




formula1 = (72.7*M) - 58;
formula2 = (62.1*F) - 44.7;

printf("peso ideal para homens:%.2f\n" , formula1);
printf("peso ideal para mulher:%.2f" , formula2);

return 0;
}