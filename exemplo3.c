#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num;
    float raiz;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        raiz = sqrt(num);
        printf("\nA raiz quadrada de %d e: %.2f", num, raiz);
    }
    
    return(0);
}