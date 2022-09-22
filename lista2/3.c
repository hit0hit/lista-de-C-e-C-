#include <stdlib.h>
#include <stdio.h>

int main() {

int dias, anos, meses, dia;

printf("coloca a sua idade em dias:\n");
scanf("%d", &dias);

anos = dias / 365;
meses = dias % 365 / 30;
dias = dias % 365 % 30;

printf("Idade: %d Anos \n%d Meses \n%d Dias\n", anos, meses, dias);
system("pause");
return 0;
}
