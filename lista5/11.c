#include <stdio.h>


int main(){
    int n, ncomp, cont=0;
     
     scanf("%d", &n);

    srand(time(NULL));

    ncomp = rand() % 100;
    
    while(ncomp != n){
        if(ncomp > n){  
            printf("Maior\n");
        }else{
            printf("Menor\n");
        }

        ncomp = rand() % 100;
        cont++;
    }

    printf("Acertou (%d)!\n", cont);
  





    return 0;
}