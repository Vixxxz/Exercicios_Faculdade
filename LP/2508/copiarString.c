// GUSTAVO HENRIQUE BARRETO & RYAN TAKATA

#include <stdio.h>
#include <string.h>

int main() {
  char nome[15], nome2[15];
  printf("digite seu nome ");
  gets(nome2);
  strcpy(nome, nome2);
  printf("%s", nome);
}