#include <stdio.h>
#include <stdlib.h>
int main() {

float nota1, nota2, nota3, m;

printf("nota do aluno1: ");
scanf("%f", &nota1);
printf("nota do aluno2: ");
scanf("%f", &nota2);
printf("nota do aluno3: ");
scanf("%f", &nota3);

m = (nota1 * 2) + (nota2 * 3) + (nota3 * 5) ;
m = m / (2 + 3 + 5);

printf("media final do aluno: %.2f\n", m);
system("pause");
return 0;
}