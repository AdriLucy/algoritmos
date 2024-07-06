/******************************************************************************

10-Leia o salario de um funcionario. Calcule e imprima o valor do novo salario, 
sabendo que ele recebeu um aumento de 25%.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float salario;
    
    printf("Informe o seu salario atual: ");
    scanf("%f",&salario);
    
    salario  = salario * 1.25;
    
    printf("Seu salario com o aumento de 25%%: %.2f R$",salario);
    
}
