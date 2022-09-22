#include <stdio.h>

int main()
{
    int vet[10], vet1[10], cont2 = 0;
    int i = 0;
    for (int cont = 0; cont < 10; cont++)
    {
        printf("coloque o primero numero=>");
        scanf("%d", &vet[cont]);
    }
    for (int cont = 0; cont < 10; cont++)
    {
        printf("coloque o segundo numero=>");
        scanf("%d", &vet1[cont]);
    }
    system("cls");
    for (int cont = 0; cont < 10; cont++)
    {
        cont2 = 0;

        for (i; i < 10; i++)
        {
            if (vet[cont] == vet1[i])
            {
                cont2++;
            }
        }
        printf("o valor %d aparece %d \n ", vet[cont], cont2);
    }
    system("pause");
    return 0;
}