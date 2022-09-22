#include <stdio.h>

int main(void) {
  int n , b , x;

  printf("numero1: \t");
  scanf("%d" , &n);
  printf("numero2: \t");
  scanf("%d" , &b);

x = n + b;

  if(x > 20){
    printf("numero 8%d" , x + 8);
  }
  if(x <= 20){
    printf("numero 5 %d" , x - 5);
  }



  return 0;
}