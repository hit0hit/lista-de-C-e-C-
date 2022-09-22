#include <stdio.h>
#include <stdlib.h>
int main () {

int numero1 , numero2 , resposta;
char operador;

printf("digite os numero X");
scanf("%d" , &numero1);

printf("digite os numero CARACTER");
scanf(" %c" , &operador);

printf("digite os numero Y");
scanf("%d" , &numero2);


switch (operador)
{
case '*':
resposta = numero1 * numero2;
   printf("resposta=%d" , resposta);
    break;
case '/':
resposta = numero1 / numero2;
   printf("resposta=%d" , resposta);
    break;
case '-':
resposta = numero1 - numero2;
   printf("resposta=%d" , resposta);
    break;
case '+':
resposta = numero1 + numero2;
   printf("resposta=%d" , resposta);
    break;

default:
printf("caracter nao encontrado");
    break;
}
printf("\n");
system("pause");
    return 0;
}