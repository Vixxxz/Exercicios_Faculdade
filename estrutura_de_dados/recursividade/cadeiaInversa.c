/*Exercício 17. Cadeia inversa
Crie a função recursiva inv(s,p,u), que inverte a string s, cujo primeiro caractere está na
posição p e cujo último caractere está na posição u. A função deve devolver s como resposta.*/

#include <stdio.h>
#include <string.h>

char* inv(char *s, int p, int u)
{
    char temp;
    if (p == u)
    {
        return s;
    }
    else
    {
        temp = s[p];
        s[p] = s[u];
        s[u] = temp;
        return inv (s, p+1, u-1);
    }
}

int main()
{
    char s[256];
    int u;
    printf("Digite a string para ser invertida: ");
    gets(s);
    u = strlen(s)-1;
    printf("%s", inv(s, 0, u));
}