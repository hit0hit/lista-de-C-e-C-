#include <stdio.h>
#include <stdlib.h>

int main() {
int num;
int num_pares = 0;
int num_impares = 0;

while(num!=0){
printf("Insira um numero:");
scanf("%d", &num);
if(num%2 == 0){
num_pares++;
}else{
num_impares++;
}
printf("Temos %d números pares e %d números impares com um total de %d números inseridos",num_pares, num_impares, num_pares + num_impares);

}
return 0;
}



    //system("PAUSE");
    //return 0;
