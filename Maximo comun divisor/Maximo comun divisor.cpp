// Maximo comun divisor.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Emma Yamilet Fontes Miranda 

#include <iostream>
#include <algorithm>


void MaximoComun(int mac)
{
    int numero1,numero2, numero3, numero4;

    std::cout << mac % 100;
    numero3 = std::max(numero1, numero2);
    numero4 = std::min(numero1, numero2);

    do
    {
        mac = numero4;
        numero4 = numero3 % numero4;
        numero3 = mac;
    } while (numero4 != 0);
}


int main()
{
    int numero1, numero2;
    do
    {
        std::cout << "Ingresa EL primer numero: \n";
        std::cin >> numero1;
        std::cout << "Ingresa el segundo numero: \n";
        std::cin >> numero2;
        if (numero1 < 0)
        {
            std::cout << "vuelve a intentar \n";
        }
    } while (numero1 < 0);
    std::cout << "El maximo comun divisor entre " << numero1 << " y " << numero2 << " es: ";
    MaximoComun(numero1 - numero2);
    std::cout << std::endl << std::endl;
}