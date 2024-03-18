#include <stdio.h>

int main() {
  float f = 0;
  printf("quatos fahrenheit ta agora ein?");
  scanf("%f", &f);
  printf("em celcius ta %f", (f - 32) * (5 / 9));
}