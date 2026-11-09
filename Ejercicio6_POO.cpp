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
	
	virtual int multiplicar(int a, int b) {
		return a * b;
	}
	
	virtual int dividir(int a, int b) {
		return a / b;
	}
};

class CalculadoraNueva : public Calculadora {
public:
	virtual int potencia(int a, int b) {
		return pow(a, b);
	}
};

class CalculadoraSucesiva : public CalculadoraNueva {
public:
	int multiplicar(int a, int b) override {
		int r = 0;
		for (int i = 0; i < b; i++)
			r = sumar(r, a);
		return r;
	}
	
	int potencia(int a, int b) override {
		int r = 1;
		for (int i = 0; i < b; i++)
			r = multiplicar(r, a);
		return r;
	}
	
	int dividir(int a, int b) override {
		int c = 0;
		while (a >= b) {
			a = restar(a, b);
			c++;
		}
		return c;
	}
};

int main() {
	CalculadoraSucesiva calc;
	int a = 10, b = 3;
	cout << "Suma: " << calc.sumar(a, b) << endl;
	cout << "Resta: " << calc.restar(a, b) << endl;
	cout << "Multiplicacion: " << calc.multiplicar(a, b) << endl;
	cout << "Potencia: " << calc.potencia(a, b) << endl;
	cout << "Division: " << calc.dividir(a, b) << endl;
	return 0;
//}
