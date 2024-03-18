#include <stdio.h>
#include <math.h>

int main(){
    float salario = 0, impostoRenda = 0;

    do {
    printf("Digite o seu salario\n");
    scanf("%f", &salario);
    } while (salario <= 0);

    if(salario <= 1903.98){
        printf("O seu imposto de renda e: R$ %.2f", impostoRenda);
    }
    else if (salario <= 2826.65){
        impostoRenda = salario * 0.075;
        printf("O seu imposto de renda e: R$ %.2f", impostoRenda);
    }
    else if (salario <= 3751.05){
        impostoRenda = salario * 0.15;
        printf("O seu imposto de renda e: R$ %.2f", impostoRenda);
    }
    else if (salario <= 4664.68){
        impostoRenda = salario * 0.225;
        printf("O seu imposto de renda e: R$ %.2f", impostoRenda);
    }
    else {
        impostoRenda = salario * 0.275;
        printf("O seu imposto de renda e: R$ %.2f", impostoRenda);
    }
}