#include <stdio.h>
#include <stdlib.h>
int main () {

int  senha , a;

printf("digite uma senha:");
scanf("%d" ,&senha);

printf("confirme sua senha");
scanf("%d" , &a);


if (senha == a){
printf("senha cadastrada!:");
} else {
printf("senha nao confere com a primeira senha digitada :");
}
printf("\n");
  system("pause");
    return 0;
}