#include <stdio.h>

int main () {
    float primeiroBoi = 1, pesoBoi = 0, boiGordo = 0, boiMagro = 0, idGordo = 0, idMagro = 0;

    for (int contador = 1; contador <= 10; contador++){
        printf("Declare o peso do boi");
        scanf("%f", &pesoBoi);

        if (primeiroBoi || pesoBoi > boiGordo){
            boiGordo = pesoBoi;
            idGordo = contador;
        }
        if (primeiroBoi || pesoBoi < boiMagro){
            boiMagro = pesoBoi;
            idMagro = contador;
        }
        primeiroBoi = 0;
    }

    printf("o id do boi mais pesado e seu peso e  %1.f %1.f", idGordo, boiGordo);
    printf("\no id boi mais leve e seu peso e %1.f %1.f", idMagro, boiMagro);
}