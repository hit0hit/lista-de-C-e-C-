#include <stdio.h>
int main()
{
    int numero, num_maior, num_menor;
    int i, n;

    printf("Entre com o primeiro numero inteiro: ");
    scanf("%i", &numero);

    num_maior = numero;
    num_menor = numero;

    printf("Qual a quantidade de numeros?");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        printf("\nEntre com o %d numero inteiro: ", i + 1);
        scanf("%i", &numero);

        if (numero > num_maior)
            num_maior = numero;
        else if (numero < num_menor)
            num_menor = numero;
    }

    printf("\nO maior valor fornecido e: %d", num_maior);
    
    printf("\nO menor valor fornecido e: %d", num_menor);


    getch();
}