#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main () {
  int i, a, b, c;
  printf("1 escrever os tres valores a, b, c em ordem crescente:\n2 escrever os tres valores a, b, c em ordem decrescente:\n3 escrever os tres valores a, b, c de forma que o maior entre a, b, c fique dentre os dois:\nopcao: ");
	scanf (" %d" , &i);

    printf("numero a:");
    scanf (" %d" , &b);

    printf("numero b:");
    scanf (" %d" , &b);

    printf("numero c:");
    scanf ("%d" , &c);
    
	if (i == 1) {
		if (a> b && a> c && b> c) {
			printf ("%d %d %d \n", c, b, a);
		}
 		else if (a> b && a> c && c> b) {
			printf ("%d %d %d \n", b, c, a);
		}
		else if (b> a && b> c && a> c) {
			printf ("%d %d %d \n", c, a, b);
		}
		else if (b> a && b> c && c> a) {
			printf ("%d %d %d \n", a, c, b);
		}
		else if (c> a && c> b && b> a) {
			printf ("%d %d %d \n", a, b, c);
		}
		else if (c> a && c> b && a> b) {
			printf ("%d %d %d \n", b, a, c);
		}
	}
	if (i == 2) {
		if (a <b && a <c && b <c) {
			printf ("%d %d %d \n", c, b, a);
		}
		else if (a <b && a <c && c <b) {
			printf ("%d %d %d \n", b, c, a);
		}
		else if (b <a && b <c && a <c) {
			printf ("%d %d %d \n", c, a, b);
		}
		else if (b <a && b <c && c <a) {
			printf ("%d %d %d \n", a, c, b);
		}
		else if (c <a && c <b && b <a) {
			printf ("%d %d %d \n", a, b, c);
		}
		else if (c <a && c <b && a <b) {
			printf ("%d %d %d \n", b, a, c);
		}
	}
	if (i == 3) {
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
	}
	printf("\n");
  system("pause");
	return 0;
}