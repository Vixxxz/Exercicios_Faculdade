#include <stdio.h>
#include <conio.h>

int
main () {
  int i = 3, j = 5;
  int *p, *q;

  p = &i;
  q = &j;
  printf("%d %d %d\n", *p - *q, **&p, 3* - *p/(*q)+7);
  printf("\n %d", *p - *q);
  printf( "\n %x", *&p);
  printf("\n %d", **&p);
  printf("\n %d", *p/(*q));
  printf("\n %d", *p/(*q)+7);
  printf( "\n %d", 3* - *p/(*q)+7);
}
