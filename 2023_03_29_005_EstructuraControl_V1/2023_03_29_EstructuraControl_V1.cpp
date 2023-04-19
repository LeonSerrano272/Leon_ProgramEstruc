// 2023_03_29_EstructuraControl_V1.cpp :
//Veremos las estructuras de control
// Decisiones 
// Bucles
//

#include <iostream>

int main()
{
    //Estructura de control 1
    //IF 
    //Syntaxis
    int edad = 0;
    std::cout << "Que edad tienes?" << std::endl;
    std::cin >> edad;
    if (edad >= 18)
    {
        std::cout << "    bienvenido al club de los adultos " << std::endl;
    }
    if (edad < 18)
    {
        std::cout << " saquese al club de los pequeñines " << std::endl;
    }
    //IF-ELSE
    //Syntaxis
    float temperatura = 0;
    std::cout << "Cuantos grados centigrados tienes de temperatura? \n";
    std::cin >> temperatura;
    if (temperatura >= 36 && temperatura <= 38)
    {
        std::cout << "Usted esta en perfectas condiciones \n";
    }
    else
    {
        std::cout << "Si sigue consciente vaya al medico \n";
    }
    //Switch Case
    //Syntaxis
    int opc = 0;
    std::cout << "Hola usuario presiona una tecla del 1 al 4 para leer la frase de tu" <<
        "personaje favorito\n";
    std::cin >> opc;
    switch (opc)
    {
    case 1:
        std::cout << "Super!!!!!\n";
        break;
    case 2:
        std::cout << "Detras de ti imbecil\n";
        break;
    case 3:
        std::cout << "YUJU\n";
        break;
    case 4:
        std::cout << "Mi taladro es el taladro que perfora los cielos \n";
        break;
    default:
        std::cout << "Nel mi chavo esa no la conozco\n";
        break;
    }
}