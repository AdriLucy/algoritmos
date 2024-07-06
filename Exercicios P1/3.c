/******************************************************************************

3-Leia uma distancia em milhas e apresente-a convertida em quilometros. 
A formula de conversao e:K = 1. 61 ∗ M, sendo K a distancia em quilometros e M em milhas.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float milhas, km;
    
    printf("Informe a distancia em milhas: ");
    scanf("%f",&milhas);
    
    km = milhas*1.61;
    
    printf("A distancia em km é de %.1f",km);
    
}
