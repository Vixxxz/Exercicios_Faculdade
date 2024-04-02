/*Exercício 14. Soma de dígitos
Crie a função recursiva sd(n), que devolve a soma dos dígitos do número natural n. 
Por exemplo, a chamada sd(7859) deve devolver 29 (pois 7+8+5+9 = 29).*/

#include <stdio.h>

int sd(int n)
{
    if (n==0)
    {
        return 0;
    }
    else 
    {
        return n % 10 + sd(n/10);
    }
}

int main ()
{
    int n;
    printf("digite um numero para somar os digitos: ");
    scanf("%d", &n);
    printf("o resultado da soma e: %d", sd(n));
}