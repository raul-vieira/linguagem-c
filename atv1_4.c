#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, num3, num4;
    float media;

    printf("\nDigite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);
    printf("Digite o quarto numero: ");
    scanf("%d", &num4);

    media = (num1+num2+num3+num4)/4;

    printf("\nA media dos numeros e: %.2f", media);
    return(0);
}