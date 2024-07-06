/******************************************************************************

1-Faça um programa em c que leia a temperatura em graus Celsius e converta para 
Fahrenheit F = (9 * C + 160) / 5

*******************************************************************************/

#include <stdio.h>

int main()
{
    float tempc, tempf;
    
    printf("Informe a temperatura em Celsius: ");
    scanf("%f",&tempc);
    
    tempf = ((9 * tempc + 160) / 5);
    
    printf("A temperatura em Fahrenheit é %1.f",tempf);
    
}
