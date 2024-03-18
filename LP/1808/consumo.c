#include <stdio.h>

int main() {
  float quilometros = 0, litros = 0;
  printf("declare os km percorridos e a quantidade de combustivel em litros");
  scanf("%f %f", &quilometros, &litros);
  printf("o consumo medio e %f", litros / quilometros);
}