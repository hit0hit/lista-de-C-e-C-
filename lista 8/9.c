#include  <stdio.h>
#include  <stdlib.h>
int  main ()
{
    int vet[10], cont2=0 ;
    
    for(int cont=0 ; cont<10 ; cont++)
    {
        printf("coloque o numero %d ==>" , cont+1);
        scanf("%d", &vet[cont]);
    }
    for(int cont=0 ; cont<10 ; cont++)
    {
        if (cont %2 != 0)
        {
            cont2 += vet[cont];
        }
    }
    printf("a soma e: % d " , cont2);
    system("pause");
    return 0;
}