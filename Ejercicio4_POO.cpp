#include <iostream>
using namespace std;

class Calculadora {
public:
	int sumar() {
		return 0;
	}
	
	int sumar(int a, int b) {
		return a + b;
	}
	
	int sumar(int a, int b, int c) {
		return a + b + c;
	}
};

int main() {
	Calculadora calc;
	cout << "Suma sin parametros: " << calc.sumar() << endl;
	cout << "Suma de 2 parametros: " << calc.sumar(5, 3) << endl;
	cout << "Suma de 3 parametros: " << calc.sumar(5, 3, 2) << endl;
	return 0;
}
