#include <iostream>
using namespace std;

bool is_even(int x) {
	return (x % 2 == 0);
}

int main4() {
	int a, b;
	cin >> a >> b;

	if (a > b && a < 1 && b > 30000) {
		return 0;
	}

	if (!is_even(a)) {
		a += 1;
	}

	int i;
	for (i = a; i <= b; i += 2) {
		cout << i << " ";
	}

	return 0;
}
