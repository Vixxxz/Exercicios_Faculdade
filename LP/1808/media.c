#include <stdio.h>

int main() {
  float nota1 = 0, nota2 = 0;

  printf("qual a nota dos dois alunos?");
  scanf("%f %f", &nota1, &nota2);
  printf("a nota e %.2f\n", (nota1 + nota2) / 2);
}
