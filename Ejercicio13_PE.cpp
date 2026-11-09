#include <iostream>
#include <string>
using namespace std;

struct Persona {
	string nombre, ap, am;
	char genero;
	int edad;
};

int main() {
	Persona personas[3] = {
		{"Juan", "Perez", "Lopez", 'M', 20},
	{"Ana", "Garcia", "Ruiz", 'F', 22},
		{"Luis", "Diaz", "Mora", 'M', 25}
	};
	Persona *p = personas;
	
	cout << "Personas:" << endl;
	for (int i = 0; i < 3; i++)
		cout << i + 1 << ". Nombre: " << (p + i)->nombre << " "
		<< (p + i)->ap << " " << (p + i)->am
		<< ", Genero: " << (p + i)->genero
		<< ", Edad: " << (p + i)->edad << endl;
	return 0;
}
