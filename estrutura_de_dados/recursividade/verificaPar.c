/*Exercício 9. Par
Crie a função recursiva par(n), que determina se o natural n é par, usando apenas subtração.*/
#include <stdio.h>

int verificaPar(int);

int main ()
{
    int n = 0, verificador = 0;

    do
    {
        printf("Digite o numero maior que 0 para verificar se e par: ");
        scanf("%d", &n);
    } while (n<0);

    verificador = verificaPar(n);
    
    if (verificador == 0)
    {
        printf("o numero %d e par", n);
    }
    else 
    {
        printf("o numero %d nao e par", n);
    }
}

int verificaPar(int n)
{
    if (n<=0)
    {
        return n;
    }
    else
    {
        return verificaPar(n-2);
    }
}