#include <stdio.h>
#include <stdlib.h>

int main(){

    float media;

    printf("\nDigite a nota do aluno: ");
    scanf("%f", &media);

    if (media >= 7){
        printf("\nAprovado");
    }else{
        if (media >= 4){
            printf("\nExame");
        }else{
            printf("\nReprovado");
        }
    }
    return(0);
}