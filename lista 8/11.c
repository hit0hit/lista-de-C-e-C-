#include  <stdio.h>
#include  <math.h>
int main()
{
    float vet[50];
    vet[0] = 100;
    vet[49] = 100;
    for(int i = 1; i <= 48; i++)
    {
        vet[i] = pow(i - 1,2)+sqrt(i + 1);
    }
    printf(" Numeros gerados.\n");
    for(int i = 0; i < 50; i++)
    {
        printf("(%.2f)\n",vet[i]);
    }
    return 0;
}