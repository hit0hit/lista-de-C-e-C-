#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float a , g;
  int b;
  
  printf("o valor a ser convertido em real:>>");
  scanf("%f" , &a);
  printf("\n1 - converter para dolar\n2 - converter para euros\n");
  scanf("%d" , &b);

  switch (b) {
    case 1:
    g = a / 3.05;
    printf("valor em dolar:%.2f" , g);
    break;

    case 2:
    g = a / 3.31;
    printf("valor em euros:%.2f" , g);
    break;
  }
  printf("\n");
  system("pause");
  return 0;
}