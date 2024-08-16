#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <stdio.h>     
#include <stdlib.h>    
#include <time.h>  
class Bebida
{
private:
	string bebida;
	double costo;
	double ivs ;
	double precio;
	
public:
	Bebida(string,double,double);
	Bebida(string, double);
	string get_bebida();
	double get_costo();
	double get_precio();
	void MostrarDatos();

};