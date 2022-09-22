#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main() {

int idade,cont,nutM,nutF;
char sexo;

cont = 0;
nutM = 0;
nutF = 0;

while (cont < 20){

       printf("Informe seu sexo:");
       scanf(" %c",&sexo);
        printf("informe a idade: ");
        scanf("%d",&idade);
       
        if (idade >= 18) {
            if (sexo == 'm'){
                nutM++;
        } else {
            if (sexo == 'f')
                nutF++;
        }
        }
cont++;

}

printf("homens: %d",nutM);
printf("\nmulher: %d",nutF);


   printf("\n");
system("pause");
    return 0;
}