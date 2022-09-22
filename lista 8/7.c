#include <stdlib.h>
int main()
{
    int vt[6], par[6], impar[6], i = 0, im = 0, pa = 0;

    for (i = 0; i < 6; i++)
    {
        printf("coloce o numero: %d \n", i + 1);
        scanf("%d", &vt[i]);
    }
    for (i = 0; i < 6; i++)
    {
        if (vt[i] % 2 == 0)
        {
            par[pa++] = vt[i];
        }
        else
        {

            impar[im++] = vt[i];
        }
    }
    system("cls");
    {
        for (i = 0; i < pa; i++)

            printf("par: %d\n", par[i]);
        printf("\n\n");
    }
    {
        for (i = 0; i < im; i++)

            printf("impar: %d \n", impar[i]);
    }
    system("pause");
}