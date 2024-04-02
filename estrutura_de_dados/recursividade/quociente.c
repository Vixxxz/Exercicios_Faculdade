/*Exercício 11. Quociente
Crie a função recursiva quoc(m,n), que devolve o quociente da divisão inteira do número natural
m pelo número natural n!=0, usando apenas soma e subtração.*/

#include <stdio.h>

int quoc(int m, int n)
{
    if (m < n || m == 0)
    {
        return 0;
    }
    else
    {
        return 1 + quoc(m-n, n);
    }
}

int main ()
{
    int m, n;
    printf("digite os numeros para serem divididos: ");
    scanf("%d %d", &m, &n);
    printf("o resultado da divisao e: %d", quoc(m, n));
}

