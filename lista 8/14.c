#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vet[5], maior, cont = 0;

    for (cont; cont < 5 - 1; cont++)
    {
        printf("Digite o vetor%d ==>", cont + 1);
        scanf("%d", &vet[cont]);
    }
    for (int cont = 0; cont < 5 - 1; cont++)
    {
        if (cont == 0)
        {
            maior = vet[cont];
        }
        else if (vet[cont] > maior)
        {
            maior = vet[cont];
        }
    }
    vet[5 - 1] = maior;
    printf("\nDisposicao dos valores no vetor.\n");
    printf("Termo\tNumero\n");
    for (int cont = 0; cont < 5; cont++)
    {
        printf("%d\t|%d\n", cont, vet[cont]);
    }
    return 0;
}