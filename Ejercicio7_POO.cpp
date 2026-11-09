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
		cout << "Auto -> Precio: " << precio << ", Anio: " << anio << endl;
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
		cout << "Persona -> Nombre: " << nombre << " " << ap << " " << am
			<< ", Genero: " << genero << ", Edad: " << edad << endl;
	}
};

int main() {
	Auto a(185000, 2022);
	Persona p("Juan", "Perez", "Lopez", 'M', 20);
	
	a.mostrar();
	p.mostrar();
	return 0;
}
