#include <iostream>

using namespace std;

int exe1(int x){
 
 if (x < 5){
  return (3 * x);
 }
 else{
  
  return (2 * exe1(x-5) + 7);
 }
}

int main(){
 
 int n=0;
 cout<<"Exercicio_1"<<"\n";
 cout<<"Digite n: ";
 cin>>n;
 cout<<"\n"<<"Resultado "<<n<<" = "<<exe1(n);
 return 0;
}