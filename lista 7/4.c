#include <stdio.h>
int main()
{
    int cont1 = 1, x;
    float soma = 0;
    for (int cont = 0; cont < 10; cont++)
    {
        x = 2 * cont1;
        soma += (float)cont1 / x;
        printf("|%d/%d\n", cont1, x);
        cont1++;
    }
    printf("o total e: %.2f", soma);
    return 0;
}