#include <iostream>
using namespace std;
#include <stdio.h>     
#include <stdlib.h>    
#include <time.h>   
#include "Cafeteria.h"

void cafeteria() {
	int opciones = 0;
	while (opciones != 5)
	{
		cout << "---- Cafeteria ----" << endl << "1. Crear cafeteria" << "2. Listar bebidas" <<
			"3. Facturacion" << endl << "4. Mostrar ventas" << endl << "5. Regresar al menu";
		switch (opciones)
		{
		case 1: {
			Cafeteria* cafe = new Cafeteria;
			cafe ->Agregar_bebida();
			break;
		}
		case 2: {

			break;
		}
		case 3: {

			break;
		}
		case 4: {

			break;
		}
		case 5: {

			break;
		}
		default: {
			break;
		}
		}
	}
}

void menu() {

	int opciones = 0;
	while (opciones != 2)
	{
		cout << "---- MENU ----" << endl << "1. Cafeteria" << endl << "2. Salir" <<
			endl << "Cual desea elegir: ";
		cin >> opciones;
		switch (opciones)
		{
		case 1: {
			cafeteria();
			break;
		}
		case 2: {
			cout << "Hasta la proxima, vuelva pronto.";
			break;
		}
		default: {
			cout << "Caracter Invalido, Porfavor vuelva a internarlo.";
			break;
		}
		}
	}
}

int main()
{
    menu();
    return 0;
}