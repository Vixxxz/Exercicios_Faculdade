/*Exercício 4. Expressões booleanas
Com base nos algoritmos descritos, crie um programa para ler uma expressão booleana completamente parentesiada e exibir sua forma posfixa correspondente, bem como seu valor numérico.
Considere que as expressões são compostas por:
Operandos: letras maiúsculas F e V, com valores numéricos 0 e 1, respectivamente.
Operadores: ! (não), & (e) e | (ou), da maior para a menor prioridade.
Delimitadores: parênteses de abertura e fechamento.
Por exemplo, para a expressão booleana infixa parentesiada "((!F)|(F&V))", o programa
deve apresentar como saída a forma posfixa "F!FV&|" e o valor numérico 1.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "pilha.h"

int prio(char o) 
{
    switch( o ) 
    {
        case '(': return 0;
        case '!': return 1;
        case '&': return 2;
        case '|': return 3;
    }
    return -1; // operador inválido!
}

char *posfixa(char *e) {
    static char s[256];
    int j = 0;
    Pilha P = pilha(256);
    for(int i=0; e[i]; i++)
    {
        if (e[i]=='(')
        {
            empilha('(',P);
        } 
        else if (e[i] == 'F' || e[i] == 'V')
        {
            s[j++] = e[i];
        }
        else if (strchr("!&|",e[i])) 
        {
            while(!vaziap(P) && prio(topo(P))>=prio(e[i]))
            {
                s[j++] = desempilha(P);
            }
            empilha(e[i],P);
        }
        else if(e[i] == ')') 
        {
            while(topo(P)!='(')
            {
                s[j++] = desempilha(P);
            }
            desempilha(P);
        } 
    }
    while(!vaziap(P))
    {
        s[j++] = desempilha(P);
    }
    s[j] = '\0';
    destroip(&P);
    return s;
}

int valor(char *e) {
    int F, V;
    Pilha P = pilha(256);
    for(int i=0; e[i]; i++)
        if (e[i] == 'F') 
        {
            empilha(0,P);
        }
        else if (e[i] == 'V') 
        {
            empilha(1,P);
        }
        else 
        {
            int y, x;
            switch( e[i] ) 
            {
                case '!': 
                    x = desempilha(P);
                    if (x == 1)
                    {
                        empilha(0, P);
                    }
                    else
                    {
                        empilha(1, P);
                    } 
                    break;

                case '&': 
                    x = desempilha(P);
                    y = desempilha(P);
                    if (x == 1 && y == 1)
                    {
                        empilha(1, P);
                    }
                    else
                    {
                        empilha(0, P);
                    }
                    break;

                case '|': 
                    x = desempilha(P);
                    y = desempilha(P);
                    if (x == 1 || y == 1)
                    {
                        empilha(1, P);
                    }
                    else
                    {
                        empilha(0, P);
                    } 
                    break;
            }
        }
    int z = desempilha(P);
    destroip(&P);
    return z;
}

int main(void) 
{
    char e[513], s[256];
    printf("Infixa? ");
    gets(e);
    printf("Posfixa: %s\n", posfixa(e));
    printf("Resultado: %d\n", valor(posfixa(e)));
    return 0;
}