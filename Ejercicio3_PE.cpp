#include <iostream>
using namespace std;

double sumar(double a, double b) {
	return a + b;
}

double restar(double a, double b) {
	return a - b;
}

double multiplicar(double a, double b) {
	return a * b;
}

double dividir(double a, double b) {
	return a / b;
}

int main() {
	double a = 10, b = 4;
	cout << "Suma: " << sumar(a, b) << endl;
	cout << "Resta: " << restar(a, b) << endl;
	cout << "Multiplicacion: " << multiplicar(a, b) << endl;
	cout << "Division: " << dividir(a, b) << endl;
	return 0;
}
