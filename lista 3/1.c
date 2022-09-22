#include <stdio.h>
#include <stdlib.h>

int main(void) {
 
int n;

printf("digite um numero\t");
scanf("%d" , &n);

if(n % 2 == 0){
printf("par\n");
}
else{
printf("impar\n");
}

if(n > 0)
{
  printf("positivo\n");
}
if(n < 0)
{
  printf("negativo");
}
if(n == 0)
{
  printf("nulo");
}
printf("\n");
system("pause");
  return 0;
}