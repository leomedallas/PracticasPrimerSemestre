/*PROGRAMA DISEÑADO POR: LEONARDO MEDELLÍN RAMÍREZ - ESTUDIANTE DE DESARROLLO DE SOFTWARE*/
/*PRÁCTCA 5, CONDICIONALES IF - ELSE*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int entero, dato1 = 2;
	char letra, dato2 = 'a';
	float decimal, dato3 = 1.5;
	double doble, dato4 = 2500;
	string nombre, dato5 = "Pepe";

	cout << "Hola, vamos a ingresar diferentes tipos de datos con valor asignado y haremos que el programa verifique si es correcto o incorrecto." << endl;
	cout << "Los valores asignados son int = 2, char = a, float = 1.5, double = 2500 y string = Pepe" << endl;

	cout << "Ingresa el valor asignado a int: " << endl;
	cin >> entero;

	if (entero == dato1) {
		cout << "El valor es correcto" << endl;
	}
	else {
		cout << "El valor es incorrecto" << endl;
	}

	cout << "Ingresa el valor asignado a char: " << endl;
	cin >> letra;
	
	if (letra == dato2) {
		cout << "El valor es correcto" << endl;
	}
	else {
		cout << "El valor es incorrecto" << endl;
	}

	cout << "Ingresa el valor asignado a float: " << endl;
	cin >> decimal;

	if (decimal == dato3) {
		cout << "El valor es correcto" << endl;
	}
	else {
		cout << "El valor es incorrecto" << endl;
	}

	cout << "Ingresa el valor asignado a double: " << endl;
	cin >> doble;

	if (doble == dato4) {
		cout << "El valor es correcto" << endl;
	}
	else {
		cout << "El valor es incorrecto" << endl;
	}

	cout << "Ingresa el valor de string: " << endl;
	cin >> nombre;

	if (nombre == dato5) {
		cout << "El valor es correcto" << endl;
	}
	else {
		cout << "El valor es incorrecto" << endl;
	}

	cout << "Eso ha sido todo, gracias buen dia :)" << endl;

	return 0;
}



