// 2023_05_31_Objetos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <locale>
#include <windows.h> 

//Tipo de estructura - Nombre del tipo de dato. 
struct Juego_Mesa
{
    std::string Nombre; 
    std::string Autor; 
    int Num_Jug = 0; 
}Guardados[10]; 


enum Armas {shorty, knife, Shotgun, sniper};
enum Charizard { Envite_Igneo = 150 , Vuelo = 80 , Terremoto = 100 , Lanzallamas = 100 };
int main()
{
    /* 
    Juego_Mesa Guardados[10]; 
    Guardados[0].Nombre = "Dodos Riding Dinos"; 
    Guardados[0].Autor = "Caravana GameLab"; 
    Guardados[0].Num_Jug = 6; 
    std::cout << Guardados[0].Nombre << std::endl; 
    std::cout << Guardados[0].Autor << std::endl;
    std::cout << Guardados[0].Num_Jug << std::endl;
    */
    Armas Arma1 = shorty; 
    Charizard Ataque1 = Envite_Igneo; 
    Charizard  Ataque2 = Vuelo; 
    Charizard Ataque3 = Terremoto; 
    Charizard Ataque4 = Lanzallamas; 
    std::cout << Ataque1 << std::endl; 
    std::cout << Ataque2 << std::endl;
    std::cout << Ataque3 << std::endl;
    std::cout << Ataque4 << std::endl;

}

