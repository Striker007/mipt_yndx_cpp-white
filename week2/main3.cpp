#include <iostream>

using namespace std;

bool IsPalindrom(string x) {
	if(x.length() == 1){
		return true;
	}

	for (unsigned int i = 0; i < x.length() / 2; ++i) {
        if(x[i] != x[x.length()-1-i]){
        	return false;
        }
	}
	return true;
}

int main23() {
	string n;
	cin >> n;

	cout << IsPalindrom(n);

	return 0;
}
