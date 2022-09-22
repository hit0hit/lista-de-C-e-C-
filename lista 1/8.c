#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    printf("digite um numero:");
    scanf("%d" , &a);

    if ( a% 10 == 0){
    printf("esse numero e divisivel por 10\n");
    }else{
    printf("esse numero n e divisivel por 10\n");
}

   if ( a% 5 == 0){
    printf("esse numero e divisivel por 5\n");
   }else{ 
    printf("esse numero n e divisivel por 5\n");

   }
    if ( a% 2 == 0){
    printf("esse numero e divisivel por 2\n");
    }else{ 
    printf("esse numero n e divisivel por 2\n");
    }
    printf("\n");
  system("pause");
return 0;
}