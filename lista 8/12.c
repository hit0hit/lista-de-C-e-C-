#include <stdio.h>
int main ()
{
    int vet [4], vet1 [4], vet2 [4];
    for(int cont = 0 ; cont <4; cont ++)
    {
        printf("%d==>",cont + 1);
        scanf ("%d",&vet[cont]);
    }
    for(int cont=0 ; cont<4; cont++)
    {
        printf ("%d==>",cont+1);
        scanf("%d",&vet1[cont]);
    }
    for(int cont=0 ; cont<4; cont++)
    {
        vet2 [cont] = vet [cont] + vet1 [cont];
    }
    for(int cont=0 ; cont<4; cont++)
    {
        printf("==>%d\n", vet2[cont]);
    }
    return 0;
}