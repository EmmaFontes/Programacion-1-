// Tamallo de arrays_Emma.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Emma Yamilet Fontes Miranda


#include <iostream>

int main()
{


    //Matriz 0
    int matriz[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    //rellenar
    for (int i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++)
    {
        for (int i1 = 0; i1 < (sizeof(matriz[0]) / sizeof(matriz[0][0])); i1++)
        {
            matriz[i][i1] = rand() % 10;;
        }
    }
    //mostrar
    for (int i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++)
    {
        for (int i1 = 0; i1 < (sizeof(matriz[0]) / sizeof(matriz[0][0])); i1++)
        {
            std::cout << matriz[i][i1] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    //matriz 5x5
    int matriz5x5[5][5] = { {1,2},{3,4},{5,6},{7,8},{9,10} };
    //rellenar
    for (int j = 0; j < (sizeof(matriz5x5) / sizeof(matriz5x5[0])); j++)
    {
        for (int j1 = 0; j1 < (sizeof(matriz5x5[0]) / sizeof(matriz5x5[0][0])); j1++)
        {
            matriz5x5[j][j1] = rand() % 10;
        }
    }
    //mostrar
    for (int j = 0; j < (sizeof(matriz5x5) / sizeof(matriz5x5[0])); j++)
    {
        for (int j1 = 0; j1 < (sizeof(matriz5x5[0]) / sizeof(matriz5x5[0][0])); j1++)
        {
            std::cout << matriz5x5[j][j1] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    //matriz 10x10
    int matriz10x10[10][10];
    for (int k = 0; k < (sizeof(matriz10x10) / sizeof(matriz10x10[0])); k++)
    {
        for (int k1 = 0; k1 < (sizeof(matriz10x10[0]) / sizeof(matriz10x10[0][0])); k1++)
        {
            matriz10x10[k][k1] = rand() % 10;;
        }
    }
    //mostrar
    for (int k = 0; k < (sizeof(matriz10x10) / sizeof(matriz10x10[0])); k++)
    {
        for (int k1 = 0; k1 < (sizeof(matriz10x10[0]) / sizeof(matriz10x10[0][0])); k1++)
        {
            std::cout << matriz10x10[k][k1] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}