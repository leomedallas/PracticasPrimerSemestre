#include <iostream>
#include<string>
#include<locale.h>
#include<locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    string titulo[5] = { "", "", "", "", "" };
    int año[5] = { 0, 0, 0, 0, 0 };
    string autor[5] = { "", "", "", "", "" };

    cout << "Este es un programa para organizar tu top 5 de libros favoritos." << endl << endl;
    cout << "Ingresa el título del libro 1: ";
    cin.ignore();
    getline(cin, titulo[0]);
    cout << "Ingresa su año de publicación: "; cin >> año[0];
    cout << "Ingresa el nombre de su autor: ";
    cin.ignore();
    getline(cin, autor[0]);
    cout << endl;
    cout << "Ingresa el título del libro 2: ";
    cin.ignore();
    getline(cin, titulo[1]);
    cout << "Ingresa su año de publicación: "; cin >> año[0];
    cout << "Ingresa el nombre de su autor: ";
    cin.ignore();
    getline(cin, autor[1]);
    cout << endl;
    cout << "Ingresa el título del libro 3: ";
    cin.ignore();
    getline(cin, titulo[2]);
    cout << "Ingresa su año de publicación: "; cin >> año[0];
    cout << "Ingresa el nombre de su autor: ";
    cin.ignore();
    getline(cin, autor[2]);
    cout << endl;
    cout << "Ingresa el título del libro 4: ";
    cin.ignore();
    getline(cin, titulo[3]);
    cout << "Ingresa su año de publicación: "; cin >> año[0];
    cout << "Ingresa el nombre de su autor: ";
    cin.ignore();
    getline(cin, autor[3]);
    cout << endl;
    cout << "Ingresa el título del libro 5: ";
    cin.ignore();
    getline(cin, titulo[4]);
    cout << "Ingresa su año de publicación: "; cin >> año[0];
    cout << "Ingresa el nombre de su autor: ";
    cin.ignore();
    getline(cin, autor[4]);
    cout << endl;

    cout << titulo[0];

    for (int i = 0; i <= 4; i++)
    {
        cout << "Libro " << i + 1 << ": " << titulo[i] << endl << "Año: " << año[i] << endl << "Autor: " << autor[i] << endl << endl;
    }

    return 0;
}