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
	int N = 0, M = 0, first = 0, sum = 0;

	cin >> N >> M;

	for (int i = N; i <= M; i++) {
		if (prime(i) == true) {
			sum += i;
			if (first == 0) first = i;
		}
	}

	if (first == 0) cout << -1;
	else cout << sum << "\n" << first;
}