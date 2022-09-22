#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n , b , x;

  printf("numero1: \t");
  scanf("%d" , &n);
  printf("numero2: \t");
  scanf("%d" , &b);

x = n + b;

  if(x > 20){
    printf("numero:>>%d" , x + 8);
  }
  if(x <= 20){
    printf("numero:>>%d" , x - 5);
  }
  printf("\n");
  system("pause");
  return 0;
}