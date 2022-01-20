#include <iostream>
using namespace std;
int main () {
    float primeiroTermo;
    float ultimoTermo;

cout << "Opa!, Digite o primeiro termo da sequência:" << endl;
cin >> primeiroTermo;

cout << "Digite o último termo da sequência:" << endl;
cin >> ultimoTermo;

cout << "\nA soma dessa sequência é:"<<(primeiroTermo+ultimoTermo)*ultimoTermo/2 << endl;

}