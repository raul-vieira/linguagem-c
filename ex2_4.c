#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float altura, peso;
    char sexo;
    
    printf("\nInforme o sexo (M/F): ");
    scanf("%c", &sexo);
    printf("Informe a altura: ");
    scanf("%f", &altura);
    
    if ((sexo == 'F') || (sexo == 'f')){
        peso = (62.1 * altura) - 44.7;
    }else{
        peso = (72.7 * altura) - 58;
    }

    printf("\nO sexo e: %c\n", sexo);
    printf("A altura e: %.2f\n", altura);
    printf("O peso ideal e: %.2f\n", peso);
    return(0);
}