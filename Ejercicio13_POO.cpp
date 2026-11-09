#include <iostream>
#include <string>
using namespace std;

class Persona {
private:
	string nombre, ap, am;
	char genero;
	int edad;
	
public:
	Persona(string nombre, string ap, string am, char genero, int edad)
		: nombre(nombre), ap(ap), am(am), genero(genero), edad(edad) {}
	
	void mostrar() {
		cout << "Nombre: " << nombre << " " << ap << " " << am
			<< ", Genero: " << genero << ", Edad: " << edad << endl;
	}
};

class ListaPersonas {
private:
	Persona personas[3];
	Persona *p;
	
public:
	ListaPersonas()
		: personas{Persona("Juan", "Perez", "Lopez", 'M', 20),
			Persona("Ana", "Garcia", "Ruiz", 'F', 22),
			Persona("Luis", "Diaz", "Mora", 'M', 25)},
		p(personas) {}
	
	void mostrar() {
		for (int i = 0; i < 3; i++) {
			cout << i + 1 << ". ";
			(p + i)->mostrar();
		}
	}
};

int main() {
	ListaPersonas lista;
	cout << "Personas:" << endl;
	lista.mostrar();
	return 0;
}
