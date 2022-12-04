// Adivina kien.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Emma Yamileth fontes Miranda

#include <iostream>

int main()
{
	std::string r1, r2, r3, r4, r6;

	std::cout << " Bienvenido a el Adivina quien de Hora de Aventura" << std::endl;
	std::cout << " Los personajes Fin, jake, Rey helado, Dulce princesa, Princesa flama" << std::endl;
	std::cout << "Tu personaje es hombre o mujer?" << std::endl;
	std::cin >> r1;
	if (r1 == "mujer")
	{
		std::cout << "Es humana?" << std::endl;
		std::cin >> r2;
		if (r2 == "no")
		{
			std::cout << " Es princesa? " << std::endl;
			std::cin >> r3;
			if (r3 == "si")
			{
				std::cout << " cual es su color de cabello?" << std::endl;
				std::cin >> r4;
				if (r4 == "rosa")
				{
					std::cout << " Es cientifica?" << std::endl;
					std::cin >> r6;
					if (r6 == "si")
					{
						std::cout << " tu personaje es Dulce Princesa" << std:: endl;
					}
				}
				if (r4 == " rojo")
				{
					std::cout << "ella es fuego?" << std::endl;
					std::cin >> r6;
					if (r6 == " si")
					{
						std::cout << " Tu personaje es Princesa flama " << std::endl;
					}
				}
			}
		}
	}
	if (r1 == "hombre")
	{
		std::cout << "tiene cabello?" << std::endl;
		std::cin >> r2;
		if (r2 == "si");
		{
			std::cout << "Es magico?" << std::endl;
			std::cin >> r3;
			if (r3 == "si")
			{
				std::cout << " Es viejo?" << std::endl; 
				std::cin >> r4;
				if (r4 == "si")
				{
					std::cout << " se puede estirar? " << std::endl;
					std::cin >> r6;
					if (r6 == "si")
					{
						std::cout << " Tu personaje es Jake el perro " << std::endl;

					}
					if (r6 == "no")
					{
						std::cout << " Tu personaje es el Rey helado" << std::endl;
					}
				}
			}
			if (r3 == "no")
			{
				std::cout << " Es humano?" << std::endl;
				std::cin >> r4;
				if (r4 == "si")
				{
					std::cout << "Utiliza una espada?" << std::endl;
					std::cin >> r6;
					if (r6 == "si")
					{
						std::cout << " Tu personaje es Fin el humano " << std::endl;
					}
				}
			}
		}
	}
}
