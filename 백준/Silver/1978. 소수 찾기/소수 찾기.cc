#include <iostream>

using namespace std;

bool prime(int num) {
	if (num == 1) return false;
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) return false;
	}
	return true;
}

int main() {
	int N = 0, p = 0, sum = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> p;
		sum += (prime(p) == true ? 1 : 0);
	}
	cout << sum;
}