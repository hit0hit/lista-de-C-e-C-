#include <stdio.h>
#include <conio.h>
int main (){

int numero=0 ,contt=0;
float peso=0 , altura=0 , total;

printf("informe o tanto de pessoa");
scanf("%d" , &numero);

for (contt = 1; contt <= numero; contt++)
{
printf("informe os peso");
scanf("%f" , &peso);
peso += peso;


}
total = peso / numero;


printf("o peso medio e%.2f" , total);


    //IMC = Massa (kg) ÷ Altura (m)²
}