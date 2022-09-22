#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <stdlib.h>
int main()
{

    bool programa = true;
    float valor_compra = 0;
    int cpf, cpf1, op, opc, cartao2, i;
    int cartao1, cvv, data_de_vencimento;
    float total, total2, total3, total4, total5, total6;

    setlocale(LC_ALL, "portuguese");

    do
    {

        system("cls");
        printf("|CODIGO\tITEM\t                  PRECO\t\t\ Valor total => R$ %.2f\n", valor_compra);
        printf("|> 1\tCachorro quente-----------R$ 1,50\n");
        printf("|> 2\tHamburguer----------------R$ 2,00\n");
        printf("|> 3\tCheeseburguer-------------R$ 2,50\n");
        printf("|> 4\tEggCheeseburguer----------R$ 3,00\n");
        printf("|> 5\tRefrigerante--------------R$ 1,50\n");
        printf("|> 6 Finalizar compra =>\n");
        scanf(" %d", &opc);
        switch (opc)
        {
        case 1:
            valor_compra += 1.50;
            break;
        case 2:
            valor_compra += 2.00;
            break;
        case 3:
            valor_compra += 2.50;
            break;
        case 4:
            valor_compra += 3.00;
            break;
        case 5:
            valor_compra += 1.50;
            break;
        
        }
    }while(opc != 6);
    printf("Sua compra ficou no total de:\tR$%.2f\n", valor_compra);

    return 0;
}