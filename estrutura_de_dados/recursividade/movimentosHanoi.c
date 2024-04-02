/*Exercício 16. Torres de Hanói
Crie a função recursiva h(n), que devolve o número mínimo de movimentos para resolver o
problema das Torres de Hanói com n discos. Por exemplo, h(3) deve devolver 7.*/

#include <stdio.h>

int hanoi(int n) {
    if (n == 1) 
    {
        return 1; 
    } 
    else 
    {
        return 2 * hanoi(n - 1) + 1;
    }
}

int main() {
    int n;
    printf("Digite o numero de discos: ");
    scanf("%d", &n);
    printf("Numero minimo de movimentos necessarios para resolver com %d discos: %d\n", n, hanoi(n));
    return 0;
}
