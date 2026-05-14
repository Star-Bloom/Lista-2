#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	
	float a, b, c;

    cout << "Digite o primeiro lado: ";
    cin >> a;
    cout << "Digite o segundo lado: ";
    cin >> b;
    cout << "Digite o terceiro lado: ";
    cin >> c;

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        if (a == b && b == c) {
            cout << "\nTriangulo Equilatero\n";
        } else if (a != b && b != c && a != c) {
            cout << "\nTriangulo Escaleno\n";
        } else {
            cout << "\nTriangulo Isosceles\n";
        }
    } else {
        cout << "\nOs valores nao formam um triangulo.\n";
    }
	
	return 0;
}