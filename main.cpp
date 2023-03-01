#include <iostream>
#include "Pasante.h"
#include <list>
using namespace std;

Pasante newPasante();
//Declarar un constructor con solo los atributos que necesites y despues meterlo al constructor del Universitario nota para hacer el proyecto


int main() {

	list<Pasante> Pasantes;

	/*Pasante Pasante1;
	Pasante1 = newPasante();
	Pasante1.getAllData();

	Pasante P2;
	P2.allDatos();
	P2.getAllData();
	system("cls");*/
	int opc=0;
	
	do {
		system("cls");
		cout << "1.-Agregar un pasante nuevo" << endl;
		cout << "2.-Verificar universidades" << endl;
		cout << "3.-Promedio de los pasantes" << endl;
		cout << "4.-Nombres de los pasante" << endl;
		cout << "5.-Salir" << endl;
		cout << "Selecciona la operacion a realizar:";
		cin >> opc;

		switch (opc)
		{
		case 1:
			system("cls");
			cout << "Agregando un nuevo pasante"<<endl;
			cin.ignore();
			Pasantes.push_back(newPasante());
			break;
		case 2:
			system("cls");
			cout << "Verificar Universidades" << endl;
			for (auto pasante : Pasantes)
				pasante.getUniversidad();
			cout << endl;
			system("pause");
			break;
		case 3:	
			system("cls");
			cout << "Verificar Universidades" << endl;
			for (auto pasante : Pasantes)
				pasante.getPromedio();
			cout << endl;
			system("pause");
			break;
		case 4:	
			system("cls");
			cout << "Mostrar pasantes" << endl;
			for (auto pasante : Pasantes)
				pasante.getName();
			cout << endl;
			system("pause");
			break;
			
		case 5:
			cout << "Gracias por usar este programa c:";
			break;
		default:
			cout << "Opcion no reconocida vuelva a intentarlo";
			break;
		}
		
	} while (opc != 5);

	
	return 0;
}

Pasante newPasante() {
	string Nombre, nivelEstudios, Universidad, Carrera, Materias[Nm], Cargo, proyecto;
	int Edad, numeroCarnet, totalhrs, hrscom, notas[Nm];
	double NotaFinal, Sueldo;
	cout << "Escriba su <nombre>:";
	getline(cin, Nombre);
	cout << "Escriba su <Grado de estudios>:";
	getline(cin, nivelEstudios);
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
	cin >> numeroCarnet;
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

	Pasante p1(Nombre,Edad,numeroCarnet,nivelEstudios,Universidad,Carrera,Materias, notas, Sueldo, Cargo, proyecto, totalhrs, hrscom);

	return p1;

};

