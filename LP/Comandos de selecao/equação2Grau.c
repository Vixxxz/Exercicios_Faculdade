#include <stdio.h>
#include <math.h>

int main(){
    float a = 0, b = 0, c = 0, resultado = 0, delta = 0;

    while (a == 0){
        printf("Digite o valor de a diferente de 0");
        scanf("%f", &a);
    }
    printf("Digite o valor de b");
    scanf("%f", &b);
    printf("Digite o valor de c");
    scanf("%f", &c);

    delta = pow(b, 2) - 4 * a * c;
    resultado = ((-b) + (sqrt(delta)))/(2*a);
    printf("o X1 e %f", resultado);

    resultado = ((-b) - (sqrt(delta)))/(2*a);
    printf("o X2 e %f", resultado);
}