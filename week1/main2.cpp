#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main2() {
	double a, b, c, discr, x1, x2;
	cin >> a >> b >> c;

	discr = b * b - 4 * a * c;

	if (a == 0) {
		if (b != 0) {
			cout << -(c / b);
		}
	} else if (discr > 0) {
		x1 = (-b + sqrt(discr)) / (2 * a);
		x2 = (-b - sqrt(discr)) / (2 * a);
		cout << x1 << " " << x2;

	} else if (discr == 0) {
		cout << (-b / (2 * a));

	} else if (c == 0) {
		cout << 0 << " " << -b;
	}

	return 0;
}
