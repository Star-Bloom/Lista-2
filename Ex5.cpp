#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	
	float b, h, area;

    cout << "Digite a base: ";
    cin >> b;
    cout << "Digite a altura: ";
    cin >> h;

    area = b * h;

    cout << "\nArea: " << area << "\n";

    if (area > 100) {
        cout << "Terreno grande\n";
    } else {
        cout << "Terreno pequeno\n";
    }
	
	return 0;
}