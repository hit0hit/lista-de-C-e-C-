#include <stdio.h>
#include <stdlib.h>
int main(void) {

int v , a , p;

printf("tamanho:>>");
scanf("%d" , &v);

p = (4 * v);
a = v^2;

printf("perimetro e: %d e da area: %d\n" , p , a);
system("pause");
return 0;
}
