#include <stdio.h>
#include <math.h>

int main() {
    float valorArrecadado = 0, maiorDivida = 0, numCarteira = 0, numMultas = 0, valorMultas = 0, valorCarteira = 0, total = 0, maiorMultas = 0;
    
    do {
        printf("Digite o numero da sua carteira e o numero de multas");
        scanf("%f %f", &numCarteira, &numMultas);

        if (numCarteira >= 1 && numCarteira <= 4327){
            for (int i = 1; i <= numMultas; i++){
             printf("Digite o valor de cada multa");
             scanf("%f", &valorMultas);
             valorCarteira = valorCarteira + valorMultas;
            }
            printf("o valor da sua divida e %f", valorCarteira);
            valorArrecadado = valorArrecadado + valorCarteira;
            valorCarteira = 0;
        }
        else {
            goto end;
        }
        if (numMultas > maiorMultas){
            maiorMultas = numMultas;
            maiorDivida = numCarteira;
        }
    } while (numCarteira != 0);

    end:
    printf("valor arrecadado e %f", valorArrecadado);
    printf("a carteira com o maior numero de multas e %f", maiorDivida);
}