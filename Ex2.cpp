  #include <iostream>
  using namespace std;
  
  int main(int argc, char** argv)
  {
	  
	  int n1;
	  int n2;
	  
	  cout << "Digite o primeiro valor: ";
	  cin >> n1;
	  cout << "Digite o segundo valor: ";
	  cin >> n2;
	  
	  if (n1==n2)
	  {
	  	cout << "Iguais";	
	  }
	  
	  else
	  {
	  	if (n1>n2)
		  {
		  	cout << "Primeiro maior";
		  }
		  else
		  {
			  cout << "Segundo maior";
		  }
	  }
	  return 0;
  }