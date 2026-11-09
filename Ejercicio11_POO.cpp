#include <iostream>
using namespace std;

const int N = 2;

class Matriz {
private:
	int m[N][N];
	
public:
	Matriz() {}
	
	Matriz(int v[N][N]) {
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				m[i][j] = v[i][j];
	}
	
	Matriz operator*(int k) {
		Matriz r;
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				r.m[i][j] = m[i][j] * k;
				return r;
	}
	
	Matriz operator*(Matriz b) {
		Matriz r;
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++) {
				r.m[i][j] = 0;
				for (int k = 0; k < N; k++)
					r.m[i][j] += m[i][k] * b.m[k][j];
		}
			return r;
	}
	
	void imprimir() {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++)
				cout << m[i][j] << "\t";
				cout << endl;
		}
	}
};

int main() {
	int a[N][N] = {{1, 2}, {3, 4}};
	int b[N][N] = {{5, 6}, {7, 8}};
	Matriz A(a), B(b);
	
	cout << "A * 2:" << endl;
	(A * 2).imprimir();
	
	cout << "A * B:" << endl;
	(A * B).imprimir();
	return 0;
}
