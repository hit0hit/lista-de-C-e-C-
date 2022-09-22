#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int m[5][5];
    int menor[2];
    int maior = {0};
    int soma = 0;
    srand(time(NULL));
    for (int lin = 0; lin < 5; lin++)
    {
        for (int col = 0; col < 5; col++)
        {
            m[lin][col] = rand() % 100;
            if (m[lin][col] < 10)
            {
                printf("[0%d]\t", m[lin][col]);
            }
            else
            {
                printf("[%d]\t", m[lin][col]);
            }
        }
        printf("\n");
    }
    
    printf("\nmaior\n");

    for (int lin = 0; lin < 5; lin++)
    {
        for (int col = 0; col < 5; col++)
        {
            if (lin + col <= 4)
            {
                if (lin == 0 && col == 0)
                {
                    menor[1] = m[lin][col];
                    menor[2] = lin;
                }
                else if (menor[1] > m[lin][col])
                {
                    menor[1] = m[lin][col];
                    menor[2] = lin;
                }
            }
        }
    }
    for (int col = 0; col < 5; col++)
    {
        if (menor[2] + col != 4)
        {
            if (col == 0)
            {
                maior = m[menor[2]][col];
            }
            else if (m[menor[2]][col] > maior)
            {
                maior = m[menor[2]][col];
            }
        }
    }
    printf("Resposta==> <%d>\n", maior);
    for (int lin = 0; lin < 5; lin++)
    {
        for (int col = 0; col < 5; col++)
        {
            soma += m[lin][col];
        }
    }
    soma -= m[1][0];
    soma -= m[2][0];
    soma -= m[3][0];
    soma -= m[2][1];
    soma -= m[2][3];
    soma -= m[2][4];
    soma -= m[1][4];
    soma -= m[3][4];
    soma = soma / 5 * 5;
    printf("media==>%d\n", soma);
    return 0;
}