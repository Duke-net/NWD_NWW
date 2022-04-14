#include <iostream>
#include <time.h>

using namespace std;

int NWD(int a, int b) {
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else
			b -= a;
	}
	return a;
}

int main() {
	clock_t t;
	t = clock();

	int a, b;
	cout << "podaj dwie liczby: ";
	cin >> a >> b;

	cout << "NWD: " << NWD(a, b) << endl;
	cout << "NWW: " << NWD(a, b) / (a * b) << "\n\n";

	cout << clock() - t << "milisekundy";
}