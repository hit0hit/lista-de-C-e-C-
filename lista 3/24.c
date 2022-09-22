#include <stdio.h>
#include <stdlib.h>

main (){
   
    int destino,idaevolta;
   
    printf("\nDESTINO:\n\n1= Regiao Norte\n2= Regiao Nordeste\n3= Regiao Centro Oeste\n4= Regiao Sul\n\n");
    
    printf("\nInforme seu Destino:  ");
    scanf("%d",&destino);

    printf("\nViagem de:\n\n1= Ida\n2= Ida e Volta\n\n ");
    scanf("%d",&idaevolta);


    if((destino==1)&&(idaevolta==1)){
    printf("\nDESTINO: Regiao Norte\n");
    printf("\n500.00 reais - IDA\n");
    }else 
    if ((destino==1)&&(idaevolta==2)){
    printf("\nDESTINO: Regiao Norte\n");
    printf("\n900.00 reais - IDA e VOLTA\n");
    }else 
    if((destino==2)&&(idaevolta==1)){
    printf("\nDESTINO: Regiao Nordeste\n");
    printf("\n350.00 reais - IDA\n");
    }else 
    if ((destino==2)&&(idaevolta==2)){
    printf("\nDESTINO: Regiao Nordeste\n");
    printf("\n650.00 reais - IDA e VOLTA\n");
    }else 
     if((destino==3)&&(idaevolta==1)){
    printf("\nDESTINO: Regiao Centro Oeste\n");
    printf("\n350.00 reais - IDA\n");
    }else 
    if ((destino==3)&&(idaevolta==2)){
    printf("\nDESTINO: Regiao Centro Oeste\n");
    printf("\n600.00 reais - IDA e VOLTA\n");
    }else 
    if((destino==4)&&(idaevolta==1)){
    printf("\nDESTINO: Regiao Sul\n");
    printf("\n300.00 reais - IDA\n");
    }else{
    printf("\nDESTINO: Regiao Sul\n");
    printf("\n550.00 reais - IDA e VOLTA\n");
    }
    printf("\n");
  system("pause");
    return 0;
}