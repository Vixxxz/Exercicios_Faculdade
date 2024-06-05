/* Uma árvore binária é balanceada se, para cada nó, a diferença entre o número de descendentes
à esquerda e o número de descendentes à direita é nomáximo 1. Crie a função balanceada(n),
que devolve uma árvore balanceada com n itens aleatórios, e execute o programa a seguir.
int main(void) {
srand(time(NULL));
exibe(balanceada(9),0);
return 0;
}
*/




#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

Arv completa(int altura) {
    if (altura <= 0) return NULL;
    return arv(completa(altura - 1), rand() % 100, completa(altura - 1));
}

void exibe(Arv A, int n) {
    if (A == NULL) return;
    exibe(A->dir, n + 1);
    printf("%*s%d\n", 3 * n, "", A->item);
    exibe(A->esq, n + 1);
}

Arv balanceada(int n) {
    if (n <= 0) return NULL;

    int numEsq = (n - 1) / 2; 
    int numDir = n - 1 - numEsq; 

    Arv esq = balanceada(numEsq); 
    Arv dir = balanceada(numDir); 

    return arv(esq, rand() % 100, dir); 
}


int main(void) {
  srand(time(NULL));
  exibe(balanceada(9),0);
  return 0;
}
