// 2023_03_08_MayoryMenorQue.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include<iostream>
main() {
    int dato1 = 0;
    int dato2 = 0;    
    std::cout << "Este programa dara el numero mayor y menor"; 
    std::cin >> dato1;
    std::cout << "Inserte dato 1"; 
    std::cin >> dato2;
    std::cout << "Inserte dato 2";

    if (dato1 >= dato2) 
    {
        std::cout << "El primer dato es mayor y el segundo menor";
        }
    
    else if (dato2<= dato1 )
    {
     std::cout << "El segundo dato es mayor y el primero menor";

    }
}