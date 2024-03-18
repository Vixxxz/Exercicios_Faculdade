#include <stdio.h>

int main (){
    float falta = 0, media = 0;

    printf("Declare o numero de faltas e a sua media \n");
    scanf("%f %f", &falta, &media);
    if (falta > 5 || media < 4.0){
        printf("reprovado");
    }
    else if (media >= 6.0){
        printf("aprovado");
    }
    else {
        printf("recuperacao");
    }
}