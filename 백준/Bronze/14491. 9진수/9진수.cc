#include <iostream>
#include <string>

using namespace std;

void radix_base(int radix, int num, string &result) {
	if (num <= 0)
		return;
	result = to_string(num % radix) + result;
	radix_base(radix, num / radix, result);
}

int main() {
	int t = 0;
	cin >> t;

	string result;
	radix_base(9, t, result);
	cout << result;
}