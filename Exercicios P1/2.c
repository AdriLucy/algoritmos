/******************************************************************************

2-Leia uma velocidade em km/h (quilometros por hora) e apresente-a convertida 
em m/s  (metros por segundo).
A formula de conversao  e: M = K/3.6, sendo K a velocidade em km/h e M em m/s.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float kmh, ms;
    
    printf("Informe a velocidade em km/h: ");
    scanf("%f",&kmh);
    
    ms = kmh/3.6;
    
    printf("A velocidade em m/s é de %.1f",ms);
    
}
