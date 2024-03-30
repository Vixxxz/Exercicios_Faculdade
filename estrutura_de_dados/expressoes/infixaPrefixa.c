/*Exercício 5. Infixa para prefixa
Crie a função prefixa(e), que devolve a forma prefixa da expressão aritmética completamente parentesiada e. Em seguida, faça um programa para testar a função.]
((2 * 3) + (8 / 4)) */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "pilha.h"

int prio(char o) 
{
    switch( o ) 
    {
        case '(': return 0;
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 2;
    }
    return -1; // operador inválido!
}

char *prefixa(char *e) {
    static char s[256];
    int j = 0;
    Pilha P = pilha(256);
    int i = (strlen(e) - 1);
    for(i; i >= 0; i--)
        if( e[i]==')' ) empilha(')',P);
        else if( isdigit(e[i]) ) s[j++] = e[i];
        else if( strchr("+-/*",e[i]) ) {
            while( !vaziap(P) && prio(topo(P))>=prio(e[i]) )
                s[j++] = desempilha(P);
            empilha(e[i],P);
        }
        else if( e[i] == '(' ) {
            while( topo(P)!=')' )
                s[j++] = desempilha(P);
            desempilha(P);
        } 
    while( !vaziap(P) )
        s[j++] = desempilha(P);
    s[j] = '\0';
    strrev(s);
    destroip(&P);
    return s;
}

int valpre(char *e) {
    Pilha P = pilha(256);
    int i = (strlen(e) - 1);
    for(i; i >= 0; i--)
        if( isdigit(e[i]) ) empilha(e[i]-'0',P);
        else {
            int x = desempilha(P);
            int y = desempilha(P);
            switch( e[i] ) {
                case '+': empilha(x+y,P); break;
                case '-': empilha(x-y,P); break;
                case '*': empilha(x*y,P); break;
                case '/': empilha(x/y,P); break;
            }
        }
    int z = desempilha(P);
    destroip(&P);
    return z;
}

int main(void) {
    char e[513], s[256];
    printf("Infixa? ");
    gets(e);
    printf("Posfixa: %s\n", prefixa(e));
    printf("Resultado: %d\n", valpre(prefixa(e)));
    return 0;
}

