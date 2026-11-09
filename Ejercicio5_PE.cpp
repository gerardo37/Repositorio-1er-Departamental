#include <iostream>
#include <cmath>
using namespace std;

int sumar(int a, int b) {
	return a + b;
}

int restar(int a, int b) {
	return a - b;
}

int multiplicar(int a, int b) {
	return a * b;
}

int dividir(int a, int b) {
	return a / b;
}

int potencia(int a, int b) {
	return pow(a, b);
}

int residuo(int a, int b) {
	return a % b;
}

int main() {
	int a = 10, b = 3;
	cout << "Suma: " << sumar(a, b) << endl;
	cout << "Resta: " << restar(a, b) << endl;
	cout << "Multiplicacion: " << multiplicar(a, b) << endl;
	cout << "Division: " << dividir(a, b) << endl;
	cout << "Potencia: " << potencia(a, b) << endl;
	cout << "Residuo: " << residuo(a, b) << endl;
	return 0;
}
