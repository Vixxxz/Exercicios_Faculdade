/*Exercício 5. Pilha de strings [versão 1]
Qual será a saída, se o usuário digite as cadeias "um", "dois" e "tres"? Por quê?*/

#include <stdio.h>
#include "pilha.h" 

int main(void) 
{
    Pilha P = pilha(5);
    char s[11];
    for(int i=1; i<=3; i++) 
    {
        printf("? ");
        gets(s);
        empilha(s,P);
    }
    while( !vaziap(P) ) puts(desempilha(P));
    return 0;
}