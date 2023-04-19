// 2023_03_08_ValorAbsoluto.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
#include <locale.h>
//#include
using namespace std;

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    int a;
    int absoluto;
    cout << "Ingrese un número" << endl;
    cin >> a;
    absoluto = abs(a);
    cout << "El absoluto de " << a << " es " << absoluto;
    return 0;
    


}
