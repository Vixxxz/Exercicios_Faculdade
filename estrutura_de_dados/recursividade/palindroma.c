/*Exercício 18. Cadeia palíndroma
Crie a função recursiva pal(s,p,u), que informa se a string s, cujo primeiro caractere está na
posição p e cujo último caractere está na posição u, é palíndroma (ignorando brancos).*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int espaco(char c) 
{
    return c == ' ' || c == '\t' || c == '\n' || c == '\r';
}

int pal(char* s, int p, int u) 
{
    if (p >= u) 
    {
        return 1;
    } 
    else 
    {
        if (espaco(s[p]))
        {
            return pal(s, p + 1, u);
        }
        if (espaco(s[u]))
        {
            return pal(s, p, u - 1);
        }
        if (tolower(s[p]) != tolower(s[u]))
        {
            return 0; 
        }
        else
        {
            return pal(s, p + 1, u - 1);
        }
    }
}

int main(void) 
{
    char frase[100];
    int tamanho = 0, palindroma = 0;
    printf("Digite uma string: ");
    fgets(frase, sizeof(frase), stdin); 
    tamanho = strlen(frase);
    palindroma = pal(frase, 0, tamanho - 1);
    if (palindroma)
    {
        printf("A string e um palindromo.\n");
    }
    else
    {
        printf("A string nao e um palindromo.\n");
    }
    return 0;
}
