#include <stdio.h>
#include <stdlib.h>

int main () {
    int m, n, i;
    printf ( " Digite um numero: " );
    scanf ( " % d " , & m);
     do{
        printf ( " Digite o mesmo numero: " );
        scanf ( " % d " , & n);
        i ++;
    } while(m != n);
    printf( " Tentivas para digitar os 2 numeros iguais: % d " , i);
    printf("\n");

    system("pause");
    return  0 ;
}