/*.Exercício 17. Último
Crie a função recursiva last(L), que devolve o último item da lista L.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
      printf("]");
    }
    L = L->prox;
  }
}

int tamanho(Lista L) 
{
  int t = 0;
  while (L) {
    t++;
    L = L->prox;
  }
  return t;
}

int soma(Lista L) 
{
  int soma = 0;
  while (L) {
    soma = soma + L->item;
    L = L->prox;
  }
  return soma;
}

Lista intervalo(int n, int m) 
{
  Lista L = NULL;
  int tamanho = m;
  while (n <= tamanho) {
    L = no(m, L);
    n++;
    m--;
  }
  return L;
}

void anexa(Lista *A, Lista B) 
{
  if (!B) {
    return;
  }
  while (*A) {
    A = &(*A)->prox;
  }
  *A = B;
}

void destroi(Lista *L) 
{
  while (*L) {
    Lista n = *L;
    *L = n->prox;
    free(n);
  }
}

int ultimo(Lista L) 
{
  if (L == NULL) {
    printf("Erro fatal: lista vazia");
    return 0;
  }
  while (L->prox != NULL) {
    L = L->prox;
  }
  return L->item;
}

int maximo(Lista L) 
{
  int max = 0;
  if (L == NULL) {
    printf("Erro fatal: lista vazia");
    return 0;
  }

  while (L) 
  {
    if (L->item > max) 
    {
      max = L->item;
    }
    L = L->prox;
  }
  return max;
}

void pertence(int x, Lista L)
{
  if (L == NULL)
  {
    printf("Erro fatal: lista vazia");
    return;
  }
  while (L)
  {
    if (L->item == x)
    {
      printf("O item %d pertence a lista", x);
    }
    else if (L->prox == NULL)
    {
      printf("O item %d não pertence a lista", x);
    }
    L = L->prox;
  }
}

Lista inversa(Lista L)
{
  Lista L2 = NULL;
  if (L == NULL)
  {
    printf("Erro fatal: lista vazia");
    return 0;
  }
  while (L)
  {
    L2 = no(L->item, L2);
    L = L->prox;
  }
  return L2;
}

int len (Lista L)
{
  int contador = 0;
  if (L == NULL)
  {
    printf("Erro fatal: lista vazia");
    return contador;
  }
  while (L)
  {
    contador++;
    L = L->prox;
  }
  return contador;
}

int sum (Lista L)
{
  int soma = 0;
  if (L == NULL)
  {
    printf("Erro fatal: lista vazia");
    return soma;
  }
  if (L->prox == NULL)
  {
    return L->item;
  }
  else
  {
    soma = L->item + sum(L->prox);
  }
  return soma;
}

Lista clone (Lista L)
{
  Lista L2 = NULL;
  if (L == NULL)
  {
    printf("Erro fatal: lista vazia");
    return L2;
  }
  if(L->prox == NULL)
  {
    return L;
  }
  else
  {
    L2 = no(L->item, clone(L->prox));
  }
  return L2;
}

Lista rnd(int n, int m)
{
  Lista L = NULL;
  if (n == 0)
  {
    return L;
  }
  else
  {
    L = no(rand() % m, rnd(n-1, m));
  }
  return L;
}

int last (Lista L)
{
  if (L==NULL)
  {
    printf("Erro fatal: lista vazia");
    return 0;
  }
  if (L->prox==NULL)
  {
    return L->item;
  }
  else
  {
    return last(L->prox);
  }
}

int main(void) 
{
  int n = 0, x = 0;
  Lista L = no(4, no(3, no(2, no(1, no(0, NULL)))));
  exibe(L);
  printf("\no ultimo elemento da lista eh: %d\n", last(L));
  return 0;
}