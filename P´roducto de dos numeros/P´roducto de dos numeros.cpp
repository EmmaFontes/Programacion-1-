// P´roducto de dos numeros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Emma yamilet Fontes Miranda 


#include <iostream>

int producto(int uno, int doh)
{
    if (uno == 0 or doh == 0)
        return 0;
    else
    {
        return uno + producto(uno, doh - 1);
    }
}
int main()
{
    int uno, doh, respuesta;

    std::cout << "Ingresa el primer numero: ";
    std::cin >> uno;
    std::cout << "ingresa el segundo numero ";
    std::cin >> doh;
    respuesta = producto(uno, doh);
    std::cout << "El resultado de los 2 numeros es " << respuesta << std::endl;

}

