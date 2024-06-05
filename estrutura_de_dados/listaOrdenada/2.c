/*Exercício 2. Inserção iterativa sem repetição
Crie a função iterativa ins_isr(x,&L), que insere o item x na lista ordenada L
somente se ele ainda não estiver nesta lista.*/

#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct no 
{
  Item item;
  struct no *prox;
} * Lista;

Lista no(Item x, Lista p) 
{
  Lista n = malloc(sizeof(struct no));
  n->item = x;
  n->prox = p;
  return n;
}

void exibe(Lista L) 
{
  printf("[");
  while (L != NULL) {
    printf("%d", L->item);
    if (L->prox != NULL) {
      printf(",");
    } else {
      printf("]\n");
    }
    L = L->prox;
  }
}

void ins_isr(Item x, Lista *L)
{
    while (*L != NULL && (*L)->item < x)
    {
        if ((*L)->item == x)
        {
          printf("item %d ja existente na lista.", x);
          return; 
        }
        L = &(*L)->prox;
    }
    if (*L == NULL || (*L)->item != x)
    {
        *L = no(x, *L);
    }
}

int main(void) 
{
  Lista I = NULL;
  ins_isr(4, &I);
  ins_isr(1, &I);
  ins_isr(3, &I);
  ins_isr(5, &I);
  ins_isr(2, &I);
  exibe(I);
  return 0;
}

