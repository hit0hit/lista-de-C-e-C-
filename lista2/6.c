#include <stdio.h>
#include <stdlib.h>
int main() {

int numero1 , numero2 , c;

printf("primeiro cateto: \n");
scanf("%d" , &numero1);
printf("segundo cateto: \n");
scanf("%d" , &numero2);

c = numero1^2 + numero2^2;
c = sqrt(c);

printf("hipotenusa: %d\n" , c);
system("pause");
return 0;
}
