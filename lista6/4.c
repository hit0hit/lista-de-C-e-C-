#include <stdio.h>
int main (){
//int d , g;
char a , b , c , d,g;
int h=0,deposito=0;

do{
printf("\na consulta saldo,\nb saque\nc deposito\nd sair.\n");
scanf(" %c" , &g);

switch (g)
{
 case ('a'):
 system("cls");
 //consulta saldo
 printf("\nseu saldo e ==> %d\n\n" , h);
 
 system("pause");
 break;
 case ('b'):
 system("cls");
 //saque
 printf("quantos vai sacar de dinheiro ==>");
 scanf("%d" , &deposito);
 h-=deposito;
 system("\n\npause");
 break;
 case ('c'):
 system("cls");
//depósito
printf("quantos vai depositar ==>");
scanf("%d", &deposito);
h+=deposito;
system("\n\npause");
 break;

default:
    break;
}system("cls");



}while(g != ('d'));


}
