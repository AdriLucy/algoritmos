/******************************************************************************

9-Desenvolva um programa em C que: Leia 4 (quatro) números; Calcule o quadrado 
de cada um; Se o valor resultante do quadrado do terceiro for >= 1000, imprima-o 
e finalize; Caso contrário, imprima os valores lidos e seus respectivos quadrados.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float a,b,c,d,a2,b2,c2,d2;
    
    printf("Informe 4 valores: ");
    scanf ("%f %f %f %f",&a, &b, &c, &d);
    
    if(c*c >= 1000){
        c2 = c*c;
        printf("O valor do terceiro número ao quadrado é: %.2f",c2);
    }else{
        a2 = a*a;
        b2 = b*b;
        c2 = c*c;
        d2 = d*d;
        
        printf("1 - %.2f ao quadrado é igual a: %.2f",a,a2);
        printf("\n2 - %.2f ao quadrado é igual a: %.2f",b,b2);
        printf("\n3 - %.2f ao quadrado é igual a: %.2f",c,c2);
        printf("\n4 - %.2f ao quadrado é igual a: %.2f",d,d2);
        
    }
    
}
