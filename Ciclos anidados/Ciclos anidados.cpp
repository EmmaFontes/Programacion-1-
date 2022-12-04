// Ciclos anidados.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Emma Yamilet Fontes Miranda
// Aprenderemos a anidar instrucciones

#include <iostream>
#include <string>

int main()
{
    /*
  int arreglo[3] = { 1,2,3 };
  int cajas[3][3] = { { 1, 2, 3,},{4,5,6},{7,8,9} };
  //ciclo para ilustrar eñ arreglo simple
  for (int i = 0; i < 3; i++)
  {
      std::cout << "La posicion " << i << "tiene el valor: " << arreglo[i] << std::endl;
  }

  // ciclo para mostrar la matriz
  for (int j = 0; j < 3 ;j++)
  {
      std::cout << "indice j: " << std::endl;
      for (int k = 0; k < 3 ;k++)
      {
          std::cout << "indice k: " << std::endl;
      std::cout << "la posicion [" << j << "," << k << "] tiene el valor " << cajas[j][k];
      }
  }
  */
    //contador 
    int arreglo1[2] = { 1,2 };
    int cajita[2][11] = { {0,1,2,3,4,5,6,7,8,9,10},
                            {0,1,2,3,4,5,6,7,8,9,10} };
    for (int i = 0; i < 2; i++)
    {
        std::cout << " interno: " << i << std::endl;
        for (int j = 0; j < 10; j++)
        {
            std::cout << " externo: " << j << std::endl;
            std::cout << " posicion ( " << i << "," << j << " ) cuenta " << cajita[i][j] << std::endl;
        }
    }
}