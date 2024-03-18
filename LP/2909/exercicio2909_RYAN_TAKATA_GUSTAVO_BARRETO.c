#include <conio.h>
#include <stdio.h>
#include <string.h>

struct disciplina {
  char nomeDisciplina[30];
  int cargaHoraria;
  float nota1, nota2, nota3, media;
  int frequencia;
};

struct curso {
  char nomeCurso[40];
  int numeroDisciplina;
  struct disciplina disciplina;
};

struct registros {
  struct curso curso;
  struct disciplina disciplina[50];
};

struct registros registros[100];

int main() {
  char nomeInstituicao[30];
  int alunos;

  printf("Digite o nome da Instituicao: ");
  fflush(stdin);
  fgets(nomeInstituicao, 30, stdin);

  for (int i = 1; i <= 2; i++) {
    printf("Digite o nome de um Curso: ");
    fflush(stdin);
    fgets(registros[i].curso.nomeCurso, 40, stdin);

    printf("Digite o numero de alunos: ");
    scanf("%d", &alunos);

    for (int x = 0; x < alunos; x++) {

      printf("Digite o numero de disciplinas matriculadas: ");
      scanf("%d", &registros[i].curso.numeroDisciplina);

      for (int j = 0; j < registros[i].curso.numeroDisciplina; j++) {

        printf("Digite o nome da Disciplina: ");
        fflush(stdin);
        fgets(registros[i].disciplina[j].nomeDisciplina, 30, stdin);

        printf("Digite a carga horaria: ");
        scanf("%d", &registros[i].disciplina[j].cargaHoraria);

        printf("Digite a frequencia em porcentagem: ");
        scanf("%d", &registros[i].disciplina[j].frequencia);

        printf("Digite o valor da nota 1: ");
        scanf("%f", &registros[i].disciplina[j].nota1);

        printf("Digite o valor da nota 2: ");
        scanf("%f", &registros[i].disciplina[j].nota2);

        printf("Digite o valor da nota 3: ");
        scanf("%f", &registros[i].disciplina[j].nota3);

        registros[i].disciplina[j].media = (registros[i].disciplina[j].nota1 +
                                            registros[i].disciplina[j].nota2 +
                                            registros[i].disciplina[j].nota3) / 3;
      }
    }
  }

  printf("---------EXIBICAO DOS DADOS DA INSTITUICAO %s---------\n\n", nomeInstituicao);
  for (int i = 1; i <= 2; i++) {
    
    printf("Curso %d: %s\n",i, registros[i].curso.nomeCurso);
    printf("Ha %d alunos\n\n", alunos);

    for (int x = 0; x < alunos; x++) {
      printf("--------------DADOS DO ALUNO %d--------------\n\n", x+1);
      printf("Esta matriculado em %d disciplinas\n", registros[i].curso.numeroDisciplina);

      for (int j = 0; j < registros[i].curso.numeroDisciplina; j++) {
        printf("DISCIPLINA %d\n", j+1);
        printf("Nome da Disciplina: %s", registros[i].disciplina[j].nomeDisciplina);
        printf("Carga Horaria: %d", registros[i].disciplina[j].cargaHoraria);

        printf("Frequencia: %d%%", registros[i].disciplina[j].frequencia);

        printf("Nota 1: %f", registros[i].disciplina[j].nota1);
        printf("Nota 2: %f", registros[i].disciplina[j].nota2);
        printf("Nota 3: %f", registros[i].disciplina[j].nota3);
        printf("A media e: %f ", registros[i].disciplina[j].media);

        if (registros[i].disciplina[j].media >= 6 &&
            registros[i].disciplina[j].frequencia >= 75) {
          printf("Aluno aprovado\n");
        } else {
          printf("Aluno reprovado\n");
        }
      }
    }
  }
  getch();
  return 0;
}
