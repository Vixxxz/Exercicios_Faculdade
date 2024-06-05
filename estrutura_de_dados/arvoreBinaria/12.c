/* Para cada tipo de percurso, informe em que ordem os itens da árvore a seguir são processados.
                              1
                            /   \
                           2     3
                          / \   / \
                         4   5  6  7
                               / \
                              8   9

# Percursos diretos
  Pré-ordem: 1 2 4 5 3 6 8 9 7
  Em-ordem: 4 2 5 1 6 3 7 8 9
  Pós-ordem: 4 5 2 6 8 9 7 3 1

# Percursos inversos
  Pré-ordem: 1 3 2 7 6 9 8 5 4
  Em-ordem: 7 2 8 6 1 9 5 4 3
  Pós-ordem: 7 8 9 2 5 4 3 6 1*/
  
#include <stdio.h>
#include <stdlib.h>

typedef int Item;

typedef struct arv {
    struct arv *esq;
    Item item;
    struct arv *dir;
} *Arv;

Arv arv(Arv e, Item x, Arv d) {
    Arv n = malloc(sizeof(struct arv));
    n->esq = e;
    n->item = x;
    n->dir = d;
    return n;
}

// Funções de percurso direto
void preOrdem(Arv A) {
    if (A != NULL) {
        printf("%d ", A->item);
        preOrdem(A->esq);
        preOrdem(A->dir);
    }
}

void emOrdem(Arv A) {
    if (A != NULL) {
        emOrdem(A->esq);
        printf("%d ", A->item);
        emOrdem(A->dir);
    }
}

void posOrdem(Arv A) {
    if (A != NULL) {
        posOrdem(A->esq);
        posOrdem(A->dir);
        printf("%d ", A->item);
    }
}

// Funções de percurso inverso
void preOrdemInversa(Arv A) {
    if (A != NULL) {
        printf("%d ", A->item);
        preOrdemInversa(A->dir);
        preOrdemInversa(A->esq);
    }
}

void emOrdemInversa(Arv A) {
    if (A != NULL) {
        emOrdemInversa(A->dir);
        printf("%d ", A->item);
        emOrdemInversa(A->esq);
    }
}

void posOrdemInversa(Arv A) {
    if (A != NULL) {
        posOrdemInversa(A->dir);
        posOrdemInversa(A->esq);
        printf("%d ", A->item);
    }
}

int main(void) {
    // Criação manual da árvore específica
    Arv A = arv(arv(arv(NULL, 4, NULL), 2, arv(NULL, 5, NULL)),
                1,
                arv(arv(arv(NULL, 8, NULL), 6, arv(NULL, 9, NULL)),
                    3,
                    arv(NULL, 7, NULL)));

    // Exibição dos percursos diretos
    printf("Pré-ordem direto: ");
    preOrdem(A);
    printf("\n");

    printf("Em-ordem direto: ");
    emOrdem(A);
    printf("\n");

    printf("Pós-ordem direto: ");
    posOrdem(A);
    printf("\n");

    // Exibição dos percursos inversos
    printf("Pré-ordem inverso: ");
    preOrdemInversa(A);
    printf("\n");

    printf("Em-ordem inverso: ");
    emOrdemInversa(A);
    printf("\n");

    printf("Pós-ordem inverso: ");
    posOrdemInversa(A);
    printf("\n");

    return 0;
}

