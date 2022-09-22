#include <stdio.h>
int main(){
int candidato1=0 , candidato2=0 , nulo ,op;

do{
    printf("candidato=1%d\n candidato=2%d\n nulo=3%d\n parar=4");
    scanf("%d", &op);
switch (op)
{
case 1:
    candidato1++;
    break;

    case 2:
    candidato2++;
    break;

    case 3:
   nulo++;
    break;

default:
    break;
}
system("cls");
}while(op != 4);

if (candidato1 > candidato2){
    printf("candidato1 venceu");
    }else
        if (candidato1 > candidato2){
    printf("candidato1 venceu");
    } else {
        printf("teve impate");
    }


}