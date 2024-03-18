#include <stdio.h>
#include <string.h>

int main () {
    float idade;
    char nome [31], repete [2];

    do {
        printf("ha um proximo cliente? s / n");
        scanf("%s", &repete);

        printf("qual o seu nome?");
        scanf("%s", &nome);
        printf("qual a sua idade?");
        scanf("%f", &idade);

        if (idade == 0){
            break;
        }

        if (idade <= 10){
            printf("%s", nome);
            printf("voce deve pagar 30 reais");
        }
        else if (idade > 10 && idade <= 29){
            printf("%s", nome);
            printf("voce deve pagar 60 reais");
        }
        else if (idade > 29 && idade <= 45){
            printf("%s", nome);
            printf("voce deve pagar 120 reais");
        }
        else if (idade > 45 && idade <= 59){
            printf("%s", nome);
            printf("voce deve pagar 150 reais");
        }
        else if (idade > 59 && idade <= 65){
            printf("%s", nome);
            printf("voce deve pagar 250 reais");
        }
        else {
            printf("%s", nome);
            printf("voce deve pagar 400 reais");
        }
    } while (strcmp (repete, "s") == 0);
}