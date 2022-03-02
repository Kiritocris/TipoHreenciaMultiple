#include <iostream>
#include "Pasante.h"
using namespace std;

void setpasante();

int main() {

	Pasante P2;
	P2.setDatos();
	P2.getAllData();

	/*int opc=0;
	
	do {
		system("cls");
		cout << "1.-Agregar un pasante nuevo" << endl;
		cout << "2.-Verificar universidades" << endl;
		cout << "3.-Promedio de los pasantes" << endl;
		cout << "4.-Salir" << endl;
		cout << "Selecciona la operacion a realizar:";
		cin >> opc;

		switch (opc)
		{
		case 1:
			system("cls");
			cout << "Agregando un nuevo pasante"<<endl;
			cin.ignore();
			setpasante();
			break;
		case 2:		
			break;
		case 3:		
			break;
		case 4:	cout << "Gracias por usar este programa c:";
			break;
		default:
			cout << "Opcion no reconocida vuelva a intentarlo";
			break;
		}
		
	} while (opc != 4);*/

	
	return 0;
}

//void setpasante() {
//	Pasante Pn;
//	Pn.setDatos();
//
//};

