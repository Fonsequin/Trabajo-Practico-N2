#include <iostream> // Solicitar biblioteca
using namespace std;
int main() // Funcion
{
	float numero1; // Varible Numero 1
	float numero2; // Variable Numero 2
	float numero3; // Variable Numero 3
	cout << "Este programa indica si un estudiante esta aprobado por el promedio de notas " << endl; // Presentacion
	cout << endl; //v Separacion
	cout << "Ingrese la primera nota: " << endl; // Entrada del primer numero
	cin  >> numero1; // Datos guardado de numero
	cout << endl; // Separacion
	cout << "Ingrese la segunda nota:" << endl; // Entrada del segundo numero
	cin >> numero2; // Datos guardado de numero
	cout << endl;
	cout << "Y por ultime ingrese la tercera nota: " << endl;
	cin >> numero3;
	cout << endl;
	float promedio = (numero1 + numero2 + numero3) / 3;
	if(promedio >= 7)
	{
		cout << "El alumno esta aprobado, su promedio es de: " << promedio << endl;
	}
	else if(promedio < 4)
	{
		cout << "El alumno esta desaprobado, su promedio es de: " << promedio << endl;
	}
	else if(4,01 == promedio < 6,99)
	{
		cout << "El alumno no esta aprobado pero puede aprobar, su promedio es de: " << promedio << endl;
	}
	return 0;
}
