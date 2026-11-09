#include <iostream>
#include <algorithm>
using namespace std;

void ordenar(double &x, double &y) {
	if (x > y) swap(x, y);
}

int main() {
	double a, b, c, d, e;
	cout << "Ingrese 5 numeros: ";
	cin >> a >> b >> c >> d >> e;
	
	double suma = a + b + c + d + e;
	
	ordenar(a, b);
	ordenar(d, e);
	ordenar(c, e);
	ordenar(c, d);
	ordenar(b, e);
	ordenar(a, d);
	ordenar(a, c);
	ordenar(b, d);
	ordenar(b, c);
	
	cout << "Suma: " << suma << endl;
	cout << "Promedio: " << suma / 5 << endl;
	cout << "Mediana: " << c << endl;
	cout << "Maximo: " << e << endl;
	cout << "Minimo: " << a << endl;
	return 0;
}
