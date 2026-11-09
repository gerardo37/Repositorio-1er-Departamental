#include <iostream>
#include <string>
using namespace std;

const int N = 8;
const int NIVELES = 4;
const int ANCHO = 27;

string triangulo[N];
string cantor[NIVELES];

void sierpinski(int fila, int col, int tam) {
	if (tam == 1) {
		triangulo[fila][col] = '*';
		return;
	}
	int m = tam / 2;
	sierpinski(fila, col + m, m);
	sierpinski(fila + m, col, m);
	sierpinski(fila + m, col + tam, m);
}

void polvoCantor(int nivel, int inicio, int largo) {
	if (nivel == NIVELES) return;
	for (int i = inicio; i < inicio + largo; i++)
		cantor[nivel][i] = '*';
		int t = largo / 3;
		polvoCantor(nivel + 1, inicio, t);
		polvoCantor(nivel + 1, inicio + 2 * t, t);
}

int main() {
	for (int i = 0; i < N; i++)
		triangulo[i] = string(2 * N - 1, ' ');
	for (int i = 0; i < NIVELES; i++)
		cantor[i] = string(ANCHO, ' ');
	
	sierpinski(0, 0, N);
	polvoCantor(0, 0, ANCHO);
	
	cout << "Triangulo de Sierpinski:" << endl;
	for (int i = 0; i < N; i++)
		cout << triangulo[i] << endl;
	
	cout << endl << "Polvo de Cantor:" << endl;
	for (int i = 0; i < NIVELES; i++)
		cout << cantor[i] << endl;
	return 0;
}
