// Um ano não divisível por 100 e divisível por 4 é bissexto;
// Um ano divisível por 100 e divisível por 400 é bissexto;
// Os demais anos não são bissextos.

#include <stdio.h>
#include <conio.h>

int data_juliana(int dia, int mes, int ano){
    int diasTranscorridos;
    mes = mes - 1;
    if (mes > 1){
        mes = (mes * 30);
    } else {
        mes = 0;
    }
    if (mes > 2){
        if (ano % 100 != 0 && ano % 4 == 0){
            dia += 1;
        } else if (ano % 100 == 0 && ano % 400 == 0){
            dia += 1;
        }
    }
    diasTranscorridos = mes + dia;

    return diasTranscorridos;
}

int main(){
    int a;

    a = data_juliana(14, 1, 2020);

    printf("%d", a);
}