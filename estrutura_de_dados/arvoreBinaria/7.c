/* Crie a função recursiva soma(A), que devolve a soma de todos os itens armazenados na
árvore binária A. Em seguida, faça um programa para testar o funcionamento da função.


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


void exibe(Arv A, int n) {
    if (A == NULL) return;
    exibe(A->dir, n + 1);
    printf("%*s%d\n", 3 * n, "", A->item);
    exibe(A->esq, n + 1);
}

int soma(Arv A){
    if(A == NULL) return 0;
    return A->item + soma(A->esq) + soma(A->dir);
  
}


int main(void) {
    
  Arv A = arv(arv(arv(NULL,4,NULL),2,arv(NULL,5,NULL)),1,arv(NULL,3,NULL));
  exibe(A,0);
  printf("Soma: %d\n", soma(A));
  
  return 0;
}
