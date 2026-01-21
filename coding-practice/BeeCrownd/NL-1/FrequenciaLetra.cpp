#include <iostream>
#include <map>
#include <cctype>
#include <string>
using namespace std;

int main() {
    int casos;
    cin >> casos;
    cin.ignore(); // Ignorar o \n depois do número

    for (int i = 0; i < casos; i++) {
        string texto;
        getline(cin, texto);

        map<char, int> contLetra;

        for (char c : texto) {
            if (isalpha(c)) {
                c = tolower(c);
                contLetra[c]++;
            }
        }

        // Descobrir a letra que mais apareceu
        int maxFreq = 0;
        string letrasMaisFrequentes = "";

        for (auto& par : contLetra) {
            if (par.second > maxFreq) {
                maxFreq = par.second;
                letrasMaisFrequentes = par.first;
            } else if (par.second == maxFreq) {
                letrasMaisFrequentes += par.first;
            }
        }

        cout << letrasMaisFrequentes << endl;
    }

    return 0;
}
