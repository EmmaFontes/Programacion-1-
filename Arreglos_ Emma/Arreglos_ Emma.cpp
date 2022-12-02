// Arreglos_ Emma.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.


#include <iostream>
#include <locale>
#include <string>

int main()
{

    std::string nombre[3];
    std::string creador[3];
    std::string fecha[3];
    bool juego;

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Cual es el nombre de juego?" << i + 1 << std::endl;
        std::getline(std::cin, nombre[i]);
    }
    for (int j = 0; j < 3; j++)
    {
        std::cout << "Quien es el creador del juego?" << j + 1 << std::endl;
        std::getline(std::cin,creador [j]);
    }
    for (int k = 0; k < 3; k++)
    {
        std::cout << "En que fecha se publico?" << k + 1 << std::endl;
        std::getline(std::cin, fecha[k]);
    }

    std::cout << "Quieres ver los juegos? (1 si, 0 no)\n";
    std::cin >> juego;
    if (juego == 1)
    {
        //libro 1
        std::cout << "Titulo del juego 1 es: " << nombre[0] << std::endl;
        std::cout << "El autor del juego 1 es: " << creador[0] << std::endl;
        std::cout << "La fecha en que se publico: " << fecha[0] << std::endl;
      

        //libro 2
        std::cout << "Titulo del juego 2 es: " << nombre[1] << std::endl;
        std::cout << "El autor del juego " << creador[1] << std::endl;
        std::cout << "La fecha en que se publico: " << fecha[1] << std::endl;
        

        // libro 3
        std::cout << "Titulo del juego 3 es: " << nombre[2] << std::endl;
        std::cout << "El autor del juego 3 es: " << creador[2] << std::endl;
        std::cout << "La fecha en  que se publico: " << fecha[2] << std::endl;
    }
    if (juego == 0)
    {
        std::cout << "gracias" << std::endl;
    }

}