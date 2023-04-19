// 2023_03_15_002_HVP_V1.cpp :
// Leon Serrano
// Hola Mundo, Variables, Operadores Aritmeticos
// 
// 
#include <iostream>

int main()
{
    std::cout << "Hello World!\n";//Comunicarnos con el usuario
    //con Cout me comunico con el usuario
    //Con \n y con std::endl doy un salto de linea
    std::cout << "Hola \nchiquitines " << std::endl;
    //Tipos de variables bool, int, float, char, string
    //Sintaxys para nombrar variables
    //Tipo de variable - Nombre de la variable - Inicialización
    bool continuar = true;
    int Vida = 100;
    float ataque = 18.5;
    char nombre[15] = "Leon";
    std::string namertag = "Aker1893";
    //<< es concatenar o sumar textos
    std::cout << "Hola " << nombre << " \nBienvenido al mundo de " << namertag
        << std::endl;
    std::cout << std::endl;
    std::cout << " A continuacion tu resultados de la pelea\n "; 
    //Operadores Aritmeticos
    //+ - * / ^2 raiz
    std::cout << "Tu vida es: " << Vida << std::endl; 
    Vida = Vida - ataque;
    std::cout << "Tu vida restante es: " << Vida << std::endl;
    float Vida_Aux = 0;
    Vida_Aux = Vida - ataque;
    std::cout << "Tu vida restante es: " << Vida_Aux << std::endl;
    
}