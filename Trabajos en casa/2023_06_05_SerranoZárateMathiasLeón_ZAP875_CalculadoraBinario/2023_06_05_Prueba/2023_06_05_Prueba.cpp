// 2023_06_05_Prueba.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
#include <iostream>
#include <string>
#include <cmath>


// Función para convertir un número binario a decimal
int binarioADecimal(std::string binario) {
    int decimal = 0;
    int longitud = binario.length();
    for (int i = 0; i < longitud; i++) {
        if (binario[i] == '1') {
            decimal += pow(2, longitud - 1 - i);
        }
    }
    return decimal;
}

// Función para convertir un número decimal a binario
std::string decimalABinario(int decimal) {
    if (decimal == 0) {
        return "0";
    }
    std::string binario = "";
    while (decimal > 0) {
        int residuo = decimal % 2;
        binario = std::to_string(residuo) + binario;
        decimal /= 2;
    }
    return binario;
}

// Función para realizar la suma de dos números binarios
std::string sumarBinarios(std::string binario1, std::string binario2) {
    int decimal1 = binarioADecimal(binario1);
    int decimal2 = binarioADecimal(binario2);
    int sumaDecimal = decimal1 + decimal2;
    return decimalABinario(sumaDecimal);
}

// Función para realizar la resta de dos números binarios
std::string restarBinarios(std::string binario1, std::string binario2) {
    int decimal1 = binarioADecimal(binario1);
    int decimal2 = binarioADecimal(binario2);
    int restaDecimal = decimal1 - decimal2;
    if (restaDecimal < 0) {
        return "Intenta de nuevo, el resultado no puede ser negativo en binario";
    }
    return decimalABinario(restaDecimal);
}

// Función para realizar la multiplicación de dos números binarios
std::string multiplicarBinarios(std::string binario1, std::string binario2) {
    int decimal1 = binarioADecimal(binario1);
    int decimal2 = binarioADecimal(binario2);
    int productoDecimal = decimal1 * decimal2;
    return decimalABinario(productoDecimal);
}

// Función para realizar la division de dos numeros binarios 
std::string divisionBinarios(std::string binario1, std::string binario2) {
    int decimal1 = binarioADecimal(binario1); 
    int decimal2 = binarioADecimal(binario2); 
    int divisionDecimal = decimal1 / decimal2; 
    return decimalABinario(divisionDecimal); 

}
int main() {
    system("Color 02");
    setlocale(LC_ALL, "es_MX.UTF-8"); 
    char opcion;

    do {
        // Mostrar menú de opciones 
        std::cout << "Elige una opción:" << std::endl; 
        std::cout << "1. Suma de números binarios" << std::endl; 
        std::cout << "2. Resta de números binarios" << std::endl; 
        std::cout << "3. Multiplicación de números binarios" << std::endl; 
        std::cout << "4. Division de números binarios" << std::endl; 
        std::cout << "5. Salir del programa" << std::endl; 
        std::cout << "Ingresa el número correspondiente a la opción:\n ";
        std::cin >> opcion;

        switch (opcion) {
        case '1': {
            std::string binario1, binario2;
            std::cout << "Ingrese el primer número binario:\n ";
            std::cin >> binario1;
            std::cout << "Ingrese el segundo número binario:\n";
            std::cin >> binario2;
            std::string suma = sumarBinarios(binario1, binario2);
            std::cout << "El resultado de la suma es: " << suma << std::endl; 
            break;
        }
        case '2': {
            std::string binario1, binario2;
            std::cout << "Ingrese el primer número binario: ";
            std::cin >> binario1;
            std::cout << "Ingrese el segundo número binario: ";
            std::cin >> binario2;
            std::string resta = restarBinarios(binario1, binario2);
            std::cout << "El resultado de la resta es: " << resta << std::endl; 
            break;
        }
        case '3': {
            std::string  binario1, binario2;
            std::cout << "Ingrese el primer número binario: \n";
            std::cin >> binario1;
            std::cout << "Ingrese el segundo número binario: \n";
            std::cin >> binario2;
            std::string  multiplicacion = multiplicarBinarios(binario1, binario2);
            std::cout << "El resultado de la multiplicación es: " << multiplicacion << std::endl; 
            break;
        }
        case '4': {
            std::string  binario1, binario2;
            std::cout << "Ingrese el primer número binario: \n";
            std::cin >> binario1;
            std::cout << "Ingrese el segundo número binario: \n";
            std::cin >> binario2;
            std::string  division = divisionBinarios(binario1, binario2);
            std::cout << "El resultado de la división es: " << division << std::endl;
            break;
        }
        case '5': {
            std::cout << "¡Gracias por usar el programa! Hasta luego. " << std::endl;
            break;
        }
        default:
            std::cout << "Opción inválida. Ingresa un número válido." << std::endl; 
            break;
        }

        // Preguntar al usuario si desea volver a iniciar el programa
        std::cout << "¿Deseas realizar otra operación? (S/N): ";
        std::cin >> opcion;
        std::cout << std::endl; 

    } while (opcion == 'S' || opcion == 's');

    return 0;
} 