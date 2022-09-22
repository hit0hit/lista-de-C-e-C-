#include <stdio.h>
#include <stdbool.h>
int main()
{
    
    bool teste = true;
    int num = 0, a = 1, cont = 0, cont1 = 1;
    float resto_div;
    printf("numeros primos entre 1 e 150\n");
    while (cont1 <= 150)
    {
        num++;
        while (a <= num)
        {
            resto_div = num % a;
            a++;
            if (resto_div == 0)
            {
                cont++;
            }
        }
        if (cont == 2 || cont == 1)
        {
            printf("|. %d\n", num);
        }
        cont = 0;
        a = 1;
        cont1++;
    }
    return 0;
}