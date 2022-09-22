#include <stdio.h>

int main(void) {
  int a;
  printf("numero:\t");
  scanf("%d" , &a);

  if(a == 5 || a == 200 || a == 400){
  printf("esse numero e igual a 5 , 200 , 400\n");
  }else{
    printf("esse numero nao e igual a 5 , 200 , 400\n");
  }

  if(a > 500 && a < 1000){
    printf("esse numero estar entre 500 a 1000\n");
  }else{
    printf("esse numero nao estar entre 500 a 1000");
  }
  return 0;
}