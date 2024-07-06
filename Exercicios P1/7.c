/******************************************************************************

7-João, comprou um microcomputador para controlar o rendimento diário de seu 
trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido pelo 
regulamento de pesca do estado de São Paulo (50 quilos) deve pagar um multa de 
R$ 4,00 por quilo excedente. João precisa que você faça um programa em C  que 
leia a variável P (peso de peixes) e verifique se há excesso. Se houver, gravar 
na variável E (Excesso) e na variável M o valor da multa que João deverá pagar. 
Caso contrário mostrar tais variáveis com o conteúdo ZERO

*******************************************************************************/

#include <stdio.h>

int main()
{
    float peixe,excesso,multa;
    
    printf("Qual o peso do peixe que pescou em kg: ");
    scanf("%f",&peixe);
    
    if(peixe >= 50){
        excesso = peixe-50;
        multa = excesso*4;
        printf("Você recebeu uma multa por ultrapassar o valor de 50 kg");
        printf("\nO peso do peixe é de %.0f kg, ",peixe);
        printf("sendo %.0f kg de excesso e sua multa será de %.2f R$",excesso,multa);
    }else{
        printf("Não teve multa, o peso do peixe é %.0f kg",peixe);
    }
    
}
