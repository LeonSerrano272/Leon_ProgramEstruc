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
    std::cout << "Bienvenidos al torneo de las artes marciales!!!   \n¿Cuantos peleadores participaran?" << std::endl;
    std::cin >> Jug;
    std::cout << "Genial! Participaremos " << Jug << " peleadores \n";
    std::cout << "Ahora dime como pelearemos? \n1) Royal rumble \n2) Eliminatoria Directa \n3) Grupos, semifinal y final \n" << std::endl;
    std::cin >> MejorP;
    switch (MejorP)
    {
    case 1:
            std::cout << "De acuerdo! \nEl ultimo hombre en pie gana!\n" << std::endl;
            MejorP = (Jug - 1);
            {
                std::cout << "Pelearas contra " << MejorP << " peleadores al mismo tiempo, suerte!" << std::endl;
            }
            break;


    case 2:
        {
        int MejorP2 = (Jug / 2); 
            std::cout << "Eliminacion Directa entonces! \n";
            std::cout << "Serán " << MejorP2  << " rondas, pierde una y serás eliminado, mucha suerte!" << std::endl;
        }
        break;

    case 3:
    {
        Grupo = (Jug / 2);
        int Jug2 = (Grupo / 2); 
        Final = (Jug2); 
        int Jug3 = (Final / 2); 
        Semi = (Jug3); 
      
        std::cout << "Peledores a sus respectivos grupos! \n";
        std::cout << "Seran " << Grupo  << "  Peleas en cuartos de final " << std::endl;
        std::cout << "Despues " << Final << " Peleas en Semifinales " << std::endl;  
        std::cout << "Y por ultimo " << Semi << " en la final " << std::endl;  
        }
        break;

    default:
        std::cout << "Porfavor selecciona una opcion valida. \n";

        break;
        }

    }


    
