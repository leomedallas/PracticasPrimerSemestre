/*PROGRAMA DISEÑADO POR: LEONARDO MEDELLÍN RAMÍREZ - ESTUDIANTE DE DESARROLLO DE SOFTWARE*/
/*PROGRAMA DISEÑADO PARA PRÁCTICA DE PORGRAMACIÓN*/

#include <iostream>					//librerías
#include <string>					//librería
using namespace std;				//estándar

int main()
{
	/*DECLARAMOS LAS VARIABLES*/
	int entero;
	char palabra;
	float decimal;
	double doble;
	string nombre;

	cout << "Vamos a ingresar diferentes tipos de datos\n";
	cout << "Ingresa un valor entero\n";
	cin >> entero; cout << entero << "\n";

	cout << "Ingresa un caracter\n";
	cin >> palabra; cout << palabra; "\n";

	cout << "\nIngresa un valor flotante\n";
	cin >> decimal; cout << decimal; "\n";

	cout << "\nIngresa un valor doble\n";
	cin >> doble; cout << doble; "\n";

	cout << "\nIngresa tu nombre\n";
	cin >> nombre; cout << nombre; "\n";

	return 0;
}
