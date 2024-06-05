/*Exercício 10. Chaves e valores cadeia
Altere a implementação de mapeamentos para criar mapeamentos em que tanto as chaves
quanto seus valores associados são cadeias de caracteres.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char Chave[22];
typedef char Valor[22];
typedef struct map {
  Chave chave;
  Valor valor;
  struct map *prox;
} * Map;

Map no_map(Chave c, Valor v, Map p) {
  Map n = malloc(sizeof(struct map));
  strcpy(n->chave, c);
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
    printf("(%s,%s)", M->chave, M->valor);
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

int pertm(Chave c, Valor v, Map M) {
  while (M && c > M->chave)
    M = M->prox;
  if (M && c == M->chave)
    strcpy(v, M->valor);
  return (M && c == M->chave);
}

int pertmr(Chave c, Valor v, Map I) {
    if (I && c == I->chave) {
        strcpy(v, I->valor);
        return 1;
    } else if (I) {
        return pertmr(c, v, I->prox);
    } else {
        return 0;
    }
}

void destroim(Map *I) {
    while (*I) {
        Map temp = *I;
        *I = (*I)->prox;
        free(temp);
    }
}

void destroimr(Map *I) {
    if (*I) {
        destroimr(&(*I)->prox);
        free(*I);
        *I = NULL;
    }
}

int main(void) {
  Valor w;
  Map I = NULL;
  insm("36", "Leo", &I);
  insm("15", "Ivo", &I);
  insm("42", "Eva", &I);
  destroimr(&I);
  exibem(I);
  return 0;
}
