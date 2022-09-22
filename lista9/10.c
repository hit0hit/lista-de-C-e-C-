#include <stdio.h>
int main()
{
    int m[4][3], m2[4] = {};
    float preco[4];

    for(int i = 0; i < 4; i++)
    {
        printf("\nProduto%d:\n",i+1);
        printf("Preco%d:",i+1);
        scanf("%f", &preco[i]);
        for(int cont = 0; cont < 3; cont++)
        {
            printf("D %d:", cont+1);
            scanf("%d", &m[i][cont]);
            m2[i] += m[i][cont];
        }
    }
    printf("\n");
    printf("estoque: \t \t \t vetores \n");
    printf("\t D1 \t D2 \t D3 \t Total \t valor total \n");
    for(int cont2=0; cont2<4; cont2++)
    {
        printf("Prod %d:\t",cont2+1);
        for(int cont4=0; cont4<3; cont4++)
        {
            printf("%d\t", m[cont2][cont4]);
        }
        printf("%d\t ", m2[cont2]);
        preco[cont2] = preco[cont2] * m2[cont2];
        printf(" R$%.2f\t ", preco[cont2]);
        printf("\n");
    }

    printf("\n");
    return 0;
}