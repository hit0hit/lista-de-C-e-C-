#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vet[5], vet1[5], vet3[5];
    char codigo[5];
    printf("vetor=1\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vet[i]);
    }
    printf("vetor=2\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vet1[i]);
    }
    printf("vetor=3\n");
    for (int i = 0; i < 5; i++)
    {
        scanf(" %c", &codigo[i]);
    }
    printf("\nCodigo\tResultado.\n");
    for (int i = 0; i < 5; i++)
    {
        vet3[i] = vet[i] * vet1[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%c\t%d\n", codigo[i], vet3[i]);
    }
    return 0;
}