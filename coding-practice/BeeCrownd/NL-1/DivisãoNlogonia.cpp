#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std; 

int main() {
int numEntrada=0;
int aux=0;
vector<string> posicao;

cin>>numEntrada;
int coordDivPointx;
int coordDivPointy;


while(numEntrada!=0){
   cin>>coordDivPointx>>coordDivPointy;
   
   for(aux=0; aux<numEntrada; aux++){
    int X, Y;
    cin>>X;
    cin>>Y;
    
    if(X==coordDivPointx || Y==coordDivPointy){
        posicao.push_back("divisa");
    }
    else if(X<coordDivPointx && Y<coordDivPointy){
        posicao.push_back("SO");
    }
    else if(X<coordDivPointx && Y>coordDivPointy){
        posicao.push_back("NO");
    }
    else if(X>coordDivPointx && Y>coordDivPointy){
        posicao.push_back("NE");
    }
    else if(X>coordDivPointx && Y<coordDivPointy){
        posicao.push_back("SE");
    }
    } 
  
 cin>>numEntrada;
}

for(aux=0; aux<posicao.size(); aux++){
    cout<<posicao[aux]<<endl;
}

    return 0;
} 