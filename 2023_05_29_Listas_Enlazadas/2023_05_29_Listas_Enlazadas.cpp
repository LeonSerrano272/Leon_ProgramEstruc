// 2023_05_29_Listas_Enlazadas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Syntaxis para nodos .> 

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale>
#include <windows.h>

class nodo
{
public: 
    std::string nombre; 
    int edad; 
    int vida;
    int ataque;
    nodo* next; 

};

int main()
{
    nodo* cabeza = NULL;
    nodo* cuello = NULL;
    nodo* pecho = NULL;
    nodo* abdomen = NULL;
    nodo* brazos = NULL;
    nodo* piernas = NULL;
    nodo* pies = NULL;

    cabeza = new nodo();
    cuello = new nodo();
    pecho = new nodo();
    abdomen = new nodo();
    brazos = new nodo();
    piernas = new nodo();
    pies = new nodo();

    cabeza->nombre = "Leon"; 
    cabeza->edad = 15;
    cabeza->ataque = 16;
    cabeza->vida = 17;
    cabeza->next = cuello;

    cuello->nombre = "Sujeto 2";
    cuello->edad = 14;
    cuello->ataque = 15;
    cuello->vida = 16;
    cuello->next = pecho;

    pecho->nombre = "Sujeto 3";
    pecho->edad = 13;
    pecho->ataque = 14;
    pecho->vida = 15;
    pecho->next = abdomen;

    abdomen->nombre = "Sujeto 4";
    abdomen->edad = 12;
    abdomen->ataque = 13;
    abdomen->vida = 14;
    abdomen->next = brazos;

    brazos->nombre = "Sujeto 5";
    brazos->edad = 11;
    brazos->ataque = 12;
    brazos->vida = 13;
    brazos->next = piernas;

    piernas->nombre = "Sujeto 6";
    piernas->edad = 10;
    piernas->ataque = 11;
    piernas->vida = 12;
    piernas->next = pies;

    pies->nombre = "Sujeto 7";
    pies->edad = 9;
    pies->ataque = 10;
    pies->vida = 11;
    pies->next = NULL; 

    //Imprimir la lista enlazada.
    while (cabeza != NULL)
    {
        std::cout << cabeza->edad << " "<< std::endl; 
        std::cout << cabeza->ataque << " " << std::endl; 
        std::cout << cabeza->nombre << " " << std::endl; 
        std::cout << cabeza->vida << " " << std::endl; 
        cabeza = cabeza->next; 
        cuello = cuello->next;
        pecho = pecho->next; 
        abdomen = abdomen->next;
        brazos = brazos->next; 
        piernas = piernas->next; 

    }

}

