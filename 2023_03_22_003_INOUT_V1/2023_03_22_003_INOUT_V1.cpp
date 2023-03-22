// 2023_03_22_003_INOUT_V1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Mathias Leon Serrano Zárate
// En este programa aprenderemos a usar bibliotecas
// Reforzaremos el hablar con el usuario 
// Recibiremos datos del usuario

// Sintaxys para agregar librerias
// #Obligado, palabra reservada incluide 
// Entre <>

#include <iostream>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::cout << "Hola, Bienvenido a tu programa";
    bool pregunta = false;
    std::cout << "Lea y responda con verdadero o falso: \n" <<
        "Anoche cene tacos de pastor? 0)No 1)Si" << std::endl;
    // Recibir respuesta del usuario 
    std::cin >> pregunta;

    std::cout << "Ya veo entonces es " << pregunta << " que cenaste tacos" <<
        std::endl;
    int n_tacos = 0;
    std::cout << "cuantos tacos? " << std::endl;
    std::cin >> n_tacos; 
    std::cout << "baia baia, entonces te comiste " << n_tacos << std::endl;
    float precio = 0;
    std::cout << "cuanto te costo el taco? "; 
    std::cin >> precio; 
    std::cout << "entonces el taco costo " << precio << " pesos" << std::endl;
    char nombre[15]; 
    std::cout << "como se llama el taquero? ";
    std::cin >> nombre;
    std::cout << "entonces el taquero se llama " << nombre << std::endl; 
    std::string tipo; 
    std::cout << "de que eran los tacos? ";
    std::cin >> tipo;
    std::cout << "tus tacos eran de " << tipo << " ?" << std::endl;
}
