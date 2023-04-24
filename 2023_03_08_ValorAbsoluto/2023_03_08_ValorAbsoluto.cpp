// 2023_03_08_ValorAbsoluto.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    int a;
    int absoluto;
   std::cout << "Ingrese un número" << std::endl;
   std::cin >> a;
    absoluto = abs(a);
   std::cout << "El absoluto de " << a << " es " << absoluto;
 
    


}
