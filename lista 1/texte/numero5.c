#include <stdio.h>
int main () {
int dia1, dia2, mes1, mes2, ano1, ano2, ida1, ida2, ida3;
    printf ("Digite o dia do nascimento:>> ");
        scanf ("%d", &dia1);

    printf ("Digite o mes de nascimento:>> ");
        scanf ("%d", &mes1);

    printf ("Digite o ano de nascimento:>> ");
        scanf ("%d", &ano1);

    printf ("Digite o dia atual:>> ");
        scanf ("%d", &dia2);

    printf ("Digite o mes atual:>> ");
        scanf ("%d", &mes2);

    printf ("Digite o ano atual:>> ");
        scanf ("%d", &ano2);

    ida1 = ano2 - ano1;
    ida2 = ida1 * 365;
    ida3 = ida1 * 30;

    printf (" voce nasceu em:>> %d/%d/%d\n", dia1,mes1,ano1);
    printf (" sua idade e:>>%d\n", ida1);

if (ida1 >= 18){
printf("voce e de maior de idade\nvoce pode retirar a carteira de motorista");
}else{
printf("voce e de menor\nnao pode retirar a carteira de motorista");
}
    return 0;
}