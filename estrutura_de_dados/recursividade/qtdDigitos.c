/*Exercício 15. Quantidade de dígitos
Crie a função recursiva qd(n), que devolve a quantidade de dígitos binários para representar o
natural n. Por exemplo, a chamada qd(13) deve devolver 4 (pois 13 em binário é 1101).*/

#include <stdio.h>

int qd(int n)
{
    if (n==0)
    {
        return n;
    }
    else 
    {
        return 1 + qd(n/2);
    }
}

int main ()
{
    int n;
    printf("digite um numero para somar os digitos em binario: ");
    scanf("%d", &n);
    printf("o resultado da soma e: %d", qd(n));
}