#include <stdio.h>
#include <conio.h>

int
main () {
  int var1 = 100;
  int *ptr1;
  ptr1 = &var1;
  printf("\n conteudo apontado por ptr1: %d", *ptr1);
  printf("\n conteudo apontado por ptr1: %d", ptr1);
  printf("\n conteudo apontado por ptr1: %x", ptr1);
  printf("\n conteudo apontado por ptr1: %d", &var1);
  printf("\n conteudo apontado por ptr1: %d", var1);
}
