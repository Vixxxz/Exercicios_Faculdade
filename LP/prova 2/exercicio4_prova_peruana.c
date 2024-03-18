// números dos cheques são valores inteiros de 1 a 100
// emitidos em uma ordem aleatória

// Ler o número do cheque
// ler seu valor
// ler numero da filial
// exibir os dados em ordem crescente

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int cheque_num;
    float valor;
    int filial_num;
} Cheque;

int compare(const void *a, const void *b) {
    return ((Cheque *)a)->cheque_num - ((Cheque *)b)->cheque_num;
}

int main() {
    int n;
    printf("Digite o número de cheques: ");
    scanf("%d", &n);

    Cheque *cheques = malloc(n * sizeof(Cheque));

    for (int i = 0; i < n; i++) {
        printf("Digite o número do cheque, valor e número da filial: ");
        scanf("%d %f %d", &cheques[i].cheque_num, &cheques[i].valor, &cheques[i].filial_num);
    }

    qsort(cheques, n, sizeof(Cheque), compare);

    printf("Cheques em ordem crescente de número:\n");
    for (int i = 0; i < n; i++) {
        printf("Cheque número: %d, Valor: %.2f, Filial: %d\n", cheques[i].cheque_num, cheques[i].valor, cheques[i].filial_num);
    }

    free(cheques);

    return 0;
}
