#include <stdio.h>
#include <stdlib.h>

int main() {
int valor1 , valor2 , valor3 , r , s , resultado;

printf("valor a:>>");
scanf("%d" , &valor1);
printf("valor b:>>");
scanf("%d" , &valor2);
printf("valor c:>>");
scanf("%d" , &valor3);

r=(valor1+valor2)^2;
s=(valor2+valor3)^2;
resultado=r+s/2;

printf("o resultado e: %d" , resultado);
system("pause");
return 0;
}
