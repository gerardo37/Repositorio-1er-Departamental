#include <iostream>
#include <string>
using namespace std;

class Auto {
private:
	double precio;
	int anio;
	
public:
	Auto(double precio, int anio) : precio(precio), anio(anio) {}
	
	void mostrar() {
		cout << "Precio: " << precio << ", Anio: " << anio << endl;
	}
};

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

int main() {
	Auto autos[3] = {Auto(185000, 2022), Auto(250000, 2020), Auto(320000, 2023)};
	Persona personas[3] = {
		Persona("Juan", "Perez", "Lopez", 'M', 20),
			Persona("Ana", "Garcia", "Ruiz", 'F', 22),
			Persona("Luis", "Diaz", "Mora", 'M', 25)
	};
	
	cout << "Autos:" << endl;
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << ". ";
		autos[i].mostrar();
	}
	
	cout << "Personas:" << endl;
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << ". ";
		personas[i].mostrar();
	}
	return 0;
}
