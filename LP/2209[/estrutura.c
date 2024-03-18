#include <conio.h>
#include <stdio.h>
#include <string.h>

int main() {
  struct reg_endereco {
    char rua[40];
    int numero;
    char complemento[40];
    int cep;
    char bairro[40];
    char cidade[40];
    char estado[15];
  };

  struct reg_nome {
    char nome[30];
    char sobrenome[30];
  };

  struct reg_funcionario {
    struct reg_nome nome;
    char funcao[40];
    float salario;
    int dependentes;
    struct reg_endereco endereco;
  };

  struct reg_funcionario funcionario[2];

  printf("\n\n Cadastro dos Funcionarios\n");
  for (int i = 0; i <= 1; i++) {
    printf("\n\n---------------%do funcionario------------------\n\n\n", i + 1);

    printf("Nome do Funcionario: ");
    fflush(stdin);
    fgets(funcionario[i].nome.nome, 15, stdin);

    printf("Sobrenome do Funcionario: ");
    fflush(stdin);
    fgets(funcionario[i].nome.sobrenome, 40, stdin);

    printf("Funcao: ");
    fflush(stdin);
    fgets(funcionario[i].funcao, 40, stdin);

    printf("Salario: ");
    scanf("%f", &funcionario[i].salario);

    printf("Quantidade de Dependentes: ");
    scanf("%d", &funcionario[i].dependentes);

    printf("Rua: ");
    fflush(stdin);
    fgets(funcionario[i].endereco.rua, 40, stdin);

    printf("Numero: ");
    scanf("%d", &funcionario[i].endereco.numero);

    printf("Complemento: ");
    fflush(stdin);
    fgets(funcionario[i].endereco.complemento, 40, stdin);

    printf("CEP: ");
    scanf("%d", &funcionario[i].endereco.cep);

    printf("Bairro: ");
    fflush(stdin);
    fgets(funcionario[i].endereco.bairro, 40, stdin);

    printf("Cidade: ");
    fflush(stdin);
    fgets(funcionario[i].endereco.cidade, 40, stdin);

    printf("Estado: ");
    fflush(stdin);
    fgets(funcionario[i].endereco.estado, 40, stdin);
  };

  for (int i = 0; i <= 1; i++) {
    printf("\n\n\nExibicao dos dados dos funcionarios\n");
    printf("\n\n---------------%do funcionario------------------\n\n", i + 1);
    printf("Nome: %s", funcionario[i].nome.nome);
    printf("Sobrenome: %s", funcionario[i].nome.sobrenome);
    printf("Funcao: %s", funcionario[i].funcao);
    printf("Salario: %.2f", funcionario[i].salario);
    printf("Qtd Dependentes: %d", funcionario[i].dependentes);
    printf("Rua: %s", funcionario[i].endereco.rua);
    printf("Numero: %d", funcionario[i].endereco.numero);
    printf("Complemento: %s", funcionario[i].endereco.complemento);
    printf("CEP: %d", funcionario[i].endereco.cep);
    printf("Bairro: %s", funcionario[i].endereco.bairro);
    printf("Cidade: %s", funcionario[i].endereco.cidade);
    printf("Estado: %s", funcionario[i].endereco.estado);
  }

  getch();
  return 0;
}