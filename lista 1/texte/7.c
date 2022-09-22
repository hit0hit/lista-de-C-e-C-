#include <stdio.h>

int main(void) {
  float a , n , m ,l;
  printf("saldo");
  scanf("%f" , &a);

  if(a >= 0 && a < 200){
  printf("nenhum crédito");
  n = 0;
  }
  if(a > 201&& a <400){
 n = 0.2 * a;
 
  }
if(a > 401 && a < 600){
n = 0.3 * a;

 }
if(a > 601){
n = 0.4 * a;
}
printf("saldo:R$%.2f\n" , a);
printf("credito: R$%.2f" , n);
  return 0;
}