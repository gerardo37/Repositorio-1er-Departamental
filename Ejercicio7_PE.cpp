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
	Auto a = {185000, 2022};
	Persona p = {"Juan", "Perez", "Lopez", 'M', 20};
	
	cout << "Auto -> Precio: " << a.precio << ", Anio: " << a.anio << endl;
	cout << "Persona -> Nombre: " << p.nombre << " " << p.ap << " " << p.am
		<< ", Genero: " << p.genero << ", Edad: " << p.edad << endl;
	return 0;
}
