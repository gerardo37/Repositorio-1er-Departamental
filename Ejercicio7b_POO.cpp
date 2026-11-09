#include <iostream>
#include <string>
using namespace std;

class Auto {
private:
	double precio;
	int anio;
};

class Persona {
private:
	string nombre, ap, am;
	char genero;
	int edad;
};

int main() {
	cout << "char: " << sizeof(char) << endl;
	cout << "bool: " << sizeof(bool) << endl;
	cout << "short: " << sizeof(short) << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "float: " << sizeof(float) << endl;
	cout << "double: " << sizeof(double) << endl;
	cout << "long long: " << sizeof(long long) << endl;
	cout << "Auto: " << sizeof(Auto) << endl;
	cout << "Persona: " << sizeof(Persona) << endl;
	return 0;
}
