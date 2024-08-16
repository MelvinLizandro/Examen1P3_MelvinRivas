#pragma once
#include "Bebida.h"
#include <iostream>
using namespace std;
#include <vector>
class Venta
{
public:
	vector <Bebida> Ventas;
public:
	Venta(string, double);
	Venta();
	void Agregarventa(string,double);
	void Facturación();
	void Mostrar_ventas();
	
};

