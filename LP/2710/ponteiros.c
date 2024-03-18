#include <stdio.h>
#include <conio.h>

int main (){
  int *p, *p1, x = 10;
  float y = 20.0;
  p = &x;
  printf("\n Conteudo apontado por p: %d ", *p);
  printf("\n Conteudo apontado por p: %d ", p);
  printf("\n Conteudo apontado por p: %d ", &x);

  p1 = p;
  printf("\n Conteudo apontado por p: %d ", *p1);

  p = &y;
  printf("\n Conteudo apontado por p: %d ", *p);
  printf("\n Conteudo apontado por p: %f ", *p);
  printf("\n Conteudo apontado por p: %f ", *((float*)p));
}

//ponteiros

//*p == o apontado por, conteudo do endereco da variavel que ptr aponta / ptr aponta para um endereço de variavél, quando usa * mostra o conteudo desse endereço apontado
//p == mostra o enderço da variavél apontada
//&p == endereço do ponteiro