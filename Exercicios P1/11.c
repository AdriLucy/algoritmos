/******************************************************************************

11-Faca um programa que receba dois numeros e mostre o maior. Se por acaso, os 
dois numeros forem iguais, imprima a mensagem Numeros iguais.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n1,n2;
    
    printf("Informe dois numeros inteiros: ");
    scanf("%i %i",&n1, &n2);
    
    if(n1==n2){
        printf("Os dois numeros são iguais!");
    }else{
        if(n1>n2){
            printf("%i é maior que %i",n1, n2);
        }else{
            printf("%i é maior que %i",n2, n1);
        }
    }
    
}
