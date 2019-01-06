#include <iostream>
using namespace std;

int main3() {
	double n, a, b, x, y;
	cin >> n >> a >> b >> x >> y;

	if (n <= 0 ) {
	    return 0;
	}

	if (n > b) {
        cout << n - (n * (y / 100));
	} else if (n > a) {
        cout << n - (n * (x / 100));
	} else {
		cout << n;
	}

	return 0;
}
