#include "Bebida.h"

Bebida::Bebida(string bebida_, double costo_, double ivs_) {
	bebida = bebida_;
	costo = costo_;
	ivs = ivs_;
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

void Bebida::MostrarDatos() {
	cout << "---- Bebidas Registradas ----" << endl;
	cout << "Bebida: " << get_bebida() << "Costo: " << get_costo() << "Precio: " << get_precio() ;
	cout << endl;
}



