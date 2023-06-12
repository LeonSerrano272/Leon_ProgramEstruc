// 2023_05_15_017_PracticaLibros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <stdlib.h>
int main()
{
    system("Color 02"); 
    std::string Titulo[5];
    std::string Autor[5]; 
    int Fecha[5];  
    //Captura de datos
    std::cout << "Hola, por favor registra tus libros favoritos!" << std::endl; 
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Ingresa el Titulo del libro " << i + 1 << std::endl; 
        if (i > 0) 
        {
            std::cin.ignore(); 
        }
        getline(std::cin, Titulo[i]); 
        std::cout << "Ingresa el Autor del libro " << i + 1 << std::endl;
        getline(std::cin, Autor[i]);
        std::cout << "Ingresa la Fecha de publicacion del libro " << i + 1 << std::endl;
        std::cin >> Fecha[i]; 
    }
    //Funciones de  muestreo de la informacion
    std::cout << "De acuerdo, entonces los titulos que elegiste son;  " << std::endl;  
    for (int j = 0; j < 5; j++)
    {
    std::cout << j + 1 << ": " << Titulo[j] << " El autor es: " << Autor[j] << " Publicado el dia (AAAA/MM/DD) " << Fecha[j] << std::endl;
    }
}