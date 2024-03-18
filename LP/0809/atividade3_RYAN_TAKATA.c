#include <stdio.h>
#include <string.h>

int main () {
    float calorias = 0;
    char prato [20], sobremesa [20], bebida [20];

    printf("informe o prato");
    gets(prato);

    printf("informe a sobremesa");
    gets(sobremesa);

    printf("informe a bebida");
    gets(bebida);

    if (strcmp(prato, "vegetariano") == 0){
        calorias = calorias + 180;
    }
    else if (strcmp(prato, "peixe") == 0){
        calorias = calorias + 230;
    }
    else if (strcmp(prato, "frango") == 0){
        calorias = calorias + 250;
    }
    else if (strcmp(prato, "carne") == 0){
        calorias = calorias + 350;
    }
    else {
        calorias = calorias;
    }

    if (strcmp(sobremesa, "abacaxi") == 0){
        calorias = calorias + 75;
    }
    else if (strcmp(sobremesa, "sorvete diet") == 0){
        calorias = calorias + 110;
    }
    else if (strcmp(sobremesa, "mousse diet") == 0){
        calorias = calorias + 170;
    }
    else if (strcmp(sobremesa, "mousse chocolate") == 0){
        calorias = calorias + 200;
    }
    else {
        calorias = calorias;
    }

    if (strcmp(bebida, "cha") == 0){
        calorias = calorias + 20;
    }
    else if (strcmp(bebida, "suco de laranja") == 0){
        calorias = calorias + 70;
    }
    else if (strcmp(bebida, "suco de melao") == 0){
        calorias = calorias + 100;
    }
    else if (strcmp(bebida, "refrigerante diet") == 0){
        calorias = calorias + 200;
    }
    else {
        calorias = calorias;
    }

    printf("a caloria total da refeiçao e %f", calorias);

    return 0;
}
