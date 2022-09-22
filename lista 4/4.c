#include <stdio.h>
#include <stdlib.h>
int main () {

int meis;
printf("digite o meis:>>");
scanf("%d" , &meis);

switch (meis)
{
case 1:
   printf("mes de janeiro");
    break;
case 2:
   printf("mes de fevereiro");
    break;
case 3:
   printf("mes de marco");
    break;
case 4:
   printf("mes de abril");
    break;
case 5:
   printf("mes de maio");
    break;
case 6:
   printf("mes de junho");
    break;
case 7:
   printf("mes de julho");
    break;
case 8:
   printf("mes de agosto");
    break;
case 9:
   printf("mes de setembro");
    break;
case 10:
   printf("mes de outubro");
    break;
case 11:
   printf("mes de novembro");
    break;
case 12:
   printf("mes de dezembro");
    break;

default:
 printf("nao existe mes com esse numero");
    break;
}
printf("\n");
system("pause");
    return 0;
}