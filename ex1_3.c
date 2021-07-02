#include <stdio.h>
#include <stdlib.h>

int main(){
    float deposito, taxa, rendimento, total;

    printf("Informe o valor de deposito: R$");
    scanf("%f", &deposito);
    printf("Informe a taxa de juros: ");
    scanf("%f", &taxa);

    rendimento = deposito * (taxa/100);
    total = deposito + rendimento;

    printf("\nO rendimento e: R$%.2f", rendimento);
    printf("\nO total e: R$%.2f", total);
    return(0);
    
}