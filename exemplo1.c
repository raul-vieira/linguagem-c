#include <stdio.h>

int main(){
    int idade, ano;
    float altura;
    char nome[30];

    printf ("Digite o seu nome: ");
    scanf ("%s", &nome);

    printf ("Digite sua idade: ");
    scanf ("%d", &idade);

    printf ("Digite sua altura: ");
    scanf ("%f", &altura);

    ano = 2021 - idade;

    printf ("\nO nome e: %s", nome);
    printf ("\nA altura e: %.2f", altura);
    printf ("\nA idade e: %d", idade);
    printf ("\nO ano de nascimeto e: %d", ano);
    return (0);
}
