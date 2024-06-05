/*Exercício 10. Verificação de pertinência recursiva
Crie a função recursiva pert_rec(x,L), que verifica se o item x está na lista
ordenada L.*/

#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct no {
  Item item;
  struct no *prox;
} * Lista;

Lista no(Item x, Lista p) {
  Lista n = malloc(sizeof(struct no));
  n->item = x;
  n->prox = p;
  return n;
}

void exibe(Lista L) {
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

void ins(Item x, Lista *L) {
  while (*L != NULL && (*L)->item < x)
    L = &(*L)->prox;
  *L = no(x, *L);
}

void rem(Item x, Lista *L) {
  while (*L != NULL && (*L)->item < x)
    L = &(*L)->prox;
  if (*L == NULL || (*L)->item > x)
    return;
  Lista n = *L;
  *L = n->prox;
  free(n);
}

void rem_todo(Item x, Lista *L) {
  while (*L != NULL) {
    if ((*L)->item == x) {
      Lista n = *L;
      *L = n->prox;
      free(n);
    } else {
      L = &(*L)->prox;
    }
  }
}

int pert_rec(Item x, Lista *L) {
  if (*L == NULL) {
    return 0;
  } else if (x == (*L)->item) {
    return 1;
  } else {
    return pert_rec(x, &(*L)->prox);
  }
}

int main(void) {
  Lista I = NULL;
  ins(4, &I);
  ins(1, &I);
  ins(3, &I);
  ins(2, &I);
  ins(5, &I);
  printf("%d. se 1: pertence / se 0 não pertence\n", pert_rec(5, &I));
  printf("%d. se 1: pertence / se 0 não pertence\n", pert_rec(3, &I));
  return 0;
}