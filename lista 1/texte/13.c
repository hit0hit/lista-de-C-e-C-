#include<stdio.h>
int main()
{   
int a,b,c,area;
 Leia(a);
 leia(b);
 leia(c);
  if ((a>b+c)&&(b>a+c)&&(c>a+b))
   printf("Não formam um triângulo");
  else
    if ((a=b)&&(a=c)&&(b=a)&&(b=c)&&(c=a)&&(c=b))
     //area=(nº q for inserido como base*nºque for inserido como altura )/2;
     printf("formam um triângulo e sua área é ",area);
    
return 0;    
}