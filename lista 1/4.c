#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a;

        printf("numero:>>");
          scanf("%d" , &a);
   if(a > 20 && a < 90){
   printf("esse numero esta entre 20 e 90");
   }else{
   printf("esse numrro nao estar entre 20 e 90");
   }
   printf("\n");
  system("pause");
  return 0;
}