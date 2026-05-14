#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	
	float v1, v2, v3;

    cout << "Digite o primeiro valor: ";
    cin >> v1;
    cout << "Digite o segundo valor: ";
    cin >> v2;
    cout << "Digite o terceiro valor: ";
    cin >> v3;

    if (v1 == v2 && v2 == v3) {
        cout << "\nOs numeros sao identicos.\n";
    } else {
        float maior = v1;
        if (v2 > maior) { maior = v2; }
        if (v3 > maior) { maior = v3; }
        cout << "\nO maior valor e: " << maior << "\n";
    }
	
	
	
	return 0;
} 
    