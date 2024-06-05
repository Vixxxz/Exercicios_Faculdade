/*Exercício 13. Ordenada simplesmente decrescente
Crie a função recursiva osd(L), que verifica se L é uma lista ordenada de forma simplesmente
decrescente (i.e., cada item é maior ou igual ao item seguinte na lista).*/

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
void oec(Lista L) {
    if (L == NULL || L->prox == NULL) {
        printf("Está ordenada de forma estritamente crescente");
    } else {
        if (L->item < L->prox->item)
            oec(L->prox);
        else
            printf("Não está ordenada de forma estritamente crescente");
    }
}
void osd(Lista L) {
    if (L == NULL || L->prox == NULL) {
        printf("Esta ordenada de forma simplesmente decrescente");
    } else {
        if (L->item >= L->prox->item)
            osd(L->prox);
        else
            printf("Nao esta ordenada de forma simplesmente decrescente");
    }
}
int main(void) {
  Lista I = NULL;
  ins(4, &I);
  ins(1, &I);
  ins(3, &I);
  ins(2, &I);
  ins(5, &I);
  exibe(I);
  osd(I);
  return 0;
}
