#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade;
    
    printf("\nDigite sua idade: ");
    scanf("%d", &idade);
    
    if (idade < 16){
        printf("Não eleitor.\n");
    }else{
        if ((idade < 18) || (idade > 65)){
            printf("Eleitor facultativo\n");
        }else{
            printf("Eleitor obrigatorio\n");
        }
    }
    return(0);
}