#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome[30];
    int i;

    printf("\nInforme o nome: ");
    scanf("%s", &nome);

    i = 0;
    while (i<10){
        printf("%s\n", nome);
        i++;
    }
    return(0);
}