#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    char nome[30];
    int i;

    printf("\nInforme o nome: ");
    scanf("%s", &nome);

    for(i = 1; i<=10; i++){
        printf("\n%s", nome);
    }
    return(0);
}