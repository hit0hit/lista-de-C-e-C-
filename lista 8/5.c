#include <stdio.h>

int main()
{
    int Vet1[10], Vet2[10], cont2 = 0;

    for (int cont = 0; cont < 10; cont++)
    {
        printf("coloque o primero numero=>");
        scanf("%d", &Vet1[cont]);
    }
    system("cls");
    for (int cont = 0; cont < 10; cont++)
    {
        printf("coloque o segundo numero=>");
        scanf("%d", &Vet2[cont]);
    }
    for (int cont = 0; cont < 10; cont++)
    {
        if (Vet1[0] == Vet2[cont])
        {
            cont2++;
        }
    }
    system("cls");
    printf("Numero de vezes que se repete==> %d", cont2);
    system("pause");
    return 0;
}