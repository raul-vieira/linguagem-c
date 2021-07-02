#include <stdio.h>
#include <stdlib.h>

int main(){
    float num;
    printf("\nDigite um numero: ");
    scanf("%f", &num);
    if (num > 10 && num < 20){
        printf("Valor esta entre 10 e 20");
    }
    return(0);
}