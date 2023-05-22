// 2023_03_08_MayoryMenorQue.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include<iostream> 
#include <stdio.h>
#include <stdlib.h> 

int main() 
{
    int dato1 = 0;
    int dato2 = 0;    
    std::cout << "Este programa dara el numero mayor y menor" << std::endl; 
    std::cout << "Inserte dato 1" << std::endl; 
    std::cin >> dato1;
    std::cout << "Inserte dato 2" << std::endl; 
    std::cin >> dato2;
    if (dato1 > dato2)
    {
        std::cout << "El primer dato es mayor y el segundo menor" << std::endl;

    exit(-1);
    }
    else (dato1 < dato2); 
    {
        std::cout << "El segundo dato es mayor y el primero menor" << std::endl;
    }
    exit(-1);
}