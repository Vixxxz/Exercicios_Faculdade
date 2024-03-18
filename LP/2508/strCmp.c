// GUSTAVO HENRIQUE BARRETO & RYAN TAKATA

#include <stdio.h>
#include <string.h>

int main() {
  int size;
  char str[31], str1[31];
  printf("Entre com uma string: \n");
  gets(str);
  printf("\nEntre com uma outra string: \n");
  gets(str1);
  if (strcmp(str, str1)) {
    printf("as strings sao diferentes");
  } else {
    printf("as strings sao iguais");
  }
}