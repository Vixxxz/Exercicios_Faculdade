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

void exiba_ri(Lista L) 
{
    if (L != NULL) 
    {
        exiba_ri(L->prox);
        printf("%d\n", L->item);
    }
}

void exibe(Lista L) 
{
    printf("[");
    while (L != NULL) 
    {
        printf("%d", L->item);
        if (L->prox != NULL) 
        {
            printf(",");
        } 
        else 
        {
            printf("]\n");
        }
        L = L->prox;
    }
}

void ins_rsr(Item x, Lista *L) 
{
    if (*L == NULL || x < (*L)->item) 
    {
        *L = no(x, *L);
    } 
    else if (x > (*L)->item) 
    {
        ins_rsr(x, &(*L)->prox);
    }
}

int main(void) 
{
    Lista I = NULL;
    ins_rsr(4, &I);
    ins_rsr(1, &I);
    ins_rsr(3, &I);
    ins_rsr(5, &I);
    ins_rsr(2, &I);
    exiba_ri(I);
    return 0;
}
