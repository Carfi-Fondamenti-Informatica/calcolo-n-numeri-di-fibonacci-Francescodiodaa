#include <iostream>
using namespace std;

int main() {
   int n_1=1, n_2=1,n,prox;
   cin>>n;
   if (n>=2){
   for(int i=1; i<=n; i++) {
       cout << n_2<<endl;
       prox = n_1 + n_2;
       n_2 = n_1;
       n_1 = prox;
   }}
   else{
       cout<<"errore"; }
    return 0;
   }




