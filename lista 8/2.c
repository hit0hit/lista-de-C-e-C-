# include  <stdio.h>
# include  <stdlib.h>
int  main () {
    int vet1[5]={}, vet2[5]={}, vet3[5]={}, cont3 = 0;
//int k=0;
    for( int i = 0 ; i < 5 ; i++) {
        printf("Digite o numero==> ", i+1);
        scanf("%d" , &vet1[i]);
    }
    for( int i = 0 ; i < 5 ; i++) {
        printf(" Digite o 2 numero==> ", i+1);
        scanf("%d" , &vet2[i]);
    }
system("cls");
    for( int cont1 = 0 ; cont1 < 5 ; cont1 ++) {
        for( int cont2 = 0 ; cont2 < 5 ; cont2++) {
            if (vet1 [cont1] == vet2 [cont2]) {
                vet3 [cont3] = vet1 [cont1];
                cont3++;
            }
        }
    }
    for( int i=0 ; i<5 ; i++) {
        printf("\n %d \t %d \t - %d\n",vet1[i],vet2[i],vet3[i]);
    }
    system("pause");
    return  0 ;
}