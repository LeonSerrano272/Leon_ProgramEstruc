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

        if (aux == true) // Se juega con balon?
        {
            std::cout << "El equipo es de 5 jugadores por equipo?" << std::endl;
            std::cin >> aux;
        }
        if (aux == true) // Se juega de 5 jugadores en un equipo?
        {
            std::cout << "El balon es pesado en comparacion de otros?? " << std::endl;
            std::cin >> aux;
            if (aux == true) // Es pesado el balon?
            {
                std::cout << "El objetivo es meter el balon en una canasta??" << std::endl;
                std::cin >> aux;
            }
            if (aux == true) // Meter balon en canasta?
            {
                std::cout << "Tu deporte es basquetbol :D" << std::endl;
            }
            else //Futbol 
            {
                std::cout << "Tu deporte es de 11 jugadores por equipo?" << std::endl;
                if (aux == true) // Equipos de 11
                {
                    std::cout << "El objetivo es meter el balon en una porteria??" << std::endl;
                    std::cin >> aux;
                }
                if (aux == true) // Balon en porteria 
                {
                    std::cout << "Tu deporte es futbol" << std::endl;
                }
            }
        }
        else // Voleyball
        {
            std::cout << "Tu deporte es de 6 jugadores por equipo?" << std::endl;
            std::cin >> aux;
        }
        if (aux == true) //Deporte de 6 jugadores por equipo
        {
            std::cout << "Tu deporte tiene una red en medio del espacio de juego?" << std::endl;
            std::cin >> aux;
        }
        if (aux == true) // Red en medio del juego
        {
            std::cout << "Tu deporte es voleyball" << std::endl;
            std::cin >> aux;
        }

       
        else //No se juega con balon
        {
            std::cout << "Se practica en una pista??" << std::endl;
            std::cin >> aux;
            if (aux == true)// Se practica en una pista?
            {
                std::cout << "Es individual?? " << std::endl;
                std::cin >> aux;
                if (aux == true) // Se practica en estadios?
                {
                    std::cout << "Se practica en estadios??" << std::endl;
                    std::cin >> aux;
                }
                if (aux == true) // De tierra o de agua
                {
                    std::cout << "Deporte de tierra??" << std::endl;
                    std::cin >> aux;
                }
                if (aux == false) // De tierra o de agua
                {
                    std::cout << "Deporte de agua??" << std::endl;
                    std::cin >> aux;
                }
                else // Se practica en pista de tierra
                {
                    std::cout << "Tu deporte es atletismo" << std::endl;
                }
            }
            else//Se practica en pista de agua
            {
                std::cout << " Tu deporte es natacion" << std::endl;
                std::cin >> aux;
            }
        }
        }
    }