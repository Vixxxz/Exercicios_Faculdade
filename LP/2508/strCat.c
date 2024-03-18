// GUSTAVO HENRIQUE BARRETO & RYAN TAKATA

#include <stdio.h>
#include <string.h>

int main() {
  char string1[31], string2[31];
  printf("Digite algo ");
  gets(string1);
  printf("Digite algo para ser concatenado ");
  gets(string2);

  strcat(string1, string2);

  printf("%s", string1);
}