#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	
	float p, h, r;
    char sexo;

    cout << "Digite o peso: ";
    cin >> p;
    cout << "Digite a altura: ";
    cin >> h;
    cout << "Digite o sexo (M/F): ";
    cin >> sexo;

    r = p / (h * h);

    if (sexo == 'f' || sexo == 'F') {
        if (r < 19) { cout << "\nAbaixo do peso\n"; }
        else if (r < 24) { cout << "\nPeso ideal\n"; }
        else { cout << "\nAcima do peso\n"; }
    } else {
        if (r < 20) { cout << "\nAbaixo do peso\n"; }
        else if (r < 25) { cout << "\nPeso ideal\n"; }
        else { cout << "\nAcima do peso\n"; }
    }
	
	return 0;
}