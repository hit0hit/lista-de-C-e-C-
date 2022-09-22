#include <stdlib.h>
#include <stdio.h>
int main(void) {
int o , p , lucro , convite;

printf("o custo do espetaculo: ");
scanf("%d" , &o);
printf("preço do convite: ");
scanf("%d" , &p);

convite = (o / p);
lucro = (o * 1.23)/p;

printf("A quantidade de convites: %d" , convite);
printf("\nconvites que devem ser vendidos para obter o lucro: %d\n" , lucro);
system("pause");
return 0; 
}