#include <stdio.h>
int main()
{
    int dia2, mes1, ano, dia, mes, ano1;
    printf(" coloque um dado.\n");
    scanf(" %d / %d / %d ", &dia2, &mes1, &ano);
    printf(" Dados finais.\n");
    scanf(" %d / %d / %d ", &dia, &mes, &ano1);

    if(dia2 != dia || mes1 != mes || ano != ano1)
    {
        printf(" \n \t %d / %d / %d \n ", dia2, mes1, ano);
        if (mes1 == 1 || mes1 == 3 || mes1 == 5 || mes1 == 7 || mes1 == 8 || mes1 == 10 || mes1 == 12)
        {
            if (mes1 == 12 && dia2 == 31)
            {
                ano++;
                mes1 = 1;
                dia2 = 1;
            }
            else if (dia2 == 31)
            {
                mes1++;
                dia2 = 1;
            }
            else
            {
                dia2++;
            }
        }
        else if (mes1 == 4 || mes1 == 6 || mes1 == 9 || mes1 == 11)
        {
            if (dia2 == 30)
            {
                mes1++;
                dia2 = 1;
            }
            else
            {
                dia2++;
            }
        }
        else if (mes1 == 2 && ano % 4 != 0)
        {
            if (dia2 == 28)
            {
                mes1++;
                dia2 = 1;
            }
            else
            {
                dia2++;
            }
        }
        else if (mes1 == 2 && ano % 4 == 0)
        {
            if (dia2 == 29)
            {
                mes1++;
                dia2 = 1;
            }
            else
            {
                dia2++;
            }
        }
    }
    printf(" \n\t%d/%d/%d\n", dia2, mes1, ano);
   return 0;
}