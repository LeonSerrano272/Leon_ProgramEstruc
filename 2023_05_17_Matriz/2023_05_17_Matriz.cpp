// 2023_05_17_Matriz.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <random> 
int main()
{ 
	//Practica de matrices 
	srand(time(NULL)); 
	int mat[6][6]; 
		for (int i = 0; i < 3; i++)//ciclo para acceder a filas
		{
			for (int j = 0; j < 3; j++)//ciclo para acceder a columnas
			{
				mat[i][j] = rand() % 10; 
			}
		}
	//Imprimir toda la matriz 
	for (int i = 0; i < 3; i++)//ciclo para acceder a filas
	{
		for (int j = 0; j < 3; j++)//ciclo para acceder a columnas
		{
			std::cout << mat[i][j] << " ";
		}
		std::cout << std::endl; 
	}
}
	//ejemplos sizeof
	//int edades[5][7];
	//int filas = (sizeof(edades) / sizeof(edades[0]));
	//std::cout << "Filas:  " << sizeof(filas)<< std::endl; 
	//int columnas = (sizeof(edades[0]) / sizeof(edades[0][0])); 
	//std::cout << "Columnas: " << sizeof(columnas) << std::endl; 
	//std::cout << "Edades:  " << sizeof(edades) << std::endl; 
	// Imprimir el apendice de cada sizeof
	//sizeof edades, edades[], edades[][]. 