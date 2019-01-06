#include <iostream>
#include <string>

using namespace std;

int main1() {
  string a, b, c;
  cin >> a >> b >> c;
  const string::size_type MAX_SIZE = 30;

  if (a.length() > MAX_SIZE || b.length() > MAX_SIZE || c.length() > MAX_SIZE) {
	  return 0;
  }

  if (a <= b && a <= c) {
    cout << a;
  } else if (b <= a && b <= c) {
    cout << b;
  } else {
    cout << c;
  }
  return 0;
}
