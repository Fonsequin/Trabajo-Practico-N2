#include <iostream> // Solicitar biblioteca
using namespace std;
int main() // Funcion
{
	int numero1; // Varible Numero 1
	cout << "Este programa indica si el numero es par o impar " << endl; // Presentacion
	cout << endl; //v Separacion
	cout << "Ingrese el numero: " << endl; // Entrada del primer numero
	cin  >> numero1; // Datos guardado de numero
	cout << endl; // Separacion
	if(numero1 % 2 == 0)
	{
		cout << "El numero " << numero1 << " es par.";
	}
	else
	{
		cout<<"El numero es impar";
	}
	return 0;
}
