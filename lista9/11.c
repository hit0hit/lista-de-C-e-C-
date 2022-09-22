#include <stdio.h>
int main()
{
    int m[4][3], m2[4] = {}, vet[3] = {}, menor2, menor, cont;
    float preco[4];

    for (int i = 0; i < 4; i++)
    {
        printf(" \n Produto %d : \n ", i + 1);
        printf(" Preco do produto %d : ", i + 1);
        scanf(" %f ", &preco[i]);
        for (int con = 0; con < 3; con++)
        {
            printf(" D %d : ", con + 1);
            scanf(" %d ", &m[i][con]);
            m2[i] += m[i][con];
            vet[con] += m[i][con];
        }
        preco[i] = preco[i] * m2[i];
    }
    printf("\n");
    printf("estoque: \t vetores\n ");
    printf(" \t D1 \t D2 \t D3 \t Total \t Valor total\n ");
    for (int i = 0; i < 4; i++)
    {
        printf("Prod %d:\t", i + 1);
        for (int con1 = 0; con1 < 3; con1++)
        {
            printf("%d\t", m[i][con1]);
        }
        printf("%d\t", m2[i]);
        printf("R$%.2f\t", preco[i]);
        printf("\n");
    }
    printf("\n");
    printf("menor quantidade:");
    for (int con4 = 0; con4 < cont; con4++)
    {
    }
    for (int con3 = 0; con3 < 3; con3++)
    {
        if (con3 == 0)
        {
            menor2 = vet[con3];
            menor = con3 + 1;
        }
        else
        {
            if (vet[con3] < menor2)
            {
                menor2 = vet[con3];
                menor = con3 + 1;
            }
        }
    }
    printf(" Deposito %d , com %d unidades",menor, menor2);

    printf("\n");
    return 0;
}