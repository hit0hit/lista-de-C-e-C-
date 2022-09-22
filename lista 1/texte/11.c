#include <stdio.h>

    int maior( int A , int B , int C){
   
 if ( A > B && A > C )
        return A;
    else
        if(B > A && B > C )
            return B;
        else
            if(C > A && C > B )
                return C;
    }
 
int main () {
    int A , B , C;
    printf("digite o numero1");
        scanf("%d" , &A);

    printf("digite o numero2");
        scanf("%d" , &B);
        
    printf("digite o numero3");
        scanf("%d" , &C);


    printf("\n O maior numero entre todos e: %d" , maior(A,B,C));

    return 0;
}