/*Exercício 3. Inversão de palavras
Usando uma pilha, crie um programa para inverter a ordem das letras nas palavras de uma frase,
sem inverter a ordem das palavras na frase. Por exemplo, se for digitada a frase "apenas um
teste", o programa deverá produzir a seguinte saída: sanepa mu etset.*/

//escreve -> inverte -> exibe. REPETE
//toda vez que tiver espaço exibe
//fazer contador de letras

#include <stdio.h>
#include "pilha.h"
#include <string.h>

int main ()
{
    int letras = 0, contador = 0, tamanho = 0;
    char frase[256], fraseInversa[256];
    printf("digite a frase para inverter as palavras: ");
    gets(frase);
    tamanho = strlen(frase);
    Pilha pilhaFrase = pilha(256);
    while(tamanho > 0)
    {
        while(frase[letras] != ' ' && frase[letras] != '\0')
        {
            empilha(frase[letras], pilhaFrase);
            letras++;
            tamanho--;
        }
        while (!vaziap(pilhaFrase))
        {
            fraseInversa[contador] = desempilha(pilhaFrase);
            contador++;
        }
        if (frase[letras] == ' ' || frase[letras] == '\0')
        {
            fraseInversa[contador] = frase[letras];
            contador++;
        }
        letras++;
        tamanho--;
    }
    printf("%s", fraseInversa);
    return 0;
}   

