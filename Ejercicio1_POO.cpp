#include <iostream>
using namespace std;

class Saludo {
public:
	void mostrar() {
		cout << "Hola mundo" << endl;
	}
};

int main() {
	Saludo s;
	s.mostrar();
	return 0;
}
