#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <stdio.h>     
#include <stdlib.h>    
#include <time.h>  
#include "Bebida.h"
#include "Cafeteria.h"
class Bebida
{
private:
	string bebida;
	double costo;
	double ivs = 0.15;
	double precio;
public:
	Bebida(string,double,double);
	void MostrarDatos(const vector<Bebida*>);
	string get_bebida();
	double get_costo();
	double get_precio();
};