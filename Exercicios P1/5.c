/******************************************************************************

5-Faca um programa que leia o valor de um produto e imprima o valor com desconto,
tendo em vista que o desconto foi de 12%

*******************************************************************************/

#include <stdio.h>

int main()
{
    float valor,valordesconto,valorfinal;
    
    printf("Qual foi o valor do produto que deseja comprar: ");
    scanf("%f",&valor);
    
    valordesconto = (valor*0.12);
    valorfinal = valor-valordesconto;
    
    printf("O valor do seu produto com desconto é de %.2f R$\nEconomizou %.2f R$",valorfinal,valordesconto);
    
}
