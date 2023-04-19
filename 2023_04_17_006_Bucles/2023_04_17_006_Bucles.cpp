// 2023_04_17_006_Bucles.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
//Hacer un programa que te solicite el numero de peleadores en una arena y te de el número de batallas que se tendrán para obtener a 1 ganador dependiendo del sistema de combate.
//1. - Royal Rumble
//2. - Eliminatoria directa
//3. - Grupos, semifinal y final
//
//

#include <iostream>

int main()
{
    int Jug = 0;
    int opc = 0;
    std::cout << "Bienvenidos al torno de las artes marciales!!!   \n  ¿Cuantos peleadores participaran?"; 
    std::cin >> Jug;
    std::cout << "Genial! Participaremos " << Jug << " peleadores \n";
    std::cout << "Ahora dime como pelearemos? \n 1) Royal rumble \n2) Eliminatoria Directa \n3) Grupos, semifinal y final \n"; 
    switch (opc)
    {
    case 1:
        std::cout << "De acuerdo! \n El ultimo hombre en pie gana!\n";
        
        break;

    case 2:
        std::cout << "Eliminacion Directa entonces! \n";
        
        break;

    case 3: 
        std::cout << "Peledores a sus respectivos grupos! \n";

        break;

    default:
        std::cout << "Porfavor selecciona una opcion valida. \n";

        break;
    }

    }
