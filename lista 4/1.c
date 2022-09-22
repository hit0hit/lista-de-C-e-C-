#include <stdio.h>
#include <stdlib.h>
int main () {
int numero;

printf("digite o numero entre 0 e 5:>>");
scanf("%d" , &numero);

switch (numero)
{
case 0:
   printf("\nzero\n");
    break;
case 1:
   printf("\num\n");
    break;
case 2:
   printf("\ndois\n");
    break;
case 3:
   printf("\ntres\n");
    break;
case 4:
   printf("\nquatro\n");
    break;
case 5:
   printf("\ncinco\n");
    break;
default:
printf("\n\nnumero nao ta entre 0 e 5\n\n");
    break;
}
printf("\n");
system("pause");
    return 0;
}