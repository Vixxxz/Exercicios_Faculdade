/*Exercício 12. Versão recursiva de busca binária
Crie a função recursiva rbsearch(x,v,p,u), que faz uma busca binária para determinar
se o item x está no vetor crescente v, indexado de p até u.*/

#include <stdio.h>

int rbsearch(int x, int v[], int p, int u)
{
    if(p<=u)
    {
        int m = (p+u)/2;
        if(x==v[m]) 
        {
            return 1;
        }
        if(x<v[m]) 
        {
            rbsearch(x,v,p,m-1);
        }
        else
        {
            rbsearch(x,v,m+1, u);
        }
    }
    else
    {
        return 0;
    }
}

int main(void) 
{
    int v[8] = {19,27,31,48,52,66,75,80};
    printf("27: %d\n", rbsearch(27,v,0,7));
    printf("51: %d\n", rbsearch(51,v,0,7));
    return 0;
}
