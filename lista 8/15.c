#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int num, Num[5];
    bool num_pesquisa = false;
    printf("Informe o valor que sera procurado.\n");
    scanf("%d", &num);
    
    for (int i = 0; i < 5; i++)
    {
        printf("Informe o vetor %d==>",i+1);
        scanf("%d", &Num[i]);
    }
    printf("Resultado ==>\n");
    for (int i = 0; i < 5; i++)
    {
        if (Num[i] == num)
        {
            printf("numero %d foi encontrado==> %d\n", num, i);
            num_pesquisa = true;
        }
    }
    if (num_pesquisa == false)
    {
        printf("nao pertence ao vetor ==>\n\n");
    }
    return 0;
}