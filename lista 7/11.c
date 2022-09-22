# include  <stdio.h>

int  main ()
{
    int n = 99,cont;
    for(cont = 0 ; cont < 101 ; cont ++)
    {
        n ++;
        if (n% 2 == 0 )
        {
            printf ( " - % d" , n);
        }
    }
    return  0 ;
}