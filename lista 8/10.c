#include <stdio.h>
#include <stdlib.h>

int main () {
    float vetor[ 10 ];

    for(int i=0 ; i<10 ; i++) {
        if(i==0) {
            vetor[i]=1 ;
        } else  if (i% 2 == 0 ) {
            vetor[i]=(float)i*(3/5,0);
        } else {
            vetor[i]=i*i;
        }
        printf("vetor==>  <%d> %.1f \n",i,vetor [i]);
    }
    system("pause");
    return 0;
}