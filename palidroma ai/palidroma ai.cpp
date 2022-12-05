// palidroma ai.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Emma Yamilet Fontes Miranda 

#include <iostream>
#include <string>


int polidroma(int pal, std::string testo)
{
    int owo = 0;
    for (int i = testo.length() - 1; i >= 0; i--)
    {
        if (testo[i] == testo[owo])
        {
            pal++;
        }
        owo++;
    }
    return pal;
}

int main()
{
    std::string testo;
    int uwu = 0;

    std::cout << " Dime una palabra : " << std::endl;
    std::getline(std::cin, testo);
    uwu = polidroma(uwu, testo);
    if (testo.length() == uwu)
    {
        std::cout << " Ta bien" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    std::cout << std::endl << std::endl;
}
