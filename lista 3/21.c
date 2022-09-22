#include <stdio.h>
#include <stdlib.h>
int main(){
    int A,B,C;

   printf("Insira aqui os valores para checar se e um triangulo,ou triangulo escaleno\ntriangulo equilatero e traingulo esosceles\n\n");
    scanf("%d" , &A);
    scanf("%d" , &B);
    scanf("%d" , &C);

if ((A<B+C) && (B<A+C)&&(C<A+B))
{
printf("\nOs valores digitados formam um Triangulo\n");
}
if ((A==B) && (B==C)) {
printf("\nOs valores digitados formam um Triangulo Equilatero\n");
}
if ((A == B) || (B==C)||(C==A)){
printf("\nOs valores digitados formam um Triangulo Isosceles\n");
}else {
printf("\nOs valores digitados formam um Triangulo Escaleno\n");
}
  printf("\n");
  system("pause");            
return 0;
}