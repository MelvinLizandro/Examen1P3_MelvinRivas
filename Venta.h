#pragma once
#include "Bebida.h"
#include <iostream>
using namespace std;
#include <vector>
class Venta
{
private:
	vector <Bebida*> Ventas;
public:
	void Agregarventa();
	void Facturaci�n();
	void Mostrar_ventas();
};

