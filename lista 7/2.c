#include <stdio.h>
#include <conio.h>
int main()
{
    char hm[20];
    int contt = 0; //, idadeH, idadeM;
    float pesoH = 0, pesoM = 0, totalH , totalM;
    //clrscr();
    //gets(hm);

    for (contt = 1; contt <= 10; contt++)
    {

        printf("informe se e homem ou mulher");
        scanf(" %s", &hm);

        if (strcmp(hm, "mulher") == 0)
        {
            printf("informe os peso");
            scanf("%f", &pesoM);
            pesoM += pesoM;
        }
        if (strcmp(hm, "homem") == 0)
        {
            printf("informe os peso");
            scanf("%f", &pesoH);
            pesoH += pesoH;
        }
    }
    totalH = pesoH / 10;
    totalM = pesoM / 10;
 printf("sexo homem\no peso medio e%.2f", totalH);

    printf("sexo mulher\no peso medio e%.2f", totalM);

    
}