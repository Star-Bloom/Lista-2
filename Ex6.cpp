#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	
	float peso, altura, r;

    cout << "Digite o peso: ";
    cin >> peso;
    cout << "Digite a altura: ";
    cin >> altura;

    r = peso / (altura * altura);

    if (r < 20) {
        cout << "\nAbaixo do peso\n";
    } else if (r >= 20 && r < 25) {
        cout << "\nPeso ideal\n";
    } else {
        cout << "\nAcima do peso\n";
    }
	
	return 0;
}