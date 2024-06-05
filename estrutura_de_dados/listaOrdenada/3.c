/*Exercício 3. Inserção recursiva
Crie a função recursiva ins_rec(x,&L), que insere o item x na lista ordenada L.*/

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
void ins_rec(Item x, Lista *L)
{
    if (*L == NULL || x < (*L)->item)
    {
        *L = no(x, *L);
    } 
    else if (x > (*L)->item)
    {
        ins_rec(x, &(*L)->prox);
    }
}

int main(void) 
{
  Lista I = NULL;
  ins_rec(4, &I);
  ins_rec(1, &I);
  ins_rec(3, &I);
  ins_rec(5, &I);
  ins_rec(2, &I);
  exibe(I);
  return 0;
}

