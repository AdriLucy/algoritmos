/******************************************************************************

b- crie dois vetores de 10 posições de números inteiros, colete os valores 
através das iterações de um laço, e outro laço armazene no segundo laço os 
valores em ordem inversa do índice.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[10], b[10];
    int x,y=9;
    
    for(x=0;x<10;x++){
        printf("Informe numeros inteiros: ");
        scanf("%i",&a[x]);
    }
    
    for(x=0;x<10;x++){
        b[y] = a[x];
        y--;
    }
    
    for(x=0;x<10;x++){
        printf("\n%i:\t%i\t%i",x+1,a[x],b[x]);
    }
    
    
    
    
}
