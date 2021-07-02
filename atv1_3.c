#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num;

    printf("\nDigite um numero positivo inteiro: ");
    scanf("%d", &num);

    printf("\nO quadrado de %d e: %.1f", num, pow(num, 2));
    printf("\nA raiz de %d e: %.1f\n", num, sqrt(num));
    return(0);
}