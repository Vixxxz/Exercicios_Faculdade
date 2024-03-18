#include <stdio.h>
#include <string.h>
#include <conio.h>

struct curso {
    char nomeCurso[50];
    int disciplinasMatriculadas;
};

struct disciplinas {
    char nomeDisciplina[50];
    int cargaHoraria, frequencia;
    float nota1, nota2, nota3, media;
};

struct alunos{
    struct disciplinas disciplinas[100];
};

struct registros {
    struct curso curso;
    struct alunos alunos[100];
};

struct registros registros[100];

int main (){
    char instituicao[100];
    int cursos, alunos;

    printf("Digite o nome da instituicao: ");
    fflush(stdin);
    gets(instituicao);

    printf("Quantos cursos tem nessa intuicao? ");
    scanf("%d", &cursos);

    for (int i = 1; i <= cursos; i++) {
        printf("Digite o nome do curso: ");
        fflush(stdin);
        fgets(registros[i].curso.nomeCurso, 50, stdin);

        printf("Digite a quantidade de alunos no curso: ");
        scanf("%d", &alunos);

        for (int x = 1; x <= alunos; x++){
            printf("Digite a quantidade de disciplinas matriculadas do aluno: ");
            scanf("%d", &registros[i].curso.disciplinasMatriculadas);

            for (int j = 1; j <= registros[i].curso.disciplinasMatriculadas; j++){
                printf("Digite o nome da disciplina: ");
                fflush(stdin);
                fgets(registros[i].alunos[x].disciplinas[j].nomeDisciplina, 50, stdin);

                printf("Digite a carga horaria da disciplina: ");
                scanf("%d", &registros[i].alunos[x].disciplinas[j].cargaHoraria);

                printf("Digite a nota 1: ");
                scanf("%f", &registros[i].alunos[x].disciplinas[j].nota1);

                printf("Digite a nota 2: ");
                scanf("%f", &registros[i].alunos[x].disciplinas[j].nota2);

                printf("Digite a nota 3: ");
                scanf("%f", &registros[i].alunos[x].disciplinas[j].nota3);

                printf("Digite a frequencia: ");
                scanf("%d", &registros[i].alunos[x].disciplinas[j].frequencia);

                registros[i].alunos[x].disciplinas[j].media = (registros[i].alunos[x].disciplinas[j].nota1 + registros[i].alunos[x].disciplinas[j].nota2 + registros[i].alunos[x].disciplinas[j].nota3) / 3;
            }
        }
    }

    for (int i = 1; i <= cursos; i++) {
        printf("\n\n------DADOS DA INSTITUICAO-----\n\n");

        printf("O nome da instituicao: %s\n", instituicao);

        printf("Nome do curso: %s\n", registros[i].curso.nomeCurso);

        printf("Quantidade de alunos no curso: %d\n", alunos);

        for (int x = 1; x <= alunos; x++){
            printf("\n\n------DADOS DO ALUNO %d-----\n\n", x);

            printf("Quantidade de disciplinas matriculadas do aluno: %d\n", registros[i].curso.disciplinasMatriculadas);

            for (int j = 1; j <= registros[i].curso.disciplinasMatriculadas; j++){
                printf("Nome da disciplina: %s\n", registros[i].alunos[x].disciplinas[j].nomeDisciplina);

                printf("Carga horaria da disciplina: %d\n", registros[i].alunos[x].disciplinas[j].cargaHoraria);

                printf("Nota 1: %f\n", registros[i].alunos[x].disciplinas[j].nota1);

                printf("Nota 2: %f\n", registros[i].alunos[x].disciplinas[j].nota2);

                printf("Nota 3: %f\n", registros[i].alunos[x].disciplinas[j].nota3);

                printf("Frequencia: %d%%\n", registros[i].alunos[x].disciplinas[j].frequencia);

                printf("Media: %f\n", registros[i].alunos[x].disciplinas[j].media);

                if (registros[i].alunos[x].disciplinas[j].media >= 6 && registros[i].alunos[x].disciplinas[j].frequencia >= 75){
                    printf("Aluno %d aprovado", x);
                }
                else {
                    printf("Aluno %d reprovado", x);
                }
            }
        }
    }
    getch();
    return 0;
}