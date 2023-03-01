#pragma once
#include <iostream>
#include "Universitario.h"
#include "Empleado.h"


class Pasante :public Universitario, public Empleado {
private:
	string proyecto;
	int totalhrs{}, hrscom{};
public:
	Pasante(string, int, int, string, string, string, string[Nm], int[Nm], double, string, string, int, int);
	Pasante();
	int hrst();
	int hrsc();
	void getName();
	void setDatos();
	void allDatos();
	void getAllData();
	void getUniversidad();
	void getPromedio();
};

Pasante::Pasante(string Nombre, int Edad, int numeroCarnet, string nivelEstudios, string Universidad, string Carrera, string Materias[Nm], int notas[Nm], double Sueldo, string Cargo,string proyecto, int totalhrs, int hrscom)
	:Universitario(Nombre,Edad,numeroCarnet,nivelEstudios,Universidad,Carrera,Materias, notas), Empleado(Sueldo, Cargo) {
	this->proyecto = proyecto;
	this->totalhrs = totalhrs;
	this->hrscom = hrscom;
}

Pasante::Pasante(){

}

int Pasante::hrst(){
	return totalhrs;
}
int Pasante::hrsc(){
	return hrscom;
}
void Pasante::setDatos() {
	cout << "Escriba el nombre del proyecto:";
	getline(cin, proyecto);
	cout <<endl<< "Digite las horas totales del proyecto:";
	cin >> totalhrs;
	cout <<endl<< "Digite las horas completadas del proyecto:";
	cin >> hrscom;
}

void Pasante::allDatos() {
	setDatos(); 
	Persona::setPersona();
	Empleado::setEmpleo();
	Estudiante::setEstudiante();
	Universitario::setUniv();
}

void Pasante::getAllData() {
	cout << "Nombre:" << Persona::GetNombre() << endl;
	cout << "Edad:" << Persona::GetEdad() << endl;
	cout << "Matricula:" << Estudiante::GetCarnet() << endl;
	cout << "Grado de estudios:" << Estudiante::GetNivelEstudio() << endl;
	cout << "Universidad:" << Universitario::GetUniversidad() << endl;
	cout << "Carrera:" << Universitario::GetCarrera() << endl;
	cout << "--Materias--"<< endl;
	Universitario::impriMat();
	//funcion para imprimir arreglo
	cout << "Sueldo:" << Empleado::GetSueldo() << endl;
	cout << "Cargo asignado:" << Empleado::GetCargo() << endl;
	cout << "Horas asignadas:" << totalhrs << endl;
	cout << "Horas completadas:" << hrscom << endl;
}

void Pasante::getName() {
	cout << "Nombre: " << Persona::GetNombre() << endl;
}

void Pasante::getUniversidad() {
	cout << "Nombre: " << Persona::GetNombre() << endl;
	cout << "Universidad: " << Universitario::GetUniversidad() << endl;
}

void Pasante::getPromedio() {
	double promedio;
	int suma;
	suma = Universitario::materias();
	promedio = suma / 5;
	cout << "Nombre: " << Persona::GetNombre() << endl;
	cout << "Promedio: " << promedio << endl;
}