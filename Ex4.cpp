#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	
	float b, h, area;

    cout << "Digite o valor da base: ";
    cin >> b;
    cout << "Digite o valor da altura: ";
    cin >> h;

    area = b * h;

    cout << "\nArea: " << area << "\n";

    if (area > 100) {
        cout << "Terreno grande\n";
    }
	
	return 0;
}