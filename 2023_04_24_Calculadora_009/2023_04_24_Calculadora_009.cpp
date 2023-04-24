// 2023_04_24_Calculadora_009.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    int Calculo = 0;
    std::cout << "Hola! Bienvenido a la calculadora de León" << std::endl;
    std::cout << "Porfavor selecciona el tipo de calculo a realizar, 1) SUMA 2) RESTA 3) MULTIPLICACIÓN) 4) DIVISIÓN 5) VALOR ABSOLUTO 6) NUMERO MAYOR Y MENOR " << std::endl;
    std::cin >> Calculo;
    switch (Calculo) 

    {
    case 1: 
        std::cout << "Haz seleccionado suma" << std::endl; 

        break;

    case 2: 
        std::cout << "Haz seleccionado resta" << std::endl; 

        break;

    case 3:
        std::cout << "Haz seleccionado multiplicación" << std::endl; 

        break;

    case 4:
        std::cout << "Haz seleccionado división" << std::endl; 

        break;

    case 5:
        std::cout << "Haz seleccionado Valor absoluto" << std::endl;
        int a;
        int absoluto;
        std::cout << "Ingrese un número" << std::endl;
        std::cin >> a;
        absoluto = abs(a);
        std::cout << "El absoluto de " << a << " es " << absoluto; 
       
        break;

    case 6:
        std::cout << "Haz sleccionado mayor que y menor que" << std::endl; 

        break;

    default:
        std::cout << "Por favor selecciona una opcion valida" << std::endl; 
        break; 
    }


}
