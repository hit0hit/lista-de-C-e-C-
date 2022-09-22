#include <stdio.h>
int main(){
    int a , b, cont = 1;

    printf("Informe o valor Inicial: ");
    scanf("%i", &a);
    printf("Informe o valor Final: ");
    scanf("%i", &b);

    while(b >= a){
        printf("%i\n", a);
        a++;
        
    }

    return 0;
}