#include <iostream>
#include "Pasante.h"
using namespace std;

Pasante setPasante();

//Declarar un constructor con solo los atributos que necesites y despues meterlo al constructor del Universitario nota para hacer el proyecto


int main() {

	Pasante Pasante1;
	Pasante1 = setPasante();
	Pasante1.getAllData();

	Pasante P2;
	P2.allDatos();
	P2.getAllData();
	system("cls");
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

Pasante setPasante() {
	string Nombre, gradoEstudio, Universidad, Carrera, Materias[Nm], Cargo, proyecto;
	int Edad, Matricula, totalhrs, hrscom, notas[Nm];
	double NotaFinal, Sueldo;
	cout << "Escriba su <nombre>:";
	getline(cin, Nombre);
	cout << "Escriba su <Grado de estudios>:";
	getline(cin, gradoEstudio);
	cout << "Escriba su <Universidad>:";
	getline(cin, Universidad);
	cout << "Escriba su <Carrera>:";
	getline(cin, Carrera);
	cout << "Escriba su <Materias>:";
	getline(cin, Materias[0]);
	cout << "Escriba su <Materias>:";
	getline(cin, Materias[1]);
	cout << "Escriba su <Materias>:";
	getline(cin, Materias[2]);
	cout << "Escriba su <Materias>:";
	getline(cin, Materias[3]);
	cout << "Escriba su <Materias>:";
	getline(cin, Materias[4]);
	cout << "Escriba su <Cargo>:";
	getline(cin, Cargo);
	cout << "Escriba su <Proyecto nombre>:";
	getline(cin, proyecto);
	cout << "Digite su <Edad>:";
	cin >> Edad;
	cout << "Digite su <Matricula>:";
	cin >> Matricula;
	cout << "Digite su <Total de horas>:";
	cin >> totalhrs;
	cout << "Digite su <Horas completadas>:";
	cin >> hrscom;
	cout << "Digite su <Horas completadas>:";
	cin >> NotaFinal;
	cout << "Digite su <Horas completadas>:";
	cin >> Sueldo;
	cout << "Digite su <Notas>:";
	cin >> notas[0];
	cout << "Digite su <Notas>:";
	cin >> notas[1];
	cout << "Digite su <Notas>:";
	cin >> notas[2];
	cout << "Digite su <Notas>:";
	cin >> notas[3];
	cout << "Digite su <Notas>:";
	cin >> notas[4];

	Pasante p1(Nombre,Edad,Matricula,gradoEstudio,NotaFinal,Universidad,Carrera,Materias, notas, Sueldo, Cargo, proyecto, totalhrs, hrscom);

	/*Pasante Pn;
	Pn.setDatos();*/

	return p1;

};

