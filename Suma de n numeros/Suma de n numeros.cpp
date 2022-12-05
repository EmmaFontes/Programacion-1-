// Suma de n numeros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Emma Yamilet Fontes Miranda 

#include <iostream>

int suma(int n, int miu, int conta)
{
    if (++conta <= n)
        return suma(n, miu + conta, conta);
    else
        return miu;
}

int main()
{
    int n;

    std::cout << " ingresa el numero : ";
    std::cin >> n;
    std::cout << "\n el total es: " << suma(n, 0, 0) << std::endl;

}

