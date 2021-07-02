#include <stdio.h>
#include <stdlib.h>

#define reajuste 0.075
#define abono 150

int main(){

    float salario, novosalario;

    printf("\n---------------------------------------------------------------");
    printf("\n* EMPRESA TECHNOLOGIES GROUP");
    printf("\n* NOME: RAUL VICTOR SOARES VIEIRA");
    printf("\n* RA: 21014005-5");
    printf("\n---------------------------------------------------------------\n");
    printf("\n* Informe o seu salario liquido: R$");
    scanf("%f", &salario);

    if (salario <= 1750){
        novosalario = salario + abono + (salario * reajuste);
    }else{
        novosalario = salario + (salario * reajuste);
    }
    printf("\n---------------------------------------------------------------");
    printf("\n* Salario liquido informado: R$%.2f", salario);
    printf("\n* Salario reajustado: R$%.2f", novosalario);
    printf("\n---------------------------------------------------------------");
    return(0);
}
