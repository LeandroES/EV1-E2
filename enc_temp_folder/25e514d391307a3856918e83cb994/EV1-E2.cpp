// EV1-E2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    int x, y, x2, y2;
    
    while (true) {

        srand(time(0));

        std::cout << "<<Suma de los elementos de las Columnas y Filas, independiente, de una matriz, con valores ingresados por el usuario>>" << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "Ingrese la cantidad de filas: " << std::endl;
        std::cin >> x;
        std::cout << "Ingrese la cantidad de columnas: " << std::endl;
        std::cin >> y;
        std::cout << std::endl;
        std::cout << std::endl;


        int a[x][y];
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++)
            {
                std::cout << "Ingrese valor para la posicion" << "[" << i + 1 << "]" << "[" << j + 1 << "]" << ":" << std::endl;
                std::cin >> a[i][j];
            }
        }
        std::cout << "Su Matriz: " << std::endl;
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                std::cout << a[i][j] << '\t';
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;
        std::cout << std::endl;

        int sf[x];
        std::cout << "Suma de cada fila: " << std::endl;
        int sum;
        for (int i = 0; i < y; i++) {
            sum = 0;

            for (int j = 0; j < x; j++) {
                sum = sum + a[i][j];
                
            }
            sf[i] = sum;
            std::cout << "Suma de la fila: " << i + 1 << " es: " << sum << std::endl;
        }

        int sc[y];
        std::cout << "\nSuma de cada columna: " << std::endl;
        int suma;

        for (int i = 0; i < y; i++) {
            suma = 0;

            for (int j = 0; j < x; j++) {
                suma = suma + a[j][i];
                
            }
            sc[i] = suma;
            std::cout << "Suma de la columna: " << i + 1 << " es: " << suma << std::endl;
        }
               
       
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "Vector de sumas de filas = { ";
        for (int i = 0; i < x; i++) {
             std::cout << sf[i] << ", ";
        }
        std::cout << " } " << std::endl;
        std::cout << "Vector de sumas de columnas = { ";
        for (int i = 0; i < y; i++) {
            std::cout << sc[i] << ", ";
        }
        std::cout << " } " << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
