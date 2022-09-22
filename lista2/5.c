#include <stdlib.h>
#include <stdio.h>
int main(void) {

int segundos , horas , min , g;

printf("duracao do evento expressa em segundos:\n ");
scanf("%d", &segundos);

horas = segundos / 3600;
min = segundos % 3600 / 60;
g = (segundos % 3600) % 60;

printf("evento durou: %d Horas %d minutos %d s\n" , horas , min , g);
system("pause");
return 0;
}