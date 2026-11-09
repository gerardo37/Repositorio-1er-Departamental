#include <iostream>
#include <algorithm>
using namespace std;

class Estadistica {
private:
	double n[5];
	double *p;
	
public:
	Estadistica() : p(n) {}
	
	void leer() {
		cout << "Ingrese 5 numeros: ";
		for (int i = 0; i < 5; i++)
			cin >> *(p + i);
	}
	
	double suma() {
		double s = 0;
		for (int i = 0; i < 5; i++)
			s += *(p + i);
		return s;
	}
	
	double promedio() {
		return suma() / 5;
	}
	
	double mediana() {
		double c[5];
		copy(p, p + 5, c);
		sort(c, c + 5);
		return c[2];
	}
	
	double maximo() {
		return *max_element(p, p + 5);
	}
	
	double minimo() {
		return *min_element(p, p + 5);
	}
};

int main() {
	Estadistica est;
	est.leer();
	cout << "Suma: " << est.suma() << endl;
	cout << "Promedio: " << est.promedio() << endl;
	cout << "Mediana: " << est.mediana() << endl;
	cout << "Maximo: " << est.maximo() << endl;
	cout << "Minimo: " << est.minimo() << endl;
	return 0;
}
