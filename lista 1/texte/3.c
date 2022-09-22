#include <stdio.h>
#include <math.h>

int main(void) {

  int n;
double resultado;

printf("Digite um numero:\n");
scanf("%d", &n);

if( n > 0 || n ==0){
resultado = sqrt(n);

}else if(n < 0){
  resultado = n*n;
}

printf("resultado: %2.f\n", resultado);
return 0;
}
