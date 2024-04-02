/*Exercício 12. Resto
Crie a função recursiva resto(m,n), que devolve o resto da divisão inteira do número natural m
pelo número natural n!=0, usando apenas subtração*/

#include <stdio.h>

int resto(int m, int n)
{
    if (m < n || m == 0)
    {
        return m;
    }
    else
    {
        return resto(m-n, n);
    }
}

int main ()
{
    int m, n;
    printf("digite os numeros para achar o resto da divisao: ");
    scanf("%d %d", &m, &n);
    printf("o resto da divisao e: %d", resto(m, n));
}