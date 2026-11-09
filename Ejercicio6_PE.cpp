#include <iostream>
using namespace std;

int sumar(int a, int b) {
	return a + b;
}

int restar(int a, int b) {
	return a - b;
}

int multiplicar(int a, int b) {
	int r = 0;
	for (int i = 0; i < b; i++)
		r = sumar(r, a);
	return r;
}

int potencia(int a, int b) {
	int r = 1;
	for (int i = 0; i < b; i++)
		r = multiplicar(r, a);
	return r;
}

int dividir(int a, int b) {
	int c = 0;
	while (a >= b) {
		a = restar(a, b);
		c++;
	}
	return c;
}

int main() {
	int a = 10, b = 3;
	cout << "Suma: " << sumar(a, b) << endl;
	cout << "Resta: " << restar(a, b) << endl;
	cout << "Multiplicacion: " << multiplicar(a, b) << endl;
	cout << "Potencia: " << potencia(a, b) << endl;
	cout << "Division: " << dividir(a, b) << endl;
	return 0;
}
