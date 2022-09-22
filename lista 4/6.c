#include <stdio.h>
#include <stdlib.h>
int main () {

int dia;
printf("digite o dia");
scanf("%d" , &dia);
//dia = 1,2,3,4,5,6,7;

if (dia >= 2 && dia <= 6){
printf("dia util\n");
}
if (dia == 1){
printf("fim de semana\n");
}
if (dia == 7){
printf("fim de semana\n");
}
if (dia > 7){
printf("dia invalido");
}
printf("\n");
system("pause");
return 0;
}