#include <iostream>
using namespace std;

class Calculadora {
public:
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
};

int main() {
	Calculadora calc;
	double a = 10, b = 4;
	cout << "Suma: " << calc.sumar(a, b) << endl;
	cout << "Resta: " << calc.restar(a, b) << endl;
	cout << "Multiplicacion: " << calc.multiplicar(a, b) << endl;
	cout << "Division: " << calc.dividir(a, b) << endl;
	return 0;
}
