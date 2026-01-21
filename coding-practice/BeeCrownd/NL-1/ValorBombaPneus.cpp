#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

int PressaoDesejada =0;
int PressaoAtual =0;
int ValorPressao=0;
 
cin>>PressaoDesejada;
cin>>PressaoAtual;

ValorPressao = PressaoDesejada - PressaoAtual;
cout<<ValorPressao<< endl;

    return 0;
}