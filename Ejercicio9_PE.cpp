#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	double n[5], suma = 0;
	cout << "Ingrese 5 numeros: ";
	for (int i = 0; i < 5; i++) {
		cin >> n[i];
		suma += n[i];
	}
	
	sort(n, n + 5);
	
	cout << "Suma: " << suma << endl;
	cout << "Promedio: " << suma / 5 << endl;
	cout << "Mediana: " << n[2] << endl;
	cout << "Maximo: " << n[4] << endl;
	cout << "Minimo: " << n[0] << endl;
	return 0;
}
