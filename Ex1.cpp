#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	double n1;
	double n2;
	
	
	cout << "Insira o primeiro valor: ";
	cin >> n1;
	cout << "Insira o segundo valor: ";
	cin >> n2;
	
	if (n1>n2)
	{
		cout << "Primeiro maior";
	}
	
	else
	 { 
	  cout << "Segundo maior";
	}
	
	
	return 0;
}