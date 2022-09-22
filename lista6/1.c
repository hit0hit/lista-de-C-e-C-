#include <stdio.h>
int main()
{
    int num, total = 0, qtt_numeros = 0;
    float media;
    do
    {
        printf("\nInsira um numero: ");
        scanf("%d", &num);
        total+=num;
        qtt_numeros++;
    }while(num != -1);
    qtt_numeros--;
    media = total/qtt_numeros;
    printf("\nO total de numeros informados e: %d",  qtt_numeros);
    printf("\nA media dos numeros informados e: %.2f", media+1);
    printf("\n\n");
    return 0;
}