#include <iostream>

using namespace std;

int main() {
	int org = 0, n = 0, p = 0, c = 0, result = 0;

	cin >> org >> n;

	for (int i = 0; i < n; i++) {
		cin >> p >> c;
		result += p * c;
	}

	cout << (org == result ? "Yes" : "No");
}