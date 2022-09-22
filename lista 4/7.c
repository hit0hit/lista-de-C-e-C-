#include <stdio.h>
#include <stdlib.h>
int main () {
int codigo;
printf("digite o codigo:>>");
scanf("%d" , &codigo);

switch (codigo)
{
case 1:
    printf("alimento nao-perecivel");
    break;
case '2,3':
    printf("alimento perecivel");
    break;
case 4:
    printf("alimento perecivel");
    break;
case 5:
    printf("vestuario");
    break;
case 6:
    printf("vestuario");
    break;
case 7:
    printf("higiene pessoal");
    break;
case 8:
    printf("limpeza e utensilios domesticos");
    break;
case 9:
    printf("limpeza e utensilios domesticos");
    break;
case 10:
    printf("limpeza e utensilios domesticos");
    break;
case 11:
    printf("limpeza e utensilios domesticos");
    break;
case 12:
    printf("limpeza e utensilios domesticos");
    break;
case 13:
    printf("limpeza e utensilios domesticos");
    break;
case 14:
    printf("limpeza e utensilios domesticos");
    break;
case 15:
    printf("limpeza e utensilios domesticos");
    break;

default:
printf("codigo invalido");
    break;
}
printf("\n");
system("pause");
return 0;
}