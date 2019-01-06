#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main7() {
	int n;
	cin >> n;

	vector<int> v = { };
	while (n > 0) {
		v.push_back(n % 2);
		n /= 2;
	}

    reverse(begin(v), end(v));

	for(auto num : v) {
		cout << num;
	}

	return 0;
}
