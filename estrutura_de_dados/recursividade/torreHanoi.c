/*Exercício 8. Função hanói
Crie a função recursiva hanoi(n,origem,auxiliar,destino), que resolve o problema das Torres de
Hanói, movendo n discos da torre origem, para a torre destino, usando a torre auxiliar. Por
exemplo, a chamada hanoi(3, 'A', 'B', 'C') deve resolver o problema discutido no Exemplo 6.*/
#include <stdio.h>

void hanoi(int n, char origem, char auxiliar, char destino)
{
    if (n==1)
    {
        printf("\nMove disco %d da torre %c para a torre %c\n", n, origem, destino);
    }
    else 
    {
        hanoi(n - 1, origem, destino, auxiliar);
        printf("\nMove disco %d da torre %c para a torre %c\n", n, origem, destino); 
        hanoi(n - 1, auxiliar, origem, destino);
    }
}

int main ()
{
    hanoi(3, 'A', 'B', 'c');
}