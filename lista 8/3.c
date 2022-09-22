#include  <stdio.h>
int  main ()
{
    int vet[9];
    int cont;
    for(cont=0 ; cont<9 ; cont ++)
    {
        printf("coloque o numero:");
        scanf("%d" , &vet[cont]);
    }
    system("cls");
    for(cont=0 ; cont<9 ; cont++)
    {
        if(vet [cont]%2 != 0)
        {
            printf("numero <%d> posicao <%d>\n" , vet[cont], cont);
        }
    }
    system("pause");
    return  0 ;
}