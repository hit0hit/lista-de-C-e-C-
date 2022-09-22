#include <stdio.h>
#include <stdlib.h>
int main () {

int meis;
printf("digite o meis:>>");
scanf("%d" , &meis);

switch (meis)
{
case 1:
   printf("mes de janeiro\ndias 31\n ano 2021");
    break;
case 2:
   printf("mes de fevereiro\ndias 28\n ano 2021");
    break;
case 3:
   printf("mes de marco\ndias 31\nano 2021");
    break;
case 4:
   printf("mes de abril\ndias 30\nano 2021");
    break;
case 5:
   printf("mes de maio\ndias 31\nano 2021");
    break;
case 6:
   printf("mes de junho\ndias 30\nano 2021");
    break;
case 7:
   printf("mes de julho\ndias 31\nano 2021");
    break;
case 8:
   printf("mes de agosto\ndias 31\nano 2021");
    break;
case 9:
   printf("mes de setembro\ndias 30\nano 2021");
    break;
case 10:
   printf("mes de outubro\ndias 31\nano 2021");
    break;
case 11:
   printf("mes de novembro\ndias 30\nano 2021");
    break;
case 12:
   printf("mes de dezembro\ndias 31\nano 2021");
    break;

default:
 printf("nao existe mes com esse numero");
    break;
}
printf("\n");
system("pause");
    return 0;
}