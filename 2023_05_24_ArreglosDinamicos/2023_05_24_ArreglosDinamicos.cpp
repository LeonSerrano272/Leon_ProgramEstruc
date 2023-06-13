// 2023_05_24_ArreglosDinamicos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string> 
int main()
{
    //Para crear areglos Dinamicos necesiotamos memoria no estatica
    //Esto se logra con punteros
    //Creamos la variable puntera y la inicializamos en NULL
    std::string* titulos = NULL;
    std::string* autores = NULL; 
    //std:string[10]; Es para memoria estatica
    int size; 
    std::cout << "Cuantas peliculas quieres registrar?  " << std::endl;  
    std::cin >> size; 
    //Crear arreglos dinamicos
    titulos = new std::string[size]; 
    autores = new std::string[size];

    //Ahora solicita la informacion 
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            std::cin.ignore();
        }
        std::cout << "TITULO  " << i << std::endl;
       getline (std::cin, titulos[i]); 
        std::cout << "AUTORES  " << i << std::endl;
      getline (std::cin, autores[i]); 
    }
   
    //Imprime la informacion 
    for (int i = 0; i < size; i++)
    {
        std::cout << "El titulo de la pelicula es: " << i + 1 << "- " << titulos[i] << std::endl;  
        std::cout << "El autor de la pelicula es: " << i + 1 << "- " << autores[i] << std::endl; 
    }

    
    //Recuerda siemrpe destruir la memoria dinamica
    delete[] titulos; 
    delete[] autores; 
    titulos = NULL; 
    autores = NULL; 
}

