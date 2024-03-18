#include <stdio.h>
#include <math.h>

int main() {
    float consumidor = 0, kwh = 0, codConsumidor = 0, custoTotal = 0, consumo3 = 0, consumo1 = 0, consumo2 = 0, media = 0, qtdConsumidor = 0;

    do {
        printf("digite o seu numero de consumidor e a quantidade de kWh consumidos durante o mes. \n Digite tambem o seu codigo\n");
        scanf("%f %f %f", &consumidor, &kwh, &codConsumidor);

        if (codConsumidor == 1){
            custoTotal = kwh * 0.3;
            consumo1 = consumo1 + kwh;
            qtdConsumidor++;
        }
        else if (codConsumidor == 2){
            custoTotal = kwh * 0.5;
            consumo1 = consumo1 + kwh;
            qtdConsumidor++;
        }
        else if (codConsumidor == 3){
            custoTotal = kwh * 0.7;
            consumo2 = consumo2 + kwh;
        }

        printf("o total para esse consumidor e %1.f\n", custoTotal);

    } while (consumidor != 0);

    printf("o total de  consumo foi %1.f\n", consumo1 + consumo2);

    media = consumo1 / qtdConsumidor;

    printf("a media de consumo dos tipos 1 e 2 e %1.f\n", media);
}