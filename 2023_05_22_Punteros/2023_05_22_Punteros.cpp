// 2023_05_22_Punteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// 
//
#include <iostream>
#include <cstdlib> // Para la generación de números aleatorios
#include <ctime> // Para inicializar la semilla de los números aleatorios

int main() {
    int n, m;
    std::cout << "Ingrese el número de filas: ";
    std::cin >> n;
    std::cout << "Ingrese el número de columnas: ";
    std::cin >> m;

    int** matriz = new int* [n];
    for (int i = 0; i < n; i++) {
        matriz[i] = new int[m];
    }

    // Semillero de números aleatorios 
    std::srand(std::time(0));

    std::cout << std::endl << "La matriz ingresada es:" << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (n > 3 || m > 3) {
                // Generar números aleatorios si alguna dimensión de la matriz es mayor a 3
                matriz[i][j] = std::rand() % 100; // Número aleatorio entre 0 y 99
            }
            else {
                // Ingresar datos automáticamente si ambas dimensiones son 3 o menores
                matriz[i][j] = i * m + j + 1;
            }
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Recordar siempre liberar la memoria al final
    for (int i = 0; i < n; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;

    return 0;
}