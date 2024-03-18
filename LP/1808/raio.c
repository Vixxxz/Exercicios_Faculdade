#include <stdio.h>

int main() {
  float raio = 0, perimetro = 0;

  printf("Qual o raio? ");
  scanf("%f", &raio);
  perimetro = (2 * raio) * 3.14;
  printf("Perimetro = %.2f\n", perimetro);
}