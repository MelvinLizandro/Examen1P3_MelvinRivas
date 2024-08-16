#include "Bebida.h"
#include "Cafeteria.h"

Bebida::Bebida(string bebida_, double costo_, double ivs_) {
	bebida = bebida_;
	costo = costo_;
	ivs = ivs_;
	
}	

void Bebida::MostrarDatos(const vector<Bebida*> bebidas){
	cout << "---- Bebidas Registradas ----";
	for (size_t i = 0; i < bebidas.size(); i++)
	{
		cout << "Bebida #" << i << endl << "Bebida: " <<
			bebidas[i]->get_bebida() << endl << "Costo: " << bebidas[i]->get_costo() <<
			endl << "Precio: " << bebidas[i]->get_precio() << endl << endl;
	}
}

string Bebida::get_bebida() {
	return bebida;
}
double Bebida::get_costo() {
	return costo;
}
double Bebida::get_precio() {
	precio = costo * ivs;
	return precio;
}

