#include <stdlib.h>
#include <stdio.h>
int main(void) {

float produto , desconto;

printf("Informe o valor do produto: \n");
scanf("%f" , &produto);

desconto = (produto * 0.9 / 100);

printf("desconto: %.2f\n" , desconto);
system("pause");
return 0;
}