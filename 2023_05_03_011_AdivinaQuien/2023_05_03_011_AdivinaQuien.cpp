#include <iostream>


int main() 
{
    system("Color 02");
    setlocale(LC_ALL, "es_MX.UTF-8"); 
    std::string deportePensado;

    // Hacer preguntas para adivinar el deporte pensado
    std::cout << "Piensa en un deporte (fútbol, baloncesto, tenis, natación, atletismo)." << std::endl;
    std::cout << "Responde 's' para sí y 'n' para no." << std::endl;

    // Pregunta 1
    std::cout << "¿El deporte requiere el uso de una pelota? (s/n): ";
    char respuesta;
    std::cin >> respuesta;

    if (respuesta == 's') {
        // Pregunta 3
        std::cout << "¿Se juega en equipo? (s/n): ";
        std::cin >> respuesta;

        if (respuesta == 's') {
            // Pregunta 2
            std::cout << "¿El deporte se juega en un campo de césped? (s/n): ";
            std::cin >> respuesta;

            if (respuesta == 's') {
                deportePensado = "fútbol";
            }
            else {
                // Pregunta 4
                std::cout << "¿El deporte se juega en una cancha con aros? (s/n): ";
                std::cin >> respuesta;
                if (respuesta == 's') {
                    // Pregunta 5
                    std::cout << "¿Es un balón pesado? (s/n): ";
                    std::cin >> respuesta;

                    deportePensado = "baloncesto";
                }
                else {
                    // Pregunta 6
                    std::cout << "¿Se utilizan raquetas? (s/n): ";
                    std::cin >> respuesta;

                    if (respuesta == 's') {
                        std::cout << "¿Se utiliza una pelota pequeña? (s/n):";
                        std::cin >> respuesta;

                        if (respuesta == 's') {
                            deportePensado = "tenis";
                        }
                    }
                }
            }
        }
    }
    else {
        // Pregunta 7
        std::cout << "¿El deporte se realiza en una piscina? (s/n): ";
        std::cin >> respuesta;

        if (respuesta == 's') {
            std::cout << "¿Se utilizan principalmente los brazos? (s/n):";
            std::cin >> respuesta;

            if (respuesta == 's') {
                deportePensado = "natación";

            }
        }
        else {
            // Pregunta 8
            std::cout << "¿Se realiza en campos de tierra? (s/n):";
            std::cin >> respuesta;

            if (respuesta == 's') {
                std::cout << "¿Existen diversas modalidades dentro del mismo? (s/n):";
                std::cin >> respuesta;

                if (respuesta == 's') {
                    deportePensado = "atletismo";
                }
            }


        }
    }
        // Mostrar el deporte adivinado
        std::cout << "\nEl deporte que pensaste es: " << deportePensado << std::endl; 
    
 }    

 