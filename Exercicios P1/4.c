/******************************************************************************

4-Leia um valor de comprimento em polegadas e apresente-o convertido em 
centımetros. 
A formula de conversao ̃e: ́ C = P ∗ 2, 54, sendo C o comprimento em centımetro
s e P o comprimento em polegadas.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float polegadas, centimetros;
    
    printf("Informe o valor do comprimento em polegadas: ");
    scanf("%f",&polegadas);
    
    centimetros = polegadas*2.54;
    
    printf("O valor da conversão em centimetros é %.1f",centimetros);
    
}
