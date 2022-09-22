#include <stdio.h>
#include <stdlib.h>
int main () {

float valor , lucro;

printf("valor da venda:>");
    scanf("%f" , &valor);

if (valor < 10){
lucro = 0.7 * valor;
} else 
if (valor >= 10 && valor < 30) {
lucro = 0.5 * valor;
} else 
if (valor >= 30 && valor <50) {
lucro = 0.4 * valor;
} else 
if (valor >= 50) {
lucro = 0.3 * valor;
}
printf("valorR$%.2f\nlucroR$%.2f\n" , valor , lucro);
printf("\n");
  system("pause");
    return 0;
}