#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {

  int n;
double resultado;

printf("Digite um numero:>>");
scanf("%d", &n);

if( n > 0 || n ==0){
resultado = sqrt(n);

}else if(n < 0){
  resultado = n*n;
}

printf("resultado: %2.f\n", resultado);
system("pause");
return 0;
}
