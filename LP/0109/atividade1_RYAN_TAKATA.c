#include <stdio.h>

int main () {
    float caixas = 0, peso = 0, pesoMedio = 0;

    do {
    printf("Declare a quantidade de caixas e o peso em quilos ");
    scanf("%f %f", &caixas, &peso);
    } while (caixas > 200 || peso > 10000);
    
    pesoMedio = peso / caixas;

    printf("o total de caixas e %1.f", caixas); 
    printf("\no peso total em quilos e %1.f", peso);
    printf("\no peso medio em quilos e %1.f", pesoMedio);
}