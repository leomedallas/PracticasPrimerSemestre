#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    int matriz[3][2] = { {3,6},{7,8},{2,5} };
    int contador = 0;

    cout << "Esta es una matriz de 3*2: " << endl << endl;

    int filas = (sizeof(matriz) / sizeof(matriz[0]));
    cout << "Número de filas: " << filas << endl;
    int columnas = (sizeof(matriz[0]) / sizeof(matriz[0][0]));
    cout << "Número de columnas: " << columnas << endl << endl;

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 2; y++)
        {
            matriz[x][y] = contador;
            contador++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int i2 = 0; i2 < 2; i2++)
        {
            cout << "La posición de la matriz es (" << i << "," << i2 << ") y el valor de esta posición es: " << matriz[i][i2] << endl;
        }
    }
}