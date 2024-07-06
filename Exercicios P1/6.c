/******************************************************************************

6-Faça um algoritmo em C que receba um numero inteiro e verifique se este e 
positivo ou negativo, exiba uma mensagem

*******************************************************************************/

#include <stdio.h>

int main()
{
    int numero;
    
    printf("Informe o valor que deseja verificar: ");
    scanf("%i",&numero);
    
    if(numero >= 0){
        printf("O valor %i é positivo",numero);
    }else{
        printf("O valor %i é negativo",numero);
    }
    
}
