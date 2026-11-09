#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	double n[5], suma = 0;
	double *p = n;
	
	cout << "Ingrese 5 numeros: ";
	for (int i = 0; i < 5; i++) {
		cin >> *(p + i);
		suma += *(p + i);
	}
	
	sort(p, p + 5);
	
	cout << "Suma: " << suma << endl;
	cout << "Promedio: " << suma / 5 << endl;
	cout << "Mediana: " << *(p + 2) << endl;
	cout << "Maximo: " << *(p + 4) << endl;
	cout << "Minimo: " << *p << endl;
	return 0;
}
