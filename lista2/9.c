#include <stdio.h>
#include <stdlib.h>
 int main(void) {

float ht, vh, pd, sb, td, sl; int cont;

printf("Informe as horas trabalhadas no mes: \n"); 
scanf("%f", &ht);
printf("Informe o valor da hora trabalhada: \n"); 
scanf("%f", &vh);
printf("Informe o percentual de desconto: "); 
scanf("%f", &pd);

 cont = 0;
sb = ht * vh;
cont = cont + 1;
td = (pd / 100) * sb; cont = cont + 1;
sl = sb - td;
cont = cont + 1;

printf("Horas trabalhadas: %.1f\n Salario Bruto: %.1f \n Desconto: %.1f \n Salario liquido: %.1f \n Contador: %d\n", ht, sb, pd, sl, cont);
 system("pause");
 return 0; }