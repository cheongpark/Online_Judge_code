#include <iostream>

using namespace std;

int main() {
	int a = 0, b = 0, c = 0, result = 0;

	cin >> a >> b >> c;

	if (a == b && b == c)
		result = 10000 + a * 1000;
	else if (a == b || a == c)
		result = 1000 + a * 100;
	else if (b == c)
		result = 1000 + b * 100;
	else {
		if (a < b) {
			if (b < c)
				result = c * 100;
			else
				result = b * 100;
		}
		else {
			if (a < c)
				result = c * 100;
			else
			result = a * 100;
		}
	}
	
	cout << result;
}