// 2023_05_03_014_BucleDesede1000.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
//Realizar 3 operaciones
//Contar hasta 100
//Contar 10X10

#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8"); 

    int aux = 3, aux2 = 0;
    int opc = 0;
    int num1 = 0, num2 = 0, res = 0;
    int contador = 0; 
    bool Space = false; 

    while (true)
    {
        std::cout << "Hola que quieres hacer? 1.- Calculadora con creditos 2.- Contar hasta 100 lento 3.- Contar de 10 en 10  4.-Contar de 1000 a 0 " << std::endl;
        std::cin >> opc; 
        switch (opc)
        {
        case 1: // Calculadora
            //Tener una calculadora que solo haga 3 operaciones.
            while (aux != 0)
            {
                //Algoritmo de la calculadora
                std::cout << "Ingresa 1) para suma 2) para resta 3) para division" << std::endl; 
                std::cin >> opc;
                switch (opc)
                {
                case 1:
                    std::cout << "Dame el primer numero " << std::endl; 
                    std::cin >> num1;
                    std::cout << "Dame el segundo numero r" << std::endl;  
                    std::cin >> num2;
                    res = num1 + num2;
                    std::cout << "El resultado de la suma es: " << res << std::endl;
                    break;
                case 2:
                    std::cout << "Dame el primer numero " << std::endl; 
                    std::cin >> num1;
                    std::cout << "Dame el segundo numero " << std::endl; 
                    std::cin >> num2;
                    res = num1 - num2;
                    std::cout << "El resultado de la resta es: " << res << std::endl;
                    break;
                case 3: 
                    std::cout << "Dame el primer numero " << std::endl;
                    std::cin >> num1;
                    std::cout << "Dame el segundo numero r" << std::endl;
                    std::cin >> num2;
                    res = num1 / num2;
                    std::cout << "El resultado de la division es: " << res << std::endl;
                    break;
                }
                std::cout << "Gastaste un crédito" << std::endl; 
                aux--;
            }
            std::cout << "Creditos terminados" << std::endl;  
            //algoritmo para recargar creditos o continuar.
            std::cout << "Quieres recargar tus créditos? 1) Si 2) No" << std::endl; 
            std::cin >> aux2;
            if (aux2 == 1)
            {
                aux = 3;
                std::cout << "Tus créditos son: " << aux << std::endl;
            }
            else if (aux2 == 2)
            {
                std::cout << "Hasta la proxima!" << std::endl; 
            }
            else
            {
                std::cout << "Favor de ingresar una opcion valida" << std::endl;  
            }

            break;
        case 2: // Contar hasta 100
            std::cout << "Estas en el contador hasta 100 (0 para contar)" << std::endl; 
            while (contador < 100) { 

                std::cout << contador + 1 << std::endl; 
                contador = contador + 1; 
                std::cin >> Space; 
            }
            break;
        case 3: // Contar de 10 en 10
            std::cout << "Estas en el contador de 10 X 10 hasta 1000" << std::endl;   
            for (int i = 10; i < 100; i++)
            {
                std::cout << i << "";
                for (int j = 0; j < 1; j++)
                {
                    std::cout << j  << "";
                }
                std::cout << std::endl;
            }
            break;
        case 4: // Contar de 1000 a 0
            std::cout << "Contador de 1000 a 0" << std::endl; 
            while (1000 > contador) {

                std::cout << contador + 1000 << std::endl;
                contador = contador - 1;
                std::cin >> Space;
            }
            break;
        default:
            std::cout << "Opcion no valida" << std::endl; 
            break;
        }
      
    }


}
