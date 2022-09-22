#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main() {


float nota1 , nota2 , media;
bool flag = true, flagrepetiprograma = true;
char resposta, nome[50];

while (flagrepetiprograma){


while (flag){
        printf("digite o nome do aluno:");
        scanf(" %s",&nome);

        printf("Nota A: ");
        scanf("%f",&nota1);

        printf("Nota B: ");
        scanf("%f",&nota2);
       
        if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)) {
            flag = false;
        } else {
            printf("ERRO! Nota invalida, digite novamente!\n");
        }
        }
        media= (nota1 + nota2)/2;
        printf("\nnome: %s", nome);
          printf("\nmedia final: %.2f", media);
          printf("\n\ndeseja executar novamente: (s/n)");
          scanf(" %c", &resposta);

          if(resposta == 's' || resposta == 'S'){
          flag = true;
          }else if(resposta == 'n' || resposta == 'N'){
          flagrepetiprograma = false;
          }else{

          }
}
   printf("\n");
system("pause");
    return 0;
}