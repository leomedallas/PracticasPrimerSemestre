#include <iostream>
#include <windows.h>
#include <conio.h>
#include <locale>
#include <string>
#include <cstdlib>
#include <list>

using namespace std;

class Jugador {
public:
	string nombre;
	int guapura;
	int inteligencia;
	int bronceado;
	int altura;

	int conseguirSumaDeValores() {
		int resultado = this->altura + this->bronceado + this->guapura + this->inteligencia;

		return resultado;
	}
};

void imprimir(Jugador* n) {
	cout << n->nombre
		<< " tiene una guapura de "
		<< n->guapura
		<< ", una altura de "
		<< n->altura
		<< ", un bronceado de "
		<< n->bronceado
		<< " y una inteligencia de "
		<< n->inteligencia
		<< ", la suma de sus valores totales esde "
		<< n->conseguirSumaDeValores()
		<< endl
		<< endl;
}

int main()
{
	setlocale(LC_ALL, "spanish");
	srand(time(NULL));

	Jugador* Aldo = new Jugador();
	Jugador* Gera = new Jugador();
	Jugador* Martin = new Jugador();

	Aldo->nombre = "Aldo";
	Aldo->guapura = rand() % 11;
	Aldo->altura = rand() % 11;
	Aldo->bronceado = rand() % 11;
	Aldo->inteligencia = rand() % 11;

	Gera->nombre = "Gera";
	Gera->guapura = rand() % 11;
	Gera->altura = rand() % 11;
	Gera->bronceado = rand() % 11;
	Gera->inteligencia = rand() % 11;

	Martin->nombre = "Martin";
	Martin->guapura = rand() % 11;
	Martin->altura = rand() % 11;
	Martin->bronceado = rand() % 11;
	Martin->inteligencia = rand() % 11;

	Jugador* elMasChido = Aldo;

	list<Jugador*> todosLosJugadores = { Aldo, Gera, Martin };

	for (Jugador* jugadorActual : todosLosJugadores) {
		imprimir(jugadorActual);

		if (jugadorActual->conseguirSumaDeValores() >= elMasChido->conseguirSumaDeValores()) {
			elMasChido = jugadorActual;
		}
	}

	cout << "El jugador más op es: \n\n";
	cout << elMasChido->nombre;

	delete Aldo;
	Aldo = NULL;
	delete Gera;
	Gera = NULL;
	delete Martin;
	Martin = NULL;
	return 0;
}