#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int main()
{
float A, B, C;

printf("digite 3 numero:\n");
scanf("%f",&A);
scanf("%f",&B);
scanf("%f",&C);

if (C > A + B || A > B + C || B > A + C ){
printf("FORMAM UM TRIANGULO");
}else{
printf("NAO FORMAM UM TRIANGULO\n");
}
printf("\n");
  system("pause");
return 0;
}