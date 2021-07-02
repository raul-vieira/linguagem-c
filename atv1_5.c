#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141593

int main(){

    float raio, A, P;

    printf("\nDigite o raio do circulo: ");
    scanf("%f", &raio);

    A = PI * pow(raio, 2);
    P = 2 * PI * raio;

    printf("\nA area do circulo e: %.2f", A);
    printf("\nO perimetro do circulo e: %.2f", P);
    return(0);
}