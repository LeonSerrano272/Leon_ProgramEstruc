// ProyectoFinal2_HistoriaNarrativa.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>

int main() {
    system("Color 03");
    setlocale(LC_ALL, "es_MX.UTF-8"); 
    std::cout << "¡Bienvenido a la historia de los superhéroes!" << std::endl;
    std::cout << "Eres un joven con habilidades especiales y estás a punto de embarcarte en una misión para salvar el mundo." << std::endl;
    std::cout << "Tus habilidades te permiten controlar el fuego y la electricidad." << std::endl;
    std::cout << "Sin embargo, antes de comenzar tu misión, debes elegir tu nombre de superhéroe." << std::endl;

    std::string nombre;
    std::cout << "Ingresa tu nombre de superhéroe: ";
    std::cin >> nombre;

    std::cout << std::endl;
    std::cout << "¡Excelente elección, " << nombre << "! Tu misión es detener a un villano llamado Doctor Caos, quien está a punto de destruir la ciudad." << std::endl;
    std::cout << "Tienes dos opciones para enfrentarlo: atacarlo directamente o encontrar su punto débil." << std::endl;

    int opcion;
    std::cout << std::endl;
    std::cout << "¿Qué deseas hacer?" << std::endl;
    std::cout << "1. Atacar directamente." << std::endl;
    std::cout << "2. Encontrar su punto débil." << std::endl;
    std::cout << "3. Ignorar la situacion, ya que no te es relevante." << std::endl; 
    std::cout << "Ingresa el número de tu elección: ";
    std::cin >> opcion;

    if (opcion == 1) {
        std::cout << std::endl;
        std::cout << "Decides atacar directamente al Doctor Caos." << std::endl;
        std::cout << "Usas tus habilidades de control de fuego y electricidad para enfrentarlo." << std::endl;
        std::cout << "El enfrentamiento es feroz, pero logras derrotarlo y salvar la ciudad." << std::endl;
        std::cout << "¡Felicidades, " << nombre << "! Has salvado el día." << std::endl;
    }
    else if (opcion == 2) {
        std::cout << std::endl;
        std::cout << "Decides buscar el punto débil del Doctor Caos." << std::endl;
        std::cout << "Investigas y descubres que su punto débil es la oscuridad." << std::endl;
        std::cout << "Decides crear una trampa en un lugar oscuro para atraparlo." << std::endl;
        std::cout << "Tu plan funciona y logras capturar al Doctor Caos sin que él pueda usar sus poderes." << std::endl;
        std::cout << "¡Felicidades, " << nombre << "! Has salvado el día." << std::endl;
    }
    else if (opcion == 3) {
        std::cout << std::endl;
        std::cout << "Decides ignorar lo que le pueda pasar a la ciudad." << std::endl;
        std::cout << "El Doctor Caos destruye la ciudad hasta que no queda nada." << std::endl;
        std::cout << "Te ves forzado a huir de lo que queda de la ciudad, ya que el Doctor Caos absorbio poder de la destruccion de la ciudad." << std::endl;
        std::cout << "El  Doctor Caos se volvio imparable, y ahora destruira el mundo, no puedes hacer nada, definitivamente NO eres un heroe...." << std::endl;
        return 0;
    }
    else {
        std::cout << std::endl; 
        std::cout << "Opción inválida. El Doctor Caos destruye la ciudad mientras te quedas indeciso." << std::endl;
        std::cout << "La misión ha fracasado y no lograste convertirte en el héroe que la ciudad necesitaba." << std::endl;
        std::cout << "Fin de la historia." << std::endl;
        return 0;
    }

    std::cout << std::endl;
    std::cout << "Pero la historia aún no ha terminado." << std::endl;
    std::cout << "Después de salvar la ciudad, eres aclamado como el nuevo héroe y la gente te admira." << std::endl;
    std::cout << "Sin embargo, tu fama atrae la atención de otros villanos." << std::endl;
    std::cout << "Un poderoso villano llamado Sombra Suprema aparece y desafía tu autoridad como héroe." << std::endl;
    std::cout << "Tienes dos opciones para enfrentar a Sombra Suprema: usar tu fuerza bruta o usar tu astucia." << std::endl;

    std::cout << std::endl;
    std::cout << "¿Qué deseas hacer?" << std::endl;
    std::cout << "1. Usar fuerza bruta." << std::endl;
    std::cout << "2. Usar astucia." << std::endl;
    std::cout << "3. Huír." << std::endl;  
    std::cout << "Ingresa el número de tu elección: ";
    std::cin >> opcion;

    if (opcion == 1) {
        std::cout << std::endl;
        std::cout << "Decides enfrentar a Sombra Suprema usando tu fuerza bruta." << std::endl;
        std::cout << "El combate es épico, pero Sombra Suprema resulta ser demasiado poderoso." << std::endl;
        std::cout << "Te derrota y se apodera de la ciudad." << std::endl;
        std::cout << "Fin de la historia. Tu valentía no fue suficiente para vencer a Sombra Suprema." << std::endl;
    }
    else if (opcion == 2) {
        std::cout << std::endl;
        std::cout << "Decides enfrentar a Sombra Suprema usando tu astucia." << std::endl;
        std::cout << "Investigas sus puntos débiles y descubres que es vulnerable a la luz solar intensa." << std::endl;
        std::cout << "Creas un dispositivo que emite una luz intensa y lo usas contra Sombra Suprema." << std::endl;
        std::cout << "La estrategia funciona y logras derrotarlo, salvando nuevamente la ciudad." << std::endl;
        std::cout << "¡Felicidades, " << nombre << "! Has demostrado tu inteligencia y valentía como héroe." << std::endl;
    }
    else if (opcion == 3) {
        std::cout << std::endl;
        std::cout << "Decides huír ya que te sientes presionado y con miedo." << std::endl;
        std::cout << "Al ver esto Sombra Sumprema te llama cobarde." << std::endl;
        std::cout << "Y tras esto, toma como rehen a una señorita que iba pasando." << std::endl;
        std::cout << "Te dice que si no peleas la asesinará." << std::endl;
        std::cout << "¿Qué deseas hacer?" << std::endl;
        std::cout << "1. Tras esta amenaza, hacerte cargo como buen superheroe y pelear contra Sombra Suprema." << std::endl;
        std::cout << "2. Aún así Huír." << std::endl;
        std::cin >> opcion; 
    }
    if (opcion == 1) {
        std::cout << std::endl;
        std::cout << "Decides pelear con Sombra Sumprema. " << std::endl;
        std::cout << "Pero como atacaste con impulso y orgullo peleaste sin una estrategía." << std::endl;
        std::cout << "Sombra Suprema resulta ser mas poderoso de lo que pensabas. " << std::endl;
        std::cout << "Pierdes la pelea y mueres." << std::endl;
        std::cout << "Fin de la historia. Tu valentía no fue suficiente para vencer a Sombra Suprema." << std::endl;
    }
    else if (opcion == 2) {
        std::cout << std::endl;
        std::cout << "Decides huír aunque la joven peligre." << std::endl;
        std::cout << "Corres sin mirar atras." << std::endl;
        std::cout << "Pero aun así escuchas los gritos de sufrimiento de la joven a lo lejos." << std::endl;
        std::cout << "El remordimiento te persigue." << std::endl;
        std::cout << "Definitivamente no fuiste un buen superheroe, no mereces el nombre de " << nombre << " " << std::endl;
    }

    else {
        std::cout << std::endl;  
        std::cout << "Opción inválida. Sombra Suprema aprovecha tu indecisión y te derrota fácilmente." << std::endl; 
        std::cout << "La ciudad cae en manos del villano y tu nombre es olvidado." << std::endl; 
        std::cout << "Fin de la historia. Tu falta de decisión te ha llevado a la derrota." << std::endl;
    }

    return 0;
}