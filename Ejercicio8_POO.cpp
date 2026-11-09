#include <iostream>
#include <algorithm>
using namespace std;

class Estadistica {
private:
	double a, b, c, d, e;
	
	static void ordenar(double &x, double &y) {
		if (x > y) swap(x, y);
	}
	
public:
		Estadistica(double a, double b, double c, double d, double e)
			: a(a), b(b), c(c), d(d), e(e) {}
		
		double suma() {
			return a + b + c + d + e;
		}
		
		double promedio() {
			return suma() / 5;
		}
		
		double mediana() {
			double v = a, w = b, x = c, y = d, z = e;
			ordenar(v, w);
			ordenar(y, z);
			ordenar(x, z);
			ordenar(x, y);
			ordenar(w, z);
			ordenar(v, y);
			ordenar(v, x);
			ordenar(w, y);
			ordenar(w, x);
			return x;
		}
		
		double maximo() {
			return max({a, b, c, d, e});
		}
		
		double minimo() {
			return min({a, b, c, d, e});
		}
};

int main() {
	double a, b, c, d, e;
	cout << "Ingrese 5 numeros: ";
	cin >> a >> b >> c >> d >> e;
	
	Estadistica est(a, b, c, d, e);
	cout << "Suma: " << est.suma() << endl;
	cout << "Promedio: " << est.promedio() << endl;
	cout << "Mediana: " << est.mediana() << endl;
	cout << "Maximo: " << est.maximo() << endl;
	cout << "Minimo: " << est.minimo() << endl;
	return 0;
}
