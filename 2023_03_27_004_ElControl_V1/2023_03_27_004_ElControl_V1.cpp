// 2023_03_27_004_ElControl_V1.cpp : 
// Leon Serrano 
// En este programa haremos el repaso del tema pasado In/Out - Consultorio Medico
// Agregamos la syntaxis de las estructuras de control 
//

#include <iostream>
#include <string> 

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    std::cout << "Hola que tal! Este programa nos ayudara a sacar tu Indice de Masa Corporal\n";
    bool Pregunta = false;
    std::string Name;
    std::cout << "Ahora, cual es tu nombre?\n";
    getline(std::cin, Name);
    std::cout << "De acuerdo " << Name << " Ahora si comencemos\n" << std::endl;
    std::cout << "Estas listo? \n" << "1) Si" << std::endl;
    std::cin >> Pregunta;
    std::string Genero;
    std::cout << "Primeramente, Eres Hombre o mujer?\n";
    std::cin >> Genero;
    std::cout << "Muy bien, eres " << Genero << "\n" << std::endl;
    int Peso = 0;
    std::cout << "Cuanto pesas?\n " << std::endl;
    std::cin >> Peso;
    std::cout << "De acuerdo, entonces pesas " << Peso << " KG\n" << std::endl;
    float Estatura = 0;
    std::cout << "Ahora " << Name << " Dime, cuanto mides?\n" << std::endl;
    std::cin >> Estatura;
    std::cout << "Vaya, " << Estatura << "m es buena estatura!\n" << std::endl;
    int Edad = 0;
    std::cout << "Cuantos años tienes?\n";
    std::cin >> Edad;
    std::cout << "Muy bien,tienes " << Edad << " años? eres bastante joven " << Name << " :O\n" << std::endl;
    bool Ejercicio = false;
    std::cout << "Haces ejercicio?\n" << "1)SI 2)No" << std::endl;
    std::cin >> Ejercicio;
    std::cout << "De acuerdo!\n";
    char Alias[15];
    std::cout << "Porque no me dices tambien como te dicen los amigos? :)\n";
    std::cin >> Alias;
    std::cout << "Excelente!! " << Alias << " ,Me gusta tu apodo!\n" << "1)Gracias!\n" << std::endl;
    std::cin >> Pregunta;
    std::cout << "Ahora si, " << Name << ", Alias: " << Alias << ". Estas listo para tus resultados? \n" << "1)Damelos!!" << std::endl;
    std::cin >> Pregunta;
    float IMC = 0;
    IMC = (Peso / (Estatura + Estatura));
    std::cout << "De acuerdo " << Alias << ", Al pesar " << Peso << " Y medir " << Estatura << ", Tu IMC es de: " << IMC << " :D!!!\n" << std::endl;
    std::cin >> IMC;
}
