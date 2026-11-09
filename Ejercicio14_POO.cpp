#include <iostream>
using namespace std;

class Calculadora {
public:
	int sumar(int a, int b) {
		return a + b;
	}
	
	int restar(int a, int b) {
		return a - b;
	}
};

class CalculadoraRecursiva : public Calculadora {
public:
	int multiplicar(int a, int b) {
		if (b == 0) return 0;
		return sumar(a, multiplicar(a, b - 1));
	}
	
	int potencia(int a, int b) {
		if (b == 0) return 1;
		return multiplicar(a, potencia(a, b - 1));
	}
	
	int dividir(int a, int b) {
		if (a < b) return 0;
		return 1 + dividir(restar(a, b), b);
	}
	
	int factorial(int n) {
		if (n <= 1) return 1;
		return n * factorial(n - 1);
	}
	
	int fibonacci(int n) {
		if (n <= 1) return n;
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
};

int main() {
	CalculadoraRecursiva calc;
	cout << "Multiplicacion 10 x 3: " << calc.multiplicar(10, 3) << endl;
	cout << "Potencia 10 ^ 3: " << calc.potencia(10, 3) << endl;
	cout << "Division 10 / 3: " << calc.dividir(10, 3) << endl;
	cout << "Factorial de 5: " << calc.factorial(5) << endl;
	cout << "Fibonacci de 7: " << calc.fibonacci(7) << endl;
	return 0;
}
