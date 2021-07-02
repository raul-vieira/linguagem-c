#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("\nNumero par");
    }else{
        printf("\nNumero impar");
    }
    return(0);
}