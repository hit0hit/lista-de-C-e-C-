#include <stdio.h>
#include <stdlib.h>
int main () {

float media1 , media2 , nota;
printf("digite a media1:>>");
scanf("%f" , &media1);
printf("digite a media2:>>");
scanf("%f" , &media2);

nota = (media1 + media2)/2;

if (nota >=0.0 && nota <=4.0)
printf("reprovado");
if (nota >=4.1 && nota <=7.0)
printf("exame");
if (nota >=7.1 && nota <=10.0)
printf("aprovado");
printf("\n");
system("pause");
    return 0;
}