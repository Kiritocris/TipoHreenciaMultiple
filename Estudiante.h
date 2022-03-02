#pragma once
#include "Persona.h"

class Estudiante : public Persona
{
private:
	int Matricula{};
	string gradoEstudio;
	double NotaFinal{};

public:
	Estudiante(string, int, int, string, double);
	Estudiante();
	int GetMatricula();
	string GetEstudio();
	double GetNota();
	void setEstudiante();
};

Estudiante::Estudiante(string Nombre, int Edad,int Matricula,string gradoEstudio, double NotaFinal) : Persona(Nombre, Edad)
{

	this->Matricula = Matricula;
	this->gradoEstudio = gradoEstudio;
	this->NotaFinal = NotaFinal;
}
Estudiante::Estudiante() {

}

int Estudiante::GetMatricula() {
	return Matricula;
}
string Estudiante::GetEstudio() {
	return gradoEstudio;
}

double Estudiante::GetNota()
{
	return NotaFinal;
}

void Estudiante::setEstudiante() {
	cout << "Digite su matricula: ";
	cin >> Matricula;
	cin.ignore();
	cout << endl << "Escriba su grado de estudios: ";
	getline(cin, gradoEstudio);
	cout << endl << "Digite su calificacion final: ";
	cin >> NotaFinal;
}