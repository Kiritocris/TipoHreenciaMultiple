#pragma once
#include <iostream>
#include <string>
using namespace std;

class Persona{
private:
	string Nombre;
	int Edad{};

public:
	Persona(string, int);
	Persona();
	string GetNombre();
	int GetEdad();
	void setPersona();
};

Persona::Persona(string Nombre, int Edad)
{
	this->Nombre = Nombre;
	this->Edad = Edad;
}
Persona::Persona() {

}

string Persona::GetNombre()
{
	return Nombre;
}

int Persona::GetEdad()
{
	return Edad;
}

void Persona::setPersona() {
	cin.ignore();
	cout << "Escriba su nombre: ";
	getline(cin, Nombre);
	cout << endl << "Digite su edad: ";
	cin >> Edad;
}