#include <stdio.h>
#include <conio.h>

int
main () {
  int inteiros = 4;
  int *inteiro_ptr = 4;

  printf ("valor da variavel inteiro: %d\n", inteiros);
  printf ("endereço da variavel 'inteiro': %d\n", &inteiros);
  printf ("valor armazenado no ponteiro 'inteiro_ptr': %x\n", inteiro_ptr);
  printf ("endereço armazenado no ponteiro 'inteiro_ptr': %x\n\n", &inteiro_ptr);

  printf ("apos o uso dos ponteiros, vamos aponta-los para NULL\n\n");
  inteiros = NULL;
  inteiro_ptr = NULL;
  printf ("valor armazenado no ponteiro 'inteiro': %d\n", inteiros);
  printf ("endereço armazenado no ponteiro 'inteiro_ptr': %d\n", inteiro_ptr);
}
