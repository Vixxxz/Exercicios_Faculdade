#include <stdio.h>
#include <math.h>

int main() {
    float x = 0, paisA = 0, paisB = 0;
    
    do {
    x++;
    paisA = 5 * pow((1 + 0.03), x);
    paisB = 7 * pow((1 + 0.02), x);
    } while (paisA < paisB);

    printf("a partir desse ano o pais a vai passar o b %1.f", x);
}