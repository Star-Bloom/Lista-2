#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	
	float p1, p2, media;

    cout << "Digite a nota P1: ";
    cin >> p1;
    cout << "Digite a nota P2: ";
    cin >> p2;

    // Calculo da media conforme a formula fornecida
    media = (p1 + (2 * p2)) / 3;

    cout << "\nMedia final: " << media << "\n";

    if (media >= 5) {
        cout << "Situacao: Aprovado\n";
    } else {
        cout << "Situacao: Reprovado\n";
    }
	
	return 0;
}