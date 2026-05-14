#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	
	float a, b, c, hip, cat1, cat2;

    cout << "Digite os valores A, B e C: ";
    cin >> a >> b >> c;

    if (a > b && a > c) {
        hip = a; cat1 = b; cat2 = c;
    } else if (b > c) {
        hip = b; cat1 = a; cat2 = c;
    } else {
        hip = c; cat1 = a; cat2 = b;
    }

    if ((hip * hip) == (cat1 * cat1) + (cat2 * cat2)) {
        cout << "\nFormam um triangulo retangulo\n";
    } else {
        cout << "\nNao formam um triangulo retangulo\n";
    }
	
	
	return 0;
}