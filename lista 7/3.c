#include <stdio.h>
#include <stdlib.h>

int main() {
    float h=0;
    int cont, tamanho;
    printf("coloque um valor para N: ");
    scanf("%d",&tamanho);
    for (cont = 1; cont <= tamanho; cont++) {
      
        if (cont % 2 == 1) {
            h += (1.0/cont);
        } else if (cont % 2 == 0) {
            h -= (1.0/cont);
        }
    }
    printf("\nValor de H: %.3f\n",h);
//H = 1 - 1/2 + 1/3 - 1/4 + ... + 1/N
    system("pause");
    return 0;
}