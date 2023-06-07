// 2023_05_08_BatallaPokemon.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// Estructura para representar un Pokémon
struct Pokemon {
    string nombre;
    int hp;
    string habilidades[4]; 
};

int main() {
    // Inicializar la semilla para generar números aleatorios
    srand(time(0));

    // Crear un array de estructuras de Pokémon
    Pokemon pokemones[5];

    // Asignar información a cada Pokémon
    pokemones[0] = { "Pikachu", 100, {"Impactrueno", "Rayo", "Ataque Rápido", "Trueno"} };
    pokemones[1] = { "Charizard", 120, {"Lanzallamas", "Garra Dragón", "Vuelo", "Giro Fuego"} };
    pokemones[2] = { "Blastoise", 110, {"Hidrobomba", "Surf", "Rayo Hielo", "Pistola Agua"} };
    pokemones[3] = { "Venusaur", 110, {"Látigo Cepa", "Rayo Solar", "Terremoto", "Hoja Afilada"} };
    pokemones[4] = { "Jolteon", 90, {"Ataque Rápido", "Doble Patada", "Rayo Pin", "Onda Trueno"} };

    // Mostrar la lista de Pokémon disponibles
    cout << "Selecciona tu Pokémon: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << pokemones[i].nombre << endl;
    }

    // Solicitar al usuario que seleccione un Pokémon
    int seleccion;
    cout << "Ingresa el número correspondiente al Pokémon que deseas: ";
    cin >> seleccion;

    // Validar la selección del usuario
    if (seleccion >= 1 && seleccion <= 5) {
        Pokemon miPokemon = pokemones[seleccion - 1];

        // Generar un índice aleatorio para seleccionar el Pokémon oponente
        int indiceOponente;
        do {
            indiceOponente = rand() % 5;
        } while (indiceOponente == seleccion - 1);

        Pokemon pokemonOponente = pokemones[indiceOponente];

        cout << "\n¡Comienza la batalla!" << endl;
        cout << "Tu " << miPokemon.nombre << " vs " << pokemonOponente.nombre << endl;
        cout << "-------------------------" << endl;

        // Batalla
        while (miPokemon.hp > 0 && pokemonOponente.hp > 0) {
            // Turno del jugador
            cout << "\n¡Tu turno!" << endl;
            cout << "Elige una habilidad para atacar: " << endl;
            for (int i = 0; i < 4; i++) {
                cout << i + 1 << ". " << miPokemon.habilidades[i] << endl;
            }
            int habilidadSeleccionada;
            cout << "Ingresa el número correspondiente a la habilidad que deseas utilizar: ";
            cin >> habilidadSeleccionada;

            // Validar la selección de habilidad del jugador
            if (habilidadSeleccionada >= 1 && habilidadSeleccionada <= 4) {
                // Turno del oponente
                int habilidadOponente = rand() % 4;

                // Realizar el ataque
                int ataqueJugador = habilidadSeleccionada - 1;
                int ataqueOponente = habilidadOponente;

                // Calcular el daño
                int danioJugador = rand() % 20 + 10;
                int danioOponente = rand() % 20 + 10;

                // Aplicar el daño
                pokemonOponente.hp -= danioJugador;
                miPokemon.hp -= danioOponente;

                // Mostrar resultados del turno
                cout << "\nAtacaste a " << pokemonOponente.nombre << " con " << miPokemon.habilidades[ataqueJugador] << endl;
                cout << "Causaste " << danioJugador << " de daño." << endl;
                cout << pokemonOponente.nombre << " te atacó con " << pokemonOponente.habilidades[ataqueOponente] << endl;
                cout << "Recibiste " << danioOponente << " de daño." << endl;

                // Mostrar estado de los Pokémon
                cout << "\nEstado actual:" << endl;
                cout << "Tu " << miPokemon.nombre << " - HP: " << miPokemon.hp << endl;
                cout << pokemonOponente.nombre << " - HP: " << pokemonOponente.hp << endl;
            }
            else {
                cout << "Habilidad inválida. Selecciona un número válido." << endl;
            }
        }

        // Mostrar el resultado de la batalla
        if (miPokemon.hp <= 0) {
            cout << "\n¡Perdiste la batalla! Mejor suerte la próxima vez." << endl;
        }
        else {
            cout << "\n¡Ganaste la batalla! ¡Eres un maestro Pokémon!" << endl;
        }
    }
    else {
        cout << "Selección inválida. Selecciona un número válido." << endl;
    }

    // Preguntar al usuario si desea jugar nuevamente
    char opcion;
    cout << "\n¿Deseas jugar nuevamente? (S/N): ";
    cin >> opcion;

    // Validar la respuesta del usuario
    if (opcion == 'S' || opcion == 's') {
        // Reiniciar el programa
        main();
    }
    else {
        cout << "¡Gracias por jugar! ¡Hasta luego!" << endl;
    }

    return 0;
}