#pragma once
#include "Estudiante.h"
const int Nm = 5;

class Universitario : public Estudiante
{
private:
	string Universidad,Carrera,Materias[Nm];
	int notas[Nm]{};

public:
	Universitario(string, int, int, string, double, string,string,string[Nm], int[Nm]);
	Universitario();
	string GetUniversidad();
	string GetCarrera();
	void impriMat();
	void setUniv();
};
Universitario::Universitario(string Nombre, int Edad, int Matricula, string gradoEstudio, double NotaFinal, string Universidad, string Carrera, string Materias[Nm], int notas[Nm])
	:Estudiante( Nombre,  Edad,  Matricula,  gradoEstudio, NotaFinal){
	this->Universidad = Universidad;
	this->Carrera = Carrera;
	this->Materias[Nm-1] = Materias[Nm-1];
	this->notas[Nm-1] = notas[Nm-1];
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
