/******************************************************************************

c-crie um vetor do tipo real , que armazene 24  indices de transito da cidade 
uma para cada hora do dia, em um primeiro laço o usuário vai informar os indices, 
em um segundo laço identifique a media dos indices do dia, o maior indice
e o menor indice

*******************************************************************************/

#include <stdio.h>

int main()
{
    float v[24];
    float media, menor, maior;
    int x;
    
    for(x=0;x<24;x++){
        printf("Informe o indice do transito para %ihr: ",x);
        scanf("%f",&v[x]);
        media = media + v[x];
            if(x==0){
                maior = v[x];
                menor = v[x];
            }else{
                if(v[x] > maior) maior = v[x];
                if(v[x] < menor) menor = v[x];
            }
    }
    media = media/24;
    
    
    //resultado do vetor
    for(x=0;x<24;x++){
        printf("\n%ihr:\t%.1f",x,v[x]);
    }
    
    printf("\nMedia: %.1f\nMaior: %.0f\nMenor: %.0f", media, maior, menor);
        
}
