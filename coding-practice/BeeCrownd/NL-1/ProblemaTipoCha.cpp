#include <stdio.h>
#include <iostream>

using namespace std;
int main() {
 
 int TipoCha =0;
 int Resposta[5];
 int numeroAcertos = 0;
 
 cin >> TipoCha;
 for(int aux=0; aux<5; aux++){
     cin>> Resposta[aux];
     if(Resposta[aux]==TipoCha){
        numeroAcertos++; 
     }
 }
 
cout<<numeroAcertos<< endl; 
 
    return 0;
}

