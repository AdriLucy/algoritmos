/******************************************************************************

13-Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um 
algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
Para homens: (72.7*h) – 58
Para mulheres: (62.1*h) – 44.7 (h = altura)

*******************************************************************************/

#include <stdio.h>

int main()
{
    char sexo[2];
    float altura,pesoideal;

    printf("F - Feminino\nM - Masculino");
    printf("\nInforme o sexo da pessoa: ");
    scanf("%s",sexo);

    printf("\nInforme a altura da pessoa: ");
    scanf("%f",&altura);

    if(sexo == "M"){
        pesoideal = (72.7*altura) – 58;
        printf("O seu peso ideal é de %.2f kg",pesoideal);
    }else{
        pesoideal = (62.1*altura) – 44.7;
        printf("O seu peso ideal é de %.2f kg",pesoideal);
    }
    
    /*if(sexo == "F") || (sexo == "M"){
        if(sexo == "F"){
            pesoideal = (62.1*altura) – 44.7;
            printf("O seu peso ideal é de %.2f kg",pesoideal);
        }else{
            pesoideal = (72.7*altura) – 58;
            printf("O seu peso ideal é de %.2f kg",pesoideal);
        }
    }else{
        printf("Informe um valor correto (F) ou (M)");
    }
    */

}
