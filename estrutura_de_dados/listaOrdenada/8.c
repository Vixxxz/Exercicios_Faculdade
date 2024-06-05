/*Exercício 8. Remoção de todas as ocorrências
Crie a função iterativa rem_todo(x,&L), que remove toda ocorrência do item x na lista
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

int main(void) {
  Lista I = NULL;
  ins(4, &I);
  ins(1, &I);
  ins(3, &I);
  ins(5, &I);
  ins(3, &I);
  rem_todo(3, &I);
  exibe(I);
  return 0;
}
