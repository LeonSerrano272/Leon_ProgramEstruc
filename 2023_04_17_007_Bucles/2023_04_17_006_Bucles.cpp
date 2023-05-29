// 2023_04_17_006_Bucles.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
//Hacer un programa que te solicite el numero de peleadores en una arena y te de el número de batallas que se tendrán para obtener a 1 ganador dependiendo del sistema de combate.
//1. - Royal Rumble
//2. - Eliminatoria directa
//3. - Grupos, semifinal y final
//
//

#include <iostream>
#include <locale.h> 

int main()
{
    setlocale(LC_ALL, "es_MX.UFT-8");
    int Jug = 0;
    int MejorP = 0;
    int Rondas = 0;
    int Grupo = 0;
    int Semi = 0;
    int Final = 0;
    std::cout << "Bienvenidos al torneo de las artes marciales!!!   \n  ¿Cuantos peleadores participaran?" << std::endl;
    std::cin >> Jug;
    std::cout << "Genial! Participaremos " << Jug << " peleadores \n";
    std::cout << "Ahora dime como pelearemos? \n 1) Royal rumble \n2) Eliminatoria Directa \n3) Grupos, semifinal y final \n" << std::endl;
    std::cin >> MejorP;
    switch (MejorP)
    {
    case 1:
            std::cout << "De acuerdo! \n El ultimo hombre en pie gana!\n" << std::endl;
        for (int i = 1; i < Jug; i++)
        {
            Rondas = (Jug - i) + MejorP;
            std::cout << "Jugador elimina a  " << MejorP << " jugador!" << std::endl;
        }
            break;

    case 2:
        MejorP = (Jug - 1);
        {
            std::cout << "Eliminacion Directa entonces! \n";
            std::cout << "Pelearas  " << MejorP << " veces, suerte!" << std::endl;
        }
        break;


    case 3:
    {
        Grupo = (Jug / 2);
        Final = Jug / Jug;
        Semi = Jug / Jug / Jug;
      
        std::cout << "Peledores a sus respectivos grupos! \n";
        std::cout << "Seran " << Grupo  << " Peleas en la primera ronda " << std::endl;
        std::cout << "Despues " << Final << " Peleas en cuartos de final" << std::endl;  
        std::cout << "Luego " << Semi << " Peleas en Semifinales" << std::endl;  
        std::cout << "Y finalmente 1 contra 1 en la final" << std::endl;  
        }
        break;

    default:
        std::cout << "Porfavor selecciona una opcion valida. \n";

        break;
        }
    }


    
