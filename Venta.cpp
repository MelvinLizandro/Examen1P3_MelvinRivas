#include "Venta.h"
#include "Cafeteria.h"

Venta::Venta(){
}

Venta::Venta(string nombre, double precio) {
	Agregarventa(nombre, precio);
}

void Venta ::Agregarventa(string nombre, double precio) {
	Bebida bebidas (nombre, precio);
	Ventas.push_back(bebidas);
}

void Venta::Mostrar_ventas() {

	for (size_t i = 0; i < Ventas.size(); i++)
	{
		cout << "Nombre de la bebida: " << Ventas[i].get_bebida() <<
			"El precio fue: " << Ventas[i].get_precio() << endl;
	}
}

