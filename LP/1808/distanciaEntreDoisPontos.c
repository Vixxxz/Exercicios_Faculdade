#include <math.h>
#include <stdio.h>

int main() {
  float xp = 0, yp = 0, xq = 0, yq = 0;
  printf("quais são os pares ordenados dos dois pontos?");
  scanf("%f %f %f %f", &xp, &yp, &xq, &yq);
  printf("a distancia e %f", sqrt((pow(xq - xp, 2) + (pow(yq - yp, 2)))));
}