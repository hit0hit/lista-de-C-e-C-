
#include  <stdio.h>

int main ()
{
    int vet[9],M[3][3];
    for(int i=0 ; i<9 ; i++)
    {
        printf(" Digite o %d numero==> ", i+1);
        scanf("%d",&vet[i]);
    }
    system("cls");
     for(int i=0 ; i<9 ; i++)
    {
        printf("=> %d ", vet[i]);
    }
    int cont=0;
    printf("\n\n\n");
    for(int lin=0 ; lin<3 ; lin++)
    {
        for(int cou=0 ; cou<3 ; cou++)
        {
            M[lin][cou] = vet[cont];
            cont++;
        }
    }
    for(int lin=0 ; lin<3 ; lin++)
    {
        for(int coul=0 ; coul<3 ; coul++)
        {
            printf ( " %d", M[lin][coul]);
        }
    printf(" \n");
    }
    printf("\n");
    system("pause");
    return  0 ;
}