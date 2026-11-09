#include <iostream>
using namespace std;

class Operacion {
public:
	int sumar(int a, int b) {
		return a + b;
	}
};

int main() {
	Operacion op;
	cout << "Suma: " << op.sumar(5, 3) << endl;
	return 0;
}
