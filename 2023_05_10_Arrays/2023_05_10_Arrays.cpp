// 2023_05_10_Arrays.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Leon Serrano

#include <iostream>
#include <string>
int main()
{ 
    //Personajes DBZ
    std::string Nombre[5] = {"Goku" , "Vegeta" , "Piccolo" , "Bills" , "Cell"};
    std::string Procedencia[5] = { "Saya/Humano" , "Sayayin" , "Namekian" , "Dios de la destruccion" , "Androide" }; 
    int Ki[5] = { 5, 4, 3, 2, 1, };
    //Mostrar datos de un arreglo
    for (int i = 0; i <= 4; i++)
    {
        std::cout << "Nombre del personaje " << Nombre[i] << std::endl;
    }
    //Nombres de personas
    //Edades
    std::string Nombres[5];
    std::string edad[5]; 
    for (int i = 0; i <= 4; i++)
    {
        std::cout << "Hola! Me puedes dar tu nombre?" << std::endl;
        getline( std::cin, Nombres [i] ); 
        std::cout << "Ahora tu edad" << std::endl; 
        getline(std::cin, edad[i]);
    }
    //El "For" se debe repetir cuando vaya a mostrar mis datos guardados
    for (int i = 0; i <= 4; i++)
    {
        std::cout << "Entonces se llama " << Nombres[i] << " Y tiene " << edad[i] << " Años" << std::endl;

    }
}
