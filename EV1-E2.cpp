// EV1-E2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include<time.h>
#include<stdlib.h>

//Make a recursive function for create matrices

int main()
{
    int x, y, x2, y2;

    while (true) {
        do {
            srand(time(0));

            std::cout << "<<Multiplicacion de matrices con valores autogenerados>>" << std::endl;
            std::cout << "WARNING, EL NUMERO DE COLUMNAS DE LA PRIMERA MATRIZ DEBE SER IGUAL AL NUMERO DE FILAS DE LA SEGUNDA MATRIZ." << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << "Ingrese la cantidad de filas para la primera matriz: " << std::endl;
            std::cin >> x;
            std::cout << "Ingrese la cantidad de columnas para la primera matriz:" << std::endl;
            std::cin >> y;
            std::cout << "Ingrese la cantidad de filas para la segunda matriz: " << std::endl;
            std::cin >> x2;
            std::cout << "Ingrese la cantidad de columnas para la segunda matriz:" << std::endl;
            std::cin >> y2;
            std::cout << std::endl;
            std::cout << std::endl;
        } while (y != x2);

        if (y = x2) {
            long long a[x][y];
            for (int i = 0; i < x; ++i) {
                for (int j = 0; j < y; ++j)
                {
                    a[i][j] = rand();
                }
            }
            std::cout << "1ra Matriz: " << std::endl;
            for (int i = 0; i < x; ++i) {
                for (int j = 0; j < y; ++j) {
                    std::cout << a[i][j] << '\t';
                }
                std::cout << '\n';
            }
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
            long long b[x2][y2];
            for (int i = 0; i < x2; ++i) {
                for (int j = 0; j < y2; ++j)
                {
                    b[i][j] = rand();
                }
            }
            std::cout << "2da Matriz: " << std::endl;
            for (int i = 0; i < x2; ++i) {
                for (int j = 0; j < y2; ++j) {
                    std::cout << b[i][j] << '\t';
                }
                std::cout << '\n';
            }
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;

            long long c[x][y2];

            for (int i = 0; i < x; ++i) {
                for (int j = 0; j < y2; ++j) {
                    c[i][j] = 0;
                }
            }
            for (int i = 0; i < x; ++i)
                for (int j = 0; j < y2; ++j)
                    for (int z = 0; z < y; ++z)
                        c[i][j] += a[i][z] * b[z][j];
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << "Matriz producto: " << std::endl;
            for (int i = 0; i < x; ++i) {

                for (int j = 0; j < y2; ++j) {
                    std::cout << c[i][j] << "    ";
                }
                std::cout << std::endl;

            }

            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;

        }
        else {

            std::cout << "WARNING, EL NUMERO DE COLUMNAS DE LA PRIMERA MATRIZ DEBE SER IGUAL AL NUMERO DE FILAS DE LA SEGUNDA MATRIZ." << std::endl;

        }
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
