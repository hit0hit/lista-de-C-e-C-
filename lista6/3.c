#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main(){
int n1 , c;
float b;
do{
printf("\nnumero do quadrado\n");
scanf("%d" , &n1);
b = sqrt(n1);
c=b;
if(b <= c)
{printf("\no numeroe um quadrado\n");
}else{
printf("\nnao e um quadrado perfeito\n");}
}while (n1 != -1);

}

