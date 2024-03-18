#include <stdio.h>

int main() {
  float notas[100];
  int i;

  for (i = 1; i <= 10; i++) {
    printf("Digite a nota que vai entrar no vetor no lugar do indice %d: ", i);
    scanf("%f", &notas[i]);
  }

  for (i = 1; i <= 10; i++) {
    printf("a nota que ta no vetor no lugar do indice %d eh %.2f \n", i,
           notas[i]);
  }
}