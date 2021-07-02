#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome[30];
    int idade;

    printf("\nDigite seu nome: ");
    scanf("%s", &nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("\nNome: %s", nome);
    printf("\nIdade: %d", idade);
    if (idade <= 18){
        printf("\nO valor do plano e: R$50.00");
    }else{
        if ((idade >= 19) && (idade <= 29)){
            printf("\nO valor do plano e: R$70.00");
        }else{
            if ((idade >= 30) && (idade <= 45)){
                printf("\nO valor do plano e: R$90.00");
            }else{
                if ((idade >= 46) && (idade <= 65)){
                    printf("\nO valor do plano e: R$130.00");
                }else{
                    if (idade > 65){
                        printf("\nO valor do plano e: R$170.00");
                    }
                }
            }
        }
    }
    return(0);
}