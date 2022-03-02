#pragma once
#include "Persona.h"

class Empleado : public Persona
{
private:
	double Sueldo{};
	string Cargo;

public:
	Empleado(string, int, double,string);
	Empleado();
	double GetSueldo();
	string GetCargo();
	void setEmpleo();
};

Empleado::Empleado(string Nombre, int Edad, double Sueldo,string Cargo) :Persona(Nombre, Edad)
{
	this->Sueldo = Sueldo;
	this->Cargo = Cargo;

}
Empleado::Empleado(){

}
double Empleado::GetSueldo()
{
	return Sueldo;
}

string Empleado::GetCargo() {
	return Cargo;	
}

void Empleado::setEmpleo() {
	cin.ignore();
	cout << "Escriba su puesto: ";
	getline(cin, Cargo);
	cout << endl << "Digite su sueldo: ";
	cin >> Sueldo;
}