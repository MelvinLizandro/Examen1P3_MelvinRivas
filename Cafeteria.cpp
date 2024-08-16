#include "Cafeteria.h"

void Cafeteria::Agregar_bebida() {
	srand(time(NULL));
	string nombre;
	cout << "Ingrese el nombre de la bebida: ";
	cin >> nombre;
	double costo = rand() % 20 + 1;
	double ivs = 0.15;
	Bebida bebida(nombre, costo, ivs);
	bebidas.push_back(&bebida);
	cout << "Se agrego la bebida correctamente";
}
