/*(Exercício 10. Produto
Crie a função recursiva prod(m,n), que devolve o produto de dois números naturais m e n,
usando apenas soma e subtração.*/
#include <stdio.h>

int prod(int m, int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return  m + prod(m, n-1);
    }
}

int main ()
{
    int m, n;
    printf("digite os numeros para serem multiplicados: ");
    scanf("%d %d", &m, &n);
    printf("o resultado da multiplicacao e: %d", prod(m, n));
}