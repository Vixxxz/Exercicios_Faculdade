/*Exercício 8. Desempenho de msort() para vetores muito grandes
Complete o programa a seguir, execute-o e analise os resultados.*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void intercala(int v[], int p, int m, int u) 
{
    int *w = malloc((u-p+1)*sizeof(int));
    int i=p, j=m+1, k=0;
    while(i<=m && j<=u)
    {
        w[k++] = (v[i]<v[j]) ? v[i++] : v[j++];
    }
    while(i<=m )
    {
        w[k++] = v[i++];
    }
    while(j<=u) 
    {
        w[k++] = v[j++];
    }
    for(k=0; k<=u-p; k++) 
    {
        v[p+k] = w[k];
    }
    free(w);
}

void exibe (int v[], int i)
{
	for(int j = 0; j < i; j++)
    {
	    if(j==i-1)
        {
	       printf("%d ", v[j]); 
	    }
        else
        {
		    printf("%d, ", v[j]);
	    }
	}
}

void ms(int v[], int p, int u) 
{
    int m = 0;
    if(p==u) 
    {
        return;
    }
    m = (p+u)/2;
    ms(v,p,m);
    ms(v,m+1,u);
    intercala(v,p,m,u);
}

void msort(int v[], int n) 
{
    ms(v,0,n-1);
}

void preenche(int v[], int n, int s) 
{
    srand(s); 
    for(int i=0; i<n; i++) 
    {
        v[i] = rand()%1000;
    }
}

int main(void) {
    int *v = malloc(1e8*sizeof(int));
    puts(" n msort");
    for(int n=1e7; n<=1e8; n+=1e7) 
    {
        preenche(v,n,1);
        double t = clock();
        msort(v,n);
        double m = (clock()-t)/CLOCKS_PER_SEC;
        printf("%9d %5.1f\n",n,m);
    }
    free(v);
    return 0;
}