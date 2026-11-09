#include <iostream>
#include <cmath>
using namespace std;

class Calculadora {
public:
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
};

class CalculadoraNueva : public Calculadora {
public:
	int potencia(int a, int b) {
		return pow(a, b);
	}
	
	int residuo(int a, int b) {
		return a % b;
	}
};

int main() {
	CalculadoraNueva calc;
	int a = 10, b = 3;
	cout << "Suma: " << calc.sumar(a, b) << endl;
	cout << "Resta: " << calc.restar(a, b) << endl;
	cout << "Multiplicacion: " << calc.multiplicar(a, b) << endl;
	cout << "Division: " << calc.dividir(a, b) << endl;
	cout << "Potencia: " << calc.potencia(a, b) << endl;
	cout << "Residuo: " << calc.residuo(a, b) << endl;
	return 0;
}
