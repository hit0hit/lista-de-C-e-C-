#include <stdio.h>
int main () {
float n1,n2,media,diferenca,produto,divisao;
int opcao;

printf("digite o numero1:\n");
    scanf("%f",&n1);
printf("digite o numero2:\n");
    scanf("%f",&n2);
    printf("escolha umas das opcoes:\n");
    printf("1 - Media entre os numero digitados\n");
    printf("2 - Diferenca entre os numero\n");
    printf("3 - Produto entre os numeros digitados\n");
    printf("4 - Divisao do primeiro pelo segundo\n\n");
    scanf("%d",&opcao);

    switch (opcao)
    {
    case 1:
    media = (n1+n2)/2;
        printf("sua media e:>>%.2f", media);
        break;
    case 2:
    diferenca=n1-n2;
        printf("Diferenca entre os numero e:>>%.2f", diferenca);
        break;
    case 3:
    produto=n1*n2;
        printf("Produto entre os numeros digitados e:>>%.2f" , produto);
        break;
    case 4:
    divisao=n1/n2;
        printf("Divisao do primeiro pelo segundo e:>>%.2f") , divisao;
        break;
    
    default:
    printf("\nopcao invalida\n\n");
        break;
    }


    return 0;
}