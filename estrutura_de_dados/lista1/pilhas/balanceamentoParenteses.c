/*Exercício 4. Balanceamento de parênteses
Usando pilha, crie uma função para verificar se uma expressão composta apenas por chaves,
colchetes e parênteses, representada por uma cadeia de caracteres, está ou não balanceada. Por
exemplo, as expressões "[{()()}{}]" e "{[([{}])]}" estão balanceadas, mas as
expressões "{[(}])" e "{[)()(]}" não estão.*/

// definir '[', '{' e '(' como caracteres de abertura e ']', '}' e ')' como de fechamento
// empilha os caracteres de abertura
// toda vez que aparecer um caracter de fechamento, compara com o topo da pilha, se for correspondente desempilha, se não for a expressão é desbalanceada.


# include <stdio.h>
# include "pilha.h"
#include <string.h>

int main()
{
    int tamanho;
    char expressao[256];

    printf("Digite sua expressao parentesiada para verificar se e balanceada: ");
    gets(expressao);
    tamanho = strlen(expressao);

    Pilha pilhaParentese = pilha (tamanho);

    for (int x = 0; x < tamanho; x++)
    {
        if (expressao[x] == '[' || expressao[x] == '{' || expressao[x] == '(')
        {
            empilha(expressao[x], pilhaParentese);
        }
        else if (expressao[x] == ']' && topo(pilhaParentese) == '[' || expressao[x] == '}' && topo(pilhaParentese) == '{' || expressao[x] == ')' && topo(pilhaParentese) == '(')
        {
            desempilha(pilhaParentese);
        }
    }
    if (vaziap(pilhaParentese))
    {
        printf("a expressao e balanceada");
    }
    else 
    {
        printf("a expressao nao e balanceada");
    }
}