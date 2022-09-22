#include  <stdio.h>
int main ()
{
    int num[ 10 ] , i;
    for(i = 0 ; i < 10 ; i ++)
    {
        num[i] = i - 2 ;
        printf("%d",num[i]);
    }
    return  0 ;
}