#include <conio.h>
#include <stdio.h>
#include <string.h>

int main() {
  int i, matricula[2], dependentes[2];
  float salario[2], impostoRenda[2], salarioLiquido[2];
  char nome[2][50], cargo[2][50];

  for (i = 1; i <= 2; i++) {
    printf("Digite a matricula do funcionario %d: ", i);
    scanf("%d", &matricula[i]);

    printf("Digite o nome do funcionario %d: ", i);
    fflush(stdin);
    gets(nome[i]);

    printf("Digite o cargo do funcionario %d: ", i);
    gets(cargo[i]);

    printf("Digite o numero de dependentes do funcionario %d: ", i);
    scanf("%d", &dependentes[i]);

    printf("Digite o salario do funcionario %d: ", i);
    scanf("%f", &salario[i]);

    impostoRenda[i] = salario[i] * 0.125;

    salarioLiquido[i] = salario[i] - impostoRenda[i];
  }

  for (i = 1; i <= 2; i++) {
    printf("O dados a seguir serao do funcionario %d \n", i);
    printf("matricula: %d\n", matricula[i]);
    printf("nome: %s\n", nome[i]);
    printf("cargo: %s\n", cargo[i]);
    printf("dependentes: %d\n", dependentes[i]);
    printf("salario: %2.f\n", salario[i]);
    printf("imposto de renda: %2.f\n", impostoRenda[i]);
    printf("salario liquido: %2.f\n\n", salarioLiquido[i]);
  }
  getch();
  return 0;
}
