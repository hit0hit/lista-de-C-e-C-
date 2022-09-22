#include <stdio.h>
int main (){
    int numero1 , numero2;

printf("numero1:\t");
    scanf("%d" , &numero1);
printf("numero2:\t");
    scanf("%d" , &numero2);

if (numero1 % numero2 == 0 || numero2 % numero1 == 0) {
    printf("sao multiplos");
}else{
    printf("nao e multiplos"); 
}

    return 0;
}