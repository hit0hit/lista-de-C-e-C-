#include <stdio.h>
#include <stdlib.h>

int main() {

int ano, mes, dia, dias;

printf("sua idade em anos mes e dias: \n");
scanf("%d %d %d", &ano, &mes, &dia);
dias = (ano*365) + (mes * 30) + dia;
printf("idade em dias: %d\n", dias);

system("pause");
return 0;
}
