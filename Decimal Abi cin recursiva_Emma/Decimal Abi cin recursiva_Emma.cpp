// Decimal Abi cin recursiva_Emma.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Emma Yamilet Fontes Miranda




#include <iostream>


// 1.-Convertir un Numero Decimal a Binario :
void convertir(int NumDec)
{

    std::string NumBi;

    std::cout << NumDec % 2;
    if (NumDec > 0)
    {
        if (NumDec % 2 == 0)
        {
            NumBi = "0" + NumBi;
        }
        else
        {
            NumBi = "1" + NumBi;
        }
        NumDec = (int) NumDec / 2;

        convertir(NumDec);


    }
}

int main()
{
    int D;
    do
    {
        std::cout << "ingrese un numero entero positivo" << std::endl;
        std::cin >> D;
        std::cout << "El numero en binario es:\n";
        if (D < 0)
        {
            std::cout << "Ese no\n";
        }
    } while (D < 0);
    convertir(D);

    std::cout << std::endl << std::endl;
}