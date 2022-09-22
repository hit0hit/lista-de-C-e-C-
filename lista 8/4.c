# include  <stdio.h>
int  main ()
{
    char vet1[10], vet2[10];
    int cont2 = 0;
      
    for(int cont=0 ; cont<10 ; cont++)
    {
       printf("coloque o primero numero=>");
        scanf(" %c" , &vet1[cont]);
    }
   system("cls"); 
    for(int cont=0 ; cont<10 ; cont++)
    {
        printf("coloque o segundo numero=>");
        scanf(" %c" , &vet2[cont]);
    }
    for(int cont=0 ; cont<10 ; cont++)
    {
        if(vet1[cont] == vet2[cont])
        {
            cont2++;
        }
    }
    system("cls");
    printf("\n\na quantidade de valores da mesma posicao e ==>  %d\n\n\n\n" , cont2);
   system("pause");
    return  0 ;
}