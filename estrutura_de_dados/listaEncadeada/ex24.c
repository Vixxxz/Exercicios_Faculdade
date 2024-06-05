/*.Exercício 24. Substituição
Crie a função recursiva replace(x,y,L), que substitui ocorrências de x por y na lista L*/

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
      printf("]\n");
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

void in (int x, Lista L)
{
  if (L==NULL)
  {
    printf("Erro fatal: lista vazia");
    return;
  }
  if (x == L->item)
  {
    printf("O item %d pertence a lista", x);
  }
  else if (L->prox == NULL)
  {
    printf("O item %d não pertence a lista", x);
  }
  else
  {
    return in(x,L->prox);
  }
}

void nth(int n, Lista L)
{
  if (L == NULL)
  {
    printf("Erro fatal: lista vazia");
    return;
  }
  else if (n < 1)
  {
    printf("Erro fatal: n menor que 1");
    return;
  }
  if (n == 1)
  {
    printf("o numero na posicao eh: %d", L->item);
  }
  else if (L->prox == NULL)
  {
    printf("Erro fatal: n maior que o tamanho da lista");
  }
  else
  {
    return nth(n-1, L->prox);
  }
}

int minimum(Lista L) 
{
    if (L == NULL)
    {
        printf("Erro fatal: lista vazia");
        return 0;
    }
    if (L->prox == NULL)
    {
        return L->item;
    }
    else
    {
        if (L->item < minimum(L->prox))
        {
            return L->item;
        }
        else
        {
            return minimum(L->prox);
        }
    }
}

 void sorted(Lista L)
{
  if (L == NULL)
  {
    printf("\nErro fatal: lista vazia");
    return;
  }
  if (L->prox == NULL)
  {
    printf("\nA lista esta ordenada");
    return;
  }
  else
  {
    if (L->item > L->prox->item)
    {
      printf("\nA lista nao esta ordenada");
    }
    else
    {
      sorted(L->prox);
    }
  }
}

void equal (Lista A, Lista B)
{
  if (A == NULL || B == NULL)
    {
    printf("Erro fatal: lista vazia");
    return;
    }
  if (A->prox == NULL && B->prox == NULL)
  {
    printf("As listas sao iguais");
  }
  else
  {
    if (A->item == B->item)
    {
      equal(A->prox, B->prox);
    }
    else
    {
      printf("As listas nao sao iguais");
    }
  }
}

int count(int x, Lista L) 
{
    if (L == NULL) 
    {
        return 0;
    }
    if (L->item == x) 
    {
        return 1 + count(x, L->prox);
    }
    else 
    {
        return count(x, L->prox);
    }
}

Lista replace(Item x, Item y, Lista L) 
{
    if (L == NULL) 
    {
        return NULL;
    }
    if (L->item == x) 
    {
        L->item = y;
    }
    L->prox = replace(x, y, L->prox);
    return L;
}

int main(void) 
{
  Lista A = no(0, no(1, no(2, no(2, no(4, NULL)))));
  exibe(A);
  exibe(replace(2, 3, A));
  return 0;
}