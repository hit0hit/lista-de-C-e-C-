#include  <stdio.h>
#include  <stdlib.h>

int  main () {
    float notas[10] , soma = 0 , midia;
    
    for( int i=0 ; i<10 ; i++) {
        printf("Digite a nota do %d aluno:" , i+1 );
        scanf ("%f" , &notas[i]);
        soma += notas[i];
    }
    midia = soma/10 ;

    int cont1=0;

    for( int i=0 ; i<10 ; i++) {
        if(notas[i]<6) {
        
            
            cont1++;
        }
    }

    printf("nota total ==>%.2f\nNotas abaixo da media ==>%d\n" , midia,cont1);

    system("pause");
    return  0 ;
}