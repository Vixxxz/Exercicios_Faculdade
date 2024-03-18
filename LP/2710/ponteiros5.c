#include <stdio.h>
#include <conio.h>

int main (){
  int x, *ptrx, **pptrx;
  x = 0;
  printf ("\n valor de x = %d  ", x);
  printf( "\n endereco de x = %d ", &x);
  // atribuindo os endereços para os ponteiros
  ptrx = &x; // ptrx aponta para x
  pptrx = &ptrx; // pptrx aponta para ptrx

  *ptrx = *ptrx + 10;
  printf("\n valor de x = %d   ", x);
  printf( "\n endereco apontando por ptrx: %x ", ptrx);
  printf("\n valor da variavel x que esta sendo apontada por ptrx = %d ", *ptrx);
  printf("\n endereco da memoria da variavel ptrx = %x ", &ptrx);

  **pptrx = **pptrx + 10;
  printf("\n valor de x = %d  ", x);
  printf( "\n endereco apontando por **pptrx: %x ", pptrx);
  printf("\n valor da variavel para a qual pptrx faz referencia: %d ", **pptrx);
  printf("\n endereço de memoria da variavel **pptrx: %x ", &pptrx);
}