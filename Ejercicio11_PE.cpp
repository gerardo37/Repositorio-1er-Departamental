#include <iostream>
using namespace std;

const int N = 2;

void porConstante(int a[N][N], int k, int r[N][N]) {
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			r[i][j] = a[i][j] * k;
}

void porMatriz(int a[N][N], int b[N][N], int r[N][N]) {
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++) {
			r[i][j] = 0;
			for (int k = 0; k < N; k++)
				r[i][j] += a[i][k] * b[k][j];
	}
}

void imprimir(int m[N][N]) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			cout << m[i][j] << "\t";
			cout << endl;
	}
}

int main() {
	int A[N][N] = {{1, 2}, {3, 4}};
	int B[N][N] = {{5, 6}, {7, 8}};
	int R[N][N];
	int k = 2;
	
	cout << "A * " << k << ":" << endl;
	porConstante(A, k, R);
	imprimir(R);
	
	cout << "A * B:" << endl;
	porMatriz(A, B, R);
	imprimir(R);
	return 0;
}
