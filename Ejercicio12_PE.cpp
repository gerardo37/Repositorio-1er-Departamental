#include <iostream>
#include <string>
using namespace std;

struct Auto {
	double precio;
	int anio;
};

struct Persona {
	string nombre, ap, am;
	char genero;
	int edad;
};

int main() {
	Auto autos[3] = {{185000, 2022}, {250000, 2020}, {320000, 2023}};
	Persona personas[3] = {
		{"Juan", "Perez", "Lopez", 'M', 20},
	{"Ana", "Garcia", "Ruiz", 'F', 22},
		{"Luis", "Diaz", "Mora", 'M', 25}
	};
	
	cout << "Autos:" << endl;
	for (int i = 0; i < 3; i++)
		cout << i + 1 << ". Precio: " << autos[i].precio
		<< ", Anio: " << autos[i].anio << endl;
	
	cout << "Personas:" << endl;
	for (int i = 0; i < 3; i++)
		cout << i + 1 << ". Nombre: " << personas[i].nombre << " "
		<< personas[i].ap << " " << personas[i].am
		<< ", Genero: " << personas[i].genero
		<< ", Edad: " << personas[i].edad << endl;
	return 0;
}
