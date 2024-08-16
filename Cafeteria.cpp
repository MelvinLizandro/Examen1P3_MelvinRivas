#include "Cafeteria.h"

void Cafeteria::Agregar_bebida() {
	srand(time(NULL));
	string nombre;
	cout << "Ingrese el nombre de la bebida: ";
	cin >> nombre;
	cout << endl;
	double costo = rand() % 150 + 50;
	double ivs = 0.15;
	Bebida refresco(nombre,costo,ivs);
	
		bebidas.push_back(refresco);
		cout << "Se agrego la bebida correctamente" << endl;
}

void Cafeteria::MostrarDatos() {
	
	if (!bebidas.empty()) {
		cout << endl << "---- Registro de bebidas ----" << endl;
		for (size_t i = 0; i < bebidas.size(); i++)
		{
			cout<< "Bebida#" << i << endl << "Nombre: " << bebidas[i].get_bebida()
			<< endl <<"Costo: " << bebidas[i].get_costo() << endl
			<< "Precio: " << bebidas[i].get_precio() <<endl;
		}
	}
	else {
		cout << "No hay nada que imprimir";
	}
}

void Cafeteria::Facturación() {
	if (!bebidas.empty())
	{
		int volver = 1;
		int elegido = 0;
		while (volver == 1) {
			if(elegido >= 0 && elegido < bebidas.size())
			MostrarDatos();
			int elegido;
			cout << endl << "Cual de todos desea comprar: ";
			cin >> elegido;
		}
	}
}
