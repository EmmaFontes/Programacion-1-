// Potencia con Recursivaaaaaaaaaaaaaaaaaaaaaaaaaaa.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Emma Yamilet Fontes Miranda

#include <iostream>


double potencias(int Numero, int potencia)
{
    if (potencia == 0)
        return 1;
    else
        return Numero * (potencias(Numero, potencia - 1));
}
int main()
{
    int Numero, potencia;
    std::cout << "Introduce el numero  ";
    std::cin >> Numero;
    do
    {
        
        std::cout << "Introduzca exponente/potencia a la que se elevara ";
        std::cin >> potencia;

    } while (potencia < 0);

    std::cout << " : " << Numero << "^" << potencia << "\ntu respuesta es: " << potencias(Numero, potencia) << std::endl;

}

