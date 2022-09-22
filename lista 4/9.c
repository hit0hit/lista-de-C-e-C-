#include <stdio.h>
#include <stdlib.h>
int main () {
int idade;

printf("escolha a opcao que tenha a sua idade:\n1: com menos de 10 anos\n2: de 10 a 30 anos\n3: de 40 a 60 anos\n4: com mais de 60\ndigite a opcao:>>");
scanf("%d" , &idade);

switch (idade)
{
case 1:
   printf("criancas com menos de 10 anos pagam R$80");
    break;
case 2:
   printf("conveniados com idade entre 10 e 30 anos pagam R$50");
    break;
case 3:
   printf("conveniados com idade entre 40 e 60 anos pagam R$95");
    break;
case 4:
printf("conveniados com mais de 60 anos pagam R$130");
    break;

default:
printf("nao tem essa opcao");
    break;
}
printf("\n");
system("pause");
    return 0;
}