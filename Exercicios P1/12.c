/******************************************************************************

12-Leia o salario de um trabalhador e o valor da prestacao de um emprestimo. Se a
prestacao for maior que 20% do salario imprima: Emprestimo nao concedido, caso
contrario imprima:  Emprestimo concedido.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float salario, prestacao;
    printf("Informe o seu salario: ");
    scanf("%f",&salario);
    
    printf("Agora informe o valor da sua prestação do emprestimo: ");
    scanf("%f",&prestacao);
    
    if(prestacao > salario*0.2){
        printf("Emprestimo não concedido!");
    }else{
        printf("Emprestimo concedido!");
    }
    
    
}
