#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main () {
  int i, a, b, c;
  printf("1 escrever os tres valores a, b, c em ordem crescente:\n2 escrever os tres valores a, b, c em ordem decrescente:\n3 escrever os tres valores a, b, c de forma que o maior entre a, b, c fique dentre os dois:\nopcao: ");
	scanf ("%d" , &i);

    switch (i)
    {
    case 1:
        	 printf("Digite 3 numeros:\n:>>");
    scanf("%d %d %d", &a, &b, &c);
    
if (a > c) {
        int tmp = c;
        c = a;
        a = tmp;
    }
    if (a > b) {
        int tmp = b;
        b = a;
        a = tmp;
    }
    if (b > c) {
        int tmp = c;
        c = b;
        b = tmp;
    }
    printf("em ordem crescente:>%d %d %d", a, b, c);
        break;
    case 2:
         printf("Digite 3 numeros:\n:>>");
    scanf("%d %d %d", &a, &b, &c);
    
if (a < c) {
        int tmp = c;
        c = a;
        a = tmp;
    }
    if (a < b) {
        int tmp = b;
        b = a;
        a = tmp;
    }
    if (b < c) {
        int tmp = c;
        c = b;
        b = tmp;
    }
    printf("em ordem decrescente:>%d %d %d", a, b, c);
        break;
    case 3:
     printf("Digite 3 numeros:\n:>>");
    scanf("%d %d %d", &a, &b, &c);

        if (a <b && a <c && b <c) {
			printf ("%d %d %d \n", b, c, a);
		}
		else if (a <b && a <c && c <b) {
			printf ("%d %d %d \n", c, b, a);
		}
		else if (b <a && b <c && a <c) {
			printf ("%d %d %d \n", a, c, b);
		}
		else if (b <a && b <c && c <a) {
			printf ("%d %d %d \n", c, a, b);
		}
		else if (c <a && c <b && b <a) {
			printf ("%d %d %d \n", b, a, c);
		}
		else if (c <a && c <b && a <b) {
			printf ("%d %d %d \n", a, b, c);
		}
        break;
    
    default:
        break;
    }
	printf("\n");
  system("pause");
	return 0;
}