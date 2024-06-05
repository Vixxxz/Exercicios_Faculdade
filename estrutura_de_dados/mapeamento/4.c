/*Exercício 4. Remoção recursiva
Crie a função recursiva remmr(c,&I), que remove a chave c do mapeamento I.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int Chave;
typedef char Valor[22];
typedef struct map {
  Chave chave;
  Valor valor;
  struct map *prox;
} * Map;

Map no_map(Chave c, Valor v, Map p) {
  Map n = malloc(sizeof(struct map));
  n->chave = c;
  strcpy(n->valor, v);
  n->prox = p;
  return n;
}

void insm(Chave c, Valor v, Map *M) {
  while (*M && c > (*M)->chave)
    M = &(*M)->prox;
  if (*M && c == (*M)->chave)
    strcpy((*M)->valor, v);
  else
    *M = no_map(c, v, *M);
}

void exibem(Map M) {
  printf("[");
  while (M) {
    printf("(%d,%s)", M->chave, M->valor);
    if (M->prox)
      printf(",");
    M = M->prox;
  }
  printf("]\n");
}

void insmr(Chave c, Valor v, Map *I) {
  if (*I && c > (*I)->chave) {
    insmr(c, v, &(*I)->prox);
  } else if (*I && c == (*I)->chave) {
    strcpy((*I)->valor, v);
  } else {
    *I = no_map(c, v, *I);
  }
}

void remm(Chave c, Map *M) {
  while (*M && c > (*M)->chave)
    M = &(*M)->prox;
  if (*M == NULL || c != (*M)->chave)
    return;
  Map n = *M;
  *M = n->prox;
  free(n);
}

void remmr(Chave c, Map *I) {
  if (*I) {
    if ((*I)->chave == c) {
      Map n = *I;
      *I = n->prox;
      free(n);
    } else {
      remmr(c, &(*I)->prox);
    }
  }
}

int main(void) {
  Map I = NULL;
  insm(36, "Leo", &I);
  insm(15, "Ivo", &I);
  insm(42, "Eva", &I);
  insm(29, "Ana", &I);
  exibem(I);
  remmr(29, &I);
  exibem(I);
  remmr(42, &I);
  exibem(I);
  return 0;
}