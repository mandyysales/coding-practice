 #include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
int numVetor=0;
int valoresMarcados=0;

cin>>numVetor;
vector<int> sequencia(numVetor);

for(int aux=0;aux<numVetor;aux++){
    cin>>sequencia[aux];
    
    if(aux>=1 && sequencia[aux]!= sequencia[aux-1]){
        valoresMarcados++;
    }
}
 valoresMarcados++;
 cout<<valoresMarcados<<endl;
    return 0;
}