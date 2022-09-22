#include <stdio.h>
int main()
{
    int i , x = 1;
    long pi = 0;
    for (i = 1; i <= 1000; i++)
    {
        if(i % 2 == 0)
        {
            pi += (long)4/x;
            x+=2;
        }else
        {
            pi -= (long)4/x;
            x+=2;
        }
    }
    printf("Pi total %ld",pi);
    return 0;
}