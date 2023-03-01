#pragma once
#include "Persona.h"
#include <string>
using namespace std;

class Estudiante : public Persona
{
private:
	int numeroCarnet{};
	string nivelEstudios;

public:
	Estudiante(string, int, int, string);
	Estudiante();
	int GetCarnet();
	string GetNivelEstudio();
	void setEstudiante();
};

Estudiante::Estudiante(string Nombre, int Edad,int numeroCarnet,string nivelEstudios) : Persona(Nombre, Edad)
{
	this->numeroCarnet= numeroCarnet;
	this->nivelEstudios= nivelEstudios;
}
Estudiante::Estudiante() {

}

int Estudiante::GetCarnet() {
	return numeroCarnet;
}
string Estudiante::GetNivelEstudio() {
	return nivelEstudios;
}


void Estudiante::setEstudiante() {
	cout << "Digite su matricula: ";
	cin >> numeroCarnet;
	cin.ignore();
	cout << endl << "Escriba su grado de estudios: ";
	getline(cin, nivelEstudios);
}