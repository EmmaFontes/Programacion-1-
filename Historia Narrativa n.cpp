// Historia Narrativa.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Emma Yamilet Fontes Miranda

#include <iostream>

int main()

{
	int r1, r2, r3;



	std::cout << " Todo inicia en el año 2800 cuando la civilización estaba en Paz" << std::endl;
	std::cout << "Cuando todo parecía ser normal, los avances tecnológicos eran cada vez más " << std::endl;
	std::cout << "aceptados por la sociedad y lo que en un día se veía como algo imposible, hoy es una realidad " << std::endl;


	std::cout << "Emma despierta en un lugar muy extraño y no recuerda como llego a este lugar " << std::endl;
	std::cout << " Exploras la zona? 1 para explorar     0 para no explorar " << std::endl;
	std::cin >> r1;
	if (r1 == 1)
	{
		std::cout << " decide explorar la zona cuando se encuentra con lo que parecía ser un robot semidestruido " << std::endl;
		std::cout << " Quieres reparar al robot? 1 para SI   y  0 para NO " << std::endl;
		std::cin >> r2;
		if (r2 == 1)
		{
			std::cout << "Emma repara al robot y este enciende.Se levanta y dice lo siguiente : “Hola, mi nombre es R - 70 y estoy aquí para ayudarte" << std::endl;
			std::cout << " Los dos comienzan una aventura en un lugar totalmente desconocido" << std::endl;
			std::cout << " Durante su viaje encuantran un lugar en ruinas\n ";
			std::cout << " Quieres entrar al lugar? 1 para SI y 0 Para NO\n";
			std::cin >> r3;
			if (r3 == 1)
			{
				std::cout << " Ambos entran al lugar y se encuentran a dos niños \n";
				std::cout << " Ellos aterrados pues tenian miedo a las maquinas y R-70 Era una de ellas \n";
				std::cout << " Emma les pregunta sus nombres y les explica que R-70 No es como las demas maquinas, que el es un Robot Bueno y que solo quiere proteger\n ";
				std::cout << " Ellos Se presentan como Zack de 11 años y Zoe de 10 años \n";
				std::cout << " Los padres de zoe y zack desaparecieron y ellos viven con la esperanza de que un dia vuelvan\n ";
				std::cout << " Emma y R-70 ofrecen su ayuda para encontrarlos\n ";
				std::cout << " Ellos se unen a ti y todos juntos emprenden una nueva aventura en un mundo peligroso y desconocido.... \n";
				std::cout << " Finxd\n";

			}
			if (r3 == 0)
			{
				std::cout << " Decieden rodear el lugar y en su camino se encuentran con lo que parecia ser una Maquina Enemiga\n  ";
				std::cout << " Esta intenta atacar a Emma \n";
				std::cout << "R-70 Intenta salvar a Emma pero, lamentablemente la fuerza de la maquina era mayor a la de R-70 lo que provoco un daño de gran magnitud en R-70\n";
				std::cout << " Emma se enfurece y de la nada empieza a golpear a la maquina y ezquivar sus ataques \n ";
				std::cout << " Resulta que Emma fue un robot todo este tiempo y no lo sabia \n";
				std::cout << "Ella recordo a su creador y que fue programada para aparentar y actuar como un ser humano \n";
				std::cout << " Ahora la mision de Emma es encontrar a su creador y su proposito de existir\n ";
				std::cout << " Finxd";
			}
		}

		if (r2 == 0)
		{
			std::cout << " Emma sigue su camino y se encuentra con lo que parecia ser una estacion del tren abandonada\n  ";
			std::cout << " al entrar al lugar se ecuentra con una persona pidiendo ayuda y estaba rodeada de Robots enemigos\n ";
			std::cout << "QUires ayudar a la persona? 1 para SI y 0 para NO\n ";
			std::cout << r3;
			std::cin >> r3;
			if (r3 == 1)
			{

				std::cout << " Decides lanzar una roca y las maquinas van tras ella\n ";
				std::cout << " Mientras las maquinas van hacia la roca, tu decides llamar a la persona y huyen juntas del lugar\n ";
				std::cout << "Cuando logran estar asalvo el se presenta como Andrew, es uan cientifico que trabajo creando maquinas antes de todo el caos\n ";
				std::cout << " Este le pregunta a Emma que si porque no enciende su mecanismo de defenza\n";
				std::cout << "Ella confundida lo observa con cara de wtf viejo loco \n";
				std::cout << "El toma su brazo y le muestra un codigo, mismo codigo que el creo \n";
				std::cout << "El le explica que ella es un robot y creacion de el \n";
				std::cout << "Ella asombrada con su respuesta, asimila la cituacion y decide estar con el para ponerlo asalvo de cualquier enemigo\n ";
				std::cout << " Fin....";


			}
			if (r3 == 0)
			{
				std:: cout << "Emma llega a un lago con patos\n";
				std::cout << "se acerca a ver su reflejo \n";
				std::cout << " cuando una maquina sale de dentro del agua y se la come\n";
					std::cout << " Emma es comida y muere\n";
				std::cout << " Fin :c";


			}
		}

	}
	if (r1 == 0)
	{
		std::cout << " Emma camina y se encuentra con acantilado\n";
		std::cout << " Quieres obervar? 1 para SI  y 0 para NO\n";
		std::cin >> r2;
		if (r2 == 1)
		{
			std::cout<< "ella se acerca a observar\n";
			std::cout << " a lo lejos mira una cabaña\n";
			std::cout << " de pronto un lobo sale de la nada y la empuja\n ";
			std::cout << " Emma cae al acantilado y muere\n";
		}
		if (r2 == 0)
		{
			std::cout << " Rodeas el acantilado y observas una pieza de metal que estaba en el suelo \n";
			std::cout << " Quieres inspeccionar la pieza de metal? 1 para SI y 0 para NO\n";
			std::cin >> r3;
			if (r3 == 1)
			{
				std::cout << " de la nada comienza a llover \n";
				std::cout << " inspeccionas la pieza de metal\n";
				std::cout << " te cae un rayo y mueres\n";
				std::cout << " ci";
			}
			if (r3 == 0)
			{
				std::cout << " sigues tu camino y encuentras una cueva";
				std::cout << " decides entrar y encuentras un mapa\n";
				std::cout << " el mapa es de una isla y un secreto escondido\n";
				std::cout << " decides ir en busca de de el...\n";
			


			}

		}
			
			
			
			
		
		
	}








}

