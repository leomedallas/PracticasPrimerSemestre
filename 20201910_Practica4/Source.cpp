/*PROGRAMA DISE�ADO POR: LEONARDO MEDELL�N RAM�REZ - ESTUDIANTE DE DESARROLLO DE SOFTWARE*/
/*PROGRAMA DISE�ADO PARA PR�CTICA DE PORGRAMACI�N*/

#include <iostream>					//librer�as
#include <string>					//librer�a
using namespace std;				//est�ndar

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
