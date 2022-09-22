#include <stdio.h>
#include <stdlib.h>
int main() {

int idade;
printf("\ndigite a sua idade:>");
scanf("%d" , &idade);
printf("\n\n");
{
if (idade < 18)
printf("menor de idade\n");

if (idade >= 18)
printf("maior de idade\n");

if (idade >= 65)
printf("pessoa idosa\n");
}
{
if (idade < 16)
printf("nao eleitor\n");

if (idade >= 18 && idade < 65)
printf("eleitor obrigatorio\n");
}


{
if (idade >= 16 && idade <= 18)
printf("eleitor facultativo\n");
if (idade > 65)
printf("eleitor facultativo\n");
}
printf("\n\n\n");
printf("\n");
  system("pause");
    return 0;
}