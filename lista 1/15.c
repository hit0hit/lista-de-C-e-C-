#include <stdio.h>
#include <stdlib.h>
int main () {

int valor;
int nota100=0 , nota50=0 , nota10=0 , nota5=0 , nota1=0;

    printf("digite seu valor:");
        scanf("%d" , &valor);
    
            nota100 = (int) (valor/100);

    if (valor%100 != 0)
        nota50 = (int) ((valor%100)/50);

            if ((valor%100)/50)
                nota10 = (int) (((valor%100)%50)/10);

                    if (((valor%100)%50)/10)
                        nota5 = (int) ((((valor%100)%50)%10)/5);

                            if ((((valor%100)%50)%10)/5)
                                nota1 = (int) (((((valor%100)%50)%10)%5)/1);

    printf("%d nota de R$100\n" , nota100);
        printf("%d nota de R$50\n" , nota50);
            printf("%d nota de R$10\n" , nota10);
                printf("%d nota de R$5\n" , nota5);
                    printf("%d nota de R$1\n" , nota1);

printf("\n");
  system("pause");
    return 0;
}