#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n, gy, cont = 0;
    scanf("%d", &n);
    srand(time(NULL));
    gy = rand() % 100;
    while (gy != n){
        if (gy > n){
            printf("Maior\n");
    }else{
            printf("Menor\n");}
            gy = rand() % 100;
        cont++;}
        printf("Acertou aiya(%d)!\n", cont);
        return 0;
}