#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome[20];

    printf("Digite o seu nome: ");
    scanf("%s", &nome);

    printf("Seja bem vindo(a) a disciplina de Algoritmos e Logica de programacao II, %s!", nome);
    return(0);
}