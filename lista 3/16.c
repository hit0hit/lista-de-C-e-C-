#include <stdio.h>
#include <stdlib.h>
int main () {
float salario;
int prestacao;

printf("salario bruto:>R$");
    scanf("%f" , &salario);
        printf("prestacao:>");
            scanf("%d" , &prestacao);

printf("\n\nseu salario bruto:>R$%.2f\n" , salario);
printf("sua prestacao:>%d\n" , prestacao);


if(prestacao <= 30){
    printf("seu emprestimo pode ser concedido\n\n\n\n");
}else{
    printf("seu emprestimo nao pode ser concedido\n\n\n\n");
}
printf("\n");
  system("pause");
    return 0;
}
