/******************************************************************************

a – crie um vetor de 10 posições de números inteiros, colete os valores através 
das iterações, calcule a media o maior numero e o menor numero informados.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int vetor[10];
    float media=0, maior=0, menor=0;
    int x;
    
    for(x=0;x<10;x++){
        printf("Insira algum número inteiro: ");
        scanf("%i",&vetor[x]);
        
        if(x==0){
            maior = vetor[x];
            menor = vetor[x];
        }else{
            if(vetor[x] > maior) maior = vetor[x];
            if(vetor[x] < menor) menor = vetor[x];
        }
        media = media + vetor[x];
    }
    
    //apresentação do resultado do vetor
    for(x=0;x<10;x++){
        printf("\n%i: %i",x+1,vetor[x]);
    }
    
    media = media/10;
    
    printf("\nMédia: %.1f\nMaior: %.0f\nMenor: %.0f",media,maior,menor);
    
}
