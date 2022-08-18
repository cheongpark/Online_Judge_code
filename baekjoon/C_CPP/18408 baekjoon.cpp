#include <iostream>

using namespace std;

int main() {
	int A[3] = {}, N[2] = {};

	for (int i = 0; i < 3; i++) {
		cin >> A[i];
		N[A[i] == 1 ? 0 : 1]++;
	}

	cout << (N[0] < N[1] ? 2 : 1);
}