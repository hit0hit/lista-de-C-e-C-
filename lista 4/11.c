#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main () {


        int mes;
        float anuidade, multa=0 , Juros, Juros2 , r;
        printf(" digite o mes: ");
        scanf("%d" , &mes);
        printf(" Digite o Valor da anuidade: ");
        scanf(" %f" , &anuidade);
        Juros = (anuidade * 5)/100;
        Juros2 = ((anuidade + Juros)*5)/100 ;
        
        switch (mes) 
        {
            case 1:
                multa = anuidade;
                printf(" Janeiro \n Anuidade: R$%.2f  Valor da Multa: R$%.2f  " , anuidade, multa);
            break;
            case 2:
                multa = anuidade + Juros;
                printf( " Janeiro \n Anuidade: R$%.2f \n Valor da Multa: R$%.2f \n " , anuidade, multa);
            break;
            case 3:
                multa = anuidade + Juros + Juros2;
                printf( " Janeiro \n Anuidade: R$%.2f \n Valor da Multa: R$%.2f \n " , anuidade, multa);
            break;
            case 4:
               multa = anuidade + Juros + Juros2;
                printf(" Janeiro \n Anuidade: R$%.2f \n Valor da Multa: R$%.2f \n " , anuidade, multa);
            break;
            case 5:
                multa = (((anuidade + Juros + Juros2) * 5 ) / 100 ) * 5 / 100 ;
                printf(" Janeiro \n Anuidade: R$%.2f \n Valor da Multa: R$%.2f \n " , anuidade, multa);
            break;
            case 6:
                multa = anuidade + Juros + Juros2;
                printf( " Janeiro \n Anuidade: R$%.2f \n Valor da Multa: R$%.2f \n "  , anuidade, multa);
            break;
            case 7:
                multa = anuidade;
                printf( " Janeiro \n Anuidade: R$%.2f \n Valor da Multa: R$%.2f \n " , anuidade, multa );
            break;
            case 8:
                multa = anuidade + Juros;
                printf( " Janeiro \n Anuidade: R$%.2f \n Valor da Multa: R$%.2f \n " , anuidade, multa );
            break;
            case 9:
                multa = anuidade + Juros + Juros2;
                printf( " Janeiro \n Anuidade: R$%.2f \n Valor da Multa: R$%.2f \n " , anuidade, multa );
            break;
            case 10:
                multa = anuidade;
                printf( " Janeiro \n Anuidade: R$%.2f \n Valor da Multa: R$%.2f \n " , anuidade, multa );
            break;
            case 11:
                multa = anuidade + Juros;
                printf( " Janeiro \n Anuidade: R$%.2f \n Valor da Multa: R$%.2f \n " , anuidade, multa );
            break;
            case 12:
                multa = anuidade + Juros + Juros2;
                printf( " Janeiro \n Anuidade: R$%.2f \n Valor da Multa: R$%.2f \n " , anuidade, multa );        
            break;
        }
        printf("\n");
system("pause");
return 0;
}   
