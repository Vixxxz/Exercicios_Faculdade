/*Exercício 13. Quadrado
O quadrado de um natural n é a soma dos n primeiros ímpares, i.e., n^2 = 1 + 3 + 5 + ... + (2n-1).
Crie a função recursiva q(n), que devolve o quadrado de n, como base nesta informação.*/
#include <stdio.h>

int q(int n)
{
    if(n==0)
    {

    }
    else
    {
        return (2*n-1) + q(n-1);
    }
}

int main ()
{
    int n;
    printf("Digite um numero para calcular seu quadrado: ");
    scanf("%d", &n);
    printf("o quadrado de %d e: %d", n, q(n));
}