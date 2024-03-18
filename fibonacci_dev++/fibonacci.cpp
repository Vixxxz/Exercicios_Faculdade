#incluir <cstdlib>
#incluir <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    
    unsigned long long int n1=1, n2=1, n3=0, aux=3, qtdSeries=0;
    cout<<"fibonacci \n";
    
    while (qtdSeries <= 2) {
        
        cout<<"insira um termo da sequencia de fibonacci maior que dois e menor que 93 \n";
        cin>>qtdSeries;
        
    }
    
    while (qtdSeries >= 93) {
        
        cout<<"insira um termo da sequencia de fibonacci maior que dois e menor que 93 \n";
        cin>>qtdSeries;
        
    }
    
    cout<<"a sequencia ate o termo iserido e: \n";
    cout<<n1<<"\n";
    cout<<n2<<"\n";
    
    while (aux<=qtdSeries) {
        
        cout<<n1+n2<<"\n";
        n3=n2;
        n2=n1;
        n1=n1+n3;
        aux++;
        
    }
    
    if (aux>=qtdSeries){
        
        cout<<"Fim";
        
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
    
}
