#include <conio.h>
#include <stdio.h>
#define LIMITE 30

int main() {
  float peso = 0, altura = 0, imc = 0;
  int continua = 0, pessoas = 0;

  printf("calculo de imc e verificador de obesidade\n");
  printf("digite a quantidade de pessoas que ira utilizar o sistema\n");
  scanf("%d", &pessoas);

  for (continua; continua < pessoas; continua++) {
    printf("\nqual o seu peso e altura?\n");
    scanf("%f %f", &peso, &altura);
    imc = peso / (altura * altura);
    printf("\nSeu imc e %.1f\n", imc);
    
    if (imc <= LIMITE) {
      printf("\nvoce nao e obeso\n");
    } else {
      printf("\nvoce e obeso\n");
    }
  }
}