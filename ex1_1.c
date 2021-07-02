#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, suc, ant;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    suc = num + 1;
    ant = num - 1;

    printf("O antecessor e: %d \n", ant);
    printf("O sucessor e: %d", suc);

    return (0);
}
