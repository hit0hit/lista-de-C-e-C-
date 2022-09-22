#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int gy, gy2;
    srand(time(NULL));
    gy2 = rand() % 100;
    while (gy != gy2)
    {
        printf("numero sorteado entre 0 e 100\n");
        scanf(" %i", &gy);
        if (gy > gy2)
        {
            printf("numero e maior tente novamente\n");
        }
        else if (gy < gy2)
        {
            printf("numero e menor tente novamente\n");
        }
        else
        {
            printf("acertou aiya!\n");
        }
    }
    return 0;
}