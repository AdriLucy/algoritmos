/******************************************************************************

8-Elabore um programa em C que leia as variáveis C e N, respectivamente código 
e número de horas trabalhadas de um operário. E calcule o salário sabendo-se que
ele ganha R$ 10,00 por hora. Quando o número de horas exceder a 50 calcule o 
excesso de pagamento armazenando-o na variável E, caso contrário zerar tal variável. 
A hora excedente de trabalho vale R$ 20,00. No final do processamento imprimir o
salário total e o salário excedente

*******************************************************************************/

#include <stdio.h>

int main()
{
    int c;
    float n,s,e,se;
    
    printf("Informe o código e as horas trabalhadas do funcionario: ");
    scanf ("%i %f",&c, &n);
    
    if(n>=50){
        e = n-50;
        s = (50 * 10) + (e * 20);
        se = (e * 20);
        printf("O salario será de %.2f R$!",s);
        printf("\nSendo %.2f R$ de horas excedente",se);
        
    }else{
         s = n * 10;
        printf("O valor das horas trabalhadas é de %.2f R$",s);
    }
    
}
