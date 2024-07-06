/******************************************************************************

d- Crie um programa que controle uma lista de vacinação, armazene em uma matriz 
10×3 os seguintes dados: primeira coluna :  idade, segunda coluna tipo da vacina
da primeira dose:  1-AZ,  2-CO,  3-PF,  4-JA, terceira coluna tipo da vacina da 
segunda dose:   1-AZ,  2-CO,  3-PF,  4-JA

Exiba ao final a quantidade de doses de cada tipo de vacina por dose
Mostre a quantidade de pessoas que foram vacinados com o mesmo tipo de vacina, 
na primeira e segunda dose
mostre o percentual total de cada tipo de vacina em todas as doses

*******************************************************************************/

#include <stdio.h>

int main()
{
    int va[10][3];
    float az=0, co=0, pf=0, ja=0, az2=0, co2=0, pf2=0, ja2=0, azt=0, cot=0, pft=0, jat=0,total=0;
    int x,mesmavacina=0;
    
    printf("\nSegue a numeração para cada vacina: \n1-AZ\n2-CO\n3-PF\n4-JA");
    
    for(x=0;x<10;x++){
        printf("\nInforme a idade, a primeira e segunda dose: ");
        scanf("%i %i %i",&va[x][0],&va[x][1],&va[x][2]);
       
        //mesma vacina nas duas doses
        if(va[x][1] == va[x][2]) mesmavacina++;
        
        //qtde para cada vacina na primeira dose
        if(va[x][1] == 1) az++;
        if(va[x][1] == 2) co++;
        if(va[x][1] == 3) pf++;
        if(va[x][1] == 4) ja++;
        
        //qtde para cada vacina na primeira dos
        if(va[x][2] == 1) az2++;
        if(va[x][2] == 2) co2++;
        if(va[x][2] == 3) pf2++;
        if(va[x][2] == 4) ja2++;
    }
    azt = ((az + az2)/20)*100;
    cot = ((co + co2)/20)*100;
    pft = ((pf + pf2)/20)*100;
    jat = ((ja + ja2)/20)*100;
    
    
    printf("\nResultado em tabela");
    for(x=0;x<10;x++){
        printf("\n%i\t%i\t%i",va[x][0],va[x][1],va[x][2]);
    }
    
    printf("\n\nExiba ao final a quantidade de doses de cada tipo de vacina por dose");
    printf("\nVa\t1\t2\nAZ:\t%.0f\t%.0f\nCO:\t%.0f\t%.0f\nPF:\t%.0f\t%.0f\nJA:\t%.0f\t%.0f",az,az2,co,co2,pf,pf2,ja,ja2);
    
    printf("\n\nMostre a quantidade de pessoas que foram vacinados com o mesmo tipo de vacina, na primeira e segunda dose");
    printf("\nQtde: %i",mesmavacina);
    
    printf("\n\nMostre o percentual total de cada tipo de vacina em todas as doses");
    printf("\nVA\t%%\nAZ:\t%.1f\nCO:\t%.1f\nPF:\t%.1f\nJA:\t%.1f",azt,cot,pft,jat);

}
