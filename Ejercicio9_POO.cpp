#include <iostream>
#include <algorithm>
using namespace std;

class Estadistica {
private:
	double n[5];
	
public:
	void leer() {
		cout << "Ingrese 5 numeros: ";
		for (int i = 0; i < 5; i++)
			cin >> n[i];
	}
	
	double suma() {
		double s = 0;
		for (int i = 0; i < 5; i++)
			s += n[i];
		return s;
	}
	
	double promedio() {
		return suma() / 5;
	}
	
	double mediana() {
		double c[5];
		copy(n, n + 5, c);
		sort(c, c + 5);
		return c[2];
	}
	
	double maximo() {
		return *max_element(n, n + 5);
	}
	
	double minimo() {
		return *min_element(n, n + 5);
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
