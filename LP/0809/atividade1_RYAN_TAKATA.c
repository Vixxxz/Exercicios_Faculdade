#include <stdio.h>

int main () {
    float idade = 0;
    char repete [2];

    do {
        printf("ha um proximo nadador? s/n");
        scanf("%s", repete);

        printf("qual a sua idade?");
        scanf("%f", &idade);

        if (idade >= 5 && idade <= 7){
            printf("sua idade e %f", idade);
            printf("sua categoria e a INFANTIL A");
        }
        else if (idade >= 8 && idade <= 10){
            printf("sua idade e %f", idade);
            printf("sua categoria e a INFANTIL B");
        }
        else if (idade >= 11 && idade <= 13){
            printf("sua idade e %f", idade);
            printf("sua categoria e a JUVENIL A");
        }
        else if (idade >= 14 && idade <= 17){
            printf("sua idade e %f", idade);
            printf("sua categoria e a JUVENIL B");
        }
        else if (idade >= 18) {
            printf("sua idade e %f", idade);
            printf("sua categoria e a SENIOR");
        }
    } while (strcmp (repete, "s") == 0);
}