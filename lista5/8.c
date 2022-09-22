#include <stdio.h>
int main() {
float nota1 , nota2 , media;
int flag = 1;
while (flag){
        printf("Nota A: ");
        scanf("%f",&nota1);
        printf("Nota B: ");
        scanf("%f",&nota2);
       
        if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)) {
            flag = 0;
        }
        }
        media= (nota1 + nota2)/2;
            printf("media final: %.2f", media);
          
        

    return 0;
}