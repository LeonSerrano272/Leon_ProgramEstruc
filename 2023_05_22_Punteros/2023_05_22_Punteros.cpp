// 2023_05_22_Punteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// 
//

#include <iostream>
#include <locale>
#include <stdlib.h>
#include <cstdlib>
#include <Windows.h>
int main()
{
    //Repaso de funciones de control
    system("pause"); //Ir paso a paso
    system("CLS"); //Limpiar pantalla
    Sleep(100); //Tiempo

    //Punteros
    int Edad = 0;
    int* Apuntador = &Edad; 
    std::cout << "El valor de la edad:  " << Edad << std::endl;  
    std::cout << "El valor del puntero:  " << Apuntador << std::endl; 
    std::cout << "El valor de la variable apuntada:  " << *Apuntador << std::endl;
    std::cout << "El valor de la direccion apuntada:  " << &Apuntador << std::endl;
    //Borrar apuntador 
    Apuntador = NULL; 

}
