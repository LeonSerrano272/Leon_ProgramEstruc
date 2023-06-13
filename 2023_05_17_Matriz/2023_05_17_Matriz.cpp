// 2023_05_17_Matriz.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <random>

int main()
{
   std::srand(time(NULL)); // Semillero - Toma el reloj para generar un #aleatorio 
    /*
    int edades[100][100];
    int filas = (sizeof(edades) / sizeof(edades[0]));
    std::cout << "Filas: "<<filas <<std::endl;
    int columnas = (sizeof(edades[0]) / sizeof(edades[0][0]));
    std::cout << "Columnas: " << columnas;
// Imprimir el apendice de cada sizeof
    //Sizeof edades, edades[], edades[][]
    */



    int opc = 0; 
    std::cout << "Ingresa el tipo de matriz a imprimir 1) 3x3 2) 5x5 3) 10x10" << std::endl;  
    std::cin >> opc; 
    switch (opc)
    {
    case 1: 
        std::cout << "Matriz 3x3" << std::endl; 
        int matriz[3][3]; 
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                matriz[i][j] = rand() % 10; 
            }
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                std::cout << matriz[i][j] << " "; 
            }
            std::cout << std::endl; 
        }  
        break; 
    case 2:
        std::cout << "Matriz 5x5" << std::endl;
        int matriz2[5][5]; 
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                matriz2[i][j] = rand() % 10; 
            }
        }
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                std::cout << matriz2[i][j] << " "; 
            }
            std::cout << std::endl; 
        }

        break; 
    case 3:
        std::cout << "Matriz 10x10" << std::endl;
        int matriz3[10][10];
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                matriz3[i][j] = rand() % 10; 
            }
        }
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                std::cout << matriz3[i][j] << " "; 
            }
            std::cout << std::endl; 
        }
        break; 

    }
}