#include <iostream>


int main() {
    std::string deportePensado;

    // Hacer preguntas para adivinar el deporte pensado
    std::cout << "Piensa en un deporte (fútbol, baloncesto, tenis, natación, atletismo)." << std::endl;
    std::cout << "Responde 's' para sí y 'n' para no." << std::endl;

    // Pregunta 1
    std::cout << "¿El deporte requiere el uso de una pelota? (s/n): ";
    char respuesta;
    std::cin >> respuesta;

    if (respuesta == 's') {
        // Pregunta 2
        std::cout << "¿El deporte se juega en un campo de césped? (s/n): ";
        std::cin >> respuesta;

        if (respuesta == 's') {
            deportePensado = "fútbol";
        }
        else {
            // Pregunta 3
            std::cout << "¿El deporte se juega en una cancha con aros? (s/n): ";
            std::cin >> respuesta;

            if (respuesta == 's') {
                deportePensado = "baloncesto";
            }
            else {
                deportePensado = "tenis";
            }
        }
    }
    else {
        // Pregunta 4
        std::cout << "¿El deporte se realiza en una piscina? (s/n): ";
        std::cin >> respuesta;

        if (respuesta == 's') {
            deportePensado = "natación";
        }
        else {
            deportePensado = "atletismo";
        }
    }

    // Mostrar el deporte adivinado
    std::cout << "\nEl deporte que pensaste es: " << deportePensado << std::endl;

    return 0;
}