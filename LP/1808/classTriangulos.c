#include <stdio.h>

int main() {
  float a, b, c;
  printf("entre com os 3 lados do triangulo");
  scanf("%f %f %f", &a, &b, &c);
  if (a < b + c && b < a + c && c < a + b) {
    printf("Triangulo: ");
    if (a == b && b == c)
      printf("equilatero");
    else if (a == b || a == c || b == c)
      printf("isosceles");
    else
      printf("escaleno");
  } else {
    printf("nao eh triangulo");
  }
}