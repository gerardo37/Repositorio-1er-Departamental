#include <iostream>
#include <string>
using namespace std;

class Sierpinski {
private:
	static const int N = 8;
	string t[N];
	
	void dibujar(int fila, int col, int tam) {
		if (tam == 1) {
			t[fila][col] = '*';
			return;
		}
		int m = tam / 2;
		dibujar(fila, col + m, m);
		dibujar(fila + m, col, m);
		dibujar(fila + m, col + tam, m);
	}
	
public:
		Sierpinski() {
			for (int i = 0; i < N; i++)
				t[i] = string(2 * N - 1, ' ');
			dibujar(0, 0, N);
		}
		
		void mostrar() {
			for (int i = 0; i < N; i++)
				cout << t[i] << endl;
		}
};

class Cantor {
private:
	static const int NIVELES = 4;
	static const int ANCHO = 27;
	string c[NIVELES];
	
	void dibujar(int nivel, int inicio, int largo) {
		if (nivel == NIVELES) return;
		for (int i = inicio; i < inicio + largo; i++)
			c[nivel][i] = '*';
			int t = largo / 3;
			dibujar(nivel + 1, inicio, t);
			dibujar(nivel + 1, inicio + 2 * t, t);
	}
	
public:
		Cantor() {
			for (int i = 0; i < NIVELES; i++)
				c[i] = string(ANCHO, ' ');
			dibujar(0, 0, ANCHO);
		}
		
		void mostrar() {
			for (int i = 0; i < NIVELES; i++)
				cout << c[i] << endl;
		}
};

int main() {
	Sierpinski s;
	Cantor c;
	
	cout << "Triangulo de Sierpinski:" << endl;
	s.mostrar();
	
	cout << endl << "Polvo de Cantor:" << endl;
	c.mostrar();
	return 0;
}
