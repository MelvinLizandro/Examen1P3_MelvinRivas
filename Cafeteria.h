#pragma once
#include <iostream>
#include <time.h>  
#include <stdlib.h>    
#include <stdio.h>     
#include "Bebida.h"
#include <vector>
using namespace std;

class Cafeteria
{
	vector<Bebida> bebidas;
	
public:
	void Agregar_bebida(); 
	void MostrarDatos(); 
	void Facturacion(int);
};

