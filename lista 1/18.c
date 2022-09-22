#include <stdio.h>
#include <stdlib.h>
int main () {

float raiz , peso , altura , IMC;

printf("coloque o seu peso:>");
scanf("%f" , &peso);
printf("coleque a sua altura");
scanf("%f" , &altura);
IMC = peso / (altura * altura);

if (IMC <= 20)
printf("ABAIXO DO PESO");

if (IMC >20 && IMC <=25 )
printf("PESO NORMAL");

if (IMC >25 && IMC <=30)
printf("SOBRE O PESO");

if (IMC > 30 && IMC <= 40)
printf("OBESO");

if (IMC >40)
printf("OBSO MORBIDO");
printf("\n");
  system("pause");
    return 0;
}