#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	
	float p1, p2_necessario;

    cout << "Digite a nota da P1: ";
    cin >> p1;
    
    p2_necessario = (15 - p1) / 2;

    cout << "\nPara ser aprovado com media 5.0, voce precisa tirar:\n";
    cout << "Nota na P2: " << p2_necessario << "\n";

    if (p2_necessario > 10) {
        cout << "Situacao: Dificil, a nota necessaria supera o maximo (10).\n";
    }
	
	return 0;
}