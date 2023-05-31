// 2023_05_03_011_AdivinaQuien.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <cmath>
#include <stdlib.h>


int main()
{
    while (true)
    {

        bool aux = false;
        std::cout << "Akinator de deportes. (Utiliza *0 para NO y *1 para SI)" << std::endl;
        std::cout << "El deporte que piensas se juega con balon?? " << std::endl;
        std::cin >> aux;

        if (aux == true) //equipo de 5
        {
            std::cout << "El equipo es de 5 jugadores por equipo?" << std::endl;
            std::cin >> aux;
        }
        if (aux == true) //Balon basket
        {
            std::cout << "El balón es pesado en comparacion de otros?" << std::endl;
            std::cin >> aux;
        }
        if (aux == true) //Canasta
        {
            std::cout << "El balon entra en una canasta alta?" << std::endl;
            std::cin >> aux;
        }
        if (aux == true) //Resultado 1
        {
            std::cout << "Tu deporte es baloncesto" << std::endl;
            system("PAUSE");

            return 0;
        }
        else (aux == false); //Si no se juega con 5 jugadores por equipo
        {
            std::cout << "El equipo es de 6 jugadores?" << std::endl;
            std::cin >> aux;
        }
        if (aux == true) //Balon de volley
        {
            std::cout << "El balón es muy ligero?" << std::endl;
            std::cin >> aux;
        }
        if (aux == true) //Malla de volley
        {
            std::cout << "El balón se pasa a traves de una red?" << std::endl; 
            std::cin >> aux; 
        }
        if (aux == true) //Punto en volleyball
        {
            std::cout << "Si el balon toca el piso es punto para el que logro hacer que el otro equipo se le cayera?" << std::endl; 
            std::cin >> aux; 
        }
        if (aux == true) //Resultado 2
        {
            std::cout << "Tu deporte es Volleyball" << std::endl;
            system("PAUSE");

            return 0;
        }
        else (aux == false);  //Si no se juega de 6 jugadores por equipo
        {
            std::cout << "El equipo es de 11 jugadores por equipo?" << std::endl;  
            std::cin >> aux; 
        }
        if (aux == true) //Balon de futbol
        {
            std::cout << "El balon es duro pero no tan grande como uno de baloncesto?" << std::endl; 
            std::cin >> aux; 
        }
        if (aux == true) //Cancha de futbol
        {
            std::cout << "Se juega en una cancha con pasto?" << std::endl; 
            std::cin >> aux;
        }
        if (aux == true) //Porteria de futbol
        {
            std::cout << "Se tiene que meter el balón en una porteria?" << std::endl; 
            std::cin >> aux; 
        }
        if (aux == true) //Resultado 2
        {
            std::cout << "Tu deporte es fubol" << std::endl;  
            system("PAUSE");

            return 0;
        }



    }
}