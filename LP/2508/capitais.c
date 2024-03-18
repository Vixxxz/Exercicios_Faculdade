// GUSTAVO HENRIQUE BARRETO & RYAN TAKATA

#include <stdio.h>
#include <string.h>

int main() {
  char estado[2];
  printf("digite um sigla de um estado ");
  gets(estado);

  if (strcmp(estado, "sp") == 0) {
    printf("Paulista");
  } else if (strcmp(estado, "rj") == 0) {
    printf("Carioca");
  } else if (strcmp(estado, "mg") == 0) {
    printf("Mineiro");
  } else {
    printf("outros estados");
  }
}
