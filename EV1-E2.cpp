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

        std::cout << "<<Suma de los elementos de las Columnas y Filas, independiente," 
            << "de una matriz, con valores ingresados por el usuario >> " << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "Ingrese la cantidad de filas: " << std::endl;
        std::cin >> x;
        std::cout << "Ingrese la cantidad de columnas: " << std::endl;
        std::cin >> y;
        std::cout << std::endl;
        std::cout << std::endl;


        int a[x][y];
        for (int i = 0; i < x; i++) { //i=0 & i<x & i++ ---> 1 + 1 + 1 
            for (int j = 0; j < y; j++) //j=0 & j<y & j++ ---> 1 + 1 + 1
            {
                std::cout << "Ingrese valor para la posicion" << 
                    "[" << i + 1 << "]" << "[" << j + 1 << "]" << ":" << std::endl; //i+1 & j + 1 ---> 1 + 1
                std::cin >> a[i][j];
            }//Tf1(n) = (1 + n * ( 1 + 2 + 1) + 1) = 4n + 2
        }//Tf2(n) = (1 + n * ( 1 + 4n + 2 + 1) + 1) = (4n^2)+4n+2
        std::cout << "Su Matriz: " << std::endl;
        for (int i = 0; i < x; i++) { 
            for (int j = 0; j < y; j++) {
                std::cout << a[i][j] << '\t';
            }//Tf3(n) = (1 + n * (1 + 0 + 1)+ 1) = 2n + 2
            std::cout << std::endl;
        }//Tf4(n) = (1 + n * (1 + 2n + 2 + 1)+ 1) = (2n^2)+4n+2

        std::cout << std::endl;
        std::cout << std::endl;

        int sf[x];
        std::cout << "Suma de cada fila: " << std::endl;
        int sum;
        for (int i = 0; i < y; i++) {
            sum = 0;

            for (int j = 0; j < x; j++) {
                sum = sum + a[i][j];
                
            }//Tf5(n) = (1 + 1 + n * (1 + 2 + 1)+ 1) = 4n+3
            sf[i] = sum;
            std::cout << "Suma de la fila: " << i + 1 << " es: " << sum << std::endl;
        }//Tf6(n) =  (1 + n * (1 + (4n + 3 + 1 + 1 ) + 1) + 1) = (4n^2) + 7n + 2 

        int sc[y];
        std::cout << "\nSuma de cada columna: " << std::endl;
        int suma;

        for (int i = 0; i < y; i++) {
            suma = 0;

            for (int j = 0; j < x; j++) {
                suma = suma + a[j][i];
            }//Tf7(n) = (1 + 1 + n * (1 + 2 + 1)+ 1) = 4n + 3
            sc[i] = suma;
            std::cout << "Suma de la columna: " << i + 1 << " es: " << suma << std::endl;
        }//Tf8(n) =  (1 + n * (1 + (4n + 3 + 1 + 1 ) + 1) + 1) = (4n^2) + 7n + 2
               
       
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "Vector de sumas de filas = { ";
        for (int i = 0; i < x; i++) {
             std::cout << sf[i] << ", ";
        }//Tf9(n) =  (1 + n * (1 + 0 + 1) + 1) = 2n + 2
        std::cout << " } " << std::endl;
        std::cout << "Vector de sumas de columnas = { ";
        for (int i = 0; i < y; i++) {
            std::cout << sc[i] << ", ";
        }//Tf10(n) =  (1 + n * (1 + 0 + 1) + 1) = 2n + 2
        std::cout << " } " << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    }

    return 0; //---> 1
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
