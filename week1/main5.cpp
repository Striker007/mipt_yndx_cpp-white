#include <iostream>
#include <string>
using namespace std;

int main5() {
	string input;
	cin >> input;

	unsigned int i, times = 0;

	for(i = 0; i <= input.size(); i++) {
		if (input[i] == 'f') {
            times++;
            if (times >= 2) {
            	break;
            }
		}
	}

	if (times == 2) {
		cout << i;
	} else if (times == 1) {
		cout << -1;
	} else {
		cout << -2;
	}

	return 0;
}
