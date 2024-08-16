#include "Cafeteria.h"
#include "Venta.h"
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

void Cafeteria::Facturacion(int numero) {
	Venta ven;
	int volver = 1, elegido = 0;
	double  compra = 0;
	if (numero == 1) {
		if (!bebidas.empty())
		{
			while (volver == 1) {
				do {
					MostrarDatos();
					int elegido;
					cout << endl << "Cual de todos desea comprar: ";
					cin >> elegido;
				} while (elegido < 0 && elegido > bebidas.size());
				compra = compra + bebidas[elegido].get_precio();
				do {
					cout << "Desea volver comprar algo mas 1: si 2: no: ";
					cin >> volver;
				} while (volver != 1 && volver != 2);
			}
		}
		cout << "Precio total de su compra es: " << compra << endl;
		string nombre = bebidas[elegido].get_bebida();
		Venta ven(nombre, compra);
	}
	else if (numero == 2) {
		  ven.Mostrar_ventas();
		  //no pude
	}
}



