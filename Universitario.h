#pragma once
#include "Estudiante.h"
const int Nm = 5;

class Universitario : public Estudiante
{
private:
	string Universidad,Carrera,Materias[Nm];
	int notas[Nm]{};

public:
	Universitario(string, int, int, string, string,string,string[Nm], int[Nm]);
	Universitario();
	string GetUniversidad();
	string GetCarrera();
	void impriMat();
	void setUniv();
	int materias();
};
Universitario::Universitario(string Nombre, int Edad, int numeroCarnet, string nivelEstudios, string Universidad, string Carrera, string Materias[Nm], int notas[Nm])
	:Estudiante( Nombre,  Edad, numeroCarnet, nivelEstudios){
	this->Universidad = Universidad;
	this->Carrera = Carrera;
	this->Materias[0] = Materias[0];
	this->Materias[1] = Materias[1];
	this->Materias[2] = Materias[2];
	this->Materias[3] = Materias[3];
	this->Materias[4] = Materias[4];
	this->notas[0] = notas[0];
	this->notas[1] = notas[1];
	this->notas[2] = notas[2];
	this->notas[3] = notas[3];
	this->notas[4] = notas[4];
}

Universitario::Universitario(){

}

string Universitario::GetUniversidad() {
	return Universidad;
}

string Universitario::GetCarrera()
{
	return Carrera;
}

void Universitario::setUniv() {
	cin.ignore();
	cout << "Escriba su escuela: ";
	getline(cin, Universidad);
	cout << endl << "Escriba la carrera que cursa: ";
	getline(cin, Carrera);

	for (int i = 0; i < Nm; i++) {
	cout << endl << "Escriba la materia "<<i+1<<":";
	getline(cin, Materias[i]);
	cout << endl << "Digite la nota de la materia " << i+1<< ":";
	cin >> notas[i];
	cin.ignore();
	}

}

void Universitario::impriMat(){
	cout << "Materia		Calificación" << endl;
	for (int i = 0; i < Nm; i++) {
		cout << Materias[i] << "	" << notas[i] << endl;
	}
}

int Universitario::materias() {
	return (notas[0] + notas[1] + notas[2] + notas[3] + notas[4]);
}
