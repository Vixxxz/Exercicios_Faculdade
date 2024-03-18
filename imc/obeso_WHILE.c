#include <conio.h>
#include <stdio.h>
#define LIMITE 30

int main() {
  float peso = 0, altura = 0, imc = 0;
  int continua = 1;

  printf("calculo de imc e verificador de obesidade");

  while (continua == 1) {
    printf("\n qual o seu peso e altura? ");
    scanf("%f %f", &peso, &altura);
    imc = peso / (altura * altura);
    printf("\n Seu imc e %.1f", imc);

    if (imc <= LIMITE) {
      printf("\n voce nao e obeso\n");
    } else {
      printf("\n voce e obeso\n");
    }
    
    printf("deseja continuar? \n sim = 1 \n nao = 0 \n");
    scanf("%d", &continua);
    getch();
  }
}