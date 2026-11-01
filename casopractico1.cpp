// casopractico1.cpp : este programa calcula la cantidad y precio de un
//

#include <iostream>
using namespace std;

int main() {
	int cantidad;
	double precio;
	cout << "ingrese la cantidad ";
	cin >> cantidad ;
	cout << "ingrese el precio ";
	cin >> precio ;
	double total= cantidad * precio;
	if (total > 5000) {
	total = total * 0.90;
	}
	cout << "tu total es " << total << endl;
}
