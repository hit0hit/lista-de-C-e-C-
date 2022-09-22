#include <stdio.h>
int main()
{
    int dia, mes, ano, cont = 0, dias;
    printf("coloque o dado.\n");
    scanf(" %d / %d / %d ", &dia, &mes, &ano);
    printf("dias.\n");
    scanf(" %d ", &dias);
    if (dias != cont)
    {
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        {
            if (mes == 12 && dia == 31)
            {
                ano++;
                mes = 1;
                dia = 1;
            }
            else if (dia == 31)
            {
                mes++;
                dia = 1;
            }
            else
            {
                dia++;
            }
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        {
            if (dia == 30)
            {
                mes++;
                dia = 1;
            }
            else
            {
                dia++;
            }
        }
        else if (mes == 2 &&ano % 4 != 0)
        {
            if (dia == 28)
            {
                mes++;
                dia = 1;
            }
            else
            {
                dia++;
            }
        }
        else if (mes == 2 && ano % 4 == 0)
        {
            if (dia == 29)
            {
                mes++;
                dia = 1;
            }
            else
            {
                dia++;
            }
        }
        cont++;
    }
    printf("%d/%d/%d\n ", dia, mes, ano);
    return 0;
}