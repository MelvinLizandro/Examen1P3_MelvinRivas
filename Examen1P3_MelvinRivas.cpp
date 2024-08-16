#include <iostream>
using namespace std;
#include <stdio.h>     
#include <stdlib.h>    
#include <time.h>   
#include "Cafeteria.h"
#include "Venta.h"

void cafeteria() {
	Cafeteria cafe;
	int opciones = 0;
	while (opciones != 5)
	{
		cout << "---- Cafeteria ----" << endl << "1. Crear cafeteria" <<endl <<  "2. Listar bebidas" <<
			  endl <<"3. Facturacion" << endl << "4. Mostrar ventas" << endl << "5. Regresar al menu" <<
			endl << "Cual desea elegir: ";
		cin >> opciones;
		
		switch (opciones)
		{
		case 1: {
			 cafe.Agregar_bebida();
			break;
		}
		case 2: {
			cafe.MostrarDatos();
			break;
		}
		case 3: {
			cafe.Facturacion(1);
			break;
		}
		case 4: {
			cafe.Facturacion(2);
			break;
		}
		case 5: {
			cout << "Gracias por su preferencia, hasta la proxima";
			break;
		}
		default: {
			cout << "Caracter incorrecto, porfavor vuelva a intentarlo";
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