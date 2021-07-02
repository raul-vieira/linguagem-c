#include <stdio.h>
#include <stdlib.h>

int main(){

    float num1, num2, resultado;
    int op;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    printf("\n 1 - Soma \n 2 - Subtracao \n 3 - Multiplicacao \n 4 - Divisao \n\nEscolha a operacao desejada: ");
    scanf("%d", &op);

    switch (op){
        case 1:
            resultado = num1 + num2;
            printf("A soma e: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("A subtracao e: %.2f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("A multiplicacao e: %.2f\n", resultado);
            break;
        case 4:
            resultado = num1 / num2;
            printf("A divisao e: %.2f\n", resultado);
            break;
        default:
            printf("Opcao invalida. \n");
            break;
        }
        return(0);
}